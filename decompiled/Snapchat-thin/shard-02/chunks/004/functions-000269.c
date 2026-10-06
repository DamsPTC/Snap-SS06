/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101c90bd4; end: 101c90bff;  */

/* WARNING: Possible PIC construction at 0x000101c90bb4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c90bb8) */

void FUN_101c90bd4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c5ede0();
  puVar1 = PTR__OBJC_CLASS___UIApplication_1126ae590;
  func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
  func_0x000107c5a9c4();
  func_0x000107c61180();
  func_0x000107c5ed90();
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
  uVar3 = 0;
  func_0x000100dfa6ec(0);
  uVar4 = uVar3;
  func_0x000100f33384();
  func_0x000107c5f9dc(puVar2,uVar3,PTR___sypN_11034f1a8 + 8,uVar4);
  func_0x000107c6142c(puVar2);
  func_0x000107c4de70(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101c90c00; end: 101c90c1b;  */

void FUN_101c90c00(long param_1,long param_2)

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



/* Entry: 101c90c1c; end: 101c9179b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c90c1c(undefined *param_1,undefined8 param_2,long param_3,ulong param_4,long param_5,
                  undefined *param_6,code *param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  long lVar15;
  undefined1 *puVar16;
  undefined8 uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  bool bVar23;
  undefined8 uVar24;
  long alStack_170 [2];
  long lStack_160;
  undefined *puStack_158;
  ulong uStack_150;
  undefined8 uStack_148;
  code *pcStack_140;
  ulong uStack_138;
  long lStack_130;
  ulong uStack_128;
  undefined *puStack_120;
  undefined8 auStack_d0 [3];
  long lStack_b8;
  undefined **ppuStack_b0;
  undefined *apuStack_a8 [3];
  long lStack_90;
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  func_0x000107c5ef14();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar15 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar20 = (long)&lStack_160 + lVar15;
  puVar16 = auStack_80;
  func_0x000107c61428(param_3 + 0x10,puVar16,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 == 0) {
    return;
  }
  puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar14 = param_1;
  }
  uStack_150 = param_8;
  pcStack_140 = param_7;
  puStack_120 = param_6;
  func_0x000107c61434(param_1);
  func_0x000107c5ef04(lVar20);
  func_0x000107c5eed8();
  (**(code **)(lVar21 + 8))(lVar20,lVar4);
  puVar8 = (undefined *)0x0;
  if (puVar16 != (undefined1 *)0x0) {
    puVar8 = param_1;
  }
  puVar1 = (undefined1 *)0xe000000000000000;
  if (puVar16 != (undefined1 *)0x0) {
    puVar1 = puVar16;
  }
  uVar19 = *(undefined8 *)(param_3 + _DAT_112e10c68);
  uVar17 = ((undefined8 *)(param_3 + _DAT_112e10c68))[1];
  uVar5 = param_4;
  lVar4 = param_5;
  FUN_101c8fe10(param_4,param_5,puVar8,puVar1);
  uVar6 = param_4;
  lVar21 = param_5;
  FUN_101c8ff08(param_4,param_5,puVar14,uVar5,lVar4);
  func_0x000107c6142c(lVar4);
  uStack_138 = param_4;
  lStack_130 = param_5;
  if (uVar6 == 0) {
    func_0x000107c6142c(puVar14);
    func_0x000107c6142c(puVar1);
  }
  else {
    uVar5 = uVar6;
    func_0x000107c5d984();
    func_0x000107c61180();
    if (uVar5 != 0) {
      uVar7 = uVar5;
      func_0x000107c5faec();
      puVar8 = PTR_PTR_1126b0cd8;
      uStack_128 = uVar7;
      func_0x000107c61168();
      func_0x000107c5fadc(uVar19);
      puVar9 = puVar8;
      func_0x000107c3ac58();
      func_0x000107c61180();
      func_0x000107c61170(uVar19);
      if (puVar9 != (undefined *)0x0) {
        func_0x000107c3ac58();
        func_0x000107c61180();
        func_0x000107c61170(uVar5);
        if (puVar8 != (undefined *)0x0) {
          puVar10 = PTR_PTR_1126cb0a0;
          func_0x000107c61168();
          func_0x000107c4419c();
          func_0x000107c61180();
          puVar11 = puVar10;
          func_0x000107c5cb4c();
          func_0x000107c61180();
          func_0x000107c61170(puVar10);
          puVar10 = puVar11;
          func_0x000107c5faec();
          uVar19 = uVar17;
          func_0x000107c61170(puVar11);
          uVar5 = uVar6;
          func_0x000100bf119c();
          if ((uVar5 & 1) != 0) {
            func_0x000107c6142c(lVar21);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(puVar14);
            func_0x000107c6142c(puVar1);
            func_0x0001000a8868(param_3 + _DAT_112e10c80,
                                *(undefined8 *)(param_3 + _DAT_112e10c80 + 0x18));
            func_0x000107c61434(uVar17);
            puVar14 = puStack_120;
            FUN_101c8d668(puStack_120);
            pcVar3 = pcStack_140;
            uVar19 = *(undefined8 *)(param_3 + _DAT_112e10c88);
            if (puVar14 == (undefined *)0x0) {
              func_0x000107c615f0(uVar19);
              pcVar3 = pcStack_140;
            }
            else {
              if (puVar14 != (undefined *)0x1) {
                apuStack_a8[0] = puVar14;
                func_0x000107c615f0(uVar19);
                func_0x000107c60614(&UNK_1106eab20,apuStack_a8,&UNK_1106eab20,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x101c9179c);
                (*pcVar3)();
              }
              uVar18 = ((undefined8 *)(param_3 + _DAT_112e10c88))[1];
              uVar24 = uVar19;
              func_0x000107c614f0(uVar19);
              func_0x000107c615f0(uVar19);
              func_0x000102d3af84(puVar10,uVar17,1,0,uVar24,uVar18);
            }
            (*pcVar3)(puVar10,uVar17);
            func_0x000107c61170(param_3);
            func_0x000107c6142c(uVar17);
            func_0x000107c615e8(uVar19);
            FUN_101c925a8(puVar10,uVar17,0,0,0,0,2);
            return;
          }
          uVar5 = uVar6;
          func_0x00010901c9ec();
          if (((uVar5 & 1) != 0) || (uVar5 = uVar6, func_0x00010901c6c4(), (int)uVar5 != 0)) {
            uVar5 = uVar6;
            func_0x00010901d7c4();
            func_0x000107c61180();
            uVar7 = uVar5;
            func_0x000107c5faec();
            puStack_158 = (undefined *)uVar19;
            pcStack_140 = (code *)uVar7;
            func_0x000107c61170(uVar5);
            func_0x000107c61170(puVar8);
            func_0x000107c61170(puVar9);
            func_0x000107c61170(uVar6);
            func_0x000107c6142c(puVar14);
            func_0x000107c6142c(puVar1);
            uVar19 = *(undefined8 *)(param_3 + _DAT_112e10c48);
            uVar24 = *(undefined8 *)(param_3 + _DAT_112e10c78);
            lVar20 = *(long *)(param_3 + _DAT_112e10c70);
            uStack_148 = ((undefined8 *)(param_3 + _DAT_112e10c88))[1];
            uStack_150 = *(undefined8 *)(param_3 + _DAT_112e10c88);
            lStack_160 = lVar20;
            FUN_101c8e79c(param_3 + _DAT_112e10c80,apuStack_a8);
            puVar14 = &UNK_110463f88;
            func_0x000107c613fc(&UNK_110463f88,0xa8,7);
            *(undefined8 *)(puVar14 + 0x10) = uVar19;
            FUN_101c8e7e0(apuStack_a8,puVar14 + 0x18);
            lVar4 = lStack_130;
            puVar9 = puStack_158;
            *(undefined **)(puVar14 + 0x40) = puStack_120;
            *(undefined8 *)(puVar14 + 0x48) = uVar24;
            *(ulong *)(puVar14 + 0x50) = uStack_128;
            *(long *)(puVar14 + 0x58) = lVar21;
            *(long *)(puVar14 + 0x60) = lVar20;
            *(undefined8 *)(puVar14 + 0x70) = uStack_148;
            *(ulong *)(puVar14 + 0x68) = uStack_150;
            *(undefined **)(puVar14 + 0x78) = puVar10;
            *(undefined8 *)(puVar14 + 0x80) = uVar17;
            *(ulong *)(puVar14 + 0x88) = uStack_138;
            *(long *)(puVar14 + 0x90) = lStack_130;
            *(code **)(puVar14 + 0x98) = pcStack_140;
            *(undefined **)(puVar14 + 0xa0) = puStack_158;
            puVar8 = &UNK_110463fb0;
            func_0x000107c613fc(&UNK_110463fb0,0x20,7);
            *(code **)(puVar8 + 0x10) = FUN_101c925f4;
            *(undefined **)(puVar8 + 0x18) = puVar14;
            func_0x000107c6157c(uVar19);
            func_0x000107c6157c(uVar24);
            func_0x000107c61434(lVar21);
            func_0x000107c6157c(lStack_160);
            func_0x000107c615f0(uStack_150);
            func_0x000107c61434(uVar17);
            func_0x000107c61434(lVar4);
            func_0x000107c61434(puVar9);
            func_0x000107c6157c(puVar14);
            *(undefined **)((long)alStack_170 + lVar15) = PTR___sytN_11034f1b0 + 8;
            uVar19 = 8;
            func_0x0001001ca524(8,0,0x74,3,0x73746361746e6f43,0xed00007472656c41,&UNK_10d9ebe38,
                                puVar8);
            FUN_101c925a8(uStack_128,lVar21,pcStack_140,puVar9,puVar10,uVar17,0);
            func_0x000107c61574(puVar14);
            func_0x000107c61170(param_3);
            func_0x000107c61574(puVar8);
            func_0x000107c61574(uVar19);
            return;
          }
          uVar5 = uVar6;
          pcStack_140 = (code *)lVar21;
          func_0x00010901d7c4();
          func_0x000107c61180();
          uVar7 = uVar5;
          func_0x000107c5faec();
          uStack_150 = uVar7;
          func_0x000107c61170(uVar5);
          func_0x000107c61170(puVar8);
          func_0x000107c61170(puVar9);
          func_0x000107c61170(uVar6);
          func_0x000107c6142c(puVar14);
          func_0x000107c6142c(puVar1);
          func_0x000107c61434(uVar17);
          uVar24 = 0;
          bVar23 = false;
          puVar14 = puStack_120;
          puStack_158 = puVar10;
          goto LAB_101c90f78;
        }
        func_0x000107c61170(uVar6);
        func_0x000107c61170(puVar9);
        func_0x000107c6142c(lVar21);
        func_0x000107c6142c(puVar14);
        func_0x000107c6142c(puVar1);
        goto LAB_101c90f68;
      }
      func_0x000107c61170(uVar6);
      func_0x000107c6142c(lVar21);
      uVar6 = uVar5;
    }
    func_0x000107c61170(uVar6);
    func_0x000107c6142c(puVar14);
    func_0x000107c6142c(puVar1);
  }
LAB_101c90f68:
  uVar17 = 0;
  puVar14 = (undefined *)0x0;
  uStack_128 = 0;
  pcStack_140 = (code *)0x0;
  uStack_150 = 0;
  puStack_158 = (undefined *)0x0;
  uVar19 = 0;
  bVar23 = true;
  uVar24 = 2;
  puVar10 = puStack_120;
LAB_101c90f78:
  uVar18 = *(undefined8 *)(param_3 + _DAT_112e10c88);
  uVar2 = ((undefined8 *)(param_3 + _DAT_112e10c88))[1];
  uVar12 = uVar18;
  func_0x000107c614f0(uVar18);
  func_0x000107c615f0(uVar18);
  func_0x000102d3af84(puVar10,uVar17,puVar14,uVar24,uVar12,uVar2);
  func_0x000107c615e8(uVar18);
  FUN_101c92590(puVar10,uVar17,puVar14,uVar24);
  lVar4 = lStack_130;
  uVar5 = uStack_138;
  if (bVar23) {
    uVar6 = uStack_138;
    lVar21 = lStack_130;
    FUN_101c926dc(uStack_138);
    lVar20 = *(long *)(param_3 + _DAT_112e10c50);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar14 = puStack_120;
    if (lVar20 != 0) {
      lVar13 = lVar20;
      func_0x000107c44934();
      func_0x000107c615e8(lVar20);
      if (((int)lVar13 != 0) && (lVar21 == 0)) {
        uVar19 = *(undefined8 *)(param_3 + _DAT_112e10c48);
        FUN_101c8e79c(param_3 + _DAT_112e10c80,apuStack_a8);
        puVar8 = &UNK_110463fd8;
        func_0x000107c613fc(&UNK_110463fd8,0x48,7);
        *(undefined8 *)(puVar8 + 0x10) = uVar19;
        FUN_101c8e7e0(apuStack_a8,puVar8 + 0x18);
        *(undefined **)(puVar8 + 0x40) = puVar14;
        puVar14 = &UNK_110464000;
        func_0x000107c613fc(&UNK_110464000,0x20,7);
        *(undefined8 *)(puVar14 + 0x10) = 0x101c92b6c;
        *(undefined **)(puVar14 + 0x18) = puVar8;
        func_0x000107c6157c(uVar19);
        func_0x000107c6157c(puVar8);
        *(undefined **)((long)alStack_170 + lVar15) = PTR___sytN_11034f1b0 + 8;
        uVar19 = 8;
        func_0x0001001ca524(8,0,0x74,3,0x73746361746e6f43,0xed00007472656c41,&UNK_10d9ebe40,puVar14)
        ;
        func_0x000107c61170(param_3);
        func_0x000107c61574(puVar8);
        func_0x000107c61574(puVar14);
        func_0x000107c61574(uVar19);
        return;
      }
    }
    FUN_101c91848(uVar5,lVar4,uVar6,lVar21,puVar14);
    func_0x000107c61170(param_3);
    func_0x000107c6142c(lVar21);
  }
  else {
    func_0x000107c61434(uVar19);
    puVar14 = puStack_120;
    if ((int)puStack_120 == 0) {
      uVar18 = *(undefined8 *)(param_3 + _DAT_112e10c48);
      FUN_101c8e79c(param_3 + _DAT_112e10c80,apuStack_a8);
      func_0x0001000c6518(apuStack_a8,lStack_90);
      lStack_160 = lVar20;
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_90 + -8) + 0x40));
      puVar22 = (undefined8 *)(lVar20 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12 + 0x10))(puVar22);
      uVar24 = *puVar22;
      lVar15 = 0;
      func_0x00010045b414();
      ppuStack_b0 = &PTR_DAT_110463a98;
      lVar4 = 0;
      auStack_d0[0] = uVar24;
      lStack_b8 = lVar15;
      func_0x000101c8f34c();
      func_0x000107c61534();
      func_0x0001000c6518(auStack_d0,lVar15);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar15 + -8) + 0x40));
      puVar22 = (undefined8 *)((long)puVar22 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
      (**(code **)(extraout_x12_00 + 0x10))(puVar22);
      uVar24 = *puVar22;
      *(long *)(lVar4 + 0x30) = lVar15;
      *(undefined ***)(lVar4 + 0x38) = &PTR_DAT_110463a98;
      *(undefined8 *)(lVar4 + 0x18) = uVar24;
      *(undefined8 *)(lVar4 + 0x10) = uVar18;
      *(undefined **)(lVar4 + 0x40) = puVar14;
      func_0x000107c6157c(uVar18);
      func_0x0001000834e4(auStack_d0);
      func_0x0001000834e4(apuStack_a8);
      uVar5 = uStack_150;
      FUN_101c8f0fc(uStack_138,lStack_130,uStack_150,uVar19);
      func_0x000107c61574(uVar18);
      func_0x000107c61588(lVar4);
      func_0x0001000834e4((undefined8 *)(lVar4 + 0x18));
      FUN_101c925a8(uStack_128,pcStack_140,uVar5,uVar19,puStack_158,uVar17,1);
      func_0x000107c6142c(uVar19);
      func_0x000107c61170(param_3);
    }
    else {
      FUN_101c925a8(uStack_128,pcStack_140,uStack_150,uVar19,puStack_158,uVar17,1);
      func_0x000107c6142c(uVar19);
      func_0x000107c61170(param_3);
    }
  }
  return;
}



/* Entry: 101c9179c; end: 101c91847; -[_TtC20ContactsServicesImpl20ContactsServicesImpl resolvePhoneNumberAndActionWithPhoneNumber:connectionType:onSuccess:] */

void FUN_101c9179c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_110463f60;
  func_0x000107c613fc(&UNK_110463f60,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  func_0x000101c9046c(param_3,param_2,param_4,0x101c92518,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101c91848; end: 101c919ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c91848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_78 [40];
  
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112e10c48);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e10c60);
  FUN_101c8e79c(unaff_x20 + _DAT_112e10c80,auStack_78);
  puVar1 = &UNK_110464028;
  func_0x000107c613fc(&UNK_110464028,0x70,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = uVar3;
  FUN_101c8e7e0(auStack_78,puVar1 + 0x20);
  *(undefined8 *)(puVar1 + 0x48) = param_5;
  *(undefined8 *)(puVar1 + 0x50) = param_1;
  *(undefined8 *)(puVar1 + 0x58) = param_2;
  *(undefined8 *)(puVar1 + 0x60) = param_3;
  *(undefined8 *)(puVar1 + 0x68) = param_4;
  puVar2 = &UNK_110464050;
  func_0x000107c613fc(&UNK_110464050,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_101c92a6c;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  func_0x000107c61434(param_4);
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar3);
  func_0x000107c61434(param_2);
  uVar3 = 8;
  func_0x0001001ca524(8,0,0x74,3,0x73746361746e6f43,0xed00007472656c41,&UNK_10d9ebe48,puVar2,
                      PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar3);
  return;
}



/* Entry: 101c919ac; end: 101c91a3b;  */

void FUN_101c919ac(undefined8 param_1,undefined1 *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  
  puVar1 = PTR__OBJC_CLASS___CNContactFormatter_1126b8498;
  puVar4 = param_2;
  func_0x000107c61168();
  func_0x000107c5c1b4();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar3 = (undefined *)0x0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar3 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
  }
  uVar2 = param_3[1];
  *param_3 = puVar3;
  param_3[1] = puVar4;
  func_0x000107c6142c(uVar2);
  *param_2 = 1;
  return;
}



