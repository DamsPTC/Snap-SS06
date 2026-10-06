/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10281df64; end: 10281e5f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10281df64(undefined *param_1,undefined8 param_2,byte param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long unaff_x20;
  long lVar16;
  long lStack_e0;
  undefined8 uStack_d0;
  undefined *apuStack_b0 [3];
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar16 = *(long *)(unaff_x20 + _DAT_112ec35e0);
  lVar2 = lVar16;
  uStack_d0 = param_2;
  func_0x000107c4ce08(lVar16,param_2,param_1);
  func_0x000107c61180();
  lVar3 = lVar2;
  lVar7 = lVar2;
  if ((param_3 & 1) == 0) {
    func_0x000107c4f860();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x000107c4f854();
      func_0x000107c61180();
      if (lVar4 == 0) goto LAB_10281e2c0;
      lStack_e0 = lVar4;
      func_0x000107c5faec();
      uVar14 = uStack_d0;
      func_0x000107c61170(lVar4);
      func_0x000107c3f908();
      func_0x000107c61180();
      if (lVar7 != 0) goto LAB_10281e06c;
      func_0x000107c61170(lVar3);
      func_0x000107c6142c(uStack_d0);
    }
  }
  else {
    func_0x000107c4c930();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar2;
      func_0x000107c3dc7c();
      func_0x000107c61180();
      if (lVar4 != 0) {
        lStack_e0 = lVar4;
        func_0x000107c5faec();
        uVar14 = uStack_d0;
        func_0x000107c61170(lVar4);
        func_0x000107c40258();
        func_0x000107c61180();
LAB_10281e06c:
        lVar4 = lVar7;
        func_0x000107c5faec();
        func_0x000107c61170(lVar7);
        lVar7 = lVar3;
        func_0x000107c4ca5c();
        iVar1 = (int)lVar7;
        func_0x0001085436b8();
        puVar5 = PTR_PTR_1126c6a48;
        func_0x000107c610f8();
        func_0x000107c453e4();
        puVar6 = PTR__OBJC_CLASS___NSNumber_1126ae570;
        func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
        func_0x000107c45a48();
        func_0x000107c557bc(puVar5);
        func_0x000107c61170(puVar6);
        puVar6 = PTR_PTR_1126c6a50;
        func_0x000107c610f8();
        func_0x000107c453e4();
        if (iVar1 != 0) {
          lVar7 = *(long *)(unaff_x20 + _DAT_112ec35d8);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar7 != 0) {
            lVar8 = lVar7;
            func_0x000107c509b4();
            func_0x000107c61180();
            func_0x000107c615e8(lVar7);
            if (lVar8 != 0) {
              lVar7 = lVar8;
              func_0x0001065c2f88(lVar8,*(undefined8 *)(unaff_x20 + _DAT_112ec35d0));
              func_0x000107c61180();
              if (lVar7 != 0) {
                func_0x000107c5942c(puVar6);
                func_0x000107c615e8(lVar8);
                lVar8 = lVar7;
              }
              func_0x000107c615e8(lVar8);
            }
          }
        }
        uVar9 = *(undefined8 *)(unaff_x20 + _DAT_112ec35c8);
        func_0x000107c5c734(uVar9);
        func_0x000107c61180();
        func_0x000107c54244(puVar6);
        func_0x000107c615e8(uVar9);
        lVar7 = lVar4;
        FUN_10281e8f8(lVar4,uVar14);
        puStack_90 = param_1;
        func_0x000100087c34(&puStack_90);
        puVar10 = &UNK_110553720;
        func_0x000107c613fc(&UNK_110553720,0x40,7);
        *(long *)(puVar10 + 0x10) = lVar16;
        puVar10[0x18] = param_3 & 1;
        *(long *)(puVar10 + 0x20) = lVar4;
        *(undefined8 *)(puVar10 + 0x28) = uVar14;
        *(long *)(puVar10 + 0x30) = lStack_e0;
        *(undefined8 *)(puVar10 + 0x38) = uStack_d0;
        uVar11 = 0;
        FUN_10281f04c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
        func_0x000107c615f0(lVar16);
        func_0x000107c61434(uVar14);
        uVar9 = 0x10281efe4;
        func_0x0001000bfde0(0x10281efe4,puVar10,uVar11);
        func_0x000107c61574(puVar10);
        func_0x0001004575f0();
        func_0x000107c61574(uVar9);
        puVar12 = puVar10;
        func_0x000107c421ac(puVar10);
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar10 = puVar12;
        func_0x000107c5cb24(puVar12);
        func_0x000107c61180();
        func_0x000107c61170(puVar12);
        func_0x000107c564b4(puVar6);
        func_0x000107c61170(puVar10);
        if ((param_3 & 1) == 0) {
          puVar10 = &UNK_1105536a8;
          func_0x000107c613fc(&UNK_1105536a8,0x18,7);
          func_0x000107c61614(puVar10 + 0x10,unaff_x20);
          puVar12 = &UNK_110553748;
          func_0x000107c613fc(&UNK_110553748,0x28,7);
          *(undefined **)(puVar12 + 0x10) = puVar10;
          *(undefined **)(puVar12 + 0x18) = param_1;
          *(undefined8 *)(puVar12 + 0x20) = param_2;
          uStack_70 = 0x10281eff8;
          puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x42000000;
          pcStack_80 = FUN_10281e828;
          puStack_78 = &UNK_110553760;
          ppuVar13 = &puStack_90;
          puStack_68 = puVar12;
          func_0x000107c60bc4(ppuVar13);
          puVar10 = puStack_68;
          func_0x000107c61174(param_1);
          func_0x000107c61174(param_2);
          func_0x000107c61574(puVar10);
          func_0x000107c56ea0(puVar6);
          func_0x000107c60bd0(ppuVar13);
          lVar16 = *(long *)(unaff_x20 + _DAT_112ec35b8);
          if (lVar16 == 0) {
            func_0x000107c6142c(uVar14);
            uVar14 = 0;
          }
          else {
            func_0x0001000285a8(0x112ec2498,&UNK_10dae3650);
            func_0x000107c61174(lVar16);
            lVar8 = lVar16;
            func_0x0001000b637c();
            func_0x000107c61170(lVar16);
            puVar10 = &UNK_110553798;
            func_0x000107c613fc(&UNK_110553798,0x20,7);
            *(long *)(puVar10 + 0x10) = lVar4;
            *(undefined8 *)(puVar10 + 0x18) = uVar14;
            uVar14 = 0x10281f004;
            func_0x0001000c0ebc(0x10281f004,puVar10);
            func_0x000107c61574(lVar8);
            func_0x000107c61574(puVar10);
            uVar11 = 0;
            FUN_10281f04c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
            uVar9 = 0x10281f0d4;
            func_0x0001000bfde0(0x10281f0d4,0,uVar11);
            func_0x000107c61574(uVar14);
            func_0x0001004575f0();
            func_0x000107c61574(uVar9);
            uVar9 = uVar14;
            func_0x000107c421ac(uVar14);
            func_0x000107c61180();
            func_0x000107c61170(uVar14);
            uVar14 = uVar9;
            func_0x000107c5cb24(uVar9);
            func_0x000107c61180();
            func_0x000107c61170(uVar9);
          }
          func_0x000107c56660(puVar6);
          func_0x000107c61170(uVar14);
        }
        else {
          func_0x000107c6142c(uVar14);
        }
        uVar14 = 0x112ec3630;
        uVar11 = 0;
        FUN_10281f04c(0,0x112ec3630,&PTR_PTR_1126c6a58);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        uVar9 = uVar11;
        func_0x000107c5faec();
        func_0x000107c61170(uVar11);
        uVar11 = 0;
        FUN_10281f04c(0,0x112ec3638,&PTR_PTR_1126c6a48);
        uVar15 = 0;
        puStack_90 = puVar5;
        puStack_78 = (undefined *)uVar11;
        FUN_10281f04c(0,0x112ec3640,&PTR_PTR_1126c6a50);
        apuStack_b0[0] = puVar6;
        uStack_98 = uVar15;
        func_0x000107c610f8(PTR_PTR_1126c67d8);
        func_0x000107c61174(puVar5);
        func_0x000107c61174(puVar6);
        FUN_1027efbc4(uVar9,uVar14,&puStack_90,apuStack_b0);
        func_0x000107c615e8(lVar2);
        func_0x000107c61574(lVar7);
        func_0x000107c61170(puVar6);
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar3);
        return uVar9;
      }
LAB_10281e2c0:
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
      return 0;
    }
  }
  func_0x000107c615e8(lVar2);
  return 0;
}



/* Entry: 10281e5f8; end: 10281e7ab;  */

