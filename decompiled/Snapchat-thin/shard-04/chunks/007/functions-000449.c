/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10378748c; end: 103787573;  */

void FUN_10378748c(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110691360;
  func_0x000107c613fc(&UNK_110691360,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  lVar2 = 0;
  func_0x00010375f208();
  func_0x000107c613fc();
  *(code **)(lVar2 + 0x10) = FUN_103787574;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  uVar3 = 0;
  func_0x0001002b9400(0);
  func_0x000107c610f8();
  func_0x000103aa63b4(lVar2,uVar3);
  return;
}



/* Entry: 103787574; end: 10378757b;  */

undefined8 FUN_103787574(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_10378757c(param_1);
    func_0x000107c61574(lVar1);
  }
  return param_1;
}



/* Entry: 10378757c; end: 103787c03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10378757c(undefined8 param_1)

{
  int iVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 auStack_130 [2];
  undefined8 uStack_120;
  undefined *puStack_118;
  long lStack_110;
  long lStack_108;
  undefined8 uStack_100;
  undefined *apuStack_f8 [5];
  undefined *apuStack_d0 [3];
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 auStack_a8 [9];
  
  puVar2 = (undefined8 *)0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(puVar2[-1] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)&uStack_120 + -extraout_x8;
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000026;
  func_0x0001000a9a18(0xd000000000000026,0x800000010f1642c0);
  func_0x000107c61170(uVar3);
  lVar10 = _DAT_112fe2098;
  lVar14 = *(long *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(lVar14 + _DAT_112fe2098);
  func_0x000107c6157c(uVar3);
  func_0x0001000d224c(auStack_a8);
  func_0x000107c61574(uVar3);
  uVar3 = auStack_a8[0];
  func_0x000107c5ae08();
  func_0x000107c615e8(auStack_a8[0]);
  if ((int)uVar3 != 0) {
    uVar3 = param_1;
    FUN_103787c04();
    FUN_103787d14(auStack_a8,param_1,uVar3);
    uVar13 = *(undefined8 *)(lVar14 + lVar10);
    func_0x000107c6157c(uVar13);
    func_0x0001000d224c(apuStack_f8);
    func_0x000107c61574(uVar13);
    puVar6 = apuStack_f8[0];
    puVar5 = apuStack_f8[0];
    func_0x000107c5adf8();
    func_0x000107c615e8();
    if ((int)puVar5 == 0) {
      uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_112fe22c8);
      puStack_b8 = &UNK_11068f998;
      FUN_1037883ac();
      puVar5 = &UNK_110691388;
      puStack_b0 = puVar6;
      func_0x000107c613fc(&UNK_110691388,0x60,7);
      apuStack_d0[0] = puVar5;
      FUN_1037883ec(auStack_a8,puVar5 + 0x18);
      uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fe20d8);
      uVar16 = *(undefined8 *)(lVar14 + lVar10);
      uVar17 = *(undefined8 *)(unaff_x20 + 0x50);
      *(undefined8 *)(puVar5 + 0x10) = uVar3;
      *(undefined8 *)(puVar5 + 0x40) = uVar13;
      *(undefined8 *)(puVar5 + 0x48) = uVar17;
      *(undefined8 *)(puVar5 + 0x50) = uVar16;
      *(undefined8 *)(puVar5 + 0x58) = param_1;
      uStack_100 = uVar4;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(uVar3);
      func_0x000107c61174(uVar13);
      func_0x000107c6157c(uVar17);
      uVar4 = uStack_100;
      func_0x000107c6157c(uVar16);
LAB_103787934:
      uVar3 = *(undefined8 *)(lVar14 + lVar10);
      lVar10 = 0;
      func_0x000103786a50();
      func_0x000107c613fc();
      FUN_1037883ec(apuStack_d0,lVar10 + 0x10);
      func_0x000100d5d8b4(auStack_a8,lVar10 + 0x58);
      *(undefined8 *)(lVar10 + 0x80) = param_1;
      *(undefined8 *)(lVar10 + 0x38) = uVar3;
      *(undefined8 *)(lVar10 + 0x40) = 0;
      *(undefined8 *)(lVar10 + 0x48) = 0;
      *(undefined8 *)(lVar10 + 0x50) = 0;
      func_0x000107c61174(param_1);
      func_0x000107c6157c(uVar3);
      func_0x0001000834e4(apuStack_d0);
      goto LAB_1037879a4;
    }
    lVar7 = *(long *)(unaff_x20 + 0x58);
    func_0x000107c5dbd4();
    func_0x000107c61180();
    lVar8 = lVar7;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    if (lVar8 != 0) {
      lVar7 = lVar8;
      func_0x000107c509b4();
      func_0x000107c61180();
      if (lVar7 != 0) {
        lVar12 = lVar7;
        lStack_108 = lVar8;
        func_0x000107c4a850();
        func_0x000107c61180();
        func_0x000107c615e8(lVar7);
        lStack_110 = lVar12;
        if (lVar12 == 0) {
          func_0x0001000834e4(auStack_a8);
          func_0x000107c615e8(lStack_108);
          goto LAB_1037879a0;
        }
        uVar13 = *(undefined8 *)(lVar14 + lVar10);
        uStack_100 = uVar4;
        func_0x000107c6157c(uVar13);
        func_0x0001000d224c(apuStack_f8);
        func_0x000107c61574(uVar13);
        puVar6 = apuStack_f8[0];
        func_0x000107c5ae1c();
        func_0x000107c615e8();
        uVar4 = *(undefined8 *)(unaff_x20 + 0x50);
        puStack_118 = *(undefined **)(lVar14 + lVar10);
        uStack_120 = uVar4;
        if (((ulong)puVar6 & 1) == 0) {
          puStack_b8 = &UNK_11068f778;
          FUN_103788430();
          puVar6 = &UNK_1106913b0;
          puStack_b0 = apuStack_f8[0];
          func_0x000107c613fc(&UNK_1106913b0,0x68,7);
          apuStack_d0[0] = puVar6;
          FUN_1037883ec(auStack_a8,puVar6 + 0x28);
          puVar5 = &UNK_1106913d8;
          func_0x000107c613fc(&UNK_1106913d8,0x18,7);
          lVar15 = lStack_110;
          *(long *)(puVar5 + 0x10) = lStack_110;
          func_0x0001000285a8(0x112f907f8,&UNK_10dc0a050);
          func_0x000107c613fc();
          func_0x000107c615f0(lVar15);
          func_0x000107c6157c(uVar4);
          puVar9 = puStack_118;
          func_0x000107c6157c(puStack_118);
          pcVar11 = FUN_103788470;
          func_0x0001000bdd8c(FUN_103788470,puVar5);
          puVar5 = &UNK_110691400;
          func_0x000107c613fc(&UNK_110691400,0x18,7);
          *(long *)(puVar5 + 0x10) = lVar15;
          uVar4 = 0x112f90800;
          func_0x0001000285a8(0x112f90800,&UNK_10dc09010);
          func_0x000107c613fc();
          uVar13 = 0x10378847c;
          func_0x0001000bdd8c(0x10378847c,puVar5,uVar4);
          func_0x000107c615e8(lStack_108);
          *(undefined8 *)(puVar6 + 0x10) = uStack_120;
          *(undefined **)(puVar6 + 0x18) = puVar9;
          *(undefined8 *)(puVar6 + 0x20) = param_1;
          *(int *)(puVar6 + 0x50) = (int)uVar3;
          *(code **)(puVar6 + 0x58) = pcVar11;
          *(undefined8 *)(puVar6 + 0x60) = uVar13;
          func_0x000107c61174(param_1);
          uVar4 = uStack_100;
        }
        else {
          FUN_1037883ec(auStack_a8,apuStack_f8);
          puVar6 = &UNK_110691428;
          func_0x000107c613fc(&UNK_110691428,100,7);
          lVar7 = lStack_108;
          lVar8 = lStack_110;
          puVar5 = puStack_118;
          *(long *)(puVar6 + 0x10) = lStack_108;
          *(long *)(puVar6 + 0x18) = lStack_110;
          *(undefined8 *)(puVar6 + 0x20) = uVar4;
          *(undefined **)(puVar6 + 0x28) = puStack_118;
          *(undefined8 *)(puVar6 + 0x30) = param_1;
          func_0x000100d5d8b4(apuStack_f8,puVar6 + 0x38);
          *(int *)(puVar6 + 0x60) = (int)uVar3;
          func_0x000107c615f4(lVar7,2);
          func_0x000107c615f4(lVar8,2);
          func_0x000107c61580(puVar5,2);
          func_0x000107c6157c(uStack_120);
          uVar4 = param_1;
          func_0x000107c61174();
          iVar1 = (int)uVar4;
          func_0x000107c30abc();
          if (iVar1 == 0) {
            lVar12 = 0;
            func_0x000107c5fd0c();
            (**(code **)(*(long *)(lVar12 + -8) + 0x38))(lVar15,1,1,lVar12);
            puVar5 = &UNK_110691450;
            func_0x000107c613fc(&UNK_110691450,0x30,7);
            *(undefined8 *)(puVar5 + 0x10) = 0;
            *(undefined8 *)(puVar5 + 0x18) = 0;
            *(undefined **)(puVar5 + 0x20) = &UNK_10dc0a060;
            *(undefined **)(puVar5 + 0x28) = puVar6;
            puVar9 = (undefined *)0x0;
            FUN_103780b9c(0,0,lVar15,&UNK_10dc0a070,puVar5);
            func_0x000107c615e8(lVar7);
            func_0x000107c615e8(lVar8);
            puVar6 = puStack_118;
          }
          else {
            func_0x000107c6157c(puVar6);
            *(undefined **)((long)auStack_130 + -extraout_x8) = &UNK_11068f778;
            puVar9 = (undefined *)0x4;
            func_0x0001001ca524(4,0,100,3,0,0,&UNK_10dc0a060,puVar6);
            func_0x000107c615e8(lVar7);
            func_0x000107c615e8(lVar8);
            func_0x000107c61574(puStack_118);
            func_0x000107c61574(puVar6);
          }
          uVar4 = uStack_100;
          func_0x000107c61574();
          puStack_b8 = &UNK_11068fcc8;
          FUN_103788618();
          puStack_b0 = puVar6;
          func_0x000107c615e8(lVar7);
          func_0x000107c615e8(lVar8);
          apuStack_d0[0] = puVar9;
        }
        goto LAB_103787934;
      }
      func_0x000107c615e8(lVar8);
    }
    func_0x0001000834e4(auStack_a8);
  }
LAB_1037879a0:
  lVar10 = 0;
LAB_1037879a4:
  func_0x000107c61428(puVar2,auStack_a8,0,0);
  uVar3 = *puVar2;
  func_0x000107c61174(uVar3);
  func_0x0001000aa0a8(uVar4);
  func_0x000107c61170(uVar3);
  return lVar10;
}



/* Entry: 103787c04; end: 103787d13;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulong FUN_103787c04(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  ulong uStack_40;
  long lStack_38;
  
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + _DAT_112fe2098);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(&uStack_40);
  func_0x000107c61574(uVar4);
  uVar2 = uStack_40;
  func_0x000107c614f0();
  uVar3 = uStack_40;
  func_0x000107c5adf8();
  if ((int)uVar3 == 0) {
    func_0x000107c615e8(uStack_40);
    uVar2 = 0;
  }
  else {
    uVar3 = ((ulong *)(param_1 + _DAT_112fe2258))[1];
    if (uVar3 != 0) {
      uVar1 = *(ulong *)(param_1 + _DAT_112fe2258) & 0xffffffffffff;
      if ((uVar3 & 0x2000000000000000) != 0) {
        uVar1 = uVar3 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        uVar3 = (ulong)*(uint *)(param_1 + _DAT_112fe2248);
        func_0x000103aa5c60(uVar3,uVar2,lStack_38);
        if (((uVar3 & 1) != 0) &&
           ((**(code **)(lStack_38 + 0x28))(uVar2,lStack_38), (uVar2 & 1) != 0)) {
          func_0x000107c615e8(uStack_40);
          return 2;
        }
      }
    }
    uVar2 = uStack_40;
    func_0x000107c4327c(uStack_40);
    func_0x000107c615e8(uStack_40);
  }
  return uVar2;
}



/* Entry: 103787d14; end: 103788193;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103787d14(undefined8 *param_1,undefined8 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined8 uVar12;
  undefined8 auStack_88 [3];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  lVar4 = 0x112f905f0;
  func_0x0001000285a8(0x112f905f0,&UNK_10dc08ad0);
  uVar10 = 0x110;
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 0xc;
  *(undefined8 *)(lVar4 + 0x10) = 6;
  lVar1 = _DAT_112fe2098;
  lVar8 = *(long *)(unaff_x20 + 0x10);
  lVar9 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(lVar9 + _DAT_112fe2098);
  *(undefined **)(lVar4 + 0x38) = &UNK_110690448;
  *(undefined ***)(lVar4 + 0x40) = &PTR_DAT_112f912a8;
  *(undefined8 *)(lVar4 + 0x20) = uVar5;
  lVar2 = _DAT_113083f78;
  uVar12 = *(undefined8 *)(lVar8 + _DAT_113083f78);
  func_0x000107c6157c();
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar5 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c43a44();
  func_0x000107c61180();
  lVar6 = *(long *)(unaff_x20 + 0x60);
  func_0x000107c5b4e4();
  func_0x000107c61180();
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x103788190);
    (*pcVar3)();
  }
  *(undefined **)(lVar4 + 0x60) = &UNK_1106904d0;
  *(undefined ***)(lVar4 + 0x68) = &PTR_DAT_112f91360;
  puVar7 = &UNK_110691478;
  uVar11 = 0x30;
  func_0x000107c613fc(&UNK_110691478,0x30,7);
  *(undefined **)(lVar4 + 0x48) = puVar7;
  *(undefined8 *)(puVar7 + 0x10) = uVar5;
  *(undefined8 *)(puVar7 + 0x18) = uVar10;
  *(undefined8 *)(puVar7 + 0x20) = uVar12;
  *(long *)(puVar7 + 0x28) = lVar6;
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = uVar12;
  func_0x000107c4a9f0();
  func_0x000107c61180();
  *(undefined **)(lVar4 + 0x88) = &UNK_110690418;
  *(undefined ***)(lVar4 + 0x90) = &PTR_DAT_112f911e0;
  *(undefined8 *)(lVar4 + 0x70) = uVar5;
  func_0x000107c4a9f0();
  func_0x000107c61180();
  *(undefined **)(lVar4 + 0xb0) = &UNK_1106903e8;
  *(undefined ***)(lVar4 + 0xb8) = &PTR_DAT_112f91120;
  *(undefined8 *)(lVar4 + 0x98) = uVar12;
  uVar12 = *(undefined8 *)(lVar8 + lVar2);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar5 = uVar12;
  func_0x000107c5faec();
  func_0x000107c61170(uVar12);
  lVar8 = *(long *)(unaff_x20 + 0x48);
  func_0x000107c4456c();
  func_0x000107c61180();
  if (lVar8 != 0) {
    *(undefined **)(lVar4 + 0xd8) = &UNK_1106903b8;
    *(undefined ***)(lVar4 + 0xe0) = &PTR_DAT_112f91060;
    *(undefined8 *)(lVar4 + 0xc0) = uVar5;
    *(undefined8 *)(lVar4 + 200) = uVar11;
    *(long *)(lVar4 + 0xd0) = lVar8;
    *(undefined **)(lVar4 + 0x100) = &UNK_110690258;
    *(undefined ***)(lVar4 + 0x108) = &PTR_DAT_112f91010;
    func_0x000107c61174();
    lVar8 = 1;
    func_0x0001037629c8(1,7,1,lVar4);
    puStack_70 = &UNK_1106902a8;
    ppuStack_68 = &PTR_DAT_112f91038;
    *(undefined8 *)(lVar8 + 0x10) = 7;
    auStack_88[0] = param_2;
    func_0x000100d5d8b4(auStack_88,lVar8 + 0x110);
    uVar5 = *(undefined8 *)(lVar9 + lVar1);
    func_0x000107c6157c(uVar5);
    func_0x0001000d224c(auStack_88);
    func_0x000107c61574(uVar5);
    uVar5 = auStack_88[0];
    uVar12 = auStack_88[0];
    func_0x000107c5adf8();
    func_0x000107c615e8(uVar5);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x50);
    lVar4 = 0x112f918a8;
    func_0x0001000285a8(0x112f918a8,&UNK_10dc0a080);
    if ((int)uVar12 == 0) {
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 6;
      *(undefined8 *)(lVar4 + 0x10) = 3;
      uVar10 = *(undefined8 *)(lVar9 + lVar1);
      *(undefined **)(lVar4 + 0x38) = &UNK_11068ff80;
      lVar9 = lVar4;
      func_0x000103788658();
      *(long *)(lVar4 + 0x40) = lVar9;
      *(undefined8 *)(lVar4 + 0x20) = uVar10;
      uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fe20e0);
      uVar11 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fe20e8);
      *(undefined **)(lVar4 + 0x60) = &UNK_110690838;
      func_0x000103788698();
      *(long *)(lVar4 + 0x68) = lVar9;
      puVar7 = &UNK_1106914a0;
      func_0x000107c613fc(&UNK_1106914a0,0x2c,7);
      *(undefined **)(lVar4 + 0x48) = puVar7;
      *(undefined8 *)(puVar7 + 0x10) = uVar12;
      *(undefined8 *)(puVar7 + 0x18) = uVar11;
      *(undefined8 *)(puVar7 + 0x20) = uVar10;
      *(undefined4 *)(puVar7 + 0x28) = param_3;
      *(undefined **)(lVar4 + 0x88) = &UNK_110690200;
      func_0x0001037886d8();
      *(undefined **)(lVar4 + 0x90) = puVar7;
      *(undefined8 *)(lVar4 + 0x70) = uVar5;
      *(long *)(lVar4 + 0x78) = lVar8;
      param_1[3] = &UNK_11068fe28;
      func_0x000103788718();
      func_0x000107c61580(uVar5,2);
      func_0x000107c61580(uVar10,2);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(uVar11);
    }
    else {
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 4;
      *(undefined8 *)(lVar4 + 0x10) = 2;
      uVar12 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fe20e0);
      uVar10 = *(undefined8 *)(*(long *)(unaff_x20 + 0x28) + _DAT_112fe20e8);
      uVar11 = *(undefined8 *)(lVar9 + lVar1);
      *(undefined **)(lVar4 + 0x38) = &UNK_110690838;
      lVar9 = lVar4;
      func_0x000103788698();
      *(long *)(lVar4 + 0x40) = lVar9;
      puVar7 = &UNK_1106914a0;
      func_0x000107c613fc(&UNK_1106914a0,0x2c,7);
      *(undefined **)(lVar4 + 0x20) = puVar7;
      *(undefined8 *)(puVar7 + 0x10) = uVar12;
      *(undefined8 *)(puVar7 + 0x18) = uVar10;
      *(undefined8 *)(puVar7 + 0x20) = uVar11;
      *(undefined4 *)(puVar7 + 0x28) = param_3;
      *(undefined **)(lVar4 + 0x60) = &UNK_110690200;
      func_0x0001037886d8();
      *(undefined **)(lVar4 + 0x68) = puVar7;
      *(undefined8 *)(lVar4 + 0x48) = uVar5;
      *(long *)(lVar4 + 0x50) = lVar8;
      param_1[3] = &UNK_11068fe28;
      func_0x000103788718();
      func_0x000107c61580(uVar5,2);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(uVar10);
      func_0x000107c6157c(uVar11);
    }
    param_1[4] = puVar7;
    *param_1 = uVar5;
    param_1[1] = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x103788194);
  (*pcVar3)();
}



/* Entry: 103788194; end: 10378831f;  */