/* Entry: 101c91a3c; end: 101c91a7b;  */

void FUN_101c91a3c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c61174(param_2);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_2);
  return;
}



/* Entry: 101c91a7c; end: 101c91a93;  */

void FUN_101c91a7c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c91a94,0,0);
  return;
}



/* Entry: 101c91a94; end: 101c91acb;  */

void FUN_101c91a94(ulong param_1)

{
  long unaff_x22;
  
  func_0x000107c5fd5c();
  if ((param_1 & 1) == 0) {
    (**(code **)(unaff_x22 + 0x10))();
  }
                    /* WARNING: Could not recover jumptable at 0x000101c91ac8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101c91acc; end: 101c91cf7;  */

void FUN_101c91acc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 auStack_130 [15];
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  
  uVar5 = param_2;
  auStack_130[0] = param_5;
  auStack_130[1] = param_6;
  auStack_130[2] = param_7;
  auStack_130[3] = param_8;
  func_0x0001000d224c(alStack_90);
  if (alStack_90[0] != 0) {
    lVar1 = alStack_90[0];
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(alStack_90[0]);
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c5faec();
      func_0x000107c61170(lVar1);
      alStack_90[0] = lVar2;
      goto LAB_101c91b70;
    }
    alStack_90[0] = 0;
  }
  uVar5 = 0;