void FUN_10281e5f8(undefined8 *param_1,undefined8 *param_2,long param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  
  func_0x000107c4ce08(param_3,param_3,*param_2);
  func_0x000107c61180();
  lVar1 = param_3;
  if ((param_4 & 1) == 0) {
    func_0x000107c4f860();
  }
  else {
    func_0x000107c4c930();
  }
  func_0x000107c61180();
  if (lVar1 == 0) {
    FUN_10281f04c();
    puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000107c600f0();
    func_0x000107c615e8(param_3);
  }
  else {
    func_0x000107c5fadc(param_5,param_6);
    func_0x000107c5fadc(param_7,param_8);
    lVar2 = param_3;
    func_0x000107c40674(param_3);
    func_0x000107c61180();
    lVar3 = lVar1;
    func_0x000107c5caf0();
    func_0x000107c61180();
    func_0x000107c61170(param_5);
    func_0x000107c61170(param_7);
    func_0x000107c61170(lVar2);
    puVar5 = (undefined *)0x112d38dc0;
    func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
    func_0x000107c613fc();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    uVar4 = 0;
    FUN_10281f04c(0,0x112ec3648,&PTR_PTR_1126d9fa8);
    *(undefined8 *)(puVar5 + 0x38) = uVar4;
    *(long *)(puVar5 + 0x20) = lVar3;
    FUN_10281f04c(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
    func_0x000107c600f0();
    func_0x000107c615e8(param_3);
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar5;
  return;
}



/* Entry: 10281e7ac; end: 10281e827;  */

void FUN_10281e7ac(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10281ea68(param_3,param_4,param_1,1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10281e828; end: 10281e87f;  */

void FUN_10281e828(undefined8 param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_3);
  (*pcVar1)(param_1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_3);
  return;
}



/* Entry: 10281e880; end: 10281e8f7;  */

void FUN_10281e880(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_10281f04c(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c453dc();
  func_0x000107c61180();
  uVar1 = uVar2;
  func_0x0001070b31f8();
  func_0x000107c61170(uVar2);
  func_0x000107c6010c();
  *param_1 = uVar1;
  return;
}



/* Entry: 10281e8f8; end: 10281ea67;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10281e8f8(long param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112ec35e8);
  func_0x000107c4b940(uVar6);
  lVar1 = _DAT_112ec35f0;
  func_0x000107c61428(unaff_x20 + _DAT_112ec35f0,auStack_68,0,0);
  lVar7 = *(long *)(unaff_x20 + lVar1);
  if (*(long *)(lVar7 + 0x10) != 0) {
    func_0x000107c61438(lVar7,2);
    lVar2 = param_1;
    uVar4 = param_2;
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar8 = *(undefined8 *)(*(long *)(lVar7 + 0x38) + lVar2 * 8);
      func_0x000107c6157c(uVar8);
      func_0x000107c61430(lVar7,2);
      goto LAB_10281ea40;
    }
    func_0x000107c61430(lVar7,2);
  }
  func_0x0001000285a8(0x112ec26e8,&UNK_10dae0a60);
  func_0x000107c613fc();
  uVar8 = 1;
  func_0x00010008747c(1);
  func_0x000107c61428(unaff_x20 + lVar1,auStack_80,0x21,0);
  func_0x000107c61434(param_2);
  func_0x000107c6157c(uVar8);
  uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
  func_0x000107c61558(uVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
  *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
  FUN_1027f6fa0(uVar8,param_1,param_2,uVar3);
  func_0x000107c6142c(param_2);
  *(undefined8 *)(unaff_x20 + lVar1) = uVar5;
  func_0x000107c614a8(auStack_80);
LAB_10281ea40:
  func_0x000107c5d278(uVar6);
  return uVar8;
}



/* Entry: 10281ea68; end: 10281edbb;  */

/* WARNING: Possible PIC construction at 0x00010281ed4c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281ed6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281ed50) */
/* WARNING: Removing unreachable block (ram,0x00010281ed70) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281ea68(undefined8 param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  long lVar12;
  ulong uVar13;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112ec35e0);
  uVar10 = param_2;
  func_0x000107c4ce08(lVar1,param_2,param_1);
  func_0x000107c61180();
  lVar4 = lVar1;
  if ((param_4 & 1) == 0) {
    lVar2 = lVar1;
    func_0x000107c4cde0(lVar1);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x000107c5faec();
    uVar11 = uVar10;
    func_0x000107c61170(lVar2);
    func_0x000107c40258(lVar1);
    func_0x000107c61180();
  }
  else {
    lVar2 = lVar1;
    func_0x000107c3f91c();
    func_0x000107c61180();
    if (lVar2 == 0) goto code_r0x000107c615e8;
    lVar3 = lVar2;
    func_0x000107c5faec();
    uVar11 = uVar10;
    func_0x000107c61170(lVar2);
    func_0x000107c3f908();
    func_0x000107c61180();
    if (lVar4 == 0) {
      func_0x000107c6142c(uVar10);
      goto code_r0x000107c615e8;
    }
  }
  lVar2 = lVar4;
  func_0x000107c5faec();
  func_0x000107c61170(lVar4);
  uVar13 = param_2;
  func_0x0001070b1c70();
  if ((uVar13 & 1) == 0) {
    lVar4 = *(long *)(unaff_x20 + _DAT_112ec35c0);
    func_0x000107c5fadc(lVar4,((long *)(unaff_x20 + _DAT_112ec35c0))[1]);
    lVar12 = lVar4;
    func_0x0001070b1d3c();
    func_0x000107c61180();
    func_0x000107c61170(lVar4);
    if (param_2 == 0) {
      uVar13 = 0;
      lVar12 = 0;
    }
    else {
      uVar5 = param_2;
      func_0x000107c5d984();
      func_0x000107c61180();
      func_0x000107c61170(param_2);
      if (uVar5 == 0) goto LAB_10281eb60;
      uVar13 = uVar5;
      func_0x000107c5faec(uVar5);
      func_0x000107c61170(uVar5);
    }
  }
  else {
LAB_10281eb60:
    uVar13 = 0;
    lVar12 = 0;
  }
  func_0x000107c5fadc(lVar2,uVar11);
  func_0x000107c6142c(uVar11);
  func_0x000107c5fadc(lVar3,uVar10);
  func_0x000107c6142c(uVar10);
  if (lVar12 == 0) {
    uVar13 = 0;
  }
  else {
    func_0x000107c5fadc(uVar13,lVar12);
  }
  puVar6 = PTR_PTR_1126c6a60;
  func_0x000107c61168();
  func_0x000107c4ca88();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(uVar13);
  pcVar7 = "startPlaybackForMessage(message:conversationParticipants:view:isQuoted:)";
  func_0x0001000c10c0("startPlaybackForMessage(message:conversationParticipants:view:isQuoted:)");
  func_0x000107c61180();
  puVar8 = &UNK_1105536a8;
  func_0x000107c613fc(&UNK_1105536a8,0x18,7);
  func_0x000107c61614(puVar8 + 0x10);
  puVar9 = &UNK_1105536d0;
  func_0x000107c613fc(&UNK_1105536d0,0x28,7);
  *(undefined8 *)(puVar9 + 0x10) = param_3;
  *(undefined **)(puVar9 + 0x18) = puVar8;
  *(undefined **)(puVar9 + 0x20) = puVar6;
  pcStack_70 = FUN_10281efbc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_1000f6b44;
  puStack_78 = &UNK_1105536e8;
  puStack_68 = puVar9;
  func_0x000107c60bc4(&puStack_90);
  puVar8 = puStack_68;
  func_0x000107c615f0(param_3);
  func_0x000107c61174(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4e524(pcVar7);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 10281edbc; end: 10281ee63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281edbc(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar1 = param_2 + _DAT_112ec35b0;
      func_0x000107c61618();
      func_0x000107c61170(param_2);
      if (lVar1 != 0) {
        func_0x000107c4efb0(lVar1);
        func_0x000107c615e8(lVar1);
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10281ee64; end: 10281eebf; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin init] */

void FUN_10281ee64(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiUserShareMessagePlugin.BitmojiUserShareMessagePlugin",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10281ee90);
  (*pcVar1)();
}



/* Entry: 10281eec0; end: 10281ef9b; -[_TtC29BitmojiUserShareMessagePlugin29BitmojiUserShareMessagePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010281eedc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281eefc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281ef20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281ef40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281ef60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010281ef80: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010281ef64) */
/* WARNING: Removing unreachable block (ram,0x00010281ef44) */
/* WARNING: Removing unreachable block (ram,0x00010281ef24) */
/* WARNING: Removing unreachable block (ram,0x00010281ef00) */
/* WARNING: Removing unreachable block (ram,0x00010281eee0) */
/* WARNING: Removing unreachable block (ram,0x00010281ef84) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281eec0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112ec35a8));
  return;
}



/* Entry: 10281ef9c; end: 10281efbb;  */

void FUN_10281ef9c(void)

{
  func_0x000107c61168(&PTR_PTR_112864b88);
  return;
}



/* Entry: 10281efbc; end: 10281f00b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281efbc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    func_0x000107c5de64();
    func_0x000107c61180();
    func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
    lVar2 = lVar2 + 0x10;
    func_0x000107c61618();
    if (lVar2 != 0) {
      lVar3 = lVar2 + _DAT_112ec35b0;
      func_0x000107c61618();
      func_0x000107c61170(lVar2);
      if (lVar3 != 0) {
        func_0x000107c4efb0(lVar3);
        func_0x000107c615e8(lVar3);
      }
    }
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10281f00c; end: 10281f03f;  */

void FUN_10281f00c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10281f040; end: 10281f04b;  */

void FUN_10281f040(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_10281ea68(uVar1,uVar3,param_1,0);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10281f04c; end: 10281f08b;  */

void FUN_10281f04c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10281f08c; end: 10281f093;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281f08c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar3 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_112ec35e8;
  if (lVar3 != 0) {
    func_0x000107c4b940(*(undefined8 *)(lVar3 + _DAT_112ec35e8));
    lVar2 = _DAT_112ec35f0;
    func_0x000107c61428(lVar3 + _DAT_112ec35f0,auStack_60,1,0);
    uVar4 = *(undefined8 *)(lVar3 + lVar2);
    *(undefined **)(lVar3 + lVar2) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
    func_0x000107c6142c(uVar4);
    func_0x000107c5d278(*(undefined8 *)(lVar3 + lVar1));
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 10281f094; end: 10281f0b7;  */

undefined8 FUN_10281f094(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 10281f0b8; end: 10281f0db;  */

void FUN_10281f0b8(long param_1,long param_2)

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



/* Entry: 10281f0dc; end: 10281f197;  */

void FUN_10281f0dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110553860;
  func_0x000107c613fc(&UNK_110553860,0x38,7);
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
  func_0x0001000823a8(FUN_10281f40c,puVar1);
  return;
}



/* Entry: 10281f198; end: 10281f40b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281f198(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  func_0x000100083b20(&lStack_68);
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar4 = uVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&uStack_78);
  uVar4 = uStack_78;
  func_0x000107c3f958();
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar6 = uStack_80;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar11 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar11);
  func_0x000107c61170(lStack_88);
  lVar7 = 0;
  FUN_10281ef9c();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112ec35a8) = 0;
  func_0x000107c61614(lVar8 + _DAT_112ec35b0,0);
  *(undefined8 *)(lVar8 + _DAT_112ec35b8) = 0;
  lVar2 = _DAT_112ec35e8;
  puVar9 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  lVar2 = _DAT_112ec35f0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  lVar2 = _DAT_112ec35f8;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112ec3600) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ec35c0);
  *puVar1 = uVar3;
  puVar1[1] = param_3;
  *(undefined8 *)(lVar8 + _DAT_112ec35c8) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112ec35d0) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112ec35d8) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112ec35e0) = uVar11;
  plVar10 = &lStack_98;
  lStack_98 = lVar8;
  lStack_90 = lVar7;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 10281f40c; end: 10281f42b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281f40c(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long lStack_70;
  long lStack_68;
  
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&lStack_68,*(undefined8 *)(unaff_x20 + 0x10),uVar11,
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30));
  uVar3 = *(undefined8 *)(lStack_68 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_68);
  uVar4 = uVar3;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar4;
  func_0x000107c5faec();
  func_0x000107c61170(uVar4);
  func_0x000100083b20(&lStack_70);
  uVar5 = *(undefined8 *)(lStack_70 + _DAT_112fdf698);
  func_0x000107c61174();
  func_0x000107c61170(lStack_70);
  func_0x000100083b20(&uStack_78);
  uVar4 = uStack_78;
  func_0x000107c3f958();
  func_0x000107c61180();
  func_0x000107c61170(uStack_78);
  func_0x000100083b20(&uStack_80);
  uVar6 = uStack_80;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_80);
  func_0x000100083b20(&lStack_88);
  uVar12 = *(undefined8 *)(lStack_88 + _DAT_11301aef0);
  func_0x000107c615f0(uVar12);
  func_0x000107c61170(lStack_88);
  lVar7 = 0;
  FUN_10281ef9c();
  lVar8 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar8 + _DAT_112ec35a8) = 0;
  func_0x000107c61614(lVar8 + _DAT_112ec35b0,0);
  *(undefined8 *)(lVar8 + _DAT_112ec35b8) = 0;
  lVar2 = _DAT_112ec35e8;
  puVar9 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  lVar2 = _DAT_112ec35f0;
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_1027f8eb0();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  lVar2 = _DAT_112ec35f8;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar8 + lVar2) = puVar9;
  *(undefined8 *)(lVar8 + _DAT_112ec3600) = 0;
  puVar1 = (undefined8 *)(lVar8 + _DAT_112ec35c0);
  *puVar1 = uVar3;
  puVar1[1] = uVar11;
  *(undefined8 *)(lVar8 + _DAT_112ec35c8) = uVar5;
  *(undefined8 *)(lVar8 + _DAT_112ec35d0) = uVar4;
  *(undefined8 *)(lVar8 + _DAT_112ec35d8) = uVar6;
  *(undefined8 *)(lVar8 + _DAT_112ec35e0) = uVar12;
  plVar10 = &lStack_98;
  lStack_98 = lVar8;
  lStack_90 = lVar7;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  *param_1 = (long)plVar10;
  return;
}



/* Entry: 10281f42c; end: 10281f4ab;  */

void FUN_10281f42c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110553950;
  func_0x000107c613fc(&UNK_110553950,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_10281f4ac,puVar1);
  return;
}



/* Entry: 10281f4ac; end: 10281f5df;  */

void FUN_10281f4ac(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lStack_50;
  ulong uStack_48;
  
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  uVar2 = uStack_48;
  func_0x000107c3e550();
  func_0x000107c61180();
  func_0x000107c61170(uVar3);
  uVar3 = uVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  if (uVar3 != 0) {
    uVar2 = uVar3;
    func_0x000107c4474c();
    func_0x000107c615e8(uVar3);
    if ((uVar2 & 1) != 0) {
      puVar5 = (undefined *)0x0;
      goto LAB_10281f5c0;
    }
  }
  func_0x000100083b20(&uStack_48);
  uVar3 = uStack_48;
  func_0x000107c3e550(uStack_48);
  func_0x000107c61180();
  func_0x000107c61170(uStack_48);
  func_0x000100083b20(&lStack_50);
  lVar4 = lStack_50;
  func_0x000107c42eac();
  func_0x000107c61180();
  func_0x000107c61170(lStack_50);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10281f5e0);
    (*pcVar1)();
  }
  puVar5 = PTR_PTR_1126ab150;
  func_0x000107c610f8();
  func_0x000107c459a0();
  func_0x000107c61170(lVar4);
  func_0x000107c61170(uVar3);
LAB_10281f5c0:
  *param_1 = puVar5;
  return;
}



/* Entry: 10281f5e0; end: 10281f5ef;  */

undefined1  [16] FUN_10281f5e0(void)

{
  return ZEXT816(0x110553978);
}



/* Entry: 10281f5f0; end: 10281f6db;  */

void FUN_10281f5f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110553a40;
  func_0x000107c613fc(&UNK_110553a40,0x50,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_1;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_8);
  func_0x0001000823a8(FUN_10281f6dc,puVar1);
  return;
}



/* Entry: 10281f6dc; end: 10281fa73;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281f6dc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  long unaff_x20;
  undefined8 uVar15;
  long lStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar4 = PTR_PTR_1126b0c98;
  func_0x000107c610f8();
  func_0x000107c47f1c();
  func_0x000100083b20(&puStack_a0);
  puVar13 = puStack_a0;
  puVar5 = puStack_a0;
  func_0x000107c439dc();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  puVar6 = puVar5;
  puVar14 = puVar4;
  (**(code **)(puVar5 + 0x10))(puVar5,puVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(puVar5);
  func_0x000100083b20(&puStack_a0);
  puVar5 = puStack_a0;
  func_0x000107c5d9b0(puStack_a0);
  func_0x000107c61180();
  func_0x000107c61170(puStack_a0);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_80 = 0x10281fa84;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10281fbd4;
  puStack_88 = &UNK_110553a78;
  ppuVar8 = &puStack_a0;
  uStack_78 = uVar15;
  func_0x000107c60bc4(ppuVar8);
  uVar3 = uStack_78;
  func_0x000107c6157c(uVar15);
  func_0x000107c61574(uVar3);
  func_0x000107c3e4fc(puVar7);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar9 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  uStack_80 = 0x10281faac;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10281fbd0;
  puStack_88 = &UNK_110553aa0;
  ppuVar8 = &puStack_a0;
  uStack_78 = uVar2;
  func_0x000107c60bc4(ppuVar8);
  uVar15 = uStack_78;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar15);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar10 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  uStack_80 = 0x10281fb20;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  uStack_90 = 0x10281fbd8;
  puStack_88 = &UNK_110553ac8;
  ppuVar8 = &puStack_a0;
  uStack_78 = uVar1;
  func_0x000107c60bc4(ppuVar8);
  uVar15 = uStack_78;
  func_0x000107c6157c(uVar1);
  func_0x000107c61574(uVar15);
  func_0x000107c3e4fc(puVar10);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  func_0x000100083b20(&puStack_a0);
  puVar13 = puStack_a0;
  lVar11 = *(long *)(puStack_a0 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(puVar13);
  lVar12 = lVar11;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar12 == 0) {
    lVar12 = 0;
    func_0x000107c5faec(0);
    func_0x000107c5fadc();
    func_0x000107c6142c(puVar14);
  }
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&lStack_b0);
  uVar15 = *(undefined8 *)(lStack_b0 + _DAT_11301aef0);
  func_0x000107c615f0(uVar15);
  func_0x000107c61170(lStack_b0);
  puVar13 = PTR_PTR_1126ab158;
  func_0x000107c610f8();
  func_0x000107c491e8();
  func_0x000107c61170(lVar12);
  func_0x000107c615e8(uVar15);
  func_0x000107c61170(puVar9);
  func_0x000107c61170(puVar7);
  func_0x000107c61170(puVar10);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uStack_a8);
  func_0x000107c61170(puVar4);
  *param_1 = puVar13;
  return;
}



/* Entry: 10281fa74; end: 10281fab7;  */

undefined1  [16] FUN_10281fa74(void)

{
  return ZEXT816(0x110553a68);
}



/* Entry: 10281fab8; end: 10281fbbf;  */

undefined8 FUN_10281fab8(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + *param_1);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 10281fbc0; end: 10281fbdb;  */

void FUN_10281fbc0(long param_1,long param_2)

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



/* Entry: 10281fbdc; end: 10281fe17;  */

void FUN_10281fbdc(void)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auStack_78 [72];
  
  func_0x0001000285a8(0x112ec3760,&UNK_10dae3748);
  lVar4 = 3;
  func_0x000107c602e8();
  uVar2 = uRam0000000112ec3750;
  lVar1 = lVar4 + 0x38;
  uVar10 = (ulong)uRam0000000112ec3750;
  func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
  uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
  uVar6 = uVar10 >> 6;
  uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
  uVar8 = 1L << (uVar10 & 0x3f);
  lVar5 = *(long *)(lVar4 + 0x30);
  if ((uVar8 & uVar7) != 0) {
    do {
      if (*(uint *)(lVar5 + uVar10 * 4) == uVar2) goto LAB_10281fcb8;
      uVar10 = uVar10 + 1 & ~uVar9;
      uVar6 = uVar10 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar10 & 0x3f);
    } while ((uVar8 & uVar7) != 0);
  }
  *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
  *(uint *)(lVar5 + uVar10 * 4) = uVar2;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_10281fcb8:
    uVar2 = uRam0000000112ec3754;
    uVar10 = (ulong)uRam0000000112ec3754;
    func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
    func_0x000107c6069c();
    func_0x000107c606a8();
    uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
    uVar6 = uVar10 >> 6;
    uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
    uVar8 = 1L << (uVar10 & 0x3f);
    lVar5 = *(long *)(lVar4 + 0x30);
    if ((uVar8 & uVar7) != 0) {
      do {
        if (*(uint *)(lVar5 + uVar10 * 4) == uVar2) goto LAB_10281fd58;
        uVar10 = uVar10 + 1 & ~uVar9;
        uVar6 = uVar10 >> 6;
        uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
        uVar8 = 1L << (uVar10 & 0x3f);
      } while ((uVar8 & uVar7) != 0);
    }
    *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
    *(uint *)(lVar5 + uVar10 * 4) = uVar2;
    if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
LAB_10281fd58:
      uVar2 = uRam0000000112ec3758;
      uVar10 = (ulong)uRam0000000112ec3758;
      func_0x000107c6068c(auStack_78,*(undefined8 *)(lVar4 + 0x28));
      func_0x000107c6069c();
      func_0x000107c606a8();
      uVar9 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
      uVar10 = uVar10 & (uVar9 ^ 0xffffffffffffffff);
      uVar6 = uVar10 >> 6;
      uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
      uVar8 = 1L << (uVar10 & 0x3f);
      lVar5 = *(long *)(lVar4 + 0x30);
      if ((uVar8 & uVar7) != 0) {
        do {
          if (*(uint *)(lVar5 + uVar10 * 4) == uVar2) {
            lRam0000000112ec3720 = lVar4;
            return;
          }
          uVar10 = uVar10 + 1 & ~uVar9;
          uVar6 = uVar10 >> 6;
          uVar7 = *(ulong *)(lVar1 + uVar6 * 8);
          uVar8 = 1L << (uVar10 & 0x3f);
        } while ((uVar8 & uVar7) != 0);
      }
      *(ulong *)(lVar1 + uVar6 * 8) = uVar8 | uVar7;
      *(uint *)(lVar5 + uVar10 * 4) = uVar2;
      if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
        lRam0000000112ec3720 = lVar4;
        return;
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10281fe18);
  (*pcVar3)();
}