/* WARNING: Possible PIC construction at 0x0001037881a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037881b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037881c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037881d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001037881e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001037881d4) */
/* WARNING: Removing unreachable block (ram,0x0001037881c4) */
/* WARNING: Removing unreachable block (ram,0x0001037881b4) */
/* WARNING: Removing unreachable block (ram,0x0001037881a4) */
/* WARNING: Removing unreachable block (ram,0x0001037881ec) */

void FUN_103788194(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103788320; end: 1037883ab;  */

void FUN_103788320(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_110691360;
  func_0x000107c613fc(&UNK_110691360,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  lVar2 = 0;
  func_0x00010375f208();
  func_0x000107c613fc();
  *(code **)(lVar2 + 0x10) = FUN_103788758;
  *(undefined **)(lVar2 + 0x18) = puVar1;
  uVar3 = 0;
  func_0x0001002b9400(0);
  func_0x000107c610f8();
  func_0x000103aa63b4(lVar2,uVar3);
  *param_1 = lVar2;
  return;
}



/* Entry: 1037883ac; end: 1037883eb;  */

void FUN_1037883ac(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91890 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc08e90;
  func_0x000107c61520(&DAT_10dc08e90,&UNK_11068f998);
  puRam0000000112f91890 = puVar1;
  return;
}



/* Entry: 1037883ec; end: 10378842f;  */

long FUN_1037883ec(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103788430; end: 10378846f;  */

void FUN_103788430(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91898 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc08dc0;
  func_0x000107c61520(&DAT_10dc08dc0,&UNK_11068f778);
  puRam0000000112f91898 = puVar1;
  return;
}



/* Entry: 103788470; end: 103788487;  */

void FUN_103788470(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d1f00;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 103788488; end: 1037884c3;  */

void FUN_103788488(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c61168();
  func_0x000107c43be4();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1037884c4; end: 103788557;  */

void FUN_1037884c4(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  long lVar7;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined4 *)(unaff_x20 + 0x60);
  plVar6 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_103788558;
  *(undefined4 *)(plVar6 + 0x19) = uVar5;
  plVar6[0x17] = lVar7;
  plVar6[0x18] = unaff_x20 + 0x38;
  plVar6[0x15] = lVar2;
  plVar6[0x16] = lVar4;
  plVar6[0x13] = lVar1;
  plVar6[0x14] = lVar3;
  plVar6[0x12] = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10376c6b0,0,0);
  return;
}



/* Entry: 103788558; end: 103788593;  */

void FUN_103788558(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000103788590. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 103788594; end: 103788617;  */

void FUN_103788594(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long *plVar6;
  long unaff_x20;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  piVar2 = *(int **)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar6 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = 0x10378875c;
  iVar1 = *piVar2;
  plVar5 = (long *)(ulong)(uint)piVar2[1];
  func_0x000107c615b8(plVar5,(code *)((long)iVar1 + (long)piVar2),uVar3,piVar2,uVar4);
  plVar6[2] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_103787288;
                    /* WARNING: Could not recover jumptable at 0x000103787284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(plVar5,param_1);
  return;
}



/* Entry: 103788618; end: 103788757;  */

void FUN_103788618(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f918a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dc09058;
  func_0x000107c61520(&DAT_10dc09058,&UNK_11068fcc8);
  puRam0000000112f918a0 = puVar1;
  return;
}



/* Entry: 103788758; end: 10378875f;  */

undefined8 FUN_103788758(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    param_1 = 0;
  }
  else {
    FUN_10378757c(param_1);
    func_0x000107c61574(lVar1);
  }
  return param_1;
}



/* Entry: 103788760; end: 1037887d3;  */

void FUN_103788760(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  return;
}



/* Entry: 1037887d4; end: 10378892f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037887d4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  func_0x0001000298f0();
  func_0x000107c61428();
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000025;
  func_0x0001000a9a18(0xd000000000000025,0x800000010f1642f0);
  func_0x000107c61170(uVar2);
  lVar1 = _DAT_112fe2098;
  lVar5 = *(long *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(lVar5 + _DAT_112fe2098);
  func_0x000107c6157c(uVar2);
  func_0x0001000d224c(&uStack_80);
  func_0x000107c61574(uVar2);
  uVar2 = uStack_80;
  uVar4 = uStack_80;
  func_0x000107c5ae08();
  func_0x000107c615e8(uVar2);
  if ((int)uVar4 != 0) {
    uVar2 = *(undefined8 *)(lVar5 + lVar1);
    func_0x000107c6157c(uVar2);
    func_0x0001000d224c(&uStack_80);
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_11307e6a8);
    func_0x000107c61174(uVar2);
    FUN_103796dbc(uStack_80,uStack_78,uVar2);
    func_0x000107c61170(uVar2);
    func_0x000107c615e8(uStack_80);
  }
  func_0x000107c61428(param_1,&uStack_80,0,0);
  uVar2 = *param_1;
  func_0x000107c61174(uVar2);
  func_0x0001000aa0a8(uVar3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 103788930; end: 10378895b;  */

void FUN_103788930(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10378895c; end: 10378897b;  */

void FUN_10378895c(void)

{
  FUN_1037887d4();
  return;
}



/* Entry: 10378897c; end: 103788983;  */

undefined8 FUN_10378897c(void)

{
  return 0;
}



/* Entry: 103788984; end: 1037889a3;  */

void FUN_103788984(void)

{
  func_0x000107c61168(&PTR_PTR_112f91910);
  return;
}



/* Entry: 1037889a4; end: 1037889eb;  */

void FUN_1037889a4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = PTR_PTR_1126ad6f0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  uVar2 = 0;
  FUN_103781d14();
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_110690928;
  *param_1 = puVar1;
  return;
}



/* Entry: 1037889ec; end: 103788a8f;  */

void FUN_1037889ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_110691500;
  func_0x000107c613fc(&UNK_110691500,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103788cd8,puVar1);
  return;
}



/* Entry: 103788a90; end: 103788cd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103788a90(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar6 = puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar8 = puStack_90;
  puVar1 = puStack_90;
  func_0x000107c5ae08();
  func_0x000107c615e8(puVar8);
  if ((int)puVar1 == 0) {
    func_0x000107c61170(puVar6);
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_90);
    puVar1 = puStack_90;
    func_0x000100083b20(&puStack_90);
    puVar5 = puStack_90;
    func_0x000100083b20(&puStack_90);
    puVar7 = puStack_90;
    func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
    func_0x000107c613fc();
    pcVar2 = FUN_1037889a4;
    func_0x0001000bdd8c(FUN_1037889a4,0);
    func_0x0001000a0a8c(0);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar8 = &UNK_1106916a0;
    func_0x000107c613fc(&UNK_1106916a0,0x38,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    *(undefined **)(puVar8 + 0x28) = puStack_90;
    *(code **)(puVar8 + 0x30) = pcVar2;
    pcStack_70 = FUN_103789b64;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101443eec;
    puStack_78 = &UNK_1106916b8;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(pcVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar8 = puVar3;
    func_0x000100a0dc54(puVar3,0xd000000000000015,0x800000010f164370);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(pcVar2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 103788cd8; end: 103788ce3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103788cd8(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar4 = &puStack_90;
  func_0x000100083b20(&puStack_90,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  puVar6 = puStack_90;
  func_0x0001000d224c(&puStack_90);
  puVar8 = puStack_90;
  puVar1 = puStack_90;
  func_0x000107c5ae08();
  func_0x000107c615e8(puVar8);
  if ((int)puVar1 == 0) {
    func_0x000107c61170(puVar6);
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_90);
    puVar1 = puStack_90;
    func_0x000100083b20(&puStack_90);
    puVar5 = puStack_90;
    func_0x000100083b20(&puStack_90);
    puVar7 = puStack_90;
    func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
    func_0x000107c613fc();
    pcVar2 = FUN_1037889a4;
    func_0x0001000bdd8c(FUN_1037889a4,0);
    func_0x0001000a0a8c(0);
    puVar3 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar8 = &UNK_1106916a0;
    func_0x000107c613fc(&UNK_1106916a0,0x38,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    *(undefined **)(puVar8 + 0x18) = puVar5;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    *(undefined **)(puVar8 + 0x28) = puStack_90;
    *(code **)(puVar8 + 0x30) = pcVar2;
    pcStack_70 = FUN_103789b64;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_101443eec;
    puStack_78 = &UNK_1106916b8;
    puStack_68 = puVar8;
    func_0x000107c60bc4(&puStack_90);
    puVar8 = puStack_68;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar5);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(pcVar2);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar4);
    puVar8 = puVar3;
    func_0x000100a0dc54(puVar3,0xd000000000000015,0x800000010f164370);
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61574(pcVar2);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar1);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 103788ce4; end: 103788e9b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103788ce4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long alStack_c0 [5];
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  uVar5 = *(undefined8 *)(param_1 + _DAT_112fe20d8);
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(param_3 + _DAT_112fe2098);
  uVar6 = *(undefined8 *)(param_4 + _DAT_112fe22c8);
  puStack_70 = &UNK_11068efc8;
  ppuStack_68 = &PTR_DAT_11068f090;
  lVar2 = 0;
  auStack_88[0] = param_2;
  FUN_10379647c();
  lVar3 = lVar2;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_88,&UNK_11068efc8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uRam0000000114146f40);
  puVar8 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar8);
  alStack_c0[2] = *puVar8;
  puStack_98 = &UNK_11068efc8;
  ppuStack_90 = &PTR_DAT_11068f090;
  *(undefined8 *)(lVar3 + _DAT_112f91fa8) = uVar5;
  FUN_103789b74(alStack_c0 + 2,lVar3 + _DAT_112f91fb0);
  *(undefined8 *)(lVar3 + _DAT_112f91fb8) = uVar7;
  *(undefined8 *)(lVar3 + _DAT_112f91fc0) = uVar6;
  *(undefined8 *)(lVar3 + _DAT_112f91fc8) = param_5;
  puVar1 = PTR_s_init_1125d9248;
  alStack_c0[0] = lVar3;
  alStack_c0[1] = lVar2;
  func_0x000107c61174(uVar5);
  func_0x000107c6157c(uVar7);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(param_5);
  plVar4 = alStack_c0;
  func_0x000107c61154(plVar4,puVar1);
  func_0x0001000834e4(alStack_c0 + 2);
  func_0x0001000834e4(auStack_88);
  return plVar4;
}



/* Entry: 103788e9c; end: 103788eaf;  */

void FUN_103788e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110691528;
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(&UNK_110691528,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1037891bc,puVar1);
  return;
}



/* Entry: 103788eb0; end: 1037891bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103788eb0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [5];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  ppuVar5 = &puStack_e0;
  func_0x000100083b20(&puStack_e0);
  puVar7 = puStack_e0;
  func_0x0001000d224c(&puStack_e0);
  puVar8 = puStack_e0;
  puVar1 = puStack_e0;
  func_0x000107c5ae08();
  func_0x000107c615e8(puVar8);
  if ((int)puVar1 == 0) {
    func_0x000107c61170(puVar7);
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_e0);
    puVar1 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    puVar6 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    func_0x000100083b20(auStack_b0);
    func_0x0001000285a8(0x112de76c8,&UNK_10d9b24a0);
    puVar8 = puStack_e0;
    func_0x000107c3fb68();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(puVar8);
    func_0x0001000285a8(0x112de76c0,&UNK_10d9b2490);
    uVar2 = auStack_b0[0];
    func_0x000107c50958();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    puStack_70 = &UNK_11068f4b8;
    ppuStack_68 = &PTR_DAT_11068f4d0;
    func_0x000107c61170(puStack_e0);
    func_0x000107c61170(auStack_b0[0]);
    func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
    func_0x000107c613fc();
    pcVar3 = FUN_1037889a4;
    func_0x0001000bdd8c(FUN_1037889a4,0);
    func_0x0001000a0a8c(0);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    FUN_103789b74(auStack_88,auStack_b0);
    puVar8 = &UNK_110691650;
    func_0x000107c613fc(&UNK_110691650,0x58,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    FUN_1037811ac(auStack_b0,puVar8 + 0x28);
    *(code **)(puVar8 + 0x50) = pcVar3;
    pcStack_c0 = FUN_103789b24;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_101443eec;
    puStack_c8 = &UNK_110691668;
    puStack_b8 = puVar8;
    func_0x000107c60bc4(&puStack_e0);
    puVar8 = puStack_b8;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(pcVar3);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar8 = puVar4;
    func_0x000100a0dc54(puVar4,0xd000000000000018,0x800000010f164350);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(pcVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar1);
    func_0x0001000834e4(auStack_88);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 1037891bc; end: 1037891db;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037891bc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [5];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  ppuVar5 = &puStack_e0;
  func_0x000100083b20(&puStack_e0,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  puVar7 = puStack_e0;
  func_0x0001000d224c(&puStack_e0);
  puVar8 = puStack_e0;
  puVar1 = puStack_e0;
  func_0x000107c5ae08();
  func_0x000107c615e8(puVar8);
  if ((int)puVar1 == 0) {
    func_0x000107c61170(puVar7);
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_e0);
    puVar1 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    puVar6 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    func_0x000100083b20(auStack_b0);
    func_0x0001000285a8(0x112de76c8,&UNK_10d9b24a0);
    puVar8 = puStack_e0;
    func_0x000107c3fb68();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(puVar8);
    func_0x0001000285a8(0x112de76c0,&UNK_10d9b2490);
    uVar2 = auStack_b0[0];
    func_0x000107c50958();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    puStack_70 = &UNK_11068f4b8;
    ppuStack_68 = &PTR_DAT_11068f4d0;
    func_0x000107c61170(puStack_e0);
    func_0x000107c61170(auStack_b0[0]);
    func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
    func_0x000107c613fc();
    pcVar3 = FUN_1037889a4;
    func_0x0001000bdd8c(FUN_1037889a4,0);
    func_0x0001000a0a8c(0);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    FUN_103789b74(auStack_88,auStack_b0);
    puVar8 = &UNK_110691650;
    func_0x000107c613fc(&UNK_110691650,0x58,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    FUN_1037811ac(auStack_b0,puVar8 + 0x28);
    *(code **)(puVar8 + 0x50) = pcVar3;
    pcStack_c0 = FUN_103789b24;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_101443eec;
    puStack_c8 = &UNK_110691668;
    puStack_b8 = puVar8;
    func_0x000107c60bc4(&puStack_e0);
    puVar8 = puStack_b8;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(pcVar3);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar8 = puVar4;
    func_0x000100a0dc54(puVar4,0xd000000000000018,0x800000010f164350);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(pcVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar1);
    func_0x0001000834e4(auStack_88);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 1037891dc; end: 103789297;  */

void FUN_1037891dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c613fc(param_6,0x38,7);
  *(undefined8 *)(param_6 + 0x10) = param_1;
  *(undefined8 *)(param_6 + 0x18) = param_2;
  *(undefined8 *)(param_6 + 0x20) = param_3;
  *(undefined8 *)(param_6 + 0x28) = param_4;
  *(undefined8 *)(param_6 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(param_7,param_6);
  return;
}



/* Entry: 103789298; end: 1037895a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103789298(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [5];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  ppuVar5 = &puStack_e0;
  func_0x000100083b20(&puStack_e0);
  puVar7 = puStack_e0;
  func_0x0001000d224c(&puStack_e0);
  puVar8 = puStack_e0;
  puVar1 = puStack_e0;
  func_0x000107c5ae08();
  func_0x000107c615e8(puVar8);
  if ((int)puVar1 == 0) {
    func_0x000107c61170(puVar7);
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_e0);
    puVar1 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    puVar6 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    func_0x000100083b20(auStack_b0);
    func_0x0001000285a8(0x112de76c8,&UNK_10d9b24a0);
    puVar8 = puStack_e0;
    func_0x000107c3fb68();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(puVar8);
    func_0x0001000285a8(0x112de76c0,&UNK_10d9b2490);
    uVar2 = auStack_b0[0];
    func_0x000107c50958();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    puStack_70 = &UNK_11068f4b8;
    ppuStack_68 = &PTR_DAT_11068f4d0;
    func_0x000107c61170(puStack_e0);
    func_0x000107c61170(auStack_b0[0]);
    func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
    func_0x000107c613fc();
    pcVar3 = FUN_1037889a4;
    func_0x0001000bdd8c(FUN_1037889a4,0);
    func_0x0001000a0a8c(0);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    FUN_103789b74(auStack_88,auStack_b0);
    puVar8 = &UNK_1106915d8;
    func_0x000107c613fc(&UNK_1106915d8,0x58,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    FUN_1037811ac(auStack_b0,puVar8 + 0x28);
    *(code **)(puVar8 + 0x50) = pcVar3;
    pcStack_c0 = FUN_103789708;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_101443eec;
    puStack_c8 = &UNK_1106915f0;
    puStack_b8 = puVar8;
    func_0x000107c60bc4(&puStack_e0);
    puVar8 = puStack_b8;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(pcVar3);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar8 = puVar4;
    func_0x000100a0dc54(puVar4,0xd000000000000022,0x800000010f164320);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(pcVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar1);
    func_0x0001000834e4(auStack_88);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 1037895a4; end: 1037895e7;  */

void FUN_1037895a4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1037895e8; end: 103789637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1037895e8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long unaff_x20;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  code *pcStack_c0;
  undefined *puStack_b8;
  undefined8 auStack_b0 [5];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  ppuVar5 = &puStack_e0;
  func_0x000100083b20(&puStack_e0,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  puVar7 = puStack_e0;
  func_0x0001000d224c(&puStack_e0);
  puVar8 = puStack_e0;
  puVar1 = puStack_e0;
  func_0x000107c5ae08();
  func_0x000107c615e8(puVar8);
  if ((int)puVar1 == 0) {
    func_0x000107c61170(puVar7);
    puVar8 = (undefined *)0x0;
  }
  else {
    func_0x000100083b20(&puStack_e0);
    puVar1 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    puVar6 = puStack_e0;
    func_0x000100083b20(&puStack_e0);
    func_0x000100083b20(auStack_b0);
    func_0x0001000285a8(0x112de76c8,&UNK_10d9b24a0);
    puVar8 = puStack_e0;
    func_0x000107c3fb68();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(puVar8);
    func_0x0001000285a8(0x112de76c0,&UNK_10d9b2490);
    uVar2 = auStack_b0[0];
    func_0x000107c50958();
    func_0x000107c61180();
    func_0x0001000bda74();
    func_0x000107c61170(uVar2);
    puStack_70 = &UNK_11068f4b8;
    ppuStack_68 = &PTR_DAT_11068f4d0;
    func_0x000107c61170(puStack_e0);
    func_0x000107c61170(auStack_b0[0]);
    func_0x0001000285a8(0x112f90390,&UNK_10dc085b0);
    func_0x000107c613fc();
    pcVar3 = FUN_1037889a4;
    func_0x0001000bdd8c(FUN_1037889a4,0);
    func_0x0001000a0a8c(0);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    FUN_103789b74(auStack_88,auStack_b0);
    puVar8 = &UNK_1106915d8;
    func_0x000107c613fc(&UNK_1106915d8,0x58,7);
    *(undefined **)(puVar8 + 0x10) = puVar1;
    *(undefined **)(puVar8 + 0x18) = puVar6;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    FUN_1037811ac(auStack_b0,puVar8 + 0x28);
    *(code **)(puVar8 + 0x50) = pcVar3;
    pcStack_c0 = FUN_103789708;
    puStack_e0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_d8 = 0x42000000;
    puStack_d0 = &UNK_101443eec;
    puStack_c8 = &UNK_1106915f0;
    puStack_b8 = puVar8;
    func_0x000107c60bc4(&puStack_e0);
    puVar8 = puStack_b8;
    func_0x000107c61174(puVar1);
    func_0x000107c61174(puVar6);
    func_0x000107c61174(puVar7);
    func_0x000107c6157c(pcVar3);
    func_0x000107c61574(puVar8);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar8 = puVar4;
    func_0x000100a0dc54(puVar4,0xd000000000000022,0x800000010f164320);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar7);
    func_0x000107c61574(pcVar3);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar1);
    func_0x0001000834e4(auStack_88);
  }
  *param_1 = puVar8;
  return;
}