LAB_101c91b70:
  FUN_101c8e79c(param_3,alStack_90);
  func_0x0001000c6518(alStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_78 + -8) + 0x40));
  puVar4 = (undefined8 *)((long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar4);
  uVar3 = *puVar4;
  lVar1 = 0;
  func_0x00010045b414();
  ppuStack_98 = &PTR_DAT_110463a98;
  lVar2 = 0;
  auStack_b8[0] = uVar3;
  lStack_a0 = lVar1;
  func_0x000101c8e46c();
  func_0x000107c61534();
  func_0x0001000c6518(auStack_b8,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = (undefined8 *)((long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar4);
  uVar3 = *puVar4;
  *(long *)(lVar2 + 0x30) = lVar1;
  *(undefined ***)(lVar2 + 0x38) = &PTR_DAT_110463a98;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x40) = param_4;
  *(long *)(lVar2 + 0x48) = alStack_90[0];
  *(undefined8 *)(lVar2 + 0x50) = uVar5;
  func_0x000107c6157c(param_2);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  FUN_101c8d7f8(auStack_130[0],auStack_130[1],auStack_130[2],auStack_130[3]);
  func_0x000107c61574(param_2);
  func_0x000107c61588(lVar2);
  func_0x0001000834e4((undefined8 *)(lVar2 + 0x18));
  func_0x000107c6142c(uVar5);
  return;
}



/* Entry: 101c91cf8; end: 101c91e5f;  */

void FUN_101c91cf8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 auStack_e0 [10];
  undefined8 auStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  FUN_101c8e79c(param_2,auStack_68);
  func_0x0001000c6518(auStack_68,lStack_50);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_50 + -8) + 0x40));
  puVar4 = (undefined8 *)((long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar4);
  uVar3 = *puVar4;
  lVar1 = 0;
  func_0x00010045b414();
  ppuStack_70 = &PTR_DAT_110463a98;
  lVar2 = 0;
  auStack_90[0] = uVar3;
  lStack_78 = lVar1;
  func_0x000101c8f928();
  func_0x000107c61534();
  func_0x0001000c6518(auStack_90,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar4 = (undefined8 *)((long)puVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar4);
  uVar3 = *puVar4;
  *(long *)(lVar2 + 0x30) = lVar1;
  *(undefined ***)(lVar2 + 0x38) = &PTR_DAT_110463a98;
  *(undefined8 *)(lVar2 + 0x18) = uVar3;
  *(undefined8 *)(lVar2 + 0x10) = param_1;
  *(undefined8 *)(lVar2 + 0x40) = param_3;
  func_0x000107c6157c(param_1);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  FUN_101c8f59c();
  func_0x000107c61574(param_1);
  func_0x000107c61588(lVar2);
  func_0x0001000834e4((undefined8 *)(lVar2 + 0x18));
  return;
}



/* Entry: 101c91e60; end: 101c91e6f;  */

void FUN_101c91e60(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_e0 [10];
  undefined8 auStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  undefined1 auStack_68 [24];
  long lStack_50;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  FUN_101c8e79c(unaff_x20 + 0x18,auStack_68);
  func_0x0001000c6518(auStack_68,lStack_50);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_50 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)auStack_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  uVar5 = *puVar6;
  lVar1 = 0;
  func_0x00010045b414();
  ppuStack_70 = &PTR_DAT_110463a98;
  lVar2 = 0;
  auStack_90[0] = uVar5;
  lStack_78 = lVar1;
  func_0x000101c8f928();
  func_0x000107c61534();
  func_0x0001000c6518(auStack_90,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar5 = *puVar6;
  *(long *)(lVar2 + 0x30) = lVar1;
  *(undefined ***)(lVar2 + 0x38) = &PTR_DAT_110463a98;
  *(undefined8 *)(lVar2 + 0x18) = uVar5;
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x40) = uVar4;
  func_0x000107c6157c(uVar3);
  func_0x0001000834e4(auStack_90);
  func_0x0001000834e4(auStack_68);
  FUN_101c8f59c();
  func_0x000107c61574(uVar3);
  func_0x000107c61588(lVar2);
  func_0x0001000834e4((undefined8 *)(lVar2 + 0x18));
  return;
}



/* Entry: 101c91e70; end: 101c91ed3;  */

void FUN_101c91e70(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c92b70;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c91a94,0,0);
  return;
}



/* Entry: 101c91ed4; end: 101c91f03;  */

void FUN_101c91ed4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_101c90c1c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 101c91f04; end: 101c91f0b;  */