/* Entry: 10281fe18; end: 10281fe27; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin activeConversationIdObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281fe18(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3668));
  return;
}



/* Entry: 10281fe28; end: 10281fe5b; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin setActiveConversationIdObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281fe28(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3668);
  *(undefined8 *)(param_1 + _DAT_112ec3668) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10281fe5c; end: 10281fe6b; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin activeConversationInformationObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281fe5c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112ec3670));
  return;
}



/* Entry: 10281fe6c; end: 10281fe9f; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin setActiveConversationInformationObservable:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10281fe6c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112ec3670);
  *(undefined8 *)(param_1 + _DAT_112ec3670) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10281fea0; end: 10281ff0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10281fea0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112ec36b0;
  lVar3 = *(long *)(unaff_x20 + _DAT_112ec36b0);
  lVar2 = lVar3;
  if (lVar3 == 1) {
    lVar2 = unaff_x20;
    FUN_10281ff0c();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c615f0();
    FUN_102820b1c(uVar4);
  }
  func_0x000102820b2c(lVar3);
  return lVar2;
}



/* Entry: 10281ff0c; end: 1028200ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10281ff0c(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    if (lVar1 != 0) {
      puVar2 = &UNK_110553ba8;
      func_0x000107c613fc(&UNK_110553ba8,0x18,7);
      func_0x000107c61614(puVar2 + 0x10,param_1);
      uStack_48 = 0x102820b3c;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0x42000000;
      puStack_58 = &UNK_100f11710;
      puStack_50 = &UNK_110553bc0;
      ppuVar3 = &puStack_68;
      puStack_40 = puVar2;
      func_0x000107c60bc4(ppuVar3);
      func_0x000107c61574(puStack_40);
      func_0x000102821cc0(0,0x112ec36f8,&PTR_PTR_1126b2f40);
      func_0x000107c614e8();
      lVar4 = lVar1;
      func_0x000107c4c214(lVar1);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar3);
      func_0x000107c615e8(lVar1);
      return lVar4;
    }
  }
  return 0;
}



/* Entry: 1028200f0; end: 1028200f7; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin valdiContextParamsForMessage:conversationParticipants:] */