/* Entry: 103789638; end: 103789707;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_103789638(long param_1,undefined8 param_2,long param_3,undefined8 param_4,undefined8 param_5,
             long *param_6,code *param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_b0 [56];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 auStack_68 [40];
  
  uVar1 = *(undefined8 *)(param_1 + *param_6);
  func_0x000107c61174(uVar1);
  func_0x000107c44580();
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(param_3 + _DAT_112fe2098);
  FUN_103789b74(param_4,auStack_68);
  uStack_78 = param_2;
  uStack_70 = uVar2;
  FUN_103789738(&uStack_78,auStack_b0);
  func_0x000107c61580(uVar2,2);
  func_0x000107c6157c(param_5);
  (*param_7)(uVar1,auStack_b0,uVar2,param_5);
  FUN_103789aac(&uStack_78);
  return uVar1;
}



/* Entry: 103789708; end: 103789737;  */

void FUN_103789708(void)

{
  long unaff_x20;
  
  FUN_103789638(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x50)
                ,&DAT_112fe20e8,0x103789910);
  return;
}



/* Entry: 103789738; end: 103789773;  */

undefined8 FUN_103789738(undefined8 param_1,undefined8 param_2)

{
  FUN_10376187c(param_2,param_1);
  return param_2;
}



/* Entry: 103789774; end: 103789aab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103789774(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined **ppuVar2;
  long lVar3;
  long lVar4;
  undefined **ppuVar5;
  long *plVar6;
  long extraout_x8;
  long extraout_x12;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long alStack_c0 [2];
  undefined **appuStack_b0 [8];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  puStack_70 = &UNK_11068f240;
  ppuStack_68 = &PTR_DAT_11068f3a0;
  ppuVar5 = (undefined **)&UNK_110691628;
  ppuVar2 = ppuVar5;
  func_0x000107c613fc(&UNK_110691628,0x48,7);
  puVar7 = (undefined *)*param_2;
  puVar9 = (undefined *)param_2[3];
  puVar8 = (undefined *)param_2[2];
  ppuVar2[3] = (undefined *)param_2[1];
  ppuVar2[2] = puVar7;
  ppuVar2[5] = puVar9;
  ppuVar2[4] = puVar8;
  puVar7 = (undefined *)param_2[4];
  ppuVar2[7] = (undefined *)param_2[5];
  ppuVar2[6] = puVar7;
  ppuVar2[8] = (undefined *)param_2[6];
  lVar3 = 0;
  appuStack_b0[5] = ppuVar2;
  FUN_103794ab8();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(appuStack_b0 + 5,&UNK_11068f240);
  (*(code *)PTR____chkstk_darwin_11034bd40)(0x38);
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))((undefined8 *)((long)alStack_c0 + lVar1));
  appuStack_b0[3] = (undefined **)&UNK_11068f240;
  appuStack_b0[4] = &PTR_DAT_11068f3a0;
  func_0x000107c613fc(&UNK_110691628,0x48,7);
  appuStack_b0[0] = ppuVar5;
  puVar7 = *(undefined **)((long)alStack_c0 + lVar1);
  puVar9 = *(undefined **)((long)alStack_c0 + lVar1 + 0x18);
  puVar8 = *(undefined **)((long)alStack_c0 + lVar1 + 0x10);
  ppuVar5[3] = *(undefined **)((long)alStack_c0 + lVar1 + 8);
  ppuVar5[2] = puVar7;
  ppuVar5[5] = puVar9;
  ppuVar5[4] = puVar8;
  puVar7 = *(undefined **)((long)alStack_c0 + lVar1 + 0x20);
  ppuVar5[7] = *(undefined **)((long)appuStack_b0 + lVar1 + 0x18);
  ppuVar5[6] = puVar7;
  ppuVar5[8] = *(undefined **)((long)appuStack_b0 + lVar1 + 0x20);
  *(undefined8 *)(lVar4 + _DAT_112f91ed8) = param_1;
  FUN_103789b74(alStack_c0 + 2,lVar4 + _DAT_112f91ee0);
  *(undefined8 *)(lVar4 + _DAT_112f91ee8) = param_3;
  *(undefined8 *)(lVar4 + _DAT_112f91ef0) = param_4;
  plVar6 = alStack_c0;
  alStack_c0[0] = lVar4;
  alStack_c0[1] = lVar3;
  func_0x000107c61154(plVar6,PTR_s_init_1125d9248);
  func_0x0001000834e4(alStack_c0 + 2);
  func_0x0001000834e4(appuStack_b0 + 5);
  return plVar6;
}



/* Entry: 103789aac; end: 103789adf;  */