void FUN_101c91f04(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  long extraout_x8;
  long extraout_x8_00;
  long lVar13;
  long extraout_x8_01;
  long unaff_x20;
  long lVar14;
  undefined1 *puVar15;
  long lVar16;
  undefined1 auStack_80 [8];
  long lStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar7 = *(undefined **)(unaff_x20 + 0x18);
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar15 = auStack_80 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5ede0();
  lVar16 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar16 + 0x40));
  lVar13 = (long)puVar15 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  lStack_78 = lVar13;
  func_0x000107c5eb9c();
  lVar14 = *(long *)(lVar4 + -8);
  lVar2 = lVar4;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar14 + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lStack_70 = lVar1;
  puStack_68 = puVar7;
  func_0x000107c5eb78(lVar13);
  func_0x000100e8b654();
  lVar5 = lVar13;
  puVar8 = PTR___sSSN_11034da80;
  func_0x000107c60200(lVar13,PTR___sSSN_11034da80,lVar2);
  (**(code **)(lVar14 + 8))(lVar13,lVar4);
  if (puVar8 == (undefined *)0x0) {
    func_0x000107c61434(puVar7);
    lVar5 = lVar1;
    puVar8 = puVar7;
  }
  lStack_70 = 0x2f2f3a6c6574;
  puStack_68 = (undefined *)0xe600000000000000;
  func_0x000107c5fb78(lVar5,puVar8);
  puVar7 = puStack_68;
  func_0x000107c5edd0(puVar15,lStack_70,puStack_68);
  func_0x000107c6142c(puVar8);
  func_0x000107c6142c(puVar7);
  puVar6 = puVar15;
  (**(code **)(lVar16 + 0x30))(puVar15,1,lVar3);
  lVar2 = lStack_78;
  if ((int)puVar6 == 1) {
    func_0x0001000293e4(puVar15);
  }
  else {
    (**(code **)(lVar16 + 0x20))(lStack_78,puVar15,lVar3);
    puVar7 = PTR__OBJC_CLASS___UIApplication_1126ae590;
    func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
    func_0x000107c5a9c4();
    func_0x000107c61180();
    puVar8 = puVar7;
    func_0x000107c5ed90();
    puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
    uVar10 = 0;
    func_0x000100dfa6ec(0);
    uVar11 = uVar10;
    func_0x000100f33384();
    puVar12 = puVar9;
    func_0x000107c5f9dc(puVar9,uVar10,PTR___sypN_11034f1a8 + 8,uVar11);
    func_0x000107c6142c(puVar9);
    func_0x000107c4de70(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar8);
    func_0x000107c61170(puVar12);
    (**(code **)(lVar16 + 8))(lVar2,lVar3);
  }
  return;
}



/* Entry: 101c91f0c; end: 101c923fb;  */

void FUN_101c91f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 uVar4;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 auStack_150 [4];
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  undefined1 auStack_90 [24];
  long lStack_78;
  
  uStack_118 = param_13;
  uStack_120 = param_14;
  uStack_128 = param_15;
  uStack_130 = param_12;
  auStack_150[1] = param_4;
  auStack_150[2] = param_6;
  auStack_150[3] = param_1;
  FUN_101c8e79c(param_2,auStack_90);
  puVar1 = &UNK_1104640f0;
  func_0x000107c613fc(&UNK_1104640f0,0x58,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_7;
  *(undefined8 *)(puVar1 + 0x38) = param_8;
  *(undefined8 *)(puVar1 + 0x40) = param_9;
  *(undefined8 *)(puVar1 + 0x48) = param_10;
  *(undefined8 *)(puVar1 + 0x50) = param_11;
  func_0x0001000c6518(auStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_78 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)auStack_150 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  uVar5 = *puVar6;
  lVar2 = 0;
  func_0x00010045b414();
  ppuStack_98 = &PTR_DAT_110463a98;
  lVar3 = 0;
  auStack_b8[0] = uVar5;
  lStack_a0 = lVar2;
  func_0x000101c8ec18();
  func_0x000107c61534();
  func_0x0001000c6518(auStack_b8,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar5 = auStack_150[3];
  uVar4 = *puVar6;
  *(long *)(lVar3 + 0x30) = lVar2;
  *(undefined ***)(lVar3 + 0x38) = &PTR_DAT_110463a98;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  *(undefined8 *)(lVar3 + 0x10) = auStack_150[3];
  *(undefined8 *)(lVar3 + 0x40) = param_3;
  *(code **)(lVar3 + 0x48) = FUN_101c92b10;
  *(undefined **)(lVar3 + 0x50) = puVar1;
  func_0x000107c6157c(auStack_150[1]);
  func_0x000107c61434(auStack_150[2]);
  func_0x000107c6157c(param_7);
  func_0x000107c615f0(param_8);
  func_0x000107c61434(param_11);
  func_0x000107c6157c(uVar5);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(auStack_90);
  FUN_101c8e914(uStack_130,uStack_118,uStack_120,uStack_128);
  func_0x000107c61574(uVar5);
  func_0x000107c61588(lVar3);
  func_0x0001000834e4((undefined8 *)(lVar3 + 0x18));
  func_0x000107c61574(puVar1);
  return;
}



/* Entry: 101c923fc; end: 101c9245b; -[_TtC20ContactsServicesImpl20ContactsServicesImpl init] */

void FUN_101c923fc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContactsServicesImpl.ContactsServicesImpl",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c92428);
  (*pcVar1)();
}



/* Entry: 101c9245c; end: 101c9258f; -[_TtC20ContactsServicesImpl20ContactsServicesImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c924fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c92500) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9245c(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e10c48));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e10c50));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e10c58));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e10c60));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e10c68 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e10c70));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112e10c78));
  func_0x0001000834e4(param_1 + _DAT_112e10c80);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112e10c88));
  return;
}



/* Entry: 101c92590; end: 101c925a7;  */

void FUN_101c92590(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  if (param_4 < 2) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 101c925a8; end: 101c925f3;  */

/* WARNING: Possible PIC construction at 0x000101c925cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c925d0) */

void FUN_101c925a8(undefined8 param_1,undefined8 param_2)

{
  byte in_w6;
  
  if ((1 < in_w6) && (in_w6 != 2)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c925f4; end: 101c9263b;  */

void FUN_101c925f4(void)

{
  long unaff_x20;
  
  FUN_101c91f0c(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x40)
                ,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x80),
                *(undefined8 *)(unaff_x20 + 0x88),*(undefined8 *)(unaff_x20 + 0x90),
                *(undefined8 *)(unaff_x20 + 0x98),*(undefined8 *)(unaff_x20 + 0xa0));
  return;
}



/* Entry: 101c9263c; end: 101c9269f;  */

void FUN_101c9263c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101c926a0;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c91a94,0,0);
  return;
}



/* Entry: 101c926a0; end: 101c926db;  */

void FUN_101c926a0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101c926d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101c926dc; end: 101c929db;  */

undefined1  [16] FUN_101c926dc(long param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined1 auVar14 [16];
  undefined *puStack_98;
  undefined8 uStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  code *pcStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  
  lStack_58 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar3 = param_1;
  FUN_101c8e4e8();
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x18) = 3;
  *(undefined8 *)(lVar3 + 0x10) = 1;
  puVar4 = PTR__OBJC_CLASS___CNContactFormatter_1126b8498;
  func_0x000107c61168();
  func_0x000107c41804();
  func_0x000107c61180();
  *(undefined **)(lVar3 + 0x20) = puVar4;
  puVar5 = PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0;
  func_0x000107c610f8(PTR__OBJC_CLASS___CNContactFetchRequest_1126b4ad0);
  uVar13 = 0x112e10cc0;
  func_0x0001000285a8(0x112e10cc0,&UNK_10d9ebe50);
  lVar6 = lVar3;
  func_0x000107c5fc48(lVar3,uVar13);
  func_0x000107c61574(lVar3);
  func_0x000107c47088(puVar5);
  func_0x000107c61170(lVar6);
  puVar4 = PTR__OBJC_CLASS___CNContact_1126b4ad8;
  func_0x000107c61168(PTR__OBJC_CLASS___CNContact_1126b4ad8);
  puVar7 = PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0;
  func_0x000107c610f8(PTR__OBJC_CLASS___CNPhoneNumber_1126b4ae0);
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c48afc(puVar7);
  func_0x000107c61170(param_1);
  func_0x000107c4ec50(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar7);
  func_0x000107c57664(puVar5);
  func_0x000107c61170(puVar4);
  uStack_68 = 0;
  uStack_60 = 0;
  puVar8 = PTR__OBJC_CLASS___CNContactStore_1126b1900;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar4 = &UNK_110464078;
  func_0x000107c613fc(&UNK_110464078,0x18,7);
  *(undefined8 **)(puVar4 + 0x10) = &uStack_68;
  puVar7 = &UNK_1104640a0;
  func_0x000107c613fc(&UNK_1104640a0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_101c92ae8;
  *(undefined **)(puVar7 + 0x18) = puVar4;
  pcStack_78 = FUN_101c92af0;
  puStack_98 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_90 = 0x42000000;
  pcStack_88 = FUN_101c91a3c;
  puStack_80 = &UNK_1104640b8;
  ppuVar9 = &puStack_98;
  puStack_70 = puVar7;
  func_0x000107c60bc4(ppuVar9);
  puVar12 = puStack_70;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar12);
  puStack_98 = (undefined *)0x0;
  puVar10 = puVar8;
  func_0x000107c429b8();
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c61170(puVar8);
  puVar12 = puStack_98;
  puVar8 = puStack_98;
  func_0x000107c61174(puStack_98);
  puVar11 = puVar7;
  func_0x000107c61544(puVar7,"",0x57,0xda,0x43,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar11 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c929d8);
    (*pcVar2)();
  }
  if ((int)puVar10 == 0) {
    func_0x000107c5ed30(puVar12);
    func_0x000107c61170(puVar8);
    func_0x000107c61654();
    func_0x000107c61170(puVar5);
    func_0x000107c614ac(puVar12);
  }
  else {
    func_0x000107c61170(puVar5);
  }
  auVar1._8_8_ = uStack_60;
  auVar1._0_8_ = uStack_68;
  func_0x000107c61574(puVar4);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_58) {
    return auVar1;
  }
  func_0x000107c60e78();
  func_0x000107c61574(*(undefined8 *)(puVar4 + 0x10));
  func_0x0001000834e4(puVar4 + 0x18);
  uVar13 = 0x48;
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)(puVar4,0x48,7);
  auVar14._8_8_ = uVar13;
  auVar14._0_8_ = puVar4;
  return auVar14;
}