void FUN_1028200f0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(0);
  return;
}



/* Entry: 1028200f8; end: 10282010f; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin identifier] */

/* WARNING: Removing unreachable block (ram,0x00010282010c) */

void FUN_1028200f8(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)();
  return;
}



/* Entry: 102820110; end: 102820117; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin pluginType] */

undefined8 FUN_102820110(void)

{
  return 0;
}



/* Entry: 102820118; end: 102820177; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin init] */

void FUN_102820118(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("CTItemMessagePlugin.CTItemMessagePlugin",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102820144);
  (*pcVar1)();
}



/* Entry: 102820178; end: 102820223; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102820178(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3668));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112ec3670));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112ec3680 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3688));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3690));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec3698));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec36a0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112ec36a8));
  if (*(long *)(param_1 + _DAT_112ec36b0) == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102820224; end: 102820243;  */

void FUN_102820224(void)

{
  func_0x000107c61168(&PTR_PTR_112864d78);
  return;
}



/* Entry: 102820244; end: 1028202b7; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin canForwardMessageFromActionMenu:focusedMessageContent:] */

uint FUN_102820244(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102821130(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 1028202b8; end: 1028202bf; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin canForwardMessageFromCTA:] */

undefined8 FUN_1028202b8(void)

{
  return 0;
}



/* Entry: 1028202c0; end: 10282030f;  */

void FUN_1028202c0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126c6898;
  func_0x000107c61168();
  func_0x000107c3fff0();
  func_0x000107c61180();
  *param_1 = puVar1;
  return;
}



/* Entry: 102820310; end: 1028203a3; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin forwardParamsForMessage:focusedMessageContent:conversationParticipants:] */

void FUN_102820310(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10282174c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1028203a4; end: 102820463; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin forwardMessage:focusedMessageContent:conversations:recipientCount:completion:] */

/* WARNING: Possible PIC construction at 0x000102820438: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102820448: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010282043c) */
/* WARNING: Removing unreachable block (ram,0x00010282044c) */

void FUN_1028203a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c60bc4(param_7);
  func_0x000107c60bc4();
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_1);
  func_0x000102821954(param_3,param_5,param_6,param_1,param_7);
  func_0x000107c60bd0(param_7);
  func_0x000107c60bd0(param_7);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102820464; end: 10282046b; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin maxStackSize] */

undefined8 FUN_102820464(void)

{
  return 3;
}



/* Entry: 10282046c; end: 102820627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10282046c(ulong param_1,ulong param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uStack_48;
  
  func_0x000107d5eed4();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107d5eed4();
    func_0x000107c61180();
    if (param_2 != 0) {
      uVar3 = param_1;
      func_0x000107c4a764();
      func_0x000107c61180();
      if (uVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10282061c);
        (*pcVar2)();
      }
      uVar4 = uVar3;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(uVar3);
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102820620);
        (*pcVar2)();
      }
      uVar3 = uVar4;
      func_0x000107c42930();
      func_0x000107c61170(uVar4);
      uVar4 = param_2;
      func_0x000107c4a764();
      func_0x000107c61180();
      if (uVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102820624);
        (*pcVar2)();
      }
      uVar5 = uVar4;
      func_0x000107c42924();
      func_0x000107c61180();
      func_0x000107c61170(uVar4);
      if (uVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102820628);
        (*pcVar2)();
      }
      uVar4 = uVar5;
      func_0x000107c42930();
      func_0x000107c61170(uVar5);
      if (lRam0000000112ec3718 != -1) {
        func_0x000107c61568(0x112ec3718,FUN_10281fbdc);
      }
      uVar1 = uRam0000000112ec3720;
      FUN_102820628(uVar3,uRam0000000112ec3720);
      if (((uVar3 & 1) != 0) && (FUN_102820628(uVar4,uVar1), (uVar4 & 1) != 0)) {
        func_0x0001000d224c(&uStack_48);
        func_0x000107c4a514();
        func_0x000107c615e8(uStack_48);
        func_0x000107c61170(param_2);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61170(param_2);
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 102820628; end: 1028206e3;  */