undefined8 FUN_103789aac(undefined8 param_1)

{
  (*(code *)(undefined *)0x10376184c)();
  return param_1;
}



/* Entry: 103789ae0; end: 103789b23;  */

void FUN_103789ae0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x0001000834e4(unaff_x20 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103789b24; end: 103789b37;  */

void FUN_103789b24(void)

{
  long unaff_x20;
  
  FUN_103789638(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x50)
                ,&DAT_112fe20e0,FUN_103789774);
  return;
}



/* Entry: 103789b38; end: 103789b63;  */

void FUN_103789b38(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_103789638(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),unaff_x20 + 0x28,*(undefined8 *)(unaff_x20 + 0x50)
                ,param_1,param_2);
  return;
}



/* Entry: 103789b64; end: 103789b73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_103789b64(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long alStack_c0 [5];
  undefined *puStack_98;
  undefined **ppuStack_90;
  undefined8 auStack_88 [3];
  undefined *puStack_70;
  undefined **ppuStack_68;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar4 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112fe20d8);
  func_0x000107c5b034();
  func_0x000107c61180();
  uVar9 = *(undefined8 *)(lVar4 + _DAT_112fe2098);
  uVar8 = *(undefined8 *)(lVar3 + _DAT_112fe22c8);
  puStack_70 = &UNK_11068efc8;
  ppuStack_68 = &PTR_DAT_11068f090;
  lVar3 = 0;
  auStack_88[0] = uVar2;
  FUN_10379647c();
  lVar4 = lVar3;
  func_0x000107c610f8();
  func_0x0001000c6518(auStack_88,&UNK_11068efc8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(uRam0000000114146f40);
  puVar10 = (undefined8 *)((long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar10);
  alStack_c0[2] = *puVar10;
  puStack_98 = &UNK_11068efc8;
  ppuStack_90 = &PTR_DAT_11068f090;
  *(undefined8 *)(lVar4 + _DAT_112f91fa8) = uVar7;
  FUN_103789b74(alStack_c0 + 2,lVar4 + _DAT_112f91fb0);
  *(undefined8 *)(lVar4 + _DAT_112f91fb8) = uVar9;
  *(undefined8 *)(lVar4 + _DAT_112f91fc0) = uVar8;
  *(undefined8 *)(lVar4 + _DAT_112f91fc8) = uVar6;
  puVar1 = PTR_s_init_1125d9248;
  alStack_c0[0] = lVar4;
  alStack_c0[1] = lVar3;
  func_0x000107c61174(uVar7);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(uVar6);
  plVar5 = alStack_c0;
  func_0x000107c61154(plVar5,puVar1);
  func_0x0001000834e4(alStack_c0 + 2);
  func_0x0001000834e4(auStack_88);
  return plVar5;
}



/* Entry: 103789b74; end: 103789bb7;  */