/* Entry: 101c929dc; end: 101c92a07;  */

void FUN_101c929dc(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x0001000834e4(unaff_x20 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101c92a08; end: 101c92a6b;  */

void FUN_101c92a08(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c92b74;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c91a94,0,0);
  return;
}



/* Entry: 101c92a6c; end: 101c92a83;  */

void FUN_101c92a6c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 uVar5;
  undefined8 *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined8 auStack_130 [15];
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  auStack_130[0] = *(undefined8 *)(unaff_x20 + 0x50);
  auStack_130[1] = *(undefined8 *)(unaff_x20 + 0x58);
  auStack_130[2] = *(undefined8 *)(unaff_x20 + 0x60);
  auStack_130[3] = *(undefined8 *)(unaff_x20 + 0x68);
  uVar7 = uVar2;
  func_0x0001000d224c(alStack_90,*(undefined8 *)(unaff_x20 + 0x10));
  if (alStack_90[0] != 0) {
    lVar3 = alStack_90[0];
    func_0x000107c41050();
    func_0x000107c61180();
    func_0x000107c61170(alStack_90[0]);
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c5faec();
      func_0x000107c61170(lVar3);
      alStack_90[0] = lVar4;
      goto LAB_101c91b70;
    }
    alStack_90[0] = 0;
  }
  uVar7 = 0;
LAB_101c91b70:
  FUN_101c8e79c(unaff_x20 + 0x20,alStack_90);
  func_0x0001000c6518(alStack_90,lStack_78);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lStack_78 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar6);
  uVar5 = *puVar6;
  lVar3 = 0;
  func_0x00010045b414();
  ppuStack_98 = &PTR_DAT_110463a98;
  lVar4 = 0;
  auStack_b8[0] = uVar5;
  lStack_a0 = lVar3;
  func_0x000101c8e46c();
  func_0x000107c61534();
  func_0x0001000c6518(auStack_b8,lVar3);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  puVar6 = (undefined8 *)((long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12_00 + 0x10))(puVar6);
  uVar5 = *puVar6;
  *(long *)(lVar4 + 0x30) = lVar3;
  *(undefined ***)(lVar4 + 0x38) = &PTR_DAT_110463a98;
  *(undefined8 *)(lVar4 + 0x18) = uVar5;
  *(undefined8 *)(lVar4 + 0x10) = uVar2;
  *(undefined8 *)(lVar4 + 0x40) = uVar1;
  *(long *)(lVar4 + 0x48) = alStack_90[0];
  *(undefined8 *)(lVar4 + 0x50) = uVar7;
  func_0x000107c6157c(uVar2);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  FUN_101c8d7f8(auStack_130[0],auStack_130[1],auStack_130[2],auStack_130[3]);
  func_0x000107c61574(uVar2);
  func_0x000107c61588(lVar4);
  func_0x0001000834e4((undefined8 *)(lVar4 + 0x18));
  func_0x000107c6142c(uVar7);
  return;
}



/* Entry: 101c92a84; end: 101c92ae7;  */

void FUN_101c92a84(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101c92b78;
  plVar3[2] = lVar1;
  plVar3[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101c91a94,0,0);
  return;
}



/* Entry: 101c92ae8; end: 101c92aef;  */

void FUN_101c92ae8(undefined8 param_1,undefined1 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  undefined *puVar4;
  undefined1 *puVar5;
  
  puVar3 = *(undefined8 **)(unaff_x20 + 0x10);
  puVar1 = PTR__OBJC_CLASS___CNContactFormatter_1126b8498;
  puVar5 = param_2;
  func_0x000107c61168();
  func_0x000107c5c1b4();
  func_0x000107c61180();
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x000107c5faec();
    func_0x000107c61170(puVar1);
  }
  uVar2 = puVar3[1];
  *puVar3 = puVar4;
  puVar3[1] = puVar5;
  func_0x000107c6142c(uVar2);
  *param_2 = 1;
  return;
}



/* Entry: 101c92af0; end: 101c92b0f;  */

void FUN_101c92af0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101c92b10; end: 101c92b43;  */

void FUN_101c92b10(void)

{
  long unaff_x20;
  
  func_0x000101c9217c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                      *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101c92b44; end: 101c92b7b;  */

void FUN_101c92b44(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_68;
  
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar5 = PTR_PTR_1126afde0;
  func_0x000107c61168(PTR_PTR_1126afde0);
  if ((param_1 & 1) == 0) {
    puVar6 = puVar5;
    func_0x000101c92edc();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
    func_0x000107c409d8(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61174(puVar5);
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c5c2e0(lStack_68);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lStack_68);
    }
  }
  else {
    puVar6 = puVar5;
    FUN_101c92e10();
    func_0x000107c5fadc();
    func_0x000107c6142c(uVar8);
    func_0x000107c40930(puVar5);
    func_0x000107c61180();
    func_0x000107c61170(puVar6);
    func_0x000107c61174(puVar5);
    func_0x0001000d224c(&lStack_68);
    if (lStack_68 == 0) {
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
    }
    else {
      func_0x000107c5c2e0(lStack_68);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar5);
      func_0x000107c615e8(lStack_68);
    }
    func_0x000107c614f0(uVar7);
    func_0x000102d3af84(uVar3,uVar2,uVar4,0,uVar7,uVar1);
  }
  return;
}



/* Entry: 101c92b7c; end: 101c92d1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101c92b7c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,long param_9
                  )

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = 0x68;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = param_7;
  uVar2 = *(undefined8 *)(param_1 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c5faec();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x48) = uVar1;
  uVar2 = ((undefined8 *)(param_8 + _DAT_112f0f668))[1];
  uVar3 = *(undefined8 *)(param_8 + _DAT_112f0f668);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(param_8);
  *(undefined8 *)(unaff_x20 + 0x58) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x50) = uVar3;
  uVar3 = *(undefined8 *)(param_9 + _DAT_112ff8ac8);
  func_0x000107c615f0(uVar3);
  func_0x000107c61170(param_9);
  *(undefined8 *)(unaff_x20 + 0x60) = uVar3;
  return unaff_x20;
}



/* Entry: 101c92d1c; end: 101c92deb;  */

/* WARNING: Possible PIC construction at 0x000101c92d60: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c92d64) */

void FUN_101c92d1c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Entry: 101c92dec; end: 101c92e0f;  */

void FUN_101c92dec(undefined8 *param_1,undefined8 param_2)

{
  func_0x00010045ab08();
  *param_1 = param_2;
  return;
}



/* Entry: 101c92e10; end: 101c9347b;  */

undefined1  [16] FUN_101c92e10(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffed;
  func_0x000107c5fadc(0xd000000000000013,0x800000010f0082f0);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f008130);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c92edc);
  (*pcVar1)();
}



/* Entry: 101c9347c; end: 101c9348f;  */