undefined1 FUN_102820628(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auStack_78 [72];
  
  if (*(long *)(param_2 + 0x10) == 0) {
    return 0;
  }
  func_0x000107c6068c(auStack_78,*(undefined8 *)(param_2 + 0x28));
  uVar1 = param_1;
  func_0x000107c6069c();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(int *)(*(long *)(param_2 + 0x30) + uVar1 * 4) == (int)param_1) {
        return 1;
      }
      uVar1 = uVar1 + 1 & ~uVar2;
    } while ((*(ulong *)(param_2 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Entry: 1028206e4; end: 10282075b; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin canStackMessage:withPreviousMessage:] */

uint FUN_1028206e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_10282046c(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 10282075c; end: 10282081f; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin valdiContextParamsForStackedMessages:conversationParticipants:] */

void FUN_10282075c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  func_0x000102821cc0(0,0x112dbe420,&PTR_PTR_1126b2d28);
  func_0x000107c5fc54(param_3,uVar1);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_1028212e0(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_3);
  uVar2 = 0;
  func_0x000102821cc0(0,0x112ec3700,&PTR_PTR_1126c67d8);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102820820; end: 102820827; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin quotedRenderingStyleForMessage:] */

undefined8 FUN_102820820(void)

{
  return 0;
}



/* Entry: 102820828; end: 102820a5b;  */

void FUN_102820828(undefined *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined *apuStack_80 [3];
  undefined8 uStack_68;
  
  if ((param_2 & 1) == 0) {
    func_0x000107d5ef68();
  }
  else {
    func_0x000107d5eed4();
  }
  func_0x000107c61180();
  if (param_1 == (undefined *)0x0) {
    return;
  }
  func_0x000107c61174();
  puVar1 = param_1;
  func_0x000107c44904();
  puVar3 = param_1;
  if ((int)puVar1 != 0) {
    puVar1 = param_1;
    func_0x000107c41214();
    func_0x000107c61180();
    if (puVar1 != (undefined *)0x0) {
      puVar2 = puVar1;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar1);
      puVar3 = PTR_PTR_1126b3800;
      func_0x000107c610f8();
      puVar1 = puVar2;
      func_0x000107c5ee20(puVar2,param_2);
      func_0x000107c45ae0();
      func_0x000107c61170(puVar1);
      func_0x00010006c090(puVar2,param_2);
      puVar1 = param_1;
      func_0x000107c61170();
      if (puVar3 == (undefined *)0x0) goto LAB_102820a28;
      FUN_10281fea0();
      if (puVar1 != (undefined *)0x0) {
        puVar2 = PTR_PTR_1126ab160;
        func_0x000107c610f8();
        func_0x000107c47930();
        puVar4 = PTR_PTR_1126ab168;
        func_0x000107c610f8();
        func_0x000107c46288();
        uVar8 = 0x112ec36e0;
        uVar5 = 0;
        func_0x000102821cc0(0,0x112ec36e0,&PTR_PTR_1126ab170);
        func_0x000107c614e8();
        func_0x000107c3ff48();
        func_0x000107c61180();
        uVar6 = uVar5;
        func_0x000107c5faec();
        func_0x000107c61170(uVar5);
        uVar5 = 0;
        func_0x000102821cc0(0,0x112ec36e8,&PTR_PTR_1126ab160);
        uVar7 = 0;
        apuStack_80[0] = puVar2;
        uStack_68 = uVar5;
        func_0x000102821cc0(0,0x112ec36f0,&PTR_PTR_1126ab168);
        apuStack_a0[0] = puVar4;
        uStack_88 = uVar7;
        func_0x000107c610f8(PTR_PTR_1126c67d8);
        func_0x000107c61174(puVar2);
        func_0x000107c61174(puVar4);
        FUN_1027efbc4(uVar6,uVar8,apuStack_80,apuStack_a0);
        func_0x000107c61170(param_1);
        func_0x000107c61170(puVar4);
        func_0x000107c61170(puVar2);
        func_0x000107c615e8(puVar1);
        func_0x000107c61170(puVar3);
        return;
      }
    }
  }
  func_0x000107c61170(puVar3);
LAB_102820a28:
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 102820a5c; end: 102820abb; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin valdiContextParamsForQuotedMessage:conversationParticipants:] */

void FUN_102820a5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102820828(param_3,0);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102820abc; end: 102820b1b; -[_TtC19CTItemMessagePlugin19CTItemMessagePlugin valdiContextParamsForQuotedMessagePreview:conversationParticipants:] */