long FUN_103789b74(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 103789bb8; end: 103789bc7;  */

void FUN_103789bb8(long param_1,long param_2)

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



/* Entry: 103789bc8; end: 103789d3f;  */

void FUN_103789bc8(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_2 < 4) {
    uVar3 = 0x4d676e69726f6373;
    uVar4 = 0xef6449746c757365;
    uVar2 = 0x52676e696b6e6172;
    if (param_2 != 2) {
      uVar4 = 0xe900000000000070;
      uVar2 = 0x6d617473656d6974;
    }
    uVar1 = 0xef4c52556c65646f;
    if (param_2 != 0) {
      uVar3 = 0xd000000000000011;
      uVar1 = 0x800000010f164420;
    }
    if (param_2 < 2) {
      uVar2 = uVar3;
      uVar4 = uVar1;
    }
  }
  else {
    uVar3 = 0x726f727265;
    if (param_2 != 7) {
      uVar3 = 0x7463616669747261;
    }
    uVar1 = 0xe500000000000000;
    if (param_2 != 7) {
      uVar1 = 0xe900000000000073;
    }
    uVar4 = 0xe900000000000064;
    uVar2 = 0x49746e65746e6f63;
    if (param_2 != 6) {
      uVar4 = uVar1;
      uVar2 = uVar3;
    }
    uVar3 = 0xed0000656372756f;
    if (param_2 != 4) {
      uVar3 = 0xef6449656372756f;
    }
    if (param_2 < 6) {
      uVar2 = 0x53676e696b6e6172;
      uVar4 = uVar3;
    }
  }
  func_0x000107c5fb58(param_1,uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 103789d40; end: 103789e1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103789d40(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar6 = 0;
  FUN_10378d110();
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[5] = 0;
  func_0x000107c5eea0((long)param_1 + (long)*(int *)(lVar6 + 0x24));
  uVar5 = *(uint *)(param_2 + _DAT_112fe2248);
  if (4 < uVar5) {
    uVar5 = 5;
  }
  iVar4 = *(int *)(lVar6 + 0x2c);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
  *(char *)((long)param_1 + (long)*(int *)(lVar6 + 0x28)) = (char)uVar5;
  puVar2 = (undefined8 *)(param_2 + _DAT_112fe2250);
  uVar7 = puVar2[1];
  uVar8 = *puVar2;
  param_1 = (undefined8 *)((long)param_1 + (long)iVar4);
  param_1[1] = puVar2[1];
  *param_1 = uVar8;
  uVar8 = *(undefined8 *)(param_2 + _DAT_112fe2258);
  uVar3 = ((undefined8 *)(param_2 + _DAT_112fe2258))[1];
  func_0x000107c61434(uVar3);
  func_0x000107c61434(uVar7);
  func_0x000107c61170(param_2);
  *puVar1 = uVar8;
  puVar1[1] = uVar3;
  return;
}



/* Entry: 103789e1c; end: 10378a133;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103789e1c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar9;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 *puVar17;
  long alStack_c0 [4];
  long lStack_a0;
  undefined *apuStack_98 [4];
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  alStack_c0[1] = param_1;
  func_0x000107c5f7fc();
  lStack_a0 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a0 + 0x40));
  lVar10 = (long)alStack_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  func_0x000107c5f824();
  alStack_c0[2] = *(long *)(lVar2 + -8);
  alStack_c0[3] = lVar2;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(alStack_c0[2] + 0x40));
  lVar12 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0x112f91758;
  func_0x0001000285a8(0x112f91758,&UNK_10dc09fa8);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)(lVar12 - extraout_x8_01);
  lVar3 = 0;
  FUN_10378d110();
  lVar13 = *(long *)(lVar3 + -8);
  lVar16 = *(long *)(lVar13 + 0x40);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar15 = (long)puVar17 - (lVar16 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar3 = lVar15 - extraout_x12;
  FUN_103791928(alStack_c0[1],puVar17);
  puVar4 = puVar17;
  func_0x000107c614c4(puVar17,lVar2);
  if ((int)puVar4 == 1) {
    uVar11 = *puVar17;
    func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f919a0));
    FUN_103789d40(lVar3);
    func_0x000107c614ac(*(undefined8 *)(lVar3 + 0x28));
    *(undefined8 *)(lVar3 + 0x28) = uVar11;
  }
  else {
    func_0x000103791978(puVar17,lVar3);
  }
  alStack_c0[1] = *(undefined8 *)(unaff_x20 + _DAT_112f919a8);
  FUN_10378703c(lVar3,lVar15);
  uVar9 = (ulong)*(byte *)(lVar13 + 0x50);
  uVar14 = uVar9 + 0x18 & (uVar9 ^ 0xffffffffffffffff);
  puVar5 = &UNK_1106919f8;
  func_0x000107c613fc(&UNK_1106919f8,uVar14 + lVar16,uVar9 | 7);
  *(long *)(puVar5 + 0x10) = unaff_x20;
  func_0x000103791978(lVar15,puVar5 + uVar14);
  pcStack_70 = FUN_1037919bc;
  apuStack_98[1] = PTR___NSConcreteStackBlock_11034bd00;
  apuStack_98[2] = (undefined *)0x42000000;
  apuStack_98[3] = &UNK_1000b0c7c;
  puStack_78 = &UNK_110691a10;
  ppuVar6 = apuStack_98 + 1;
  puStack_68 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  func_0x000107c61174();
  func_0x000107c5f808(lVar12);
  apuStack_98[0] = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar11 = 0x112d4af88;
  FUN_1037917b8(0x112d4af88,PTR___s8Dispatch0A13WorkItemFlagsVMa_11034f7b8,
                PTR___s8Dispatch0A13WorkItemFlagsVs10SetAlgebraAAMc_11034f7c8);
  uVar7 = 0x112d4af90;
  func_0x0001000285a8(0x112d4af90,&UNK_10d914100);
  uVar8 = 0x112d4af98;
  FUN_1037919ec(0x112d4af98,0x112d4af90,&UNK_10d914100);
  func_0x000107c60264(lVar10,apuStack_98,uVar7,uVar8,lVar1,uVar11);
  func_0x000107c5ffe8(0,lVar12,lVar10,ppuVar6);
  func_0x000107c60bd0(ppuVar6);
  (**(code **)(lStack_a0 + 8))(lVar10,lVar1);
  (**(code **)(alStack_c0[2] + 8))(lVar12,alStack_c0[3]);
  func_0x000103787080(lVar3);
  func_0x000107c61574(puStack_68);
  return;
}



/* Entry: 10378a134; end: 10378a29f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10378a134(long param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  FUN_10378d110();
  lVar5 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
  FUN_10378703c(param_2,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar1 = _DAT_112f919b0;
  func_0x000107c61428(param_1 + _DAT_112f919b0,auStack_68,0x21,0);
  uVar4 = *(ulong *)(param_1 + lVar1);
  uVar2 = uVar4;
  func_0x000107c61558();
  *(ulong *)(param_1 + lVar1) = uVar4;
  uVar3 = uVar4;
  if ((uVar2 & 1) == 0) {
    uVar3 = 0;
    FUN_103762b0c(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    *(ulong *)(param_1 + lVar1) = uVar3;
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  uVar4 = uVar3;
  if (*(ulong *)(uVar3 + 0x18) >> 1 <= uVar2) {
    uVar4 = (ulong)(1 < *(ulong *)(uVar3 + 0x18));
    FUN_103762b0c(uVar4,uVar2 + 1,1,uVar3);
  }
  *(ulong *)(uVar4 + 0x10) = uVar2 + 1;
  func_0x000103791978(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
                      uVar4 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                              ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)) +
                      *(long *)(lVar5 + 0x48) * uVar2);
  *(ulong *)(param_1 + lVar1) = uVar4;
  func_0x000107c614a8(auStack_68);
  if (4 < uVar2) {
    func_0x000107c61428(param_1 + lVar1,auStack_68,0x21,0);
    FUN_1037914d0(0,uVar2 - 4);
    func_0x000107c614a8(auStack_68);
  }
  return;
}



/* Entry: 10378a2a0; end: 10378a6ab;  */

/* WARNING: Removing unreachable block (ram,0x00010378a51c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10378a2a0(void)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  undefined1 *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  long extraout_x8;
  long extraout_x8_00;
  long lVar16;
  long extraout_x8_01;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  undefined1 auStack_c0 [8];
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_80 [2];
  long lStack_68;
  
  lVar3 = 0;
  FUN_10378d110();
  lVar20 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar20 + 0x40));
  puVar18 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  func_0x000107c5eb44();
  lVar21 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar21 + 0x40));
  lVar16 = (long)puVar18 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0;
  lStack_90 = lVar16;
  func_0x000107c5eb34();
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar16 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  uVar12 = 0x112f91c08;
  func_0x0001000285a8(0x112f91c08,&UNK_10dc0a630);
  func_0x000107c5ffe4(&lStack_68,FUN_1037918c8,alStack_80,uVar12);
  lVar3 = *(long *)(lStack_68 + 0x10);
  if (lVar3 == 0) {
    func_0x000107c6142c(lStack_68);
    puVar15 = (undefined *)0x0;
  }
  else {
    uVar6 = 0;
    lStack_a0 = lStack_68;
    func_0x000107c5eb54();
    func_0x000107c613fc();
    func_0x000107c5eb50();
    lVar7 = 0x112da9ee0;
    lStack_a8 = lVar20;
    func_0x0001000285a8(0x112da9ee0,&UNK_10d951230);
    lVar20 = *(long *)(lVar19 + 0x48);
    bVar2 = *(byte *)(lVar19 + 0x50);
    lStack_b0 = lVar4;
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 4;
    *(undefined8 *)(lVar7 + 0x10) = 2;
    lVar4 = lVar7 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
    lStack_b8 = lVar21;
    func_0x000107c5eb2c(lVar4);
    func_0x000107c5eb28(lVar4 + lVar20);
    uVar12 = 0x112da9ee8;
    alStack_80[0] = lVar7;
    FUN_1037917b8(0x112da9ee8,PTR___s10Foundation11JSONEncoderC16OutputFormattingVMa_110350378,
                  PTR___s10Foundation11JSONEncoderC16OutputFormattingVs10SetAlgebraAAMc_110350388);
    uVar8 = 0x112da9ef0;
    func_0x0001000285a8(0x112da9ef0,&UNK_10dc0a640);
    uVar9 = 0x112da9ef8;
    FUN_1037919ec(0x112da9ef8,0x112da9ef0,&UNK_10dc0a640);
    func_0x000107c60264(lVar16,alStack_80,uVar8,uVar9,lVar5,uVar12);
    func_0x000107c5eb38(lVar16);
    lVar4 = lStack_90;
    (**(code **)(lStack_b8 + 0x68))
              (lStack_90,
               *(undefined4 *)
                PTR___s10Foundation11JSONEncoderC20DateEncodingStrategyO7iso8601yA2EmFWC_1103503b8,
               lStack_b0);
    lStack_90 = uVar6;
    func_0x000107c5eb48(lVar4);
    lVar4 = lStack_a0 +
            ((ulong)*(byte *)(lStack_a8 + 0x50) + 0x20 &
            ((ulong)*(byte *)(lStack_a8 + 0x50) ^ 0xffffffffffffffff));
    lVar5 = *(long *)(lStack_a8 + 0x48);
    puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      lVar16 = lStack_98;
      FUN_10378703c(lVar4,puVar18);
      uVar12 = 0x112f91c10;
      FUN_1037917b8(0x112f91c10,FUN_10378d110,&UNK_10dc0a4d4);
      puVar10 = puVar18;
      func_0x000107c5eb4c(puVar18,lVar16,uVar12);
      puVar11 = puVar10;
      lVar19 = lVar16;
      FUN_10378a6ac();
      uVar12 = 0;
      func_0x000104071150(0);
      func_0x000107c610f8();
      func_0x000104070e3c(puVar11,lVar19,puVar10,lVar16,uVar12);
      func_0x000103787080(puVar18);
      if (puVar11 != (undefined1 *)0x0) {
        puVar14 = puVar15;
        func_0x000107c61550();
        if ((((int)puVar14 == 0) || ((long)puVar15 < 0)) ||
           (puVar14 = puVar15, ((ulong)puVar15 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar15 >> 0x3e == 0) {
            puVar13 = *(undefined **)(((ulong)puVar15 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar13 = (undefined *)((ulong)puVar15 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar15) {
              puVar13 = puVar15;
            }
            func_0x000107c60480(puVar13);
          }
          puVar14 = (undefined *)0x0;
          FUN_103762c88(0,puVar13 + 1,1,puVar15);
        }
        uVar17 = (ulong)puVar14 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar17 + 0x10);
        puVar15 = puVar14;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar1) {
          puVar15 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
          FUN_103762c88(puVar15,uVar1 + 1,1,puVar14);
          uVar17 = (ulong)puVar15 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar17 + 0x10) = uVar1 + 1;
        *(undefined1 **)(uVar17 + uVar1 * 8 + 0x20) = puVar11;
      }
      lVar4 = lVar4 + lVar5;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    func_0x000107c6142c(lStack_a0);
    func_0x000107c61574(lStack_90);
  }
  return puVar15;
}



/* Entry: 10378a6ac; end: 10378a89f;  */

undefined1  [16] FUN_10378a6ac(double param_1)

{
  byte bVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  uVar6 = 0xd000000000000010;
  lVar4 = 0;
  FUN_10378d110();
  func_0x000107c5ee8c((long)*(int *)(lVar4 + 0x24));
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10378a898);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < param_1) {
    if (param_1 < 9.223372036854776e+18) {
      puVar5 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar5);
      func_0x000107c5fb78(0x2d,0xe100000000000000);
      bVar1 = *(byte *)(unaff_x20 + *(int *)(lVar4 + 0x28));
      if (bVar1 < 3) {
        if (bVar1 == 0) {
          uVar7 = 0xe700000000000000;
          uVar6 = 0x6f745f646e6573;
        }
        else if (bVar1 == 1) {
          uVar7 = 0xec0000006f745f64;
          uVar6 = 0x6e65735f696e696d;
        }
        else {
          uVar7 = 0xeb00000000657261;
          uVar6 = 0x68735f6b63697571;
        }
      }
      else if (bVar1 == 3) {
        uVar7 = 0xec000000646e6573;
        uVar6 = 0x5f7061745f656e6f;
      }
      else if (bVar1 == 4) {
        uVar7 = 0x800000010f164110;
      }
      else {
        uVar7 = 0xe700000000000000;
        uVar6 = 0x6e776f6e6b6e75;
      }
      func_0x000107c5fb78(uVar6,uVar7);
      func_0x000107c6142c(uVar7);
      func_0x000107c5fb78(0x6e6f736a2e,0xe500000000000000);
      auVar2._8_8_ = 0x800000010f1643f0;
      auVar2._0_8_ = 0xd000000000000017;
      return auVar2;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10378a8a0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10378a89c);
  (*pcVar3)();
}