undefined1  [16] FUN_101c9347c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x6c65636e6163;
  func_0x000107c5fadc(0x6c65636e6163,0xe600000000000000);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f008130);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c936fc);
  (*pcVar1)();
}



/* Entry: 101c93490; end: 101c93627;  */

undefined1  [16] FUN_101c93490(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe4;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f008190);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f008130);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c9355c);
  (*pcVar1)();
}



/* Entry: 101c93628; end: 101c9364b;  */

undefined1  [16] FUN_101c93628(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x656464615f746f6e;
  func_0x000107c5fadc(0x656464615f746f6e,0xef656c7469745f64);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f008130);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c936fc);
  (*pcVar1)();
}



/* Entry: 101c9364c; end: 101c93fbb;  */

undefined1  [16] FUN_101c9364c(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010f008130);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c936fc);
  (*pcVar1)();
}



/* Entry: 101c93fbc; end: 101c9403b; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl callPageViewWillAppearTimeout] */

double FUN_101c93fbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  float fVar3;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000002a;
  func_0x000107c5fadc(0xd00000000000002a,0x800000010f0085e0);
  fVar3 = 2.0;
  func_0x000107c436e4(0x40000000,uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return (double)fVar3;
}



/* Entry: 101c9403c; end: 101c940b3; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl isSuperResolutionEnabled] */

undefined8 FUN_101c9403c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0085c0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c940b4; end: 101c9412b; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl isCallLogBadgingEnabled] */

undefined8 FUN_101c940b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0085a0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c9412c; end: 101c9415f; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl unknownSnapchatterMode] */

undefined8 FUN_101c9412c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000107c6157c();
  FUN_101c94160();
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 101c94160; end: 101c9434b;  */

undefined4 FUN_101c94160(void)

{
  undefined4 uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  
  uVar7 = 0x64656c6261736964;
  lVar6 = *(long *)(unaff_x20 + 0x10);
  uVar2 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f008540);
  lVar5 = -0x1800000000000000;
  uVar4 = uVar7;
  func_0x000107c5fadc(0x64656c6261736964);
  func_0x000107c5c1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar4);
  lVar3 = lVar6;
  func_0x000107c5faec();
  func_0x000107c61170(lVar6);
  if ((lVar3 == 0x64656c6261736964 && lVar5 == -0x1800000000000000) ||
     (func_0x000107c605b8(0x64656c6261736964,0xe800000000000000,lVar3,lVar5,0), (uVar7 & 1) != 0)) {
    func_0x000107c6142c(lVar5);
    uVar1 = 0;
  }
  else {
    uVar4 = 0xd000000000000017;
    if ((lVar3 == -0x2fffffffffffffe9 && lVar5 == -0x7ffffffef0ff7aa0) ||
       (func_0x000107c605b8(0xd000000000000017,0x800000010f008560,lVar3,lVar5,0), (uVar4 & 1) != 0))
    {
      func_0x000107c6142c(lVar5);
      uVar1 = 1;
    }
    else {
      if ((lVar3 != -0x2fffffffffffffef) || (lVar5 != -0x7ffffffef0ff7a80)) {
        uVar4 = 0xd000000000000011;
        func_0x000107c605b8(0xd000000000000011,0x800000010f008580,lVar3,lVar5,0);
        if ((uVar4 & 1) == 0) {
          uVar4 = 0x64656c62616e65;
          if ((lVar3 == 0x64656c62616e65) && (lVar5 == -0x1900000000000000)) {
            func_0x000107c6142c(0xe700000000000000);
            return 3;
          }
          func_0x000107c605b8(0x64656c62616e65,0xe700000000000000,lVar3,lVar5,0);
          func_0x000107c6142c(lVar5);
          if ((uVar4 & 1) != 0) {
            return 3;
          }
          return 0;
        }
      }
      func_0x000107c6142c(lVar5);
      uVar1 = 2;
    }
  }
  return uVar1;
}



/* Entry: 101c9434c; end: 101c943c3; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl shouldUseScopedValdiRuntime] */

undefined8 FUN_101c9434c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000028;
  func_0x000107c5fadc(0xd000000000000028,0x800000010f008510);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c943c4; end: 101c9443b; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl shouldResetViewfinderOnAppBackground] */

undefined8 FUN_101c943c4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000026;
  func_0x000107c5fadc(0xd000000000000026,0x800000010f0084e0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c9443c; end: 101c944b3; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl isHangoutSendLinkEnabled] */

undefined8 FUN_101c9443c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010f0084c0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c944b4; end: 101c9452b; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl isGamesInCallEnabled] */

undefined8 FUN_101c944b4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000018;
  func_0x000107c5fadc(0xd000000000000018,0x800000010f0084a0);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c9452c; end: 101c945a3; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl localTileLensIconMode] */

long FUN_101c9452c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010f008480);
  func_0x000107c4980c(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return (long)(int)uVar2;
}



/* Entry: 101c945a4; end: 101c9461b; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl isLensCarouselAlwaysOnEnabled] */

undefined8 FUN_101c945a4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd000000000000023;
  func_0x000107c5fadc(0xd000000000000023,0x800000010f008450);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c9461c; end: 101c94693; -[_TtC22TalkConfigServicesImpl18CallPageConfigImpl isLensExplorerActionBarButtonEnabled] */

undefined8 FUN_101c9461c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c6157c();
  uVar1 = 0xd00000000000002b;
  func_0x000107c5fadc(0xd00000000000002b,0x800000010f008420);
  func_0x000107c3ebd4(uVar2);
  func_0x000107c61574(param_1);
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101c94694; end: 101c946b7;  */

void FUN_101c94694(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c946b8; end: 101c9478f;  */

void FUN_101c946b8(undefined1 *param_1,undefined1 param_2)

{
  undefined8 uVar1;
  
  uVar1 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f008630);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar1);
  *param_1 = param_2;
  return;
}



/* Entry: 101c94790; end: 101c947cf; -[_TtC22TalkConfigServicesImpl33DefaultCommunicationAppConfigImpl isDefaultMessagingEnabled] */

undefined1 FUN_101c94790(undefined8 param_1)

{
  undefined1 uStack_21;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_21);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 101c947d0; end: 101c9480f; -[_TtC22TalkConfigServicesImpl33DefaultCommunicationAppConfigImpl isDefaultCallingEnabled] */

undefined1 FUN_101c947d0(undefined8 param_1)

{
  undefined1 uStack_21;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&uStack_21);
  func_0x000107c61574(param_1);
  return uStack_21;
}



/* Entry: 101c94810; end: 101c94877; -[_TtC22TalkConfigServicesImpl33DefaultCommunicationAppConfigImpl isDefaultAppsSettingsEnabled] */

undefined1 FUN_101c94810(undefined8 param_1)

{
  undefined1 uStack_22;
  char cStack_21;
  
  func_0x000107c6157c();
  func_0x0001000d224c(&cStack_21);
  if (cStack_21 == '\x01') {
    func_0x000107c61574(param_1);
    uStack_22 = 1;
  }
  else {
    func_0x0001000d224c(&uStack_22);
    func_0x000107c61574(param_1);
  }
  return uStack_22;
}



/* Entry: 101c94878; end: 101c948a3;  */

void FUN_101c94878(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c948a4; end: 101c948ef;  */

undefined8 FUN_101c948a4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  func_0x000107c613fc();
  func_0x00010045a630(param_1,param_2);
  return unaff_x20;
}



/* Entry: 101c948f0; end: 101c948ff;  */

void FUN_101c948f0(undefined1 *param_1)

{
  undefined1 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = (undefined1)*(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f008630);
  func_0x000107c3ebd4();
  func_0x000107c61170(uVar2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c94900; end: 101c9491b;  */

/* WARNING: Possible PIC construction at 0x000101c9490c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c94910) */

void FUN_101c94900(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c9491c; end: 101c94967;  */

void FUN_101c9491c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c615e8(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c615e8(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c94968; end: 101c949c3;  */

void FUN_101c94968(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001002abe88(0);
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c615f0(uVar1);
  func_0x00010045a854(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101c949c4; end: 101c94f67;  */

long FUN_101c949c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  func_0x0001000285a8(0x112dd2e10,&UNK_10dab8500);
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_6);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = param_10;
  func_0x000107c6157c(param_10);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar2 = PTR_PTR_1126a8e08;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar2;
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0x63536d6574737973;
  func_0x000107c5fadc(0x63536d6574737973,0xeb0000000065706f);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef109d0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010ef0fcc0);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_5);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef1c040);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_6);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_7);
  func_0x000107c61174(puVar2);
  uVar3 = 0x7672655373756c70;
  func_0x000107c5fadc(0x7672655373756c70,0xec00000073656369);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_7);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_8);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010f008690);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar3);
  func_0x000107c61174(param_9);
  func_0x000107c61174(puVar2);
  uVar3 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010efc0770);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(param_9);
  func_0x000107c61170(uVar3);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar3 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010efc0790);
  func_0x000107c5a49c(puVar2);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61574(param_10);
  return unaff_x20;
}