void FUN_102820abc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102820828(param_3,1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102820b1c; end: 102820b5f;  */

void FUN_102820b1c(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 102820b60; end: 102820c0b;  */

void FUN_102820b60(void)

{
  undefined4 uVar1;
  undefined4 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c6069c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 102820c0c; end: 102820c1b;  */

void FUN_102820c0c(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 102820c1c; end: 102820e4f;  */

void FUN_102820c1c(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    func_0x000102821cc0(0,param_1,param_2);
    if (lVar3 != 0) {
      param_3 = (ulong *)0x112d36e60;
      param_4 = (long *)&UNK_10d901170;
    }
  }
  if (*param_3 == 0 || (*param_3 & 1) != 0) {
    puVar2 = (undefined *)((long)param_4 + (long)(int)*param_4);
    func_0x000107c61518(puVar2,*param_4 >> 0x20,0,0);
    *param_3 = (ulong)puVar2;
  }
  return;
}



/* Entry: 102820e50; end: 102820f77;  */

ulong FUN_102820e50(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102820f78);
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
  FUN_102820f78(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102820f74);
      (*pcVar1)();
    }
    FUN_102821018(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 102820f78; end: 102821017;  */

undefined * FUN_102820f78(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    puVar2 = (undefined *)0x112ec3700;
    FUN_102820c1c(0x112ec3700,&PTR_PTR_1126c67d8,0x112ec3710,&UNK_10dae3738);
    func_0x000107c613fc();
    puVar3 = puVar2;
    func_0x000107c610a4();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(ulong *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  return puVar2;
}



/* Entry: 102821018; end: 1028212df;  */

long FUN_102821018(long param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10282112c);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102821130);
        (*pcVar3)();
      }
      uVar4 = 0;
      func_0x000102821cc0(0,0x112ec3700,&PTR_PTR_1126c67d8);
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
      func_0x000102821cc0(0,0x112ec3700,&PTR_PTR_1126c67d8);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102821128);
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



/* Entry: 1028212e0; end: 10282174b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028212e0(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  long unaff_x20;
  undefined *puVar16;
  undefined *puVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  undefined *puStack_88;
  
  dVar20 = *(double *)(unaff_x20 + _DAT_112ec3678);
  puVar16 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar17 = *(undefined **)(puVar16 + 0x10);
    dVar21 = (double)puVar17;
  }
  else {
    puVar17 = puVar16;
    if ((undefined *)0x7fffffffffffffff < param_1) {
      puVar17 = param_1;
    }
    puVar14 = puVar17;
    func_0x000107c60480(puVar17);
    dVar21 = (double)(long)puVar14;
    func_0x000107c60480();
  }
  if (puVar17 != (undefined *)0x0) {
    puVar13 = (undefined *)0x0;
    puVar14 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(undefined **)(puVar16 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1028216f8);
            (*pcVar3)();
          }
          puVar4 = *(undefined **)(param_1 + (long)puVar13 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar4 = puVar13;
          param_2 = param_1;
          func_0x000102820c94(puVar13,param_1,&PTR_PTR_1126b2d28,0x112dbe420);
        }
        puVar1 = puVar13 + 1;
        if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1028216f4);
          (*pcVar3)();
        }
        puVar5 = puVar4;
        func_0x000107d5eed4();
        func_0x000107c61180();
        if (puVar5 != (undefined *)0x0) break;
LAB_1028215f0:
        func_0x000107c61170(puVar4);
LAB_1028215f8:
        puVar13 = puVar13 + 1;
        if (puVar1 == puVar17) {
          return;
        }
      }
      func_0x0001000d224c(&puStack_88);
      puVar8 = puStack_88;
      puVar6 = puVar5;
      func_0x000107c4a764(puVar5);
      func_0x000107c61180();
      puVar7 = puVar8;
      func_0x000107c4a778();
      func_0x000107c61180();
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar6);
      if (puVar7 == (undefined *)0x0) {
LAB_1028215e8:
        func_0x000107c61170(puVar5);
        goto LAB_1028215f0;
      }
      func_0x000107c61174();
      func_0x000107c61174();
      puVar8 = puVar5;
      func_0x000107c44904();
      puVar6 = puVar5;
      if ((int)puVar8 == 0) {
LAB_1028215c0:
        func_0x000107c61170(puVar5);
        puVar8 = puVar7;
LAB_1028215cc:
        func_0x000107c61170(puVar5);
        puVar7 = puVar8;
LAB_1028215d8:
        puVar5 = puVar7;
        func_0x000107c61170(puVar6);
        goto LAB_1028215e8;
      }
      puVar8 = puVar5;
      func_0x000107c41214();
      func_0x000107c61180();
      if (puVar8 == (undefined *)0x0) goto LAB_1028215c0;
      puVar9 = puVar8;
      func_0x000107c5ee30();
      func_0x000107c61170(puVar8);
      puVar8 = PTR_PTR_1126b3800;
      func_0x000107c610f8();
      puVar10 = puVar9;
      func_0x000107c5ee20(puVar9,param_2);
      func_0x000107c45ae0();
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar5);
      func_0x00010006c090(puVar9);
      puVar9 = puVar5;
      func_0x000107c61170();
      if (puVar8 == (undefined *)0x0) goto LAB_1028215d8;
      FUN_10281fea0();
      puVar6 = puVar7;
      if (puVar9 == (undefined *)0x0) goto LAB_1028215cc;
      dVar18 = dVar20;
      dVar19 = dVar20 / dVar21;
      FUN_1028226a8(dVar20,dVar20 / dVar21,puVar7);
      puVar10 = PTR_PTR_1126ab178;
      func_0x000107c610f8();
      func_0x000107c47934(dVar19,dVar18);
      puVar11 = PTR_PTR_1126ab180;
      func_0x000107c610f8(PTR_PTR_1126ab180);
      func_0x000107c46288();
      lVar12 = 0;
      puVar6 = (undefined *)0x112ec3708;
      func_0x000102821cc0(0,0x112ec3708,&PTR_PTR_1126ab188);
      func_0x000107c614e8();
      func_0x000107c3ff48();
      func_0x000107c61180();
      param_2 = puVar6;
      if (lVar12 == 0) {
        func_0x000107c5faec();
        param_2 = puVar6;
        func_0x000107c5fadc();
        func_0x000107c6142c(puVar6);
      }
      puVar6 = PTR_PTR_1126c67d8;
      func_0x000107c610f8();
      func_0x000107c45f08();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar10);
      func_0x000107c615e8(puVar9);
      func_0x000107c61170(puVar8);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar5);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar12);
      if (puVar6 == (undefined *)0x0) goto LAB_1028215f8;
      puVar13 = puVar14;
      func_0x000107c61550();
      if ((((int)puVar13 == 0) || ((long)puVar14 < 0)) || (((ulong)puVar14 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar14 >> 0x3e == 0) {
          param_2 = *(undefined **)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        }
        else {
          param_2 = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar14) {
            param_2 = puVar14;
          }
          func_0x000107c60480();
        }
        param_2 = param_2 + 1;
        puVar13 = (undefined *)0x0;
        FUN_102820e50(0,param_2,1,puVar14);
        puVar14 = puVar13;
      }
      uVar15 = (ulong)puVar14 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar15 + 0x10);
      puVar13 = (undefined *)(uVar2 + 1);
      puVar4 = puVar14;
      if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar2) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(uVar15 + 0x18));
        param_2 = puVar13;
        FUN_102820e50(puVar4,puVar13,1,puVar14);
        uVar15 = (ulong)puVar4 & 0xffffffffffffff8;
      }
      *(undefined **)(uVar15 + 0x10) = puVar13;
      *(undefined **)(uVar15 + uVar2 * 8 + 0x20) = puVar6;
      puVar13 = puVar1;
      puVar14 = puVar4;
    } while (puVar1 != puVar17);
  }
  return;
}



/* Entry: 10282174c; end: 102821c83;  */

undefined * FUN_10282174c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  
  lVar2 = 0x112dbe420;
  FUN_102820c1c(0x112dbe420,&PTR_PTR_1126b2d28,0x112ec3780,&UNK_10dae3f80);
  func_0x000107c61534();
  *(undefined8 *)(lVar2 + 0x18) = 3;
  *(undefined8 *)(lVar2 + 0x10) = 1;
  *(undefined8 *)(lVar2 + 0x20) = param_1;
  func_0x000107c61174(param_1);
  lVar3 = lVar2;
  FUN_1028212e0();
  func_0x000107c61588(lVar2);
  uVar9 = *(undefined8 *)(lVar2 + 0x10);
  uVar4 = 0;
  func_0x000102821cc0(0,0x112dbe420,&PTR_PTR_1126b2d28);
  func_0x000107c61408((undefined8 *)(lVar2 + 0x20),uVar9,uVar4);
  uVar4 = 0x112ec3768;
  func_0x0001000285a8(0x112ec3768,&UNK_10dae3750);
  uVar5 = 0;
  func_0x000102821cc0(0,0x112ec3770,&PTR_PTR_1126c6898);
  uVar9 = uVar5;
  FUN_102821d00();
  pcVar1 = FUN_1028202c0;
  func_0x000107c5fc10(FUN_1028202c0,0,uVar4,uVar5,uVar9);
  func_0x000107c6142c(lVar3);
  puVar6 = PTR_PTR_1126c68a0;
  func_0x000107c61168(PTR_PTR_1126c68a0);
  func_0x000107c5dd48(0x3ff0000000000000);
  func_0x000107c61180();
  if ((ulong)pcVar1 >> 0x3e == 0) {
    pcVar7 = *(code **)(((ulong)pcVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    pcVar7 = (code *)((ulong)pcVar1 & 0xffffffffffffff8);
    if ((code *)0x7fffffffffffffff < pcVar1) {
      pcVar7 = pcVar1;
    }
    func_0x000107c60480();
  }
  if (pcVar7 == (code *)0x0) {
    uVar4 = 0;
  }
  else if (((ulong)pcVar1 & 0xc000000000000001) == 0) {
    if (*(long *)(((ulong)pcVar1 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102821954);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(pcVar1 + 0x20);
    func_0x000107c61174(uVar4);
  }
  else {
    uVar4 = 0;
    func_0x000102820c94(0,pcVar1,&PTR_PTR_1126c6898,0x112ec3770);
  }
  func_0x000107c6142c(pcVar1);
  puVar8 = PTR_PTR_1126c68a8;
  func_0x000107c610f8(PTR_PTR_1126c68a8);
  func_0x000107c480c8();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(uVar4);
  return puVar8;
}



/* Entry: 102821c84; end: 102821c97;  */

void FUN_102821c84(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102821c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 102821c98; end: 102821cff;  */

void FUN_102821c98(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(param_1 == 0);
  return;
}



/* Entry: 102821d00; end: 102821d9f;  */

void FUN_102821d00(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec3778 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112ec3768;
  func_0x00010002969c(0x112ec3768,&UNK_10dae3750);
  puVar2 = PTR___sSayxGSTsMc_11034dd08;
  func_0x000107c61520(PTR___sSayxGSTsMc_11034dd08,uVar1);
  puRam0000000112ec3778 = puVar2;
  return;
}



/* Entry: 102821da0; end: 102821da3;  */

void FUN_102821da0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec3790 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000102821d50(0xff);
  puVar2 = &UNK_10dae37dc;
  func_0x000107c61520(&UNK_10dae37dc,uVar1);
  puRam0000000112ec3790 = puVar2;
  return;
}



/* Entry: 102821da4; end: 102821de7;  */

void FUN_102821da4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (puRam0000000112ec3790 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  func_0x000102821d50(0xff);
  puVar2 = &UNK_10dae37dc;
  func_0x000107c61520(&UNK_10dae37dc,uVar1);
  puRam0000000112ec3790 = puVar2;
  return;
}



/* Entry: 102821de8; end: 102821def;  */

void FUN_102821de8(long param_1,long param_2)

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



/* Entry: 102821df0; end: 102821eab;  */

void FUN_102821df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ec2370,&UNK_10dae07b0);
  puVar1 = &UNK_110553ce8;
  func_0x000107c613fc(&UNK_110553ce8,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x0001000823a8(FUN_1028221a4,puVar1);
  return;
}



/* Entry: 102821eac; end: 1028221a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102821eac(long *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  code *pcVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  func_0x0001000285a8(0x112ec3798,&UNK_10dae3860);
  pcVar3 = FUN_1028221c4;
  uVar14 = 0;
  func_0x0001000823a8();
  pcVar4 = pcVar3;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar3);
  func_0x000100083b20(&lStack_88);
  uVar5 = *(undefined8 *)(lStack_88 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  uVar6 = uVar5;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar5);
  uVar5 = uVar6;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001000cad14();
  func_0x0001000285a8(0x112ec37a0,&UNK_10dae3868);
  func_0x000107c6157c(param_8);
  pcVar3 = FUN_1028223f0;
  func_0x0001000823a8(FUN_1028223f0,param_8);
  pcVar7 = pcVar3;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar3);
  func_0x0001000285a8(0x112ec37a8,&UNK_10dae3870);
  func_0x000107c6157c(param_9);
  pcVar3 = FUN_102822470;
  func_0x0001000823a8(FUN_102822470,param_9);
  pcVar8 = pcVar3;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar3);
  func_0x0001000285a8(0x112ec37b0,&UNK_10dae3878);
  func_0x000107c6157c(param_10);
  pcVar3 = FUN_1028224f0;
  func_0x0001000823a8(FUN_1028224f0,param_10);
  pcVar9 = pcVar3;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar3);
  lVar10 = 0;
  FUN_102820224();
  lVar11 = lVar10;
  func_0x000107c610f8();
  *(undefined8 *)(lVar11 + _DAT_112ec3668) = 0;
  *(undefined8 *)(lVar11 + _DAT_112ec3670) = 0;
  lVar2 = _DAT_112ec3678;
  puVar12 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar12);
  func_0x000107c609cc(param_2,param_3,param_4,param_5);
  *(double *)(lVar11 + lVar2) = param_2 * 0.9;
  *(undefined8 *)(lVar11 + _DAT_112ec36b0) = 1;
  puVar1 = (undefined8 *)(lVar11 + _DAT_112ec3680);
  *puVar1 = uVar5;
  puVar1[1] = uVar14;
  *(undefined8 *)(lVar11 + _DAT_112ec3688) = uVar6;
  *(code **)(lVar11 + _DAT_112ec3690) = pcVar7;
  *(code **)(lVar11 + _DAT_112ec3698) = pcVar8;
  *(code **)(lVar11 + _DAT_112ec36a0) = pcVar4;
  *(code **)(lVar11 + _DAT_112ec36a8) = pcVar9;
  plVar13 = &lStack_98;
  lStack_98 = lVar11;
  lStack_90 = lVar10;
  func_0x000107c61154(plVar13,PTR_s_init_1125d9248);
  *param_1 = (long)plVar13;
  return;
}



/* Entry: 1028221a4; end: 1028221c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1028221a4(long *param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  code *pcVar9;
  code *pcVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  long *plVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000285a8(0x112ec3798,&UNK_10dae3860);
  pcVar5 = FUN_1028221c4;
  uVar16 = 0;
  func_0x0001000823a8();
  pcVar6 = pcVar5;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar5);
  func_0x000100083b20(&lStack_88);
  uVar7 = *(undefined8 *)(lStack_88 + _DAT_113083f78);
  func_0x000107c61174();
  func_0x000107c61170(lStack_88);
  uVar8 = uVar7;
  func_0x000107c5d984();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar8;
  func_0x000107c5faec();
  func_0x000107c61170();
  func_0x0001000cad14();
  func_0x0001000285a8(0x112ec37a0,&UNK_10dae3868);
  func_0x000107c6157c(uVar2);
  pcVar5 = FUN_1028223f0;
  func_0x0001000823a8(FUN_1028223f0,uVar2);
  pcVar9 = pcVar5;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar5);
  func_0x0001000285a8(0x112ec37a8,&UNK_10dae3870);
  func_0x000107c6157c(uVar3);
  pcVar5 = FUN_102822470;
  func_0x0001000823a8(FUN_102822470,uVar3);
  pcVar10 = pcVar5;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar5);
  func_0x0001000285a8(0x112ec37b0,&UNK_10dae3878);
  func_0x000107c6157c(uVar17);
  pcVar5 = FUN_1028224f0;
  func_0x0001000823a8(FUN_1028224f0,uVar17);
  pcVar11 = pcVar5;
  func_0x0001000cad14();
  func_0x000107c61574(pcVar5);
  lVar12 = 0;
  FUN_102820224();
  lVar13 = lVar12;
  func_0x000107c610f8();
  *(undefined8 *)(lVar13 + _DAT_112ec3668) = 0;
  *(undefined8 *)(lVar13 + _DAT_112ec3670) = 0;
  lVar4 = _DAT_112ec3678;
  puVar14 = PTR__OBJC_CLASS___UIScreen_1126aea10;
  func_0x000107c61168(PTR__OBJC_CLASS___UIScreen_1126aea10);
  func_0x000107c4c194();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c61170(puVar14);
  func_0x000107c609cc(param_2,param_3,param_4,param_5);
  *(double *)(lVar13 + lVar4) = param_2 * 0.9;
  *(undefined8 *)(lVar13 + _DAT_112ec36b0) = 1;
  puVar1 = (undefined8 *)(lVar13 + _DAT_112ec3680);
  *puVar1 = uVar7;
  puVar1[1] = uVar16;
  *(undefined8 *)(lVar13 + _DAT_112ec3688) = uVar8;
  *(code **)(lVar13 + _DAT_112ec3690) = pcVar9;
  *(code **)(lVar13 + _DAT_112ec3698) = pcVar10;
  *(code **)(lVar13 + _DAT_112ec36a0) = pcVar6;
  *(code **)(lVar13 + _DAT_112ec36a8) = pcVar11;
  plVar15 = &lStack_98;
  lStack_98 = lVar13;
  lStack_90 = lVar12;
  func_0x000107c61154(plVar15,PTR_s_init_1125d9248);
  *param_1 = (long)plVar15;
  return;
}



/* Entry: 1028221c4; end: 102822347;  */

void FUN_1028221c4(undefined8 *param_1)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  
  func_0x0001000285a8(0x112ec37b8,&UNK_10dae3880);
  pcVar1 = FUN_102822348;
  func_0x0001000823a8(FUN_102822348,0);
  pcVar2 = pcVar1;
  func_0x0001000ad7c4();
  func_0x000107c61574();
  func_0x0001011b0cc4();
  func_0x000107c613fc();
  *(undefined8 *)(pcVar1 + 0x18) = 0xd;
  *(undefined8 *)(pcVar1 + 0x10) = 6;
  puVar3 = PTR_PTR_1126bae18;
  func_0x000107c610f8();
  func_0x000107c4763c();
  *(undefined **)(pcVar1 + 0x20) = puVar3;
  puVar3 = PTR_PTR_1126bae20;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(pcVar1 + 0x28) = puVar3;
  puVar3 = PTR_PTR_1126bae60;
  func_0x000107c610f8();
  func_0x000107c4763c();
  *(undefined **)(pcVar1 + 0x30) = puVar3;
  puVar3 = PTR_PTR_1126bae28;
  func_0x000107c610f8();
  func_0x000107c4763c();
  *(undefined **)(pcVar1 + 0x38) = puVar3;
  puVar3 = PTR_PTR_1126badf8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(pcVar1 + 0x40) = puVar3;
  puVar3 = PTR_PTR_1126bae68;
  func_0x000107c610f8();
  func_0x000107c4763c();
  *(undefined **)(pcVar1 + 0x48) = puVar3;
  puVar3 = PTR_PTR_1126bae10;
  func_0x000107c610f8();
  uVar4 = 0x112d64510;
  func_0x0001000285a8(0x112d64510,&UNK_10d929a40);
  pcVar5 = pcVar1;
  func_0x000107c5fc48(pcVar1,uVar4);
  func_0x000107c61574(pcVar1);
  func_0x000107c48e74();
  func_0x000107c61170(pcVar2);
  func_0x000107c61170(pcVar5);
  *param_1 = puVar3;
  return;
}



/* Entry: 102822348; end: 102822377;  */

void FUN_102822348(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126badf0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 102822378; end: 1028223ef;  */

void FUN_102822378(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1028223f0; end: 1028223f7;  */

void FUN_1028223f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5dbd4();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1028223f8; end: 10282246f;  */

void FUN_1028223f8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102822470; end: 102822477;  */

void FUN_102822470(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c4a7c8();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 102822478; end: 1028224ef;  */

void FUN_102822478(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5bdcc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1028224f0; end: 1028224f7;  */

void FUN_1028224f0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = uStack_38;
  func_0x000107c5bdcc();
  func_0x000107c61180();
  func_0x000107c61170(uStack_38);
  uVar2 = uVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1028224f8; end: 1028226a7;  */

undefined1  [16] FUN_1028224f8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined **ppuVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long lStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c42934();
  uVar8 = 0;
  if (lVar1 == 3) {
    func_0x000107c42924();
    func_0x000107c61180();
    if (param_1 == 0) {
      uStack_68 = 0;
      uStack_70 = 0;
      lStack_58 = 0;
      uStack_60 = 0;
    }
    else {
      func_0x000107c60234(&uStack_70);
      func_0x000107c615e8(param_1);
    }
    uStack_48 = uStack_68;
    uStack_50 = uStack_70;
    lStack_38 = lStack_58;
    uStack_40 = uStack_60;
    if (lStack_58 != 0) {
      uVar4 = 0x112d4f928;
      ppuVar5 = &PTR_PTR_1126ba838;
      goto LAB_102822634;
    }
LAB_102822684:
    uStack_70 = uStack_50;
    uStack_68 = uStack_48;
    uStack_60 = uStack_40;
    lStack_58 = lStack_38;
    func_0x00010006e7f4(&uStack_50);
  }
  else {
    if (lVar1 == 6) {
      func_0x000107c42924();
      func_0x000107c61180();
      if (param_1 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x000107c60234(&uStack_70);
        func_0x000107c615e8(param_1);
      }
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      lStack_38 = lStack_58;
      uStack_40 = uStack_60;
      if (lStack_58 == 0) goto LAB_102822684;
      uVar4 = 0x112ec37c0;
      ppuVar5 = &PTR_PTR_1126ba880;
    }
    else {
      if (lVar1 != 10) goto LAB_10282268c;
      func_0x000107c42924();
      func_0x000107c61180();
      if (param_1 == 0) {
        uStack_68 = 0;
        uStack_70 = 0;
        lStack_58 = 0;
        uStack_60 = 0;
      }
      else {
        func_0x000107c60234(&uStack_70);
        func_0x000107c615e8(param_1);
      }
      uStack_48 = uStack_68;
      uStack_50 = uStack_70;
      lStack_38 = lStack_58;
      uStack_40 = uStack_60;
      if (lStack_58 == 0) goto LAB_102822684;
      uVar4 = 0x112ec37c8;
      ppuVar5 = &PTR_PTR_1126bb2d0;
    }
LAB_102822634:
    uVar2 = 0;
    uVar6 = uStack_40;
    uVar7 = uStack_50;
    uStack_70 = uStack_50;
    uStack_68 = uStack_48;
    uStack_60 = uStack_40;
    lStack_58 = lStack_38;
    FUN_1028228a0(0,uVar4,ppuVar5);
    puVar3 = &uStack_78;
    func_0x000107c6147c(puVar3,&uStack_50,PTR___sypN_11034f1a8 + 8,uVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      func_0x000107c4c96c(uStack_78);
      func_0x000107c61170(uStack_78);
      uVar8 = uVar6;
      goto LAB_102822690;
    }
  }
LAB_10282268c:
  uVar7 = 0;
LAB_102822690:
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = uVar8;
  return auVar9;
}



/* Entry: 1028226a8; end: 10282289f;  */

undefined1  [16] FUN_1028226a8(double param_1,double param_2,long param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined1 auVar5 [16];
  
  dVar2 = param_1;
  dVar3 = param_2;
  FUN_1028224f8();
  func_0x000107c42934();
  dVar1 = 0.0;
  if (param_3 < 5) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        if (param_1 * 0.45 <= 200.0) {
          dVar1 = (double)(long)(param_1 * 0.45);
        }
        else {
          dVar1 = 200.0;
        }
        dVar4 = dVar1;
        if (param_2 < dVar1) {
          dVar1 = param_2;
          dVar4 = param_2;
        }
      }
      else {
        dVar4 = 0.0;
        if (param_3 == 3) {
          if ((dVar2 == 0.0) && (dVar3 == 0.0)) {
            dVar2 = 100.0;
            if (param_1 * 0.2667 <= 100.0) {
              dVar2 = param_1 * 0.2667;
            }
            dVar2 = (dVar2 + 8.0) * 1.5;
            dVar1 = param_1;
            dVar4 = param_1;
            if (dVar2 <= param_1) {
              dVar1 = dVar2;
              dVar4 = dVar2;
            }
          }
          else {
            dVar1 = dVar3;
            if (1.0 <= dVar2 / dVar3) {
              dVar1 = dVar2;
            }
            dVar1 = (param_1 * 0.626) / dVar1;
            dVar4 = dVar3 * dVar1;
            dVar1 = dVar2 * dVar1;
            if ((dVar2 * 1.5 <= dVar1) && (dVar3 * 1.5 <= dVar4)) {
              dVar1 = dVar2 * 1.5;
              dVar4 = dVar3 * 1.5;
            }
          }
        }
      }
      goto LAB_1028227f8;
    }
  }
  else if (param_3 != 5) {
    if ((param_3 == 6) || (param_3 == 10)) {
      if ((dVar2 != 0.0) || (dVar4 = 0.0, dVar3 != 0.0)) {
        dVar4 = 250.0 / dVar3;
        if (1.0 <= dVar2 / dVar3) {
          dVar4 = (param_1 * 0.85) / dVar2;
        }
        dVar1 = dVar2 * dVar4;
        dVar4 = dVar3 * dVar4;
      }
    }
    else {
      dVar4 = 0.0;
    }
    goto LAB_1028227f8;
  }
  dVar2 = 108.0;
  if (param_1 * 0.2667 <= 100.0) {
    dVar2 = param_1 * 0.2667 + 8.0;
  }
  if (dVar2 <= param_1) {
    param_1 = dVar2;
  }
  dVar1 = param_2;
  dVar4 = param_2;
  if (param_1 <= param_2) {
    dVar1 = param_1;
    dVar4 = param_1;
  }
LAB_1028227f8:
  auVar5._8_8_ = dVar4;
  auVar5._0_8_ = dVar1;
  return auVar5;
}



/* Entry: 1028228a0; end: 1028228df;  */

void FUN_1028228a0(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1028228e0; end: 102822c83;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1028228e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = 0x60;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  uVar1 = *(undefined8 *)(param_2 + _DAT_113083f78);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x000107c5faec();
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar2;
  *(undefined8 *)(unaff_x20 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_4;
  *(undefined8 *)(unaff_x20 + 0x38) = param_5;
  *(undefined8 *)(unaff_x20 + 0x40) = param_6;
  *(undefined8 *)(unaff_x20 + 0x48) = param_7;
  *(undefined8 *)(unaff_x20 + 0x50) = param_8;
  *(undefined8 *)(unaff_x20 + 0x58) = param_9;
  return unaff_x20;
}



/* Entry: 102822c84; end: 102822cff;  */

void FUN_102822c84(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 102822d00; end: 102822d1f;  */

void FUN_102822d00(void)

{
  func_0x000102822a84();
  return;
}



/* Entry: 102822d20; end: 102822d27;  */

undefined8 FUN_102822d20(void)

{
  return 0;
}



/* Entry: 102822d28; end: 102822d47;  */

void FUN_102822d28(void)

{
  func_0x000107c61168(&PTR_PTR_112ec3810);
  return;
}



/* Entry: 102822d48; end: 102822e27;  */

void FUN_102822d48(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  
  func_0x0001000285a8(0x112ec3998,&UNK_10dae39d0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x0001000b637c(uVar1);
  plVar2 = *(long **)(unaff_x20 + 0x50);
  func_0x000100471e0c(plVar2,0);
  func_0x000107c61574(uVar1);
  puVar3 = &UNK_110553e08;
  func_0x000107c613fc(&UNK_110553e08,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  pcVar4 = FUN_1028240c0;
  puVar6 = puVar3;
  (**(code **)(*plVar2 + 0x60))(FUN_1028240c0);
  func_0x000107c61574(plVar2);
  func_0x000107c61574(puVar3);
  pcVar5 = pcVar4;
  func_0x000107c614f0(pcVar4);
  (**(code **)(puVar6 + 0x10))(*(undefined8 *)(unaff_x20 + 0x60),pcVar5,puVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(pcVar4);
  return;
}



/* Entry: 102822e28; end: 102822ea3;  */

void FUN_102822e28(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 auStack_58 [3];
  undefined8 uStack_40;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    uVar1 = 0;
    FUN_1028240c8();
    auStack_58[0] = uVar2;
    uStack_40 = uVar1;
    func_0x000107c61174(uVar2);
    FUN_102822ea4(auStack_58);
    func_0x000107c61574(param_2);
    func_0x00010006e7f4(auStack_58);
  }
  return;
}



/* Entry: 102822ea4; end: 102822fcf;  */

void FUN_102822ea4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  code *pcStack_48;
  undefined *puStack_40;
  undefined8 uStack_38;
  
  func_0x000100672b50(param_1,&puStack_68);
  if (puStack_50 == (undefined *)0x0) {
    func_0x00010006e7f4(&puStack_68);
  }
  else {
    uVar1 = 0;
    FUN_1028240c8(0);
    puVar2 = &uStack_38;
    func_0x000107c6147c(puVar2,&puStack_68,PTR___sypN_11034f1a8 + 8,uVar1,6);
    if (((ulong)puVar2 & 1) != 0) {
      puVar3 = &UNK_110553e08;
      func_0x000107c613fc(&UNK_110553e08,0x18,7);
      func_0x000107c61644(puVar3 + 0x10);
      puVar4 = &UNK_110553e30;
      func_0x000107c613fc(&UNK_110553e30,0x20,7);
      *(code **)(puVar4 + 0x10) = FUN_10282410c;
      *(undefined **)(puVar4 + 0x18) = puVar3;
      pcStack_48 = FUN_102824114;
      puStack_68 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_60 = 0x42000000;
      uStack_58 = 0x102823398;
      puStack_50 = &UNK_110553e48;
      ppuVar5 = &puStack_68;
      puStack_40 = puVar4;
      func_0x000107c60bc4(ppuVar5);
      func_0x000107c61574(puStack_40);
      func_0x000107c4c700(uStack_38);
      func_0x000107c60bd0(ppuVar5);
      func_0x000107c61574(puVar3);
      func_0x000107c61170(uStack_38);
    }
  }
  return;
}



/* Entry: 102822fd0; end: 102823033;  */

void FUN_102822fd0(void)

{
  undefined8 in_x4;
  long in_x5;
  long in_x6;
  undefined1 auStack_38 [24];
  
  if (in_x5 != 0) {
    return;
  }
  func_0x000107c61428(in_x6 + 0x10,auStack_38,0,0);
  in_x6 = in_x6 + 0x10;
  func_0x000107c61648();
  if (in_x6 != 0) {
    FUN_102823034(in_x4);
    func_0x000107c61574(in_x6);
  }
  return;
}



/* Entry: 102823034; end: 102823433;  */

/* WARNING: Possible PIC construction at 0x000102823074: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028230a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102823120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102823158: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010282321c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102823318: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102823328: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102823340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010282336c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028231c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028231d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028231e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001028231d4) */
/* WARNING: Removing unreachable block (ram,0x0001028231c4) */
/* WARNING: Removing unreachable block (ram,0x000102823370) */
/* WARNING: Removing unreachable block (ram,0x00010282332c) */
/* WARNING: Removing unreachable block (ram,0x00010282331c) */
/* WARNING: Removing unreachable block (ram,0x000102823220) */
/* WARNING: Removing unreachable block (ram,0x000102823360) */
/* WARNING: Removing unreachable block (ram,0x000102823234) */
/* WARNING: Removing unreachable block (ram,0x00010282315c) */
/* WARNING: Removing unreachable block (ram,0x000102823168) */
/* WARNING: Removing unreachable block (ram,0x0001028231bc) */
/* WARNING: Removing unreachable block (ram,0x000102823170) */
/* WARNING: Removing unreachable block (ram,0x0001028231f4) */
/* WARNING: Removing unreachable block (ram,0x00010282317c) */
/* WARNING: Removing unreachable block (ram,0x0001028231f8) */
/* WARNING: Removing unreachable block (ram,0x000102823124) */
/* WARNING: Removing unreachable block (ram,0x0001028231dc) */
/* WARNING: Removing unreachable block (ram,0x000102823128) */
/* WARNING: Removing unreachable block (ram,0x0001028230a4) */
/* WARNING: Removing unreachable block (ram,0x0001028230a8) */
/* WARNING: Removing unreachable block (ram,0x000102823344) */
/* WARNING: Removing unreachable block (ram,0x0001028230bc) */
/* WARNING: Removing unreachable block (ram,0x000102823378) */
/* WARNING: Removing unreachable block (ram,0x0001028230d0) */
/* WARNING: Removing unreachable block (ram,0x0001028231ac) */
/* WARNING: Removing unreachable block (ram,0x0001028230e4) */
/* WARNING: Removing unreachable block (ram,0x000102823130) */
/* WARNING: Removing unreachable block (ram,0x000102823368) */
/* WARNING: Removing unreachable block (ram,0x000102823144) */
/* WARNING: Removing unreachable block (ram,0x0001028230f8) */
/* WARNING: Removing unreachable block (ram,0x000102823078) */
/* WARNING: Removing unreachable block (ram,0x000102823080) */
/* WARNING: Removing unreachable block (ram,0x000102823084) */
/* WARNING: Removing unreachable block (ram,0x00010282318c) */
/* WARNING: Removing unreachable block (ram,0x000102823088) */
/* WARNING: Removing unreachable block (ram,0x000107c6142c) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0014) */
/* WARNING: Removing unreachable block (ram,0x0001028231ec) */
/* WARNING: Removing unreachable block (ram,0x00010282337c) */

void FUN_102823034(undefined8 param_1)

{
  func_0x000107c4cde0();
  func_0x000107c61180();
  func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102823434; end: 10282357f;  */

void FUN_102823434(ulong param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if ((param_1 == 0) || (func_0x000107c3ebcc(), (param_1 & 1) == 0)) {
      puVar1 = &UNK_110553e08;
      func_0x000107c613fc(&UNK_110553e08,0x18,7);
      func_0x000107c61644(puVar1 + 0x10,param_3);
      puVar2 = &UNK_110553ed0;
      func_0x000107c613fc(&UNK_110553ed0,0x28,7);
      *(undefined **)(puVar2 + 0x10) = puVar1;
      *(undefined8 *)(puVar2 + 0x18) = param_4;
      *(undefined8 *)(puVar2 + 0x20) = param_5;
      puVar1 = &UNK_110553ef8;
      func_0x000107c613fc(&UNK_110553ef8,0x20,7);
      *(undefined **)(puVar1 + 0x10) = &UNK_10dae39e8;
      *(undefined **)(puVar1 + 0x18) = puVar2;
      func_0x000107c61174(param_4);
      func_0x000107c61174(param_5);
      lVar3 = 0x27;
      func_0x0001001ca524(0x27,3,0x2c,3,0,0,&UNK_10dae39f8,puVar1,PTR___sytN_11034f1b0 + 8);
      func_0x000107c61574(param_3);
      func_0x000107c61574(puVar1);
      param_3 = lVar3;
    }
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 102823580; end: 1028235ef;  */

void FUN_102823580(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_2;
  *(undefined8 *)(unaff_x22 + 0x38) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1028235f0,uVar1,uVar2);
  return;
}



/* Entry: 1028235f0; end: 102823657;  */

void FUN_1028235f0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x40));
  func_0x000107c61428(lVar1 + 0x10,unaff_x22 + 0x10,0,0);
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_102823658(*(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
    func_0x000107c61574(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x000102823654. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102823658; end: 102823817;  */

/* WARNING: Possible PIC construction at 0x000102823698: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102823704: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001028237c8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102823708) */
/* WARNING: Removing unreachable block (ram,0x0001028237cc) */

void FUN_102823658(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = unaff_x20 + 0x58;
  func_0x000107c61618();
  if (lVar1 == 0) {
    lVar2 = *(long *)(unaff_x20 + 0x30);
    func_0x000107c4d80c();
    func_0x000107c61180();
    lVar1 = lVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar1 == 0) {
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x18);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c3d684();
      func_0x000107c61180();
      lVar1 = lVar2;
    }
  }
  else {
    func_0x000107c4207c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102823818; end: 102823853;  */

void FUN_102823818(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102823850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}