/* Entry: 10378a8a0; end: 10378a8ff; -[_TtC20SendToRankingRecents32RecentsShakeToReportInfoProvider provideMultipleShakeLogs] */

void FUN_10378a8a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_10378a2a0();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar3 = 0;
  }
  else {
    uVar2 = 0;
    func_0x000104071150(0);
    lVar3 = lVar1;
    func_0x000107c5fc48(lVar1,uVar2);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar3);
  return;
}



/* Entry: 10378a900; end: 10378a95f; -[_TtC20SendToRankingRecents32RecentsShakeToReportInfoProvider init] */

void FUN_10378a900(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SendToRankingRecents.RecentsShakeToReportInfoProvider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10378a92c);
  (*pcVar1)();
}



/* Entry: 10378a960; end: 10378a9a7; -[_TtC20SendToRankingRecents32RecentsShakeToReportInfoProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10378a960(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f919a0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f919a8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f919b0));
  return;
}



/* Entry: 10378a9a8; end: 10378aaff;  */

undefined1  [16] FUN_10378a9a8(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 4) {
    uVar4 = 0x4d676e69726f6373;
    uVar3 = 0xef6449746c757365;
    uVar1 = 0x52676e696b6e6172;
    if (param_1 != 2) {
      uVar3 = 0xe900000000000070;
      uVar1 = 0x6d617473656d6974;
    }
    uVar2 = 0xef4c52556c65646f;
    if (param_1 != 0) {
      uVar4 = 0xd000000000000011;
      uVar2 = 0x800000010f164420;
    }
    if (param_1 < 2) {
      uVar3 = uVar2;
      uVar1 = uVar4;
    }
    auVar6._8_8_ = uVar3;
    auVar6._0_8_ = uVar1;
    return auVar6;
  }
  uVar4 = 0x726f727265;
  if (param_1 != 7) {
    uVar4 = 0x7463616669747261;
  }
  uVar3 = 0xe500000000000000;
  if (param_1 != 7) {
    uVar3 = 0xe900000000000073;
  }
  uVar1 = 0xe900000000000064;
  uVar2 = 0x49746e65746e6f63;
  if (param_1 != 6) {
    uVar1 = uVar3;
    uVar2 = uVar4;
  }
  uVar4 = 0xed0000656372756f;
  if (param_1 != 4) {
    uVar4 = 0xef6449656372756f;
  }
  if (param_1 < 6) {
    uVar1 = uVar4;
    uVar2 = 0x53676e696b6e6172;
  }
  auVar5._8_8_ = uVar1;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Entry: 10378ab00; end: 10378ab43;  */

void FUN_10378ab00(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  FUN_103789bc8(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10378ab44; end: 10378ab4b;  */

void FUN_10378ab44(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 4) {
    uVar4 = 0x4d676e69726f6373;
    uVar5 = 0xef6449746c757365;
    uVar3 = 0x52676e696b6e6172;
    if (bVar2 != 2) {
      uVar5 = 0xe900000000000070;
      uVar3 = 0x6d617473656d6974;
    }
    uVar1 = 0xef4c52556c65646f;
    if (bVar2 != 0) {
      uVar4 = 0xd000000000000011;
      uVar1 = 0x800000010f164420;
    }
    if (bVar2 < 2) {
      uVar3 = uVar4;
      uVar5 = uVar1;
    }
  }
  else {
    uVar4 = 0x726f727265;
    if (bVar2 != 7) {
      uVar4 = 0x7463616669747261;
    }
    uVar1 = 0xe500000000000000;
    if (bVar2 != 7) {
      uVar1 = 0xe900000000000073;
    }
    uVar5 = 0xe900000000000064;
    uVar3 = 0x49746e65746e6f63;
    if (bVar2 != 6) {
      uVar5 = uVar1;
      uVar3 = uVar4;
    }
    uVar4 = 0xed0000656372756f;
    if (bVar2 != 4) {
      uVar4 = 0xef6449656372756f;
    }
    if (bVar2 < 6) {
      uVar3 = 0x53676e696b6e6172;
      uVar5 = uVar4;
    }
  }
  func_0x000107c5fb58(param_1,uVar3,uVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 10378ab4c; end: 10378abdf;  */

void FUN_10378ab4c(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68);
  FUN_103789bc8(auStack_68,uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 10378abe0; end: 10378abf7;  */

void FUN_10378abe0(void)

{
  undefined1 *unaff_x20;
  
  FUN_10378a9a8(*unaff_x20);
  return;
}



/* Entry: 10378abf8; end: 10378ac1b;  */

void FUN_10378abf8(undefined1 *param_1,undefined1 param_2)

{
  FUN_10379158c();
  *param_1 = param_2;
  return;
}



/* Entry: 10378ac1c; end: 10378ac33;  */

undefined1  [16] FUN_10378ac1c(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10378ac34; end: 10378ac83;  */

void FUN_10378ac34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_103791778();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10378ac84; end: 10378b3fb;  */

/* WARNING: Removing unreachable block (ram,0x00010378af6c) */
/* WARNING: Removing unreachable block (ram,0x00010378adf4) */
/* WARNING: Removing unreachable block (ram,0x00010378b3dc) */

void FUN_10378ac84(long param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  byte bVar4;
  int iVar5;
  code *pcVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined *puVar13;
  ulong uVar14;
  ulong uVar15;
  undefined *puVar16;
  long extraout_x8;
  undefined *puVar17;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  double dVar22;
  undefined1 auStack_d0 [8];
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_58;
  
  lVar7 = 0x112f91bc0;
  func_0x0001000285a8(0x112f91bc0,&UNK_10dc0a5f0);
  lVar21 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar21 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar18 = auStack_d0 + -extraout_x8;
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar9 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar8);
  FUN_103791778();
  func_0x000107c606ec(puVar18,&UNK_110691b38,&UNK_110691b38,param_1,uVar8,uVar9);
  puStack_70 = (undefined *)((ulong)puStack_70 & 0xffffffffffffff00);
  uVar8 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar9 = uVar8;
  func_0x000102aa8260();
  func_0x000107c60554();
  if (unaff_x21 != 0) {
    (**(code **)(lVar21 + 8))(puVar18,lVar7);
    return;
  }
  puStack_70._0_1_ = 1;
  func_0x000107c60554(unaff_x20 + 0x10,&puStack_70,lVar7,uVar8,uVar9);
  puStack_70._0_1_ = 2;
  func_0x000107c60520(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                      &puStack_70,lVar7);
  lVar10 = 0;
  FUN_10378d110();
  iVar5 = *(int *)(lVar10 + 0x24);
  puStack_70._0_1_ = 3;
  uVar11 = 0;
  func_0x000107c5eea4(0);
  uVar12 = 0x112d5e200;
  FUN_1037917b8(0x112d5e200,PTR___s10Foundation4DateVMa_110350bb8,
                PTR___s10Foundation4DateVSEAAMc_110350bc8);
  func_0x000107c60554(unaff_x20 + iVar5,&puStack_70,lVar7,uVar11,uVar12);
  bVar4 = *(byte *)(unaff_x20 + *(int *)(lVar10 + 0x28));
  if (bVar4 < 3) {
    if (bVar4 == 0) {
      uVar11 = 0xe700000000000000;
      uVar12 = 0x6f745f646e6573;
    }
    else if (bVar4 == 1) {
      uVar11 = 0xec0000006f745f64;
      uVar12 = 0x6e65735f696e696d;
    }
    else {
      uVar11 = 0xeb00000000657261;
      uVar12 = 0x68735f6b63697571;
    }
  }
  else if (bVar4 == 3) {
    uVar11 = 0xec000000646e6573;
    uVar12 = 0x5f7061745f656e6f;
  }
  else if (bVar4 == 4) {
    uVar11 = 0x800000010f164110;
    uVar12 = 0xd000000000000010;
  }
  else {
    uVar11 = 0xe700000000000000;
    uVar12 = 0x6e776f6e6b6e75;
  }
  puStack_70._0_1_ = 4;
  func_0x000107c6053c(uVar12,uVar11,&puStack_70,lVar7);
  func_0x000107c6142c(uVar11);
  puStack_70._0_1_ = 5;
  func_0x000107c60554(unaff_x20 + *(int *)(lVar10 + 0x2c),&puStack_70,lVar7,uVar8,uVar9);
  puVar2 = (undefined8 *)(unaff_x20 + *(int *)(lVar10 + 0x30));
  puVar13 = (undefined *)*puVar2;
  puStack_70 = (undefined *)CONCAT71(puStack_70._1_7_,6);
  func_0x000107c60520(puVar13,puVar2[1],&puStack_70,lVar7);
  if (*(undefined **)(unaff_x20 + 0x28) != (undefined *)0x0) {
    puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,7);
    puStack_70 = *(undefined **)(unaff_x20 + 0x28);
    FUN_103791888();
    puVar17 = &UNK_110691aa0;
LAB_10378b02c:
    func_0x000107c60554(&puStack_70,&puStack_58,lVar7,puVar17,puVar13);
    goto LAB_10378b334;
  }
  uVar19 = *(ulong *)(unaff_x20 + 0x20);
  if (uVar19 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
    if (uVar14 == 0) {
LAB_10378b380:
      puStack_70 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
      puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,8);
      puVar17 = (undefined *)0x112f91bd8;
      func_0x0001000285a8(0x112f91bd8,&UNK_10dc0a608);
      puVar13 = puVar17;
      func_0x0001037917f8();
      goto LAB_10378b02c;
    }
  }
  else {
    uVar14 = uVar19 & 0xffffffffffffff8;
    if ((uVar19 & 0x8000000000000000) != 0) {
      uVar14 = uVar19;
    }
    uVar20 = uVar14;
    func_0x000107c60480();
    if (uVar20 == 0) goto LAB_10378b380;
    func_0x000107c60480();
  }
  dVar22 = (double)(long)uVar14;
  func_0x000107c61058();
  dVar22 = (double)(long)dVar22 + 1.0;
  if (0x7fefffffffffffff < (ulong)ABS(dVar22)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10378b3d4);
    (*pcVar6)();
  }
  if (dVar22 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10378b3d8);
    (*pcVar6)();
  }
  if (9.223372036854776e+18 <= dVar22) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x10378b3dc);
    (*pcVar6)();
  }
  puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x0001037907a8(0,0,0);
  puVar13 = puStack_58;
  if (uVar19 >> 0x3e == 0) {
    uVar14 = *(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar14 = uVar19 & 0xffffffffffffff8;
    if ((uVar19 & 0x8000000000000000) != 0) {
      uVar14 = uVar19;
    }
    func_0x000107c60480();
  }
  if (uVar14 == 0) {
    puVar17 = *(undefined **)(puVar13 + 0x10);
    puVar16 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    if (puVar17 != (undefined *)0x0) goto LAB_10378b28c;
  }
  else {
    uVar20 = 0;
    do {
      if ((uVar19 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar19 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10378b360);
          (*pcVar6)();
        }
        uVar15 = *(ulong *)(uVar19 + uVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar15 = uVar20;
        FUN_10378e588(uVar20,uVar19);
      }
      puVar17 = PTR___sSiN_11034deb0;
      uVar1 = uVar20 + 1;
      if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10378b35c);
        (*pcVar6)();
      }
      puStack_70 = (undefined *)0x3025;
      uStack_68 = 0xe200000000000000;
      puVar16 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
      func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar16);
      func_0x000107c5fb78(100,0xe100000000000000);
      uVar8 = uStack_68;
      puVar16 = puStack_70;
      lVar10 = 0x112d36008;
      func_0x0001000285a8(0x112d36008,&UNK_10d900720);
      func_0x000107c613fc();
      *(undefined8 *)(lVar10 + 0x18) = 2;
      *(undefined8 *)(lVar10 + 0x10) = 1;
      *(undefined **)(lVar10 + 0x38) = puVar17;
      *(undefined **)(lVar10 + 0x40) = PTR___sSis7CVarArgsWP_11034df08;
      *(ulong *)(lVar10 + 0x20) = uVar1;
      uVar9 = uVar8;
      func_0x000107c5fb00(puVar16,uVar8,lVar10);
      func_0x000107c6142c(uVar8);
      uVar3 = *(ulong *)(puVar13 + 0x10);
      puVar17 = (undefined *)(uVar3 + 1);
      puStack_58 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar3) {
        func_0x0001037907a8(1 < *(ulong *)(puVar13 + 0x18),puVar17,1);
      }
      *(undefined **)(puStack_58 + 0x10) = puVar17;
      *(undefined **)(puStack_58 + uVar3 * 0x18 + 0x20) = puVar16;
      *(undefined8 *)(puStack_58 + uVar3 * 0x18 + 0x28) = uVar9;
      *(ulong *)(puStack_58 + uVar3 * 0x18 + 0x30) = uVar15;
      uVar20 = uVar20 + 1;
      puVar13 = puStack_58;
    } while (uVar1 != uVar14);