/* Entry: 101c94f68; end: 101c94feb;  */

void FUN_101c94f68(void)

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
  return;
}



/* Entry: 101c94fec; end: 101c9503b;  */

undefined8 FUN_101c94fec(void)

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



/* Entry: 101c9503c; end: 101c95077;  */

undefined1  [16] FUN_101c9503c(void)

{
  return ZEXT816(0x110464300);
}



/* Entry: 101c95078; end: 101c950ff;  */

void FUN_101c95078(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  func_0x0001002a4564();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101c951e4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c95100; end: 101c95107;  */

void FUN_101c95100(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_40);
  func_0x0001002a4564();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_101c951e4(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c95108; end: 101c95167;  */

undefined8 FUN_101c95108(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_101c951e4(param_1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  return uVar1;
}



/* Entry: 101c95168; end: 101c95193;  */

void FUN_101c95168(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c95194; end: 101c951e3;  */

undefined8 FUN_101c95194(void)

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



/* Entry: 101c951e4; end: 101c9530f;  */

void FUN_101c951e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  puVar1 = PTR_PTR_1126a8e10;
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef10e30);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010ef854e0);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c95310; end: 101c95343;  */

undefined1  [16] FUN_101c95310(void)

{
  return ZEXT816(0x1104643a8);
}



/* Entry: 101c95344; end: 101c9536b;  */

void FUN_101c95344(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c9536c; end: 101c95373;  */

undefined8 FUN_101c9536c(void)

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



/* Entry: 101c95374; end: 101c9551b;  */

void FUN_101c95374(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
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
  func_0x0001002aaa70();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_70;
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  FUN_101c965cc(0);
  func_0x000107c613fc();
  uVar1 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar2 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar3 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar4 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  uVar5 = uStack_68;
  func_0x000107c61174();
  uVar6 = uVar5;
  func_0x000101c961f0();
  *(undefined8 *)(param_2 + 0x10) = uVar6;
  uVar7 = uVar6;
  func_0x000107c6157c();
  FUN_101c96238();
  func_0x000107c61574(uVar6);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  *(undefined8 *)(param_2 + 0x38) = uVar7;
  *param_1 = param_2;
  return;
}



/* Entry: 101c9551c; end: 101c9552b;  */

void FUN_101c9551c(long *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000100083b20(&uStack_68,lVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  func_0x000100083b20(&uStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x0001002aaa70();
  func_0x000107c613fc();
  *(undefined8 *)(lVar1 + 0x18) = uStack_70;
  *(undefined8 *)(lVar1 + 0x20) = uStack_78;
  *(undefined8 *)(lVar1 + 0x28) = uStack_80;
  *(undefined8 *)(lVar1 + 0x30) = uStack_88;
  FUN_101c965cc(0);
  func_0x000107c613fc();
  uVar2 = uStack_70;
  func_0x000107c61174(uStack_70);
  uVar3 = uStack_78;
  func_0x000107c61174(uStack_78);
  uVar4 = uStack_80;
  func_0x000107c61174(uStack_80);
  uVar5 = uStack_88;
  func_0x000107c61174(uStack_88);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(uVar5);
  uVar6 = uStack_68;
  func_0x000107c61174();
  uVar7 = uVar6;
  func_0x000101c961f0();
  *(undefined8 *)(lVar1 + 0x10) = uVar7;
  uVar8 = uVar7;
  func_0x000107c6157c();
  FUN_101c96238();
  func_0x000107c61574(uVar7);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  *(undefined8 *)(lVar1 + 0x38) = uVar8;
  *param_1 = lVar1;
  return;
}



/* Entry: 101c9552c; end: 101c95677;  */

long FUN_101c9552c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  FUN_101c965cc(0);
  func_0x000107c613fc();
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174();
  uVar1 = param_1;
  func_0x000101c961f0();
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  uVar2 = uVar1;
  func_0x000107c6157c();
  FUN_101c96238();
  func_0x000107c61574(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar2;
  return unaff_x20;
}



/* Entry: 101c95678; end: 101c956c3;  */

void FUN_101c95678(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101c956c4; end: 101c95717;  */

void FUN_101c956c4(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c95718; end: 101c95763;  */

void FUN_101c95718(undefined8 *param_1)

{
  undefined8 uVar1;
  long lStack_38;
  
  func_0x000100083b20(&lStack_38);
  uVar1 = *(undefined8 *)(lStack_38 + 0x38);
  func_0x000107c61174();
  func_0x000107c61574(lStack_38);
  *param_1 = uVar1;
  return;
}



/* Entry: 101c95764; end: 101c957b7;  */

void FUN_101c95764(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101c957b8; end: 101c9582b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c957b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e112f8) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112e11300) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112e11308) = param_3;
  func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101c9582c; end: 101c95b33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c9582c(double param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined8 uVar11;
  
  uVar10 = *(undefined8 *)(unaff_x20 + _DAT_112e112f8);
  func_0x00010011df08();
  func_0x000107c61180();
  if (param_2 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_3);
  }
  puVar3 = PTR_PTR_1126d0148;
  func_0x000107c61168();
  func_0x000107c5b580();
  func_0x000107c5fadc(param_4,param_5);
  func_0x000107c5fadc(param_6,param_7);
  if (param_9 == 0) {
    param_8 = 0;
  }
  else {
    func_0x000107c5fadc(param_8,param_9);
  }
  puVar4 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c453e4();
  func_0x000107c5c9e4();
  func_0x000107c61170(puVar4);
  param_1 = param_1 * 1000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c95b2c);
    (*pcVar2)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c95b30);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101c95b34);
    (*pcVar2)();
  }
  uVar5 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c44010();
  func_0x000107c61180();
  uVar7 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  lVar8 = *(long *)(unaff_x20 + _DAT_112e11300);
  if (lVar8 == 0) {
    uVar11 = 0;
  }
  else {
    func_0x000107c40eec();
    func_0x000107c61180();
    if (lVar8 != 0) {
      uVar11 = *(undefined8 *)(lVar8 + _DAT_113080b48);
      lVar1 = ((undefined8 *)(lVar8 + _DAT_113080b48))[1];
      func_0x000107c61434(lVar1);
      func_0x000107c61170(lVar8);
      if (lVar1 != 0) {
        func_0x000107c5fadc(uVar11,lVar1);
        func_0x000107c6142c(lVar1);
        goto LAB_101c95a4c;
      }
    }
    uVar11 = 0;
  }
LAB_101c95a4c:
  uVar9 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e11308) + _DAT_113053888);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c433fc(uVar10);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_8);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar11);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar9);
  return;
}



/* Entry: 101c95b34; end: 101c95c0b; -[_TtC46SCShakeToReportSimpleReportCreatorServicesImpl36ShakeToReportSimpleReportCreatorImpl createReportWithReportType:reportSource:description:feature:subFeature:] */

/* WARNING: Possible PIC construction at 0x000101c95be0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c95be4) */

void FUN_101c95b34(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_5);
  uVar1 = param_2;
  func_0x000107c5faec(param_6);
  if (param_7 == 0) {
    param_7 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = uVar1;
    func_0x000107c5faec(param_7);
  }
  func_0x000107c61174(param_1);
  FUN_101c9582c(param_3,param_4,param_5,param_2,param_6,uVar1,param_7,uVar2);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c95c0c; end: 101c95fa3;  */