LAB_10378b28c:
    func_0x0001000285a8(0x112f91bd0,&UNK_10dc0a600);
    func_0x000107c60498();
    puVar16 = puVar17;
  }
  puStack_70 = puVar16;
  func_0x000107c6157c(puVar13);
  FUN_103790fdc();
  func_0x000107c61574(puVar13);
  puVar13 = puStack_70;
  puStack_58 = (undefined *)CONCAT71(puStack_58._1_7_,8);
  uVar8 = 0x112f91bd8;
  func_0x0001000285a8(0x112f91bd8,&UNK_10dc0a608);
  uVar9 = uVar8;
  func_0x0001037917f8();
  func_0x000107c60554(&puStack_70,&puStack_58,lVar7,uVar8,uVar9);
  func_0x000107c61574(puVar13);
LAB_10378b334:
  (**(code **)(lVar21 + 8))(puVar18,lVar7);
  return;
}



/* Entry: 10378b3fc; end: 10378b40f;  */

void FUN_10378b3fc(void)

{
  FUN_10378ac84();
  return;
}



/* Entry: 10378b410; end: 10378b62f;  */

void FUN_10378b410(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar5 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x65646f63;
  if (bVar5 != 2) {
    uVar1 = 0x6e69616d6f64;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar3 = 0x726f727265;
  if (bVar5 != 0) {
    uVar3 = 0x697463656c666572;
  }
  uVar4 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xea00000000006e6f;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c606a8();
  return;
}



/* Entry: 10378b630; end: 10378b713;  */

void FUN_10378b630(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  byte *unaff_x20;
  
  bVar5 = *unaff_x20;
  uVar1 = 0x65646f63;
  if (bVar5 != 2) {
    uVar1 = 0x6e69616d6f64;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5 != 2) {
    uVar2 = 0xe600000000000000;
  }
  uVar3 = 0x726f727265;
  if (bVar5 != 0) {
    uVar3 = 0x697463656c666572;
  }
  uVar4 = 0xe500000000000000;
  if (bVar5 != 0) {
    uVar4 = 0xea00000000006e6f;
  }
  if (bVar5 < 2) {
    uVar2 = uVar4;
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Entry: 10378b714; end: 10378b737;  */

void FUN_10378b714(undefined1 *param_1,undefined1 param_2)

{
  func_0x0001037915f0();
  *param_1 = param_2;
  return;
}



/* Entry: 10378b738; end: 10378b74f;  */

undefined1  [16] FUN_10378b738(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10378b750; end: 10378b79f;  */

void FUN_10378b750(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  func_0x000103791ee8();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10378b7a0; end: 10378b9eb;  */

void FUN_10378b7a0(long param_1,ulong param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  long extraout_x8;
  long unaff_x21;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  ulong uStack_78;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  
  lVar2 = 0x112f91d48;
  func_0x0001000285a8(0x112f91d48,&UNK_10dc0a8b8);
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar3);
  func_0x000103791ee8();
  func_0x000107c606ec(puVar7,&UNK_110691c48,&UNK_110691c48,param_1,uVar3,uVar1);
  func_0x000107c614cc(param_2,auStack_58,auStack_70);
  func_0x000107c614b0(param_2);
  uVar3 = uStack_60;
  func_0x000107c60640(uStack_68,uStack_60);
  uStack_78 = uStack_78 & 0xffffffffffffff00;
  func_0x000107c6053c();
  func_0x000107c6142c(uVar3);
  if (unaff_x21 == 0) {
    uVar3 = 0x112d393f0;
    uStack_78 = param_2;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c5fb20(&uStack_78,uVar3);
    uStack_78._0_1_ = 1;
    func_0x000107c6053c();
    func_0x000107c6142c(uVar3);
    uVar4 = param_2;
    func_0x000107c5ed2c(param_2);
    uVar5 = uVar4;
    func_0x000107c3fcb0();
    func_0x000107c61170(uVar4);
    uStack_78._0_1_ = 2;
    puVar6 = &uStack_78;
    func_0x000107c6054c(uVar5,puVar6,lVar2);
    func_0x000107c5ed2c(param_2);
    uVar4 = param_2;
    func_0x000107c42210();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    uVar5 = uVar4;
    func_0x000107c5faec(uVar4);
    func_0x000107c61170(uVar4);
    uStack_78._0_1_ = 3;
    func_0x000107c6053c(uVar5,puVar6,&uStack_78,lVar2);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
    func_0x000107c6142c(puVar6);
  }
  else {
    func_0x000107c614ac(param_2);
    (**(code **)(lVar8 + 8))(puVar7,lVar2);
  }
  return;
}



/* Entry: 10378b9ec; end: 10378ba03;  */

void FUN_10378b9ec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10378b7a0(param_1,*unaff_x20);
  return;
}



/* Entry: 10378ba04; end: 10378ba13;  */

void FUN_10378ba04(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 10378ba14; end: 10378bbff;  */

void FUN_10378ba14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar1 = 0x65726f6373;
  if (cVar4 != '\x01') {
    uVar1 = 0x7365727574616566;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0xe900000000000074;
  uVar5 = 0x6e65697069636572;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar5,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10378bc00; end: 10378bcbb;  */

void FUN_10378bc00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined8 uVar5;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar1 = 0x65726f6373;
  if (cVar4 != '\x01') {
    uVar1 = 0x7365727574616566;
  }
  uVar2 = 0xe500000000000000;
  if (cVar4 != '\x01') {
    uVar2 = 0xe800000000000000;
  }
  uVar3 = 0xe900000000000074;
  uVar5 = 0x6e65697069636572;
  if (cVar4 != '\0') {
    uVar3 = uVar2;
    uVar5 = uVar1;
  }
  *param_1 = uVar5;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10378bcbc; end: 10378bce7;  */

void FUN_10378bcbc(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_10379170c(param_2,param_3,0x112f91ac8);
  *param_1 = (char)param_2;
  return;
}



/* Entry: 10378bce8; end: 10378bcf3;  */

undefined1  [16] FUN_10378bce8(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10378bcf4; end: 10378bd43;  */

void FUN_10378bcf4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10378bf14();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10378bd44; end: 10378bf13;  */

/* WARNING: Removing unreachable block (ram,0x00010378be84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10378bd44(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar6;
  long lVar7;
  undefined1 auStack_70 [15];
  undefined1 uStack_61;
  ulong auStack_60 [2];
  
  lVar2 = 0x112f91978;
  func_0x0001000285a8(0x112f91978,&UNK_10dc0a1b0);
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = auStack_70 + -extraout_x8;
  uVar4 = *(undefined8 *)(param_1 + 0x18);
  uVar3 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar4);
  FUN_10378bf14();
  func_0x000107c606ec(puVar6,&UNK_1106919d8,&UNK_1106919d8,param_1,uVar4,uVar3);
  lVar1 = _DAT_112fe2200;
  auStack_60[0] = auStack_60[0] & 0xffffffffffffff00;
  uVar3 = 0;
  FUN_103791f28(0,0x112d726d8,&PTR_PTR_1126b5438);
  uVar4 = uVar3;
  func_0x00010378bf54();
  func_0x000107c60554(unaff_x20 + lVar1,auStack_60,lVar2,uVar3,uVar4);
  if (unaff_x21 == 0) {
    auStack_60[0] = CONCAT71(auStack_60[0]._1_7_,1);
    puVar5 = auStack_60;
    func_0x000107c60544(*(undefined8 *)(unaff_x20 + _DAT_112fe2208),puVar5,lVar2);
    auStack_60[0] = *(ulong *)(unaff_x20 + _DAT_112fe2210);
    auStack_60[1] = 0;
    uStack_61 = 2;
    FUN_103787150();
    func_0x000107c60554(auStack_60,&uStack_61,lVar2,&UNK_110691940,puVar5);
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar6,lVar2);
  }
  return;
}



/* Entry: 10378bf14; end: 10378bfa7;  */

void FUN_10378bf14(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a574;
  func_0x000107c61520(&UNK_10dc0a574,&UNK_1106919d8);
  puRam0000000112f91980 = puVar1;
  return;
}



/* Entry: 10378bfa8; end: 10378bfc7;  */

void FUN_10378bfa8(void)

{
  FUN_10378bd44();
  return;
}



/* Entry: 10378bfc8; end: 10378c18f;  */

void FUN_10378bfc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar3 = 0x65707974;
  if (cVar4 != '\x01') {
    uVar3 = 0x4e79616c70736964;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000656d61;
  }
  uVar2 = 0x6469;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe200000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 10378c190; end: 10378c233;  */

void FUN_10378c190(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  
  cVar4 = *unaff_x20;
  uVar3 = 0x65707974;
  if (cVar4 != '\x01') {
    uVar3 = 0x4e79616c70736964;
  }
  uVar1 = 0xe400000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xeb00000000656d61;
  }
  uVar2 = 0x6469;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe200000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  *param_1 = uVar2;
  param_1[1] = uVar3;
  return;
}



/* Entry: 10378c234; end: 10378c25f;  */

void FUN_10378c234(undefined1 *param_1,undefined4 param_2,undefined8 param_3)

{
  FUN_10379170c(param_2,param_3,0x112f91b58);
  *param_1 = (char)param_2;
  return;
}



/* Entry: 10378c260; end: 10378c26b;  */

undefined1  [16] FUN_10378c260(void)

{
  return ZEXT816(1) << 0x40;
}



/* Entry: 10378c26c; end: 10378c2bb;  */

void FUN_10378c26c(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10378c820();
                    /* WARNING: Could not recover jumptable at 0x00010bdb9df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss9CodingKeyPsE16debugDescriptionSSvg_11034f128)(param_1,uVar1);
  return;
}



/* Entry: 10378c2bc; end: 10378c81f;  */

void FUN_10378c2bc(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  long extraout_x8;
  undefined8 unaff_x20;
  long unaff_x21;
  undefined1 *puVar16;
  undefined1 auStack_100 [8];
  long lStack_f8;
  undefined1 uStack_c1;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  lVar3 = 0x112f91990;
  func_0x0001000285a8(0x112f91990,&UNK_10dc0a1b8);
  lVar15 = *(long *)(lVar3 + -8);
  lStack_f8 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_100 + -extraout_x8;
  uVar13 = *(undefined8 *)(param_1 + 0x18);
  uVar14 = *(undefined8 *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar13);
  FUN_10378c820();
  func_0x000107c606ec(puVar16,&UNK_1106918c8,&UNK_1106918c8,param_1,uVar13,uVar14);
  puStack_70 = (undefined *)0x0;
  uStack_68 = 0;
  puStack_80 = (undefined *)0x0;
  uStack_78 = 0;
  puStack_90 = (undefined *)0x0;
  uStack_88 = 0;
  puVar4 = &UNK_1106916f0;
  func_0x000107c613fc(&UNK_1106916f0,0x28,7);
  *(undefined ***)(puVar4 + 0x10) = &puStack_70;
  *(undefined ***)(puVar4 + 0x18) = &puStack_80;
  *(undefined ***)(puVar4 + 0x20) = &puStack_90;
  puVar5 = &UNK_110691718;
  func_0x000107c613fc(&UNK_110691718,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_10378c934;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_a0 = FUN_10378c940;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_10131cd50;
  puStack_a8 = &UNK_110691730;
  ppuVar6 = &puStack_c0;
  puStack_98 = puVar5;
  func_0x000107c60bc4(ppuVar6);
  puVar7 = puStack_98;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_110691768;
  func_0x000107c613fc(&UNK_110691768,0x28,7);
  *(undefined ***)(puVar7 + 0x10) = &puStack_70;
  *(undefined ***)(puVar7 + 0x18) = &puStack_80;
  *(undefined ***)(puVar7 + 0x20) = &puStack_90;
  puVar8 = &UNK_110691790;
  func_0x000107c613fc(&UNK_110691790,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_10378ca40;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_a0 = FUN_10378ca4c;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_10131ce88;
  puStack_a8 = &UNK_1106917a8;
  ppuVar9 = &puStack_c0;
  puStack_98 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_98;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_1106917e0;
  func_0x000107c613fc(&UNK_1106917e0,0x28,7);
  *(undefined ***)(puVar10 + 0x10) = &puStack_70;
  *(undefined ***)(puVar10 + 0x18) = &puStack_80;
  *(undefined ***)(puVar10 + 0x20) = &puStack_90;
  puVar11 = &UNK_110691808;
  func_0x000107c613fc(&UNK_110691808,0x20,7);
  *(code **)(puVar11 + 0x10) = FUN_10378cb40;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_a0 = FUN_10378cb4c;
  puStack_c0 = puVar1;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_102424808;
  puStack_a8 = &UNK_110691820;
  ppuVar12 = &puStack_c0;
  puStack_98 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar1 = puStack_98;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar1);
  func_0x000107c4c72c(unaff_x20);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uStack_b8 = uStack_68;
  puStack_c0 = puStack_70;
  uStack_c1 = 0;
  uVar13 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar14 = uVar13;
  func_0x000102aa8260();
  lVar3 = lStack_f8;
  func_0x000107c60554(&puStack_c0,&uStack_c1,lStack_f8,uVar13,uVar14);
  if (unaff_x21 == 0) {
    uStack_b8 = uStack_78;
    puStack_c0 = puStack_80;
    uStack_c1 = 1;
    func_0x000107c60554(&puStack_c0,&uStack_c1,lVar3,uVar13,uVar14);
    uStack_b8 = uStack_88;
    puStack_c0 = puStack_90;
    uStack_c1 = 2;
    func_0x000107c60554(&puStack_c0,&uStack_c1,lVar3,uVar13,uVar14);
    (**(code **)(lVar15 + 8))(puVar16,lVar3);
    func_0x000107c6142c(uStack_88);
    func_0x000107c6142c(uStack_78);
    uVar13 = uStack_68;
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar13);
    puVar4 = puVar5;
    func_0x000107c61544(puVar5,"",0x69,0xb5,0x1a,1);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378c81c);
      (*pcVar2)();
    }
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",0x69,0xb9,0x1b,1);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378c820);
      (*pcVar2)();
    }
    puVar4 = puVar11;
    func_0x000107c61544(puVar11,"",0x69,0xbd,0x22,1);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378c80c);
      (*pcVar2)();
    }
  }
  else {
    (**(code **)(lVar15 + 8))(puVar16,lVar3);
    func_0x000107c6142c(uStack_88);
    func_0x000107c6142c(uStack_78);
    uVar13 = uStack_68;
    func_0x000107c61574(puVar4);
    func_0x000107c6142c(uVar13);
    puVar4 = puVar5;
    func_0x000107c61544(puVar5,"",0x69,0xb5,0x1a,1);
    func_0x000107c61574(puVar7);
    func_0x000107c61574(puVar5);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378c810);
      (*pcVar2)();
    }
    puVar4 = puVar8;
    func_0x000107c61544(puVar8,"",0x69,0xb9,0x1b,1);
    func_0x000107c61574(puVar10);
    func_0x000107c61574(puVar8);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378c814);
      (*pcVar2)();
    }
    puVar4 = puVar11;
    func_0x000107c61544(puVar11,"",0x69,0xbd,0x22,1);
    func_0x000107c61574(puVar11);
    if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10378c818);
      (*pcVar2)();
    }
  }
  return;
}