/* WARNING: Possible PIC construction at 0x000101c95d14: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c95e54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c95f1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c95f2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c95f3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c95f4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c95f64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c95f50) */
/* WARNING: Removing unreachable block (ram,0x000101c95f40) */
/* WARNING: Removing unreachable block (ram,0x000101c95f30) */
/* WARNING: Removing unreachable block (ram,0x000101c95f20) */
/* WARNING: Removing unreachable block (ram,0x000101c95e58) */
/* WARNING: Removing unreachable block (ram,0x000101c95e98) */
/* WARNING: Removing unreachable block (ram,0x000101c95e5c) */
/* WARNING: Removing unreachable block (ram,0x000101c95e9c) */
/* WARNING: Removing unreachable block (ram,0x000101c95d18) */
/* WARNING: Removing unreachable block (ram,0x000101c95f98) */
/* WARNING: Removing unreachable block (ram,0x000101c95d3c) */
/* WARNING: Removing unreachable block (ram,0x000101c95d48) */
/* WARNING: Removing unreachable block (ram,0x000101c95d4c) */
/* WARNING: Removing unreachable block (ram,0x000101c95f9c) */
/* WARNING: Removing unreachable block (ram,0x000101c95d50) */
/* WARNING: Removing unreachable block (ram,0x000101c95d58) */
/* WARNING: Removing unreachable block (ram,0x000101c95d5c) */
/* WARNING: Removing unreachable block (ram,0x000101c95fa0) */
/* WARNING: Removing unreachable block (ram,0x000101c95d60) */
/* WARNING: Removing unreachable block (ram,0x000101c95d94) */
/* WARNING: Removing unreachable block (ram,0x000101c95d98) */
/* WARNING: Removing unreachable block (ram,0x000101c95e1c) */
/* WARNING: Removing unreachable block (ram,0x000101c95e78) */
/* WARNING: Removing unreachable block (ram,0x000101c95ea8) */
/* WARNING: Removing unreachable block (ram,0x000101c95e84) */
/* WARNING: Removing unreachable block (ram,0x000101c95eac) */
/* WARNING: Removing unreachable block (ram,0x000101c95e2c) */
/* WARNING: Removing unreachable block (ram,0x000101c95f68) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c95c0c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  undefined *puVar1;
  
  func_0x00010011df08();
  func_0x000107c61180();
  if (param_1 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(param_2);
  }
  func_0x000107c61168();
  func_0x000107c5b580();
  func_0x000107c5fadc(param_3,param_4);
  func_0x000107c5fadc(param_5,param_6);
  if (param_8 != 0) {
    func_0x000107c5fadc(param_7,param_8);
  }
  puVar1 = PTR__OBJC_CLASS___NSDate_1126ae770;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSDate_1126ae770);
  func_0x000107c453e4();
  func_0x000107c5c9e4();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 101c95fa4; end: 101c960d3; -[_TtC46SCShakeToReportSimpleReportCreatorServicesImpl36ShakeToReportSimpleReportCreatorImpl createInternalReportWithReportType:reportSource:description:feature:subFeature:jiraMetaInfo:jiraLabels:] */

/* WARNING: Possible PIC construction at 0x000101c96094: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c960a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c96098) */
/* WARNING: Removing unreachable block (ram,0x000101c960a8) */

void FUN_101c95fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7,long param_8,long param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c5faec();
  uVar2 = param_2;
  func_0x000107c5faec(param_6);
  uVar3 = uVar2;
  if (param_7 == 0) {
    param_7 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
    uVar1 = uVar3;
  }
  if (param_8 == 0) {
    param_8 = 0;
    uVar3 = 0;
  }
  else {
    func_0x000107c5faec();
  }
  if (param_9 == 0) {
    param_9 = 0;
  }
  else {
    func_0x000107c5fc54(param_9,PTR___sSSN_11034da80);
  }
  func_0x000107c61174(param_1);
  FUN_101c95c0c(param_3,param_4,param_5,param_2,param_6,uVar2,param_7,uVar1,param_8,uVar3,param_9);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101c960d4; end: 101c96133; -[_TtC46SCShakeToReportSimpleReportCreatorServicesImpl36ShakeToReportSimpleReportCreatorImpl init] */

void FUN_101c960d4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCShakeToReportSimpleReportCreatorServicesImpl.ShakeToReportSimpleReportCreatorImpl"
                      ,0x53,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101c96100);
  (*pcVar1)();
}



/* Entry: 101c96134; end: 101c9617b; -[_TtC46SCShakeToReportSimpleReportCreatorServicesImpl36ShakeToReportSimpleReportCreatorImpl .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101c96150: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c96154) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c96134(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e112f8));
  return;
}



/* Entry: 101c9617c; end: 101c9619b;  */

void FUN_101c9617c(void)

{
  func_0x000107c61168(&PTR_PTR_1127ff620);
  return;
}



/* Entry: 101c9619c; end: 101c96237;  */

void FUN_101c9619c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  return;
}



/* Entry: 101c96238; end: 101c962ff;  */

void FUN_101c96238(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  ppuVar2 = &puStack_60;
  puVar1 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_40 = FUN_101c964c4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  uStack_50 = 0x101c96738;
  puStack_48 = &UNK_110464558;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc(puVar1,param_2,ppuVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar2);
  func_0x0001002aaafc(0);
  func_0x000107c610f8();
  func_0x0001038da844(puVar1);
  return;
}



/* Entry: 101c96300; end: 101c964c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c96300(long param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  func_0x000107c3fa04(uVar1);
  func_0x000107c61180();
  lVar7 = *(long *)(param_1 + 0x18);
  uVar6 = *(undefined8 *)(lVar7 + _DAT_113080ad0);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_60 = FUN_101c964cc;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1002830b0;
  puStack_68 = &UNK_1104645a8;
  ppuVar3 = &puStack_80;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61174(uVar6);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(param_1 + 0x20)) + 0x58))();
  puVar4 = PTR_PTR_1126d0198;
  func_0x000107c610f8();
  func_0x000107c45e1c();
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar3);
  uVar1 = *(undefined8 *)(lVar7 + _DAT_113080ae0);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  lVar5 = 0;
  FUN_101c9617c();
  lVar7 = lVar5;
  func_0x000107c610f8();
  *(undefined **)(lVar7 + _DAT_112e112f8) = puVar4;
  *(undefined8 *)(lVar7 + _DAT_112e11300) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112e11308) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar7;
  lStack_88 = lVar5;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_90,puVar2);
  return;
}



/* Entry: 101c964c4; end: 101c964cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101c964c4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  long lStack_90;
  long lStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c3fa04(uVar1);
  func_0x000107c61180();
  lVar7 = *(long *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(lVar7 + _DAT_113080ad0);
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  pcStack_60 = FUN_101c964cc;
  uStack_58 = 0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_1002830b0;
  puStack_68 = &UNK_1104645a8;
  ppuVar3 = &puStack_80;
  func_0x000107c60bc4(ppuVar3);
  func_0x000107c61174(uVar6);
  func_0x000107c3e4fc(puVar2);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & **(ulong **)(unaff_x20 + 0x20)) + 0x58))();
  puVar4 = PTR_PTR_1126d0198;
  func_0x000107c610f8();
  func_0x000107c45e1c();
  func_0x000107c615e8(uVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(ppuVar3);
  uVar1 = *(undefined8 *)(lVar7 + _DAT_113080ae0);
  func_0x000107c5c734();
  func_0x000107c61180();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar5 = 0;
  FUN_101c9617c();
  lVar7 = lVar5;
  func_0x000107c610f8();
  *(undefined **)(lVar7 + _DAT_112e112f8) = puVar4;
  *(undefined8 *)(lVar7 + _DAT_112e11300) = uVar1;
  *(undefined8 *)(lVar7 + _DAT_112e11308) = uVar6;
  puVar2 = PTR_s_init_1125d9248;
  lStack_90 = lVar7;
  lStack_88 = lVar5;
  func_0x000107c61174(uVar6);
  func_0x000107c61154(&lStack_90,puVar2);
  return;
}



/* Entry: 101c964cc; end: 101c964ef;  */

void FUN_101c964cc(void)

{
  func_0x000107c61168(PTR_PTR_1126bb598);
  func_0x000107c5a9f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 101c964f0; end: 101c96527;  */

void FUN_101c964f0(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  func_0x000107c6157c(uVar2);
  (*pcVar1)();
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 101c96528; end: 101c96543;  */

void FUN_101c96528(long param_1,long param_2)

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



/* Entry: 101c96544; end: 101c9656f;  */

/* WARNING: Possible PIC construction at 0x000101c96550: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101c96560: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101c96554) */
/* WARNING: Removing unreachable block (ram,0x000101c96564) */

void FUN_101c96544(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101c96570; end: 101c965cb;  */

void FUN_101c96570(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61574();
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}