/* Entry: 10378c820; end: 10378c85f;  */

void FUN_10378c820(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f91998 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dc0a4fc;
  func_0x000107c61520(&UNK_10dc0a4fc,&UNK_1106918c8);
  puRam0000000112f91998 = puVar1;
  return;
}



/* Entry: 10378c860; end: 10378c933;  */

/* WARNING: Possible PIC construction at 0x00010378c8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378c8c8) */
/* WARNING: Removing unreachable block (ram,0x00010378c90c) */
/* WARNING: Removing unreachable block (ram,0x00010378c8f0) */
/* WARNING: Removing unreachable block (ram,0x00010378c914) */

void FUN_10378c860(long param_1,long param_2)

{
  long lVar1;
  long *in_x5;
  long lVar2;
  
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    param_2 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = in_x5[1];
  *in_x5 = lVar2;
  in_x5[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 10378c934; end: 10378c93f;  */

/* WARNING: Possible PIC construction at 0x00010378c8c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378c8c8) */
/* WARNING: Removing unreachable block (ram,0x00010378c90c) */
/* WARNING: Removing unreachable block (ram,0x00010378c8f0) */
/* WARNING: Removing unreachable block (ram,0x00010378c914) */

void FUN_10378c934(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  func_0x000107c5d984();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
    param_2 = 0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar2 = plVar1[1];
  *plVar1 = lVar3;
  plVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 10378c940; end: 10378c95f;  */

void FUN_10378c940(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10378c960; end: 10378c97b;  */

void FUN_10378c960(long param_1,long param_2)

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



/* Entry: 10378c97c; end: 10378ca3f;  */

/* WARNING: Possible PIC construction at 0x00010378c9d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010378ca18) */
/* WARNING: Removing unreachable block (ram,0x00010378c9fc) */
/* WARNING: Removing unreachable block (ram,0x00010378ca20) */

void FUN_10378c97c(undefined8 param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c444fc();
  func_0x000107c61180();
  uVar1 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar2 = param_3[1];
  *param_3 = uVar1;
  param_3[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10378ca40; end: 10378ca4b;  */

/* WARNING: Possible PIC construction at 0x00010378c9d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010378ca18) */
/* WARNING: Removing unreachable block (ram,0x00010378c9fc) */
/* WARNING: Removing unreachable block (ram,0x00010378ca20) */

void FUN_10378ca40(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  func_0x000107c444fc();
  func_0x000107c61180();
  uVar2 = param_1;
  func_0x000107c5faec();
  func_0x000107c61170(param_1);
  uVar3 = puVar1[1];
  *puVar1 = uVar2;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 10378ca4c; end: 10378ca6b;  */

void FUN_10378ca4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10378ca6c; end: 10378cb3f;  */

/* WARNING: Possible PIC construction at 0x00010378cad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378cad4) */
/* WARNING: Removing unreachable block (ram,0x00010378cb18) */
/* WARNING: Removing unreachable block (ram,0x00010378cafc) */
/* WARNING: Removing unreachable block (ram,0x00010378cb20) */

void FUN_10378ca6c(long param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  
  plVar3 = param_2;
  func_0x000107c44c54();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    plVar3 = (long *)0x0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar1 = param_2[1];
  *param_2 = lVar2;
  param_2[1] = (long)plVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar1);
  return;
}



/* Entry: 10378cb40; end: 10378cb4b;  */

/* WARNING: Possible PIC construction at 0x00010378cad0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010378cad4) */
/* WARNING: Removing unreachable block (ram,0x00010378cb18) */
/* WARNING: Removing unreachable block (ram,0x00010378cafc) */
/* WARNING: Removing unreachable block (ram,0x00010378cb20) */

void FUN_10378cb40(long param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  long *plVar4;
  
  plVar1 = *(long **)(unaff_x20 + 0x10);
  plVar4 = plVar1;
  func_0x000107c44c54(param_1,plVar1,*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar3 = 0;
    plVar4 = (long *)0x0;
  }
  else {
    lVar3 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  lVar2 = plVar1[1];
  *plVar1 = lVar3;
  plVar1[1] = (long)plVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(lVar2);
  return;
}



/* Entry: 10378cb4c; end: 10378cb6b;  */

void FUN_10378cb4c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10378cb6c; end: 10378cb8b;  */

void FUN_10378cb6c(void)

{
  FUN_10378c2bc();
  return;
}



/* Entry: 10378cb8c; end: 10378cbab;  */

void FUN_10378cb8c(void)

{
  func_0x000107c61168(&PTR_PTR_1128e9f08);
  return;
}


