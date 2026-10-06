/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1013c56cc; end: 1013c5767;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c56cc(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  
  pcVar4 = *(code **)(unaff_x20 + _DAT_112d7a608);
  if (pcVar4 != (code *)0x0) {
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d7a608))[1];
    func_0x000107c6157c(uVar3);
    (*pcVar4)(0);
    FUN_1013c2974(pcVar4,uVar3);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112d7a610);
  lVar1 = lVar2;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar2);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  return;
}



/* Entry: 1013c5768; end: 1013c5e9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013c5768(int param_1,ulong param_2,long param_3,code *param_4,undefined8 param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  long *plVar7;
  undefined **ppuVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined **ppuVar16;
  long unaff_x20;
  long lVar17;
  undefined **ppuVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  code *pcVar22;
  undefined8 uStack_108;
  long lStack_d8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  long lStack_88;
  long lStack_80;
  
  uVar14 = param_2;
  func_0x000107c3cfdc();
  if (param_1 != 0x52) goto LAB_1013c594c;
  lVar5 = param_3;
  func_0x000107c4dee8();
  func_0x000107c61180();
  if (lVar5 == 0) {
LAB_1013c593c:
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
    puStack_a8 = (undefined *)0x0;
    pcStack_b0 = (code *)0x0;
  }
  else {
    lVar17 = *(long *)(lVar5 + _DAT_11307abc8);
    func_0x000107c61434(lVar17);
    func_0x000107c61170(lVar5);
    ppuVar6 = &PTR____CFConstantStringClassReference_110f0c038;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c038);
    if (*(long *)(lVar17 + 0x10) != 0) {
      func_0x000107c61434(lVar17);
      uVar15 = uVar14;
      func_0x000100029284(ppuVar6);
      if ((uVar15 & 1) != 0) {
        func_0x0001000bb420(*(long *)(lVar17 + 0x38) + (long)ppuVar6 * 0x20,&puStack_c0);
        func_0x000107c6142c(uVar14);
        func_0x000107c61430(lVar17,2);
        if (puStack_a8 != (undefined *)0x0) {
          uVar10 = 0x112d7a598;
          func_0x0001000285a8(0x112d7a598,&UNK_10d939e10);
          puVar11 = PTR___sypN_11034f1a8;
          plVar7 = &lStack_88;
          ppuVar6 = &puStack_c0;
          func_0x000107c6147c(plVar7,ppuVar6,PTR___sypN_11034f1a8 + 8,uVar10,6);
          lVar5 = lStack_88;
          if (((ulong)plVar7 & 1) == 0) goto LAB_1013c594c;
          lVar17 = param_3;
          func_0x000107c4dee8();
          func_0x000107c61180();
          if (lVar17 == 0) {
            func_0x000107c615e8(lVar5);
            goto LAB_1013c593c;
          }
          ppuVar18 = *(undefined ***)(lVar17 + _DAT_11307abc8);
          func_0x000107c61434(ppuVar18);
          func_0x000107c61170(lVar17);
          ppuVar8 = &PTR____CFConstantStringClassReference_110f0c078;
          func_0x000107c5faec(&PTR____CFConstantStringClassReference_110f0c078);
          if (ppuVar18[2] == (undefined *)0x0) {
LAB_1013c598c:
            uStack_b8 = 0;
            puStack_c0 = (undefined *)0x0;
            puStack_a8 = (undefined *)0x0;
            pcStack_b0 = (code *)0x0;
          }
          else {
            func_0x000107c61434(ppuVar18);
            ppuVar16 = ppuVar6;
            func_0x000100029284(ppuVar8);
            if (((ulong)ppuVar16 & 1) == 0) {
              func_0x000107c6142c(ppuVar18);
              goto LAB_1013c598c;
            }
            func_0x0001000bb420(ppuVar18[7] + (long)ppuVar8 * 0x20,&puStack_c0);
            func_0x000107c6142c(ppuVar6);
            ppuVar6 = ppuVar18;
          }
          func_0x000107c6142c(ppuVar6);
          func_0x000107c6142c(ppuVar18);
          if (puStack_a8 == (undefined *)0x0) {
            func_0x000107c615e8(lVar5);
          }
          else {
            plVar7 = &lStack_88;
            func_0x000107c6147c(plVar7,&puStack_c0,puVar11 + 8,PTR___sSSN_11034da80,6);
            lVar4 = lStack_80;
            lVar17 = lStack_88;
            if (((ulong)plVar7 & 1) == 0) {
              func_0x000107c615e8(lVar5);
              goto LAB_1013c594c;
            }
            lVar9 = param_3;
            func_0x000107c4dee8();
            func_0x000107c61180();
            if (lVar9 == 0) {
              func_0x000107c615e8(lVar5);
              func_0x000107c6142c(lStack_80);
              goto LAB_1013c593c;
            }
            lVar19 = *(long *)(lVar9 + _DAT_11307abc8);
            func_0x000107c61434(lVar19);
            func_0x000107c61170(lVar9);
            if (*(long *)(lVar19 + 0x10) == 0) {
              uStack_b8 = 0;
              puStack_c0 = (undefined *)0x0;
              puStack_a8 = (undefined *)0x0;
              pcStack_b0 = (code *)0x0;
            }
            else {
              func_0x000107c61434(lVar19);
              uVar14 = 0;
              lVar9 = -0x2fffffffffffffed;
              func_0x000100029284(0xd000000000000013);
              if ((uVar14 & 1) == 0) {
                func_0x000107c6142c(lVar19);
                uStack_b8 = 0;
                puStack_c0 = (undefined *)0x0;
                puStack_a8 = (undefined *)0x0;
                pcStack_b0 = (code *)0x0;
              }
              else {
                func_0x0001000bb420(*(long *)(lVar19 + 0x38) + lVar9 * 0x20,&puStack_c0);
                func_0x000107c6142c(lVar19);
              }
            }
            func_0x000107c6142c(lVar19);
            if (puStack_a8 != (undefined *)0x0) {
              uVar10 = 0;
              FUN_1013c5ec8(0);
              plVar7 = &lStack_88;
              func_0x000107c6147c(plVar7,&puStack_c0,puVar11 + 8,uVar10,6);
              lVar9 = lStack_88;
              if (((ulong)plVar7 & 1) == 0) {
                func_0x000107c615e8(lVar5);
              }
              else {
                lVar19 = lStack_88;
                func_0x000107c42e84();
                func_0x000107c61180();
                if (lVar19 != 0) {
                  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a608);
                  pcVar22 = (code *)*puVar1;
                  if (pcVar22 != (code *)0x0) {
                    uVar10 = puVar1[1];
                    func_0x000107c6157c(uVar10);
                    (*pcVar22)(0);
                    FUN_1013c2974(pcVar22,uVar10);
                  }
                  lVar20 = *(long *)(unaff_x20 + _DAT_112d7a610);
                  lVar13 = lVar20;
                  func_0x000107c5194c();
                  func_0x000107c61180();
                  if (lVar13 != 0) {
                    func_0x000107c61170();
                    func_0x000107c4ffe8(lVar20);
                    func_0x000107c61180();
                    func_0x000107c615e8();
                  }
                  lStack_88 = 0;
                  lStack_80 = 0;
                  puVar11 = &UNK_1103ae508;
                  func_0x000107c613fc(&UNK_1103ae508,0x18,7);
                  *(long **)(puVar11 + 0x10) = &lStack_88;
                  puVar12 = &UNK_1103ae530;
                  func_0x000107c613fc(&UNK_1103ae530,0x20,7);
                  *(code **)(puVar12 + 0x10) = FUN_1013c5f0c;
                  *(undefined **)(puVar12 + 0x18) = puVar11;
                  puVar3 = PTR___NSConcreteStackBlock_11034bd00;
                  pcStack_a0 = (code *)0x1013c5f3c;
                  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
                  uStack_b8 = 0x42000000;
                  pcStack_b0 = FUN_1013c53f4;
                  puStack_a8 = &UNK_1103ae548;
                  ppuVar6 = &puStack_c0;
                  puStack_98 = puVar12;
                  func_0x000107c60bc4(ppuVar6);
                  func_0x000107c61574(puStack_98);
                  func_0x000107c4c6a4(lVar19);
                  func_0x000107c60bd0(ppuVar6);
                  func_0x0001000285a8(0x112d7a640,&UNK_10d939e90);
                  func_0x000107c613fc();
                  lVar13 = 0;
                  func_0x00010095c380();
                  uStack_108 = lVar4;
                  func_0x000107c5fadc(lVar17);
                  func_0x000107c6142c(lVar4);
                  pcStack_a0 = FUN_1013c5fb8;
                  puStack_c0 = puVar3;
                  uStack_b8 = 0x42000000;
                  pcStack_b0 = FUN_1013c3000;
                  puStack_a8 = &UNK_1103ae570;
                  ppuVar6 = &puStack_c0;
                  puStack_98 = (undefined *)lVar13;
                  func_0x000107c60bc4(ppuVar6);
                  puVar12 = puStack_98;
                  func_0x000107c6157c(lVar13);
                  func_0x000107c61574(puVar12);
                  func_0x000107c45084(lVar5);
                  func_0x000107c60bd0(ppuVar6);
                  func_0x000107c61170(lVar17);
                  func_0x000107c61174(param_2);
                  func_0x000107c406b8();
                  func_0x000107c61180();
                  if (param_3 == 0) {
                    lStack_d8 = 0;
                    uStack_108 = 0;
                  }
                  else {
                    lVar17 = param_3;
                    func_0x000107c40674();
                    func_0x000107c61180();
                    func_0x000107c61170(param_3);
                    lStack_d8 = lVar17;
                    func_0x000107c5faec();
                    func_0x000107c61170(lVar17);
                  }
                  func_0x000103b96ecc(0);
                  uVar21 = *(undefined8 *)(lVar13 + 0x10);
                  uVar10 = uVar21;
                  func_0x000107c6157c();
                  func_0x00010488b298();
                  func_0x000107c61574(uVar21);
                  uVar21 = uVar10;
                  func_0x000103b96a80();
                  func_0x000107c61170(uVar10);
                  uVar14 = param_2;
                  func_0x000107c4e2ec(param_2);
                  lVar4 = lStack_80;
                  lVar17 = 0;
                  if (lStack_80 != 0) {
                    lVar17 = lStack_88;
                  }
                  lVar2 = -0x2000000000000000;
                  if (lStack_80 != 0) {
                    lVar2 = lStack_80;
                  }
                  func_0x0001008f7540(0);
                  func_0x000107c610f8();
                  func_0x000107c61434(lVar4);
                  func_0x000107c61174();
                  func_0x000103b96458(param_2,lStack_d8,uStack_108,uVar21,unaff_x20,uVar14,lVar17,
                                      lVar2);
                  func_0x000107c42c1c(lVar20);
                  func_0x000107c615e8(lVar5);
                  func_0x000107c61574(lVar13);
                  func_0x000107c61170(lVar19);
                  func_0x000107c61170(param_2);
                  func_0x000107c61170(lVar9);
                  uVar10 = *puVar1;
                  uVar21 = puVar1[1];
                  *puVar1 = param_4;
                  puVar1[1] = param_5;
                  func_0x0001013c2988(param_4,param_5);
                  FUN_1013c2974(uVar10,uVar21);
                  lVar5 = lStack_80;
                  func_0x000107c61574(puVar11);
                  func_0x000107c6142c(lVar5);
                  return 0;
                }
                func_0x000107c615e8(lVar5);
                func_0x000107c61170(lStack_88);
              }
              func_0x000107c6142c(lStack_80);
              goto LAB_1013c594c;
            }
            func_0x000107c615e8(lVar5);
            func_0x000107c6142c(lStack_80);
          }
        }
        goto LAB_1013c5944;
      }
      func_0x000107c6142c(lVar17);
    }
    uStack_b8 = 0;
    puStack_c0 = (undefined *)0x0;
    puStack_a8 = (undefined *)0x0;
    pcStack_b0 = (code *)0x0;
    func_0x000107c6142c(uVar14);
    func_0x000107c6142c(lVar17);
  }
LAB_1013c5944:
  func_0x00010006e7f4(&puStack_c0);
LAB_1013c594c:
  if (param_4 != (code *)0x0) {
    (*param_4)(0);
  }
  return 0;
}



/* Entry: 1013c5ea0; end: 1013c5ebf;  */

void FUN_1013c5ea0(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf330);
  return;
}



/* Entry: 1013c5ec0; end: 1013c5ec7;  */

void FUN_1013c5ec0(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_1 == 0) {
    param_1 = 0;
  }
  else {
    func_0x000107c5ed2c();
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c5ec8; end: 1013c5f0b;  */

void FUN_1013c5ec8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d7a520 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126b2390;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d7a520 = puVar1;
  return;
}



/* Entry: 1013c5f0c; end: 1013c5f9b;  */

void FUN_1013c5f0c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uVar2 = puVar1[1];
  *puVar1 = in_stack_00000028;
  puVar1[1] = in_stack_00000030;
  func_0x000107c61434();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 1013c5f9c; end: 1013c5fb7;  */

void FUN_1013c5f9c(long param_1,long param_2)

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



/* Entry: 1013c5fb8; end: 1013c5fdb;  */

void FUN_1013c5fb8(undefined8 param_1)

{
  undefined8 uStack_18;
  
  uStack_18 = param_1;
  func_0x000100b60084(&uStack_18);
  return;
}



/* Entry: 1013c5fdc; end: 1013c5fef;  */

void FUN_1013c5fdc(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103ae5a8;
  if (lRam0000000112d7a648 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d7a648 = param_1;
  }
  return;
}



/* Entry: 1013c5ff0; end: 1013c6033;  */

void FUN_1013c5ff0(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1013c6034; end: 1013c603b;  */

void FUN_1013c6034(long param_1,long param_2)

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



/* Entry: 1013c603c; end: 1013c61f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013c603c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7a670;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d7a670);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIImageView_1126aec28;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c61180();
    func_0x000107c53840();
    func_0x000107c52ab8(puVar3,param_2,0x12);
    puVar2 = puVar3;
    func_0x000107c4aba4(puVar3);
    func_0x000107c61180();
    func_0x000107c539d4(*(undefined8 *)(unaff_x20 + _DAT_112d7a660));
    func_0x000107c61170(puVar2);
    puVar2 = puVar3;
    func_0x000107c4aba4(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c562fc(puVar2,param_2,1);
    func_0x000107c61170(puVar2);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1013c61f4; end: 1013c6323;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013c61f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  
  puVar3 = &stack0xffffffffffffffb0;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a668);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a670) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a678) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a650) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a658) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a660) = param_1;
  puVar2 = PTR_s_initWithFrame__1125e2948;
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffb0,puVar2);
  func_0x000107c61180();
  puVar4 = puVar3;
  FUN_1013c603c();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar4);
  func_0x0001013c6128();
  func_0x000107c3d89c(puVar3);
  func_0x000107c61170(puVar4);
  FUN_1013c6670();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return puVar3;
}



/* Entry: 1013c6324; end: 1013c6383; -[_TtC22SCContextTopLevelCards12AlbumArtView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1013c6324(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a668);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_1 + _DAT_112d7a670) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7a678) = 0;
  func_0x000107c61464(param_1,lVar2,0x40,7);
  return 0;
}



/* Entry: 1013c6384; end: 1013c6613;  */

/* WARNING: Possible PIC construction at 0x0001013c6454: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c64b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c6594: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c65b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c65c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c65d8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c65cc) */
/* WARNING: Removing unreachable block (ram,0x0001013c65b8) */
/* WARNING: Removing unreachable block (ram,0x0001013c6598) */
/* WARNING: Removing unreachable block (ram,0x0001013c64bc) */
/* WARNING: Removing unreachable block (ram,0x0001013c6458) */
/* WARNING: Removing unreachable block (ram,0x0001013c65dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c6384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  double *pdVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong unaff_x20;
  double dVar5;
  double dVar6;
  
  uVar2 = unaff_x20;
  func_0x000107c3ec60();
  pdVar1 = (double *)(unaff_x20 + _DAT_112d7a668);
  dVar5 = *pdVar1;
  dVar6 = pdVar1[1];
  func_0x000107c609fc(param_3,param_4);
  if ((uVar2 & 1) != 0) {
    return;
  }
  func_0x000107c3ec60();
  *pdVar1 = dVar5;
  pdVar1[1] = dVar6;
  func_0x000107c3ec60();
  func_0x000107c3ec60();
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c5afac(dVar5 * 0.5,dVar6 * 0.5);
  func_0x000107c61180();
  puVar4 = puVar3;
  func_0x0001013c6128();
  if (puVar3 == (undefined *)0x0) {
    func_0x000107c550d8();
  }
  else {
    func_0x000107c550d8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1013c6614; end: 1013c666f; -[_TtC22SCContextTopLevelCards12AlbumArtView layoutSubviews] */

void FUN_1013c6614(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  uStack_30 = param_1;
  uStack_28 = uVar2;
  func_0x000107c61174(param_1);
  func_0x000107c61154(&uStack_30,puVar1);
  FUN_1013c6384();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013c6670; end: 1013c6917;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c6670(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined1 *puStack_a0;
  char *pcStack_98;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  lVar12 = 0x112d36580;
  puVar6 = &UNK_10d9016d0;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)&puStack_a0 - extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar9 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(unaff_x20 + _DAT_112d7a650);
  lVar12 = lVar11;
  func_0x000107c40500();
  func_0x000107c61180();
  if (lVar12 != 0) {
    lVar3 = lVar12;
    func_0x000107c5faec();
    func_0x000107c61170(lVar12);
    func_0x000107c5edd0(lVar13,lVar3,puVar6);
    func_0x000107c6142c(puVar6);
    lVar12 = lVar13;
    (**(code **)(lVar8 + 0x30))(lVar13,1,lVar2);
    if ((int)lVar12 == 1) {
      func_0x0001000293e4(lVar13);
    }
    else {
      (**(code **)(lVar8 + 0x20))(lVar9,lVar13,lVar2);
      pcVar4 = "fetchAlbumArt()";
      func_0x0001000c10c0();
      func_0x000107c61180();
      pcStack_98 = pcVar4;
      func_0x0001000d224c(auStack_88);
      puVar5 = auStack_88;
      uVar7 = uStack_70;
      func_0x0001000a8868(puVar5,uStack_70);
      lVar12 = lVar11;
      puStack_a0 = puVar5;
      func_0x000107c4271c();
      func_0x000107c61180();
      if (lVar12 == 0) {
        lVar13 = 0;
        uVar14 = 0xf000000000000000;
        uVar10 = uVar7;
      }
      else {
        lVar13 = lVar12;
        func_0x000107c5ee30();
        uVar10 = uVar7;
        func_0x000107c61170(lVar12);
        uVar14 = uVar7;
      }
      func_0x000107c42718();
      func_0x000107c61180();
      if (lVar11 == 0) {
        lVar12 = 0;
        uVar10 = 0xf000000000000000;
      }
      else {
        lVar12 = lVar11;
        func_0x000107c5ee30();
        func_0x000107c61170(lVar11);
      }
      lVar11 = lVar9;
      (**(code **)(lStack_68 + 0x10))(lVar9,lVar13,uVar14,lVar12,uVar10,uStack_70,lStack_68);
      func_0x0001000b44c0(lVar12,uVar10);
      func_0x0001000b44c0(lVar13,uVar14);
      puVar6 = &UNK_1103ae670;
      func_0x000107c613fc(&UNK_1103ae670,0x18,7);
      func_0x000107c61614(puVar6 + 0x10,unaff_x20);
      pcVar4 = pcStack_98;
      func_0x00010075a04c(pcStack_98,1,0x1013c6b8c,puVar6);
      func_0x000107c615e8(pcVar4);
      func_0x000107c61574(lVar11);
      func_0x000107c61574(puVar6);
      (**(code **)(lVar8 + 8))(lVar9,lVar2);
      func_0x0001000834e4(auStack_88);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c6918);
  (*pcVar1)();
}



/* Entry: 1013c6918; end: 1013c69bb;  */

void FUN_1013c6918(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = *param_1;
  lVar1 = param_1[1];
  if ((char)lVar1 != '\x01' && lVar3 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      lVar2 = lVar3;
      func_0x000107c61174(lVar3);
      FUN_1013c603c();
      func_0x000107c55258();
      func_0x000107c61170(lVar2);
      FUN_100f838dc(lVar3,(char)lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1013c69bc; end: 1013c6a1b; -[_TtC22SCContextTopLevelCards12AlbumArtView initWithFrame:] */

void FUN_1013c69bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelCards.AlbumArtView",0x23,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c69e8);
  (*pcVar1)();
}



/* Entry: 1013c6a1c; end: 1013c6a73; -[_TtC22SCContextTopLevelCards12AlbumArtView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013c6a38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c6a58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c6a3c) */
/* WARNING: Removing unreachable block (ram,0x0001013c6a5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c6a1c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a650));
  return;
}



/* Entry: 1013c6a74; end: 1013c6a93;  */

void FUN_1013c6a74(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf3f8);
  return;
}



/* Entry: 1013c6a94; end: 1013c6aaf;  */

bool FUN_1013c6a94(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 1013c6ab0; end: 1013c6b7f;  */

void FUN_1013c6ab0(undefined8 param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uStack_28;
  char cStack_24;
  
  uStack_28 = 0;
  cStack_24 = '\x01';
  func_0x000107c5fdf0(param_1,&uStack_28);
  uVar1 = 0;
  if (cStack_24 != '\x01') {
    uVar1 = uStack_28;
  }
  *param_2 = uVar1;
  *(bool *)(param_2 + 1) = cStack_24 == '\x01';
  return;
}



/* Entry: 1013c6b80; end: 1013c6baf;  */

void FUN_1013c6b80(undefined4 *param_1)

{
  undefined4 *unaff_x20;
  
  *param_1 = *unaff_x20;
  return;
}



/* Entry: 1013c6bb0; end: 1013c6c43;  */

void FUN_1013c6bb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d7a6c8;
  FUN_1013c6cf4(0x112d7a6c8,FUN_1013c6c44,&UNK_10dd21110);
  uVar2 = 0x112d7a6d0;
  FUN_1013c6cf4(0x112d7a6d0,FUN_1013c6c44,&UNK_10dd210d0);
  func_0x000107c604b8(param_1,param_2,uVar1,uVar2,PTR___sSfSHsWP_11034de00);
  return;
}



/* Entry: 1013c6c44; end: 1013c6c57;  */

void FUN_1013c6c44(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103ae698;
  if (lRam0000000112d7a6a8 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (puVar1 == (undefined *)0x0) {
    lRam0000000112d7a6a8 = param_1;
  }
  return;
}



/* Entry: 1013c6c58; end: 1013c6c9b;  */

void FUN_1013c6c58(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  func_0x000107c614d4();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Entry: 1013c6c9c; end: 1013c6cf3;  */

void FUN_1013c6c9c(void)

{
  FUN_1013c6cf4(0x112d7a6b0,FUN_1013c6c44,&UNK_10d939f08);
  return;
}



/* Entry: 1013c6cf4; end: 1013c6d33;  */

void FUN_1013c6cf4(long *param_1,code *param_2,long param_3)

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



/* Entry: 1013c6d34; end: 1013c6d3b;  */

void FUN_1013c6d34(void)

{
  undefined4 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdb8168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___sSf9hashValueSivg_11034dde8)(*unaff_x20);
  return;
}



/* Entry: 1013c6d3c; end: 1013c6d73;  */

void FUN_1013c6d3c(undefined8 param_1)

{
  float *unaff_x20;
  float fVar1;
  
  fVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    fVar1 = *unaff_x20;
  }
  func_0x000107c6069c(param_1,fVar1);
  return;
}



/* Entry: 1013c6d74; end: 1013c6da3;  */

void FUN_1013c6d74(undefined8 param_1)

{
  float *unaff_x20;
  float fVar1;
  
  fVar1 = 0.0;
  if (*unaff_x20 != 0.0) {
    fVar1 = *unaff_x20;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb9c50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ_11034ef20)(param_1,fVar1,4);
  return;
}



/* Entry: 1013c6da4; end: 1013c6dcf;  */

void FUN_1013c6da4(void)

{
  FUN_1013c6cf4(0x112d7a6c0,FUN_1013c6c44,&UNK_10d939f48);
  return;
}



/* Entry: 1013c6dd0; end: 1013c6e8b;  */

/* WARNING: Possible PIC construction at 0x0001013c6e34: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c6e58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c6e68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c6e5c) */
/* WARNING: Removing unreachable block (ram,0x0001013c6e38) */
/* WARNING: Removing unreachable block (ram,0x0001013c6e6c) */

void FUN_1013c6dd0(void)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  uVar1 = 0;
  func_0x0001036e541c(0);
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c3ec60();
  func_0x000107c54b80(uVar1);
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c49770();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(unaff_x20);
  return;
}



/* Entry: 1013c6e8c; end: 1013c771f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c6e8c(undefined *param_1,undefined8 param_2,undefined *param_3,ulong param_4,
                  long param_5,long param_6)

{
  ulong uVar1;
  undefined4 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 unaff_x20;
  undefined8 uVar18;
  undefined1 auStack_160 [16];
  long *plStack_150;
  undefined1 auStack_140 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_100 [16];
  long lStack_f0;
  long *plStack_e8;
  undefined4 auStack_c0 [4];
  long *plStack_b0;
  long lStack_a8;
  undefined4 uStack_84;
  long alStack_80 [2];
  
  uVar18 = unaff_x20;
  func_0x000107c5e308();
  func_0x000107c61180();
  uVar4 = uVar18;
  func_0x000107c402b0(0x4066800000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar18);
  func_0x000107c521e8(uVar4);
  func_0x000107c61170(uVar4);
  alStack_80[0] = 0;
  if (param_5 != 0) {
    plStack_150 = alStack_80;
    lStack_f0 = param_5;
    plStack_e8 = plStack_150;
    plStack_b0 = plStack_150;
    lStack_a8 = param_5;
    func_0x0001044261d8(0x1013c8358,auStack_c0,0x1013c8360,auStack_100,FUN_1013c7bc8,0,FUN_1013c8354
                        ,auStack_120,0x1013c835c,auStack_140,0x1013c8364,auStack_160);
  }
  lVar3 = alStack_80[0];
  uVar18 = 0x4024000000000000;
  if (alStack_80[0] != 0) {
    uVar18 = 0x4020000000000000;
  }
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  func_0x000107c52b2c(puVar5);
  func_0x000107c52610(puVar5);
  func_0x000107c59594(0x4018000000000000,puVar5);
  func_0x000107c3d89c();
  puVar6 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar7 = puVar6;
  func_0x0001008478a8();
  puVar8 = puVar7;
  func_0x000107c613fc();
  *(undefined8 *)(puVar8 + 0x18) = 9;
  *(undefined8 *)(puVar8 + 0x10) = 4;
  puVar9 = puVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  uVar4 = unaff_x20;
  func_0x000107c4acb0();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40284(uVar18);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar4);
  *(undefined **)(puVar8 + 0x20) = puVar10;
  puVar9 = puVar5;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  uVar18 = unaff_x20;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40284(0xc024000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar18);
  *(undefined **)(puVar8 + 0x28) = puVar10;
  puVar9 = puVar5;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  uVar18 = unaff_x20;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40284(0x4010000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(uVar18);
  *(undefined **)(puVar8 + 0x30) = puVar10;
  puVar9 = puVar5;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  puVar10 = puVar9;
  func_0x000107c40284(0xc010000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar9);
  func_0x000107c61170(unaff_x20);
  *(undefined **)(puVar8 + 0x38) = puVar10;
  uVar18 = 0;
  func_0x0001013c82b8(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar8;
  func_0x000107c5fc48(puVar8,uVar18);
  func_0x000107c61574(puVar8);
  func_0x000107c3d048(puVar6);
  func_0x000107c61170(puVar9);
  if (lVar3 != 0) {
    lVar11 = lVar3;
    func_0x000107c61174();
    func_0x000107c5a050();
    func_0x000107c3d5b4(puVar5);
    puVar8 = puVar7;
    func_0x000107c613fc(puVar7,((ulong)*(uint *)(puVar7 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                        *(ushort *)(puVar7 + 0x34) | 7);
    *(undefined8 *)(puVar8 + 0x18) = 5;
    *(undefined8 *)(puVar8 + 0x10) = 2;
    lVar12 = lVar11;
    func_0x000107c5e308();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c40290(0x4032000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    *(long *)(puVar8 + 0x20) = lVar13;
    lVar12 = lVar11;
    func_0x000107c44d9c();
    func_0x000107c61180();
    lVar13 = lVar12;
    func_0x000107c40290(0x4032000000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar12);
    *(long *)(puVar8 + 0x28) = lVar13;
    puVar9 = puVar8;
    func_0x000107c5fc48(puVar8,uVar18);
    func_0x000107c61574(puVar8);
    func_0x000107c3d048(puVar6);
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar9);
  }
  uStack_84 = 0x443b8000;
  FUN_1013c7f9c();
  func_0x0001013c80d4(param_1,param_2,puVar9);
  func_0x000107c537fc(0x443b8000);
  uVar14 = 0;
  FUN_1013c6c44(0);
  auStack_c0[0] = 0x3f800000;
  uVar4 = 0x112d7a740;
  func_0x0001013c8278(0x112d7a740,FUN_1013c6c44,
                      PTR___sSo16UILayoutPrioritya5UIKit01_C23NumericRawRepresentableACMc_110351670)
  ;
  func_0x000107c5f174(&uStack_84,auStack_c0,uVar14);
  func_0x000107c3d5b4(puVar5);
  if (param_4 != 0) {
    uVar1 = (ulong)param_3 & 0xffffffffffff;
    if ((param_4 & 0x2000000000000000) != 0) {
      uVar1 = param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar15 = 0xb7c2;
      func_0x0001013c80d4(0xb7c2,0xa200000000000000,puVar9);
      func_0x000107c537fc(uStack_84);
      auStack_c0[0] = 0x3f800000;
      func_0x000107c5f174(&uStack_84,auStack_c0,uVar14,uVar4);
      func_0x000107c3d5b4(puVar5);
      alStack_80[0] = 0;
      if (param_6 != 0) {
        plStack_150 = alStack_80;
        lStack_f0 = param_6;
        plStack_e8 = plStack_150;
        plStack_b0 = plStack_150;
        lStack_a8 = param_6;
        func_0x0001044261d8(FUN_1013c8238,auStack_c0,0x1013c823c,auStack_100,FUN_1013c7bc8,0,
                            0x1013c8240,auStack_120,0x1013c8248,auStack_140,0x1013c8250,auStack_160)
        ;
        lVar11 = alStack_80[0];
        if (alStack_80[0] != 0) {
          func_0x000107c5a050(alStack_80[0]);
          puVar8 = PTR__OBJC_CLASS___UIColor_1126aea70;
          func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
          func_0x000107c5e2ac();
          func_0x000107c61180();
          func_0x000107c59e10(lVar11);
          func_0x000107c61170(puVar8);
          lVar12 = lVar11;
          func_0x000107c5e308();
          func_0x000107c61180();
          lVar13 = lVar12;
          func_0x000107c40290(0x4028000000000000);
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          uVar2 = uStack_84;
          func_0x000107c5784c(uStack_84,lVar13);
          func_0x000107c613fc(puVar7,((ulong)*(uint *)(puVar7 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                              *(ushort *)(puVar7 + 0x34) | 7);
          *(undefined8 *)(puVar7 + 0x18) = 5;
          *(undefined8 *)(puVar7 + 0x10) = 2;
          *(long *)(puVar7 + 0x20) = lVar13;
          func_0x000107c61174();
          lVar12 = lVar11;
          func_0x000107c44d9c();
          func_0x000107c61180();
          lVar16 = lVar11;
          func_0x000107c5e308(lVar11);
          func_0x000107c61180();
          lVar17 = lVar12;
          func_0x000107c40280();
          func_0x000107c61180();
          func_0x000107c61170(lVar12);
          func_0x000107c61170(lVar16);
          *(long *)(puVar7 + 0x28) = lVar17;
          puVar8 = puVar7;
          func_0x000107c5fc48(puVar7,uVar18);
          func_0x000107c61574(puVar7);
          func_0x000107c3d048(puVar6);
          func_0x000107c61170(puVar8);
          func_0x000107c537fc(uVar2,lVar11);
          auStack_c0[0] = 0x3f800000;
          func_0x000107c5f174(&uStack_84,auStack_c0,uVar14,uVar4);
          func_0x000107c3d5b4(puVar5);
          func_0x000107c61170(lVar11);
          func_0x000107c61170(lVar13);
        }
      }
      func_0x0001013c80d4(param_3,param_4,puVar9);
      func_0x000107c6142c(puVar9);
      func_0x000107c537fc(uStack_84,param_3);
      auStack_c0[0] = 0x3f800000;
      func_0x000107c5f174(&uStack_84,auStack_c0,uVar14,uVar4);
      func_0x000107c3d5b4(puVar5);
      func_0x000107c61170(param_1);
      func_0x000107c61170(uVar15);
      param_1 = puVar5;
      goto LAB_1013c76e8;
    }
  }
  func_0x000107c6142c(puVar9);
  param_3 = puVar5;
LAB_1013c76e8:
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 1013c7720; end: 1013c7783; -[_TtC22SCContextTopLevelCards8CardView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c7720(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d7a710) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextTopLevelCards/CardView.swift",0x25,2,0x6f,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c7784);
  (*pcVar1)();
}



/* Entry: 1013c7784; end: 1013c7807; -[_TtC22SCContextTopLevelCards8CardView layoutSubviews] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c7784(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lStack_30;
  long lStack_28;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_layoutSubviews_112600e60;
  lStack_30 = param_1;
  lStack_28 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_30,puVar1);
  lVar2 = *(long *)(param_1 + _DAT_112d7a710);
  if (lVar2 != 0) {
    func_0x000107c61174();
    func_0x000107c3ec60(param_1);
    func_0x000107c54b80(lVar2);
    func_0x000107c61170(lVar2);
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1013c7808; end: 1013c7943;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1013c7808(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x20;
  
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d7a6e0);
    func_0x00010646addc(0,0,0,0,lVar1,param_2,param_3,*(undefined8 *)(unaff_x20 + _DAT_112d7a700),0,
                        0,0);
    func_0x000107c61180();
    func_0x000107c4019c();
    if (lVar1 != 0) {
      lVar2 = lVar1;
      func_0x000107c4aba4(lVar1);
      func_0x000107c61180();
      func_0x000107c539d4(0x4010000000000000);
      func_0x000107c61170(lVar2);
      puVar3 = PTR__OBJC_CLASS___UIColor_1126aea70;
      func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
      lVar2 = lVar1;
      func_0x000107c61174(lVar1);
      func_0x000107c5af88(puVar3);
      func_0x000107c61180();
      func_0x000107c59e10(lVar2);
      func_0x000107c61170(lVar2);
      func_0x000107c61170(puVar3);
      func_0x000107c61174(lVar2);
      func_0x000107c534b0();
      func_0x000107c61170(lVar2);
    }
    func_0x000107c615e8(param_2);
  }
  return lVar1;
}



/* Entry: 1013c7944; end: 1013c7aa3;  */

/* WARNING: Possible PIC construction at 0x0001013c79e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c79e8) */
/* WARNING: Removing unreachable block (ram,0x0001013c7aa0) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a04) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a40) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a0c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a44) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a54) */

void FUN_1013c7944(long param_1,undefined8 *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if ((int)param_1 == 0x1f) {
    puVar2 = PTR_PTR_1126c96c0;
    func_0x000107c610f8();
    func_0x000107c49594(0x4010000000000000,0x4024000000000000);
    puVar3 = (undefined *)*param_2;
    *param_2 = puVar2;
  }
  else {
    func_0x0001070bcd3c();
    func_0x000107c61180();
    if (param_1 == 0) {
      return;
    }
    puVar3 = PTR_PTR_1126c94a0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c3e214();
    func_0x000107c61180();
    if (puVar3 == (undefined *)0x0) {
      func_0x000107c61170(param_1);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c7aa0);
      (*pcVar1)();
    }
    func_0x000107c55ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar3);
  return;
}



/* Entry: 1013c7aa4; end: 1013c7bc7;  */

/* WARNING: Possible PIC construction at 0x0001013c7b24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7b78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7b98: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c7b7c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7b28) */
/* WARNING: Removing unreachable block (ram,0x0001013c7bc4) */
/* WARNING: Removing unreachable block (ram,0x0001013c7b44) */
/* WARNING: Removing unreachable block (ram,0x0001013c7b68) */
/* WARNING: Removing unreachable block (ram,0x0001013c7b4c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7b6c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7b9c) */

void FUN_1013c7aa4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  
  puVar2 = PTR_PTR_1126c94a0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c3e214();
  func_0x000107c61180();
  if (puVar2 != (undefined *)0x0) {
    func_0x000107c5fadc(param_1,param_2);
    func_0x000107c57cc8(puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c7bc4);
  (*pcVar1)();
}



/* Entry: 1013c7bc8; end: 1013c7bcb;  */

void FUN_1013c7bc8(void)

{
  return;
}



/* Entry: 1013c7bcc; end: 1013c7cbf;  */

/* WARNING: Possible PIC construction at 0x0001013c7c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c7c5c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7c88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c7bcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_5 + _DAT_112d7a6e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar2 = param_3;
    }
    func_0x0001062d30ec(param_1,uVar2,lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013c7cc0; end: 1013c7ddb;  */

/* WARNING: Possible PIC construction at 0x0001013c7d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7d78: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c7d58) */
/* WARNING: Removing unreachable block (ram,0x0001013c7d34) */
/* WARNING: Removing unreachable block (ram,0x0001013c7d7c) */

void FUN_1013c7cc0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126d4b60;
  func_0x000107c610f8(PTR_PTR_1126d4b60);
  func_0x000107c453e4();
  func_0x000107c5fadc(param_1,param_2);
  func_0x000107c53890(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013c7ddc; end: 1013c7e73;  */

/* WARNING: Possible PIC construction at 0x0001013c7e50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c7e54) */

void FUN_1013c7ddc(void)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126bb2a0;
  func_0x000107c610f8(PTR_PTR_1126bb2a0);
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c55258();
  func_0x000107c53840(puVar1);
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5e2ac();
  func_0x000107c61180();
  func_0x000107c59e10(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 1013c7e74; end: 1013c7ed3; -[_TtC22SCContextTopLevelCards8CardView initWithFrame:] */

void FUN_1013c7e74(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelCards.CardView",0x1f,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c7ea0);
  (*pcVar1)();
}



/* Entry: 1013c7ed4; end: 1013c7f7b; -[_TtC22SCContextTopLevelCards8CardView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013c7f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7f50: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c7f24) */
/* WARNING: Removing unreachable block (ram,0x0001013c7f54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c7ed4(long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112d7a6d8);
  FUN_1013c82f8(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6]);
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d7a6e0));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a6e8));
  return;
}



/* Entry: 1013c7f7c; end: 1013c7f9b;  */

void FUN_1013c7f7c(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf4e0);
  return;
}



/* Entry: 1013c7f9c; end: 1013c8237;  */

long FUN_1013c7f9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  
  puVar1 = PTR__OBJC_CLASS___NSShadow_1126b6158;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar2;
  func_0x000107c3fdd0(0x3fe0000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c59030(puVar1);
  func_0x000107c61170(puVar3);
  func_0x000107c59038(0,0x4000000000000000,puVar1);
  func_0x000107c5902c(0x4020000000000000,puVar1);
  lVar4 = 0x112d48380;
  func_0x0001000285a8(0x112d48380,&UNK_10d910f10);
  func_0x000107c61534();
  *(undefined8 *)(lVar4 + 0x18) = 2;
  *(undefined8 *)(lVar4 + 0x10) = 1;
  uVar7 = *(undefined8 *)PTR__NSShadowAttributeName_110345828;
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  uVar5 = 0;
  func_0x0001013c82b8(0,0x112d7a748,&PTR__OBJC_CLASS___NSShadow_1126b6158);
  *(undefined8 *)(lVar4 + 0x40) = uVar5;
  *(undefined **)(lVar4 + 0x28) = puVar1;
  func_0x000107c61174(uVar7);
  lVar6 = lVar4;
  func_0x000100ecbca8(lVar4);
  func_0x000107c61588(lVar4);
  FUN_100ef0820((undefined8 *)(lVar4 + 0x20));
  return lVar6;
}



/* Entry: 1013c8238; end: 1013c8277;  */

/* WARNING: Possible PIC construction at 0x0001013c79e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7a50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7a70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c79e8) */
/* WARNING: Removing unreachable block (ram,0x0001013c7aa0) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a04) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a40) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a0c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a44) */
/* WARNING: Removing unreachable block (ram,0x0001013c7a54) */

void FUN_1013c8238(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  if ((int)param_1 == 0x1f) {
    puVar3 = PTR_PTR_1126c96c0;
    func_0x000107c610f8();
    func_0x000107c49594(0x4010000000000000,0x4024000000000000);
    puVar4 = (undefined *)*puVar1;
    *puVar1 = puVar3;
  }
  else {
    func_0x0001070bcd3c(param_1,puVar1,*(undefined8 *)(unaff_x20 + 0x18),
                        *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                        *(undefined8 *)(unaff_x20 + 0x30));
    func_0x000107c61180();
    if (param_1 == 0) {
      return;
    }
    puVar4 = PTR_PTR_1126c94a0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c3e214();
    func_0x000107c61180();
    if (puVar4 == (undefined *)0x0) {
      func_0x000107c61170(param_1);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c7aa0);
      (*pcVar2)();
    }
    func_0x000107c55ffc();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar4);
  return;
}



/* Entry: 1013c8278; end: 1013c82f7;  */

void FUN_1013c8278(long *param_1,code *param_2,long param_3)

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



/* Entry: 1013c82f8; end: 1013c8353;  */

/* WARNING: Possible PIC construction at 0x0001013c8330: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c8334) */

void FUN_1013c82f8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (param_2 != 0) {
    func_0x000107c6142c(param_2);
    func_0x000107c6142c(param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_5);
    return;
  }
  return;
}



/* Entry: 1013c8354; end: 1013c8367;  */

/* WARNING: Possible PIC construction at 0x0001013c7c58: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013c7c84: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c7c5c) */
/* WARNING: Removing unreachable block (ram,0x0001013c7c88) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c8354(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d7a6e8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_1,param_2);
    uVar2 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar2 = param_3;
    }
    func_0x0001062d30ec(param_1,uVar2,lVar1);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  return;
}



/* Entry: 1013c8368; end: 1013c839b;  */

void FUN_1013c8368(void)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  func_0x000107c5af88();
  func_0x000107c61180();
  puRam0000000112d7a798 = puVar1;
  return;
}



/* Entry: 1013c839c; end: 1013c83f7;  */

long FUN_1013c839c(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar3);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar3);
    *(long *)(unaff_x20 + lVar3) = lVar1;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar1;
}



/* Entry: 1013c83f8; end: 1013c882f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1013c83f8(void)

{
  undefined1 *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long unaff_x20;
  long lVar11;
  
  puVar1 = &stack0xffffffffffffffa0;
  func_0x000107c614f0();
  *(undefined8 *)(unaff_x20 + _DAT_112d7a750) = 0;
  puVar4 = &DAT_112d7a758;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a758) = 0;
  puVar5 = &DAT_112d7a760;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a760) = 0;
  func_0x000107c61154(0,0,0,0,&stack0xffffffffffffffa0,PTR_s_initWithFrame__1125e2948);
  puVar2 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c5af88(puVar2);
  func_0x000107c61180();
  func_0x000107c52b50(puVar1);
  func_0x000107c61170(puVar2);
  puVar3 = puVar1;
  func_0x000107c4aba4();
  func_0x000107c61180();
  func_0x000107c539d4(0x4034000000000000);
  func_0x000107c61170();
  func_0x0001008479c8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  FUN_1013c839c(&DAT_112d7a758,FUN_1013c89d4);
  *(undefined **)(puVar3 + 0x20) = puVar4;
  FUN_1013c839c(&DAT_112d7a760,FUN_1013c8ba4);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  puVar4 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  uVar6 = 0;
  FUN_1013c8994(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  puVar7 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c45784();
  func_0x000107c61170(puVar7);
  func_0x000107c52b2c(puVar4);
  func_0x000107c59594(0x4018000000000000,puVar4);
  func_0x000107c52610(puVar4);
  func_0x000107c61174();
  func_0x000107c5a050();
  func_0x000107c3d89c(puVar1);
  puVar5 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar2 = puVar5;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar2 + 0x18) = 7;
  *(undefined8 *)(puVar2 + 0x10) = 3;
  puVar8 = puVar4;
  func_0x000107c3f75c();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c3f75c(puVar1);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  *(undefined **)(puVar2 + 0x20) = puVar9;
  puVar8 = puVar4;
  func_0x000107c3f764();
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  puVar3 = puVar1;
  func_0x000107c3f764(puVar1);
  func_0x000107c61180();
  puVar9 = puVar8;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar3);
  *(undefined **)(puVar2 + 0x28) = puVar9;
  puVar3 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  puVar7 = puVar3;
  func_0x000107c40290(0x4044000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined1 **)(puVar2 + 0x30) = puVar7;
  uVar6 = 0;
  FUN_1013c8994(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar8 = puVar2;
  func_0x000107c5fc48(puVar2,uVar6);
  func_0x000107c61574(puVar2);
  func_0x000107c3d048(puVar5);
  func_0x000107c61170(puVar8);
  func_0x000107c61174(puVar1);
  uVar6 = 0x800000010ef3bf00;
  lVar10 = -0x2ffffffffffffff0;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef3bf00);
  func_0x000107c520f4(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170();
  func_0x0001070bd6ec();
  func_0x000107c61180();
  if (lVar10 == 0) {
    uVar6 = 0xe900000000000065;
    lVar11 = 0x6d61472079616c50;
  }
  else {
    lVar11 = lVar10;
    func_0x000107c5faec();
    func_0x000107c61170(lVar10);
  }
  func_0x000107c5fadc(lVar11,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x000107c520fc(puVar1);
  func_0x000107c61170(puVar4);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(lVar11);
  return puVar1;
}



/* Entry: 1013c8830; end: 1013c884f; -[_TtC22SCContextTopLevelCards11GameCTAView init] */

void FUN_1013c8830(void)

{
  FUN_1013c83f8();
  return;
}



/* Entry: 1013c8850; end: 1013c88cb; -[_TtC22SCContextTopLevelCards11GameCTAView initWithCoder:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c8850(long param_1)

{
  code *pcVar1;
  
  *(undefined8 *)(param_1 + _DAT_112d7a750) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7a758) = 0;
  *(undefined8 *)(param_1 + _DAT_112d7a760) = 0;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextTopLevelCards/GameCTAView.swift",0x28,2,0x47,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c88cc);
  (*pcVar1)();
}



/* Entry: 1013c88cc; end: 1013c892b; -[_TtC22SCContextTopLevelCards11GameCTAView initWithFrame:] */

void FUN_1013c88cc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelCards.GameCTAView",0x22,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013c88f8);
  (*pcVar1)();
}



/* Entry: 1013c892c; end: 1013c8973; -[_TtC22SCContextTopLevelCards11GameCTAView .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013c8948: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013c894c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c892c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a750));
  return;
}



/* Entry: 1013c8974; end: 1013c8993;  */

void FUN_1013c8974(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf5d8);
  return;
}



/* Entry: 1013c8994; end: 1013c89d3;  */

void FUN_1013c8994(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013c89d4; end: 1013c8ba3;  */

undefined * FUN_1013c89d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  
  puVar1 = PTR__OBJC_CLASS___UIImageView_1126aec28;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = PTR_PTR_1126b0c40;
  func_0x000107c61168(PTR_PTR_1126b0c40);
  if (lRam0000000112d7a790 != -1) {
    func_0x000107c61568(0x112d7a790,FUN_1013c8368);
  }
  func_0x000107c45098(0x4034000000000000,0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c55258(puVar1);
  func_0x000107c61170(puVar2);
  func_0x000107c61174();
  func_0x000107c53840();
  func_0x000107c5a050(puVar1);
  puVar2 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar3 = puVar2;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar3 + 0x18) = 5;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar4 = puVar1;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar5 = puVar4;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x20) = puVar5;
  puVar4 = puVar1;
  func_0x000107c44d9c();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  puVar5 = puVar4;
  func_0x000107c40290(0x4034000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  *(undefined **)(puVar3 + 0x28) = puVar5;
  uVar6 = 0;
  FUN_1013c8994(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar4 = puVar3;
  func_0x000107c5fc48(puVar3,uVar6);
  func_0x000107c61574(puVar3);
  func_0x000107c3d048(puVar2);
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 1013c8ba4; end: 1013c8cb7;  */

undefined * FUN_1013c8ba4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR_PTR_1126aea58;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  puVar2 = puVar1;
  func_0x0001070bd6ec();
  func_0x000107c61180();
  if (puVar2 == (undefined *)0x0) {
    param_2 = 0xe900000000000065;
    puVar3 = (undefined *)0x6d61472079616c50;
  }
  else {
    puVar3 = puVar2;
    func_0x000107c5faec();
    func_0x000107c61170(puVar2);
  }
  func_0x000107c5fadc(puVar3,param_2);
  func_0x000107c6142c(param_2);
  func_0x000107c59c6c(puVar1);
  func_0x000107c61170(puVar3);
  if (lRam0000000112d7a790 != -1) {
    func_0x000107c61568(0x112d7a790,FUN_1013c8368);
  }
  func_0x000107c59c78(puVar1);
  func_0x000107c5a100(puVar1);
  func_0x000107c56ba8(puVar1);
  func_0x000107c55f80(puVar1);
  func_0x000107c61170(puVar1);
  return puVar1;
}



/* Entry: 1013c8cb8; end: 1013c8d1b;  */

void FUN_1013c8cb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  return;
}



/* Entry: 1013c8d1c; end: 1013c9143;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c8d1c(void)

{
  ulong *puVar1;
  undefined8 *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  long *plVar8;
  long extraout_x8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  undefined1 auStack_140 [8];
  undefined8 uStack_138;
  ulong uStack_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long lStack_d8;
  long lStack_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  lVar4 = 0;
  func_0x000107c5f804();
  lVar15 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar15 + 0x40));
  lVar12 = _DAT_112fc20a8;
  lVar10 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar10 + _DAT_112fc20a8,auStack_80,0,0);
  lVar6 = _DAT_112fc20c0;
  uVar13 = *(undefined8 *)(lVar10 + lVar12);
  func_0x000107c61428(lVar10 + _DAT_112fc20c0,auStack_98,0,0);
  uVar14 = *(undefined8 *)(lVar10 + lVar6);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_e0 = uVar13;
  func_0x000107c615f0(uVar13);
  uStack_e8 = uVar14;
  func_0x000107c6157c(uVar14);
  func_0x000107c45064();
  func_0x000107c61180();
  uStack_f8 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + _DAT_11303ff30);
  lVar12 = *(long *)(unaff_x20 + 0x30);
  uStack_f0 = uVar11;
  func_0x000107c6157c();
  func_0x000107c3fa04();
  func_0x000107c61180();
  lStack_100 = lVar12;
  if (lVar12 != 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
    func_0x000107c5c76c();
    func_0x000107c61180();
    lVar12 = _DAT_112fc20b0;
    uStack_108 = uVar11;
    func_0x000107c61428(lVar10 + _DAT_112fc20b0,auStack_b0,0,0);
    lVar6 = _DAT_112fc20b8;
    uVar9 = -(ulong)(*(char *)(lVar10 + lVar12) != '\0');
    uStack_120 = *(ulong *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10) ^
                 *(ulong *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x10) & ~uVar9;
    uStack_118 = *(ulong *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18) ^
                 (*(ulong *)(PTR__UIEdgeInsetsZero_110345bb0 + 0x18) ^ 0x4018000000000000) & ~uVar9;
    uStack_130 = *(ulong *)PTR__UIEdgeInsetsZero_110345bb0 ^
                 *(ulong *)PTR__UIEdgeInsetsZero_110345bb0 & ~uVar9;
    uStack_128 = *(ulong *)(PTR__UIEdgeInsetsZero_110345bb0 + 8) ^
                 (*(ulong *)(PTR__UIEdgeInsetsZero_110345bb0 + 8) ^ 0x4018000000000000) & ~uVar9;
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c61428(lVar10 + _DAT_112fc20b8,auStack_c8,0,0);
    uStack_138 = *(undefined8 *)(lVar10 + lVar6);
    puVar5 = &UNK_1103ae720;
    func_0x000107c613fc(&UNK_1103ae720,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    lVar10 = 0;
    FUN_1013cabf4();
    lVar6 = lVar10;
    func_0x000107c610f8();
    *(undefined8 *)(lVar6 + _DAT_112d7a868) = 0x4030000000000000;
    lVar12 = _DAT_112d7a870;
    puVar7 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    func_0x000107c6157c(puVar5);
    func_0x000107c453e4();
    *(undefined **)(lVar6 + lVar12) = puVar7;
    lVar12 = _DAT_112d7a878;
    uVar11 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar6 + lVar12) = uVar11;
    lVar12 = _DAT_112d7a8a0;
    (**(code **)(lVar15 + 0x68))
              (auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,
               lVar4);
    puVar7 = PTR_PTR_1126ae790;
    func_0x000107c610f8();
    uVar11 = 0xd000000000000020;
    func_0x000107c5fadc(0xd000000000000020,0x800000010ef3bf20);
    func_0x000107c5f800();
    func_0x000107c470d0();
    func_0x000107c61170(uVar11);
    (**(code **)(lVar15 + 8))(auStack_140 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    *(undefined **)(lVar6 + lVar12) = puVar7;
    lVar12 = _DAT_112d7a8d0;
    puVar7 = PTR__OBJC_CLASS___UIScrollView_1126af098;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar6 + lVar12) = puVar7;
    *(undefined8 *)(lVar6 + _DAT_112d7a8d8) = 0;
    *(undefined8 *)(lVar6 + _DAT_112d7a8e0) = 0;
    *(undefined8 *)(lVar6 + _DAT_112d7a880) = uStack_e8;
    *(undefined8 *)(lVar6 + _DAT_112d7a888) = uStack_f0;
    *(undefined8 *)(lVar6 + _DAT_112d7a890) = uStack_f8;
    *(long *)(lVar6 + _DAT_112d7a8a8) = lStack_100;
    *(undefined8 *)(lVar6 + _DAT_112d7a8b0) = uStack_108;
    puVar1 = (ulong *)(lVar6 + _DAT_112d7a8c0);
    puVar1[1] = uStack_128;
    *puVar1 = uStack_130;
    puVar1[3] = uStack_118;
    puVar1[2] = uStack_120;
    *(undefined8 *)(lVar6 + _DAT_112d7a8b8) = uStack_110;
    *(undefined8 *)(lVar6 + _DAT_112d7a8c8) = uStack_138;
    puVar2 = (undefined8 *)(lVar6 + _DAT_112d7a898);
    *puVar2 = FUN_1013c9234;
    puVar2[1] = puVar5;
    puVar7 = PTR_s_initWithNibName_bundle__1125e9850;
    lStack_d8 = lVar6;
    lStack_d0 = lVar10;
    func_0x000107c61174();
    plVar8 = &lStack_d8;
    func_0x000107c61154(plVar8,puVar7,0,0);
    func_0x000107c61574(puVar5);
    uVar11 = uStack_e0;
    func_0x000107c3e2c0(uStack_e0);
    func_0x000107c615e8(uVar11);
    func_0x000107c61170(plVar8);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013c9144);
  (*pcVar3)();
}



/* Entry: 1013c9144; end: 1013c9233;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c9144(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar2 = *(long *)(param_2 + 0x10);
    lVar3 = lVar2 + _DAT_112fc20a0;
    func_0x000107c61428(lVar3,auStack_80,0,0);
    lVar1 = lVar3;
    func_0x000107c61618();
    if (lVar1 == 0) {
      func_0x000107c61574(param_2);
    }
    else {
      lVar3 = *(long *)(lVar3 + 8);
      func_0x000107c614f0();
      pcVar4 = *(code **)(lVar3 + 8);
      func_0x000107c61174(lVar2);
      (*pcVar4)();
      func_0x000107c61574(param_2);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(lVar2);
    }
  }
  return;
}



/* Entry: 1013c9234; end: 1013c923b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c9234(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_68,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar1 + 0x10);
    lVar4 = lVar3 + _DAT_112fc20a0;
    func_0x000107c61428(lVar4,auStack_80,0,0);
    lVar2 = lVar4;
    func_0x000107c61618();
    if (lVar2 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      lVar4 = *(long *)(lVar4 + 8);
      func_0x000107c614f0();
      pcVar5 = *(code **)(lVar4 + 8);
      func_0x000107c61174(lVar3);
      (*pcVar5)();
      func_0x000107c61574(lVar1);
      func_0x000107c615e8(lVar2);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 1013c923c; end: 1013c9287;  */

void FUN_1013c923c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
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



/* Entry: 1013c9288; end: 1013c92a7;  */

void FUN_1013c9288(void)

{
  FUN_1013c8d1c();
  return;
}



/* Entry: 1013c92a8; end: 1013c92af;  */

undefined8 FUN_1013c92a8(void)

{
  return 0;
}



/* Entry: 1013c92b0; end: 1013c92cf;  */

void FUN_1013c92b0(void)

{
  func_0x000107c61168(&PTR_PTR_112d7a7e0);
  return;
}



/* Entry: 1013c92d0; end: 1013c9363;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1013c92d0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d7a8d8;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d7a8d8);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    puVar3 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c52b2c();
    func_0x000107c59594(0x4024000000000000,puVar3);
    func_0x000107c5a050(puVar3,param_2,0);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 1013c9364; end: 1013c938b; -[_TtC22SCContextTopLevelCards27TopLevelCardsViewController initWithCoder:] */

void FUN_1013c9364(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1013cad6c();
  return;
}



/* Entry: 1013c938c; end: 1013c9b4b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  long *plVar14;
  code *pcVar15;
  long unaff_x20;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined1 auStack_c0 [48];
  
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffff70,PTR_s_viewDidLoad_112684cd8);
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c9b38);
    (*pcVar2)();
  }
  lVar4 = lVar3;
  FUN_1013c92d0();
  func_0x000107c3d89c(lVar3);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  lVar3 = 0x112d360b8;
  FUN_1013cacb8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  lVar5 = lVar3;
  func_0x000107c613fc();
  uVar16 = 4;
  *(undefined8 *)(lVar5 + 0x18) = 9;
  *(undefined8 *)(lVar5 + 0x10) = 4;
  lVar4 = _DAT_112d7a8d8;
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7a8d8);
  func_0x000107c5cbe4();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c9b3c);
    (*pcVar2)();
  }
  lVar8 = lVar7;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar5 + 0x20) = uVar10;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c9b40);
    (*pcVar2)();
  }
  lVar8 = lVar7;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar7);
  uVar10 = uVar6;
  func_0x000107c40280();
  func_0x000107c61180();
  func_0x000107c61170(uVar6);
  func_0x000107c61170(lVar8);
  *(undefined8 *)(lVar5 + 0x28) = uVar10;
  uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
  func_0x000107c3ec1c();
  func_0x000107c61180();
  lVar7 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar7 != 0) {
    lVar8 = lVar7;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    uVar10 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar5 + 0x30) = uVar10;
    uVar6 = *(undefined8 *)(unaff_x20 + lVar4);
    func_0x000107c5ce8c();
    func_0x000107c61180();
    lVar7 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c9b48);
      (*pcVar2)();
    }
    puVar9 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar8 = lVar7;
    func_0x000107c5ce8c(lVar7);
    func_0x000107c61180();
    func_0x000107c61170(lVar7);
    uVar10 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(lVar8);
    *(undefined8 *)(lVar5 + 0x38) = uVar10;
    uVar10 = 0;
    FUN_1013cac78(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar7 = lVar5;
    func_0x000107c5fc48(lVar5,uVar10);
    func_0x000107c61574(lVar5);
    func_0x000107c3d048(puVar9);
    func_0x000107c61170(lVar7);
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d7a8d0);
    func_0x000107c52e38(uVar6);
    func_0x000107c59284(uVar6);
    func_0x000107c5a050(uVar6);
    func_0x000107c3d5b4(*(undefined8 *)(unaff_x20 + lVar4));
    func_0x000107c3ec60(uVar6);
    puVar11 = PTR_PTR_1126c9318;
    func_0x000107c610f8(PTR_PTR_1126c9318);
    func_0x000107c469a4(uVar16,param_2,param_3,param_4);
    func_0x000107c54860(0x4028000000000000);
    func_0x000107c61174(puVar11);
    func_0x000107c52ab8();
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d7a8c0);
    uVar16 = *puVar1;
    uVar17 = puVar1[1];
    uVar18 = puVar1[2];
    uVar19 = puVar1[3];
    func_0x000107c61174(puVar11);
    func_0x000107c53824(uVar16,uVar17,uVar18,uVar19);
    func_0x000107c59284(puVar11);
    func_0x000107c53828(puVar11);
    func_0x000107c61170(puVar11);
    func_0x000107c3d89c(uVar6);
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112d7a870);
    func_0x000107c5a050(uVar17);
    func_0x000107c59594(0x4018000000000000,uVar17);
    func_0x000107c3d89c(puVar11);
    func_0x000107c613fc(lVar3,((ulong)*(uint *)(lVar3 + 0x30) + 7 & 0x1fffffff8) + 0x28,
                        *(ushort *)(lVar3 + 0x34) | 7);
    *(undefined8 *)(lVar3 + 0x18) = 0xb;
    *(undefined8 *)(lVar3 + 0x10) = 5;
    uVar6 = uVar17;
    func_0x000107c5cbe4();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c5cbe4(puVar11);
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar3 + 0x20) = uVar16;
    uVar6 = uVar17;
    func_0x000107c4acb0();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c4acb0(puVar11);
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar3 + 0x28) = uVar16;
    uVar6 = uVar17;
    func_0x000107c3ec1c();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c3ec1c(puVar11);
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar3 + 0x30) = uVar16;
    uVar6 = uVar17;
    func_0x000107c5ce8c();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c5ce8c(puVar11);
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar3 + 0x38) = uVar16;
    uVar6 = uVar17;
    func_0x000107c44d9c();
    func_0x000107c61180();
    puVar12 = puVar11;
    func_0x000107c44d9c(puVar11);
    func_0x000107c61180();
    uVar16 = uVar6;
    func_0x000107c40280();
    func_0x000107c61180();
    func_0x000107c61170(uVar6);
    func_0x000107c61170(puVar12);
    *(undefined8 *)(lVar3 + 0x40) = uVar16;
    lVar4 = lVar3;
    func_0x000107c5fc48(lVar3,uVar10);
    func_0x000107c61574(lVar3);
    func_0x000107c3d048(puVar9);
    func_0x000107c61170(lVar4);
    lVar3 = unaff_x20;
    func_0x000107c5de64();
    func_0x000107c61180();
    if (lVar3 != 0) {
      lVar4 = lVar3;
      func_0x000107c42450();
      func_0x000107c61170(lVar3);
      if (lVar4 == 1) {
        func_0x000107c60888(auStack_c0,0x400921fb54442d18);
        func_0x000107c5a03c(puVar11);
        func_0x000107c61170(puVar11);
        func_0x000107c60888(auStack_c0,0x400921fb54442d18);
        func_0x000107c5a03c(uVar17);
      }
      else {
        func_0x000107c61170(puVar11);
      }
      pcVar13 = "viewDidLoad()";
      func_0x0001000c10c0();
      func_0x000107c61180();
      plVar14 = (long *)pcVar13;
      func_0x000100471e0c();
      func_0x000107c615e8(pcVar13);
      puVar9 = &UNK_1103ae768;
      func_0x000107c613fc(&UNK_1103ae768,0x18,7);
      func_0x000107c61614(puVar9 + 0x10);
      pcVar2 = FUN_1013cac70;
      puVar12 = puVar9;
      (**(code **)(*plVar14 + 0x60))(FUN_1013cac70);
      func_0x000107c61574(plVar14);
      func_0x000107c61574(puVar9);
      pcVar15 = pcVar2;
      func_0x000107c614f0(pcVar2);
      (**(code **)(puVar12 + 0x10))(*(undefined8 *)(unaff_x20 + _DAT_112d7a878),pcVar15,puVar12);
      func_0x000107c61170(puVar11);
      func_0x000107c615e8(pcVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c9b4c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1013c9b44);
  (*pcVar2)();
}



/* Entry: 1013c9b4c; end: 1013c9ba7;  */

void FUN_1013c9b4c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_1013c9ba8(uVar1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 1013c9ba8; end: 1013ca5ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013c9ba8(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  long *plVar21;
  long lVar22;
  long lVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long lVar27;
  long *plVar28;
  long unaff_x20;
  long *plVar29;
  long *plVar30;
  long *plVar31;
  ulong uVar32;
  long lVar33;
  undefined8 uVar34;
  ulong uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  ulong uVar38;
  long lVar39;
  undefined8 uVar40;
  long *plStack_140;
  ulong uStack_f0;
  long lStack_e8;
  long lStack_e0;
  undefined1 auStack_d8 [56];
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  ulong uStack_80;
  long lStack_78;
  long *plStack_70;
  
  lVar14 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar14 == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1013ca600);
    (*pcVar13)();
  }
  lVar39 = *(long *)(param_1 + 0x10);
  func_0x000107c550d8();
  func_0x000107c61170(lVar14);
  uVar15 = *(ulong *)(unaff_x20 + _DAT_112d7a870);
  uVar32 = uVar15;
  func_0x000107c3e158();
  func_0x000107c61180();
  uVar16 = 0;
  FUN_1013cac78(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar17 = uVar32;
  func_0x000107c5fc54(uVar32,uVar16);
  func_0x000107c61170(uVar32);
  if (uVar17 >> 0x3e == 0) {
    uVar32 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar32 = uVar17 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar17) {
      uVar32 = uVar17;
    }
    func_0x000107c60480();
  }
  if (uVar32 != 0) {
    uVar35 = 0;
    do {
      if ((uVar17 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10) <= uVar35) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1013c9cd0);
          (*pcVar13)();
        }
        uVar18 = *(ulong *)(uVar17 + uVar35 * 8 + 0x20);
        func_0x000107c61174(uVar18);
      }
      else {
        uVar18 = uVar35;
        func_0x000100f040d0(uVar35,uVar17);
      }
      if (SCARRY8(uVar35,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1013c9ccc);
        (*pcVar13)();
      }
      uVar38 = uVar35 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar18);
      uVar35 = uVar35 + 1;
    } while (uVar38 != uVar32);
  }
  func_0x000107c6142c(uVar17);
  lVar14 = _DAT_112d7a8e0;
  if (lVar39 != 0) {
    if (*(long *)(unaff_x20 + _DAT_112d7a8e0) != 0) {
      func_0x000107c550d8();
    }
    lVar9 = _DAT_112d7a8c8;
    lVar8 = _DAT_112d7a8b8;
    lVar7 = _DAT_112d7a8b0;
    lVar6 = _DAT_112d7a8a8;
    lVar5 = _DAT_112d7a8a0;
    lVar4 = _DAT_112d7a890;
    lVar3 = _DAT_112d7a888;
    plVar28 = (long *)(param_1 + 0x50);
    do {
      if (lVar39 == 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1013ca5f8);
        (*pcVar13)();
      }
      lStack_98 = plVar28[-5];
      lStack_a0 = plVar28[-6];
      lStack_88 = plVar28[-3];
      lStack_90 = plVar28[-4];
      lStack_78 = plVar28[-1];
      uStack_80 = plVar28[-2];
      lVar27 = plVar28[-1];
      plVar31 = (long *)*plVar28;
      lVar33 = plVar28[-5];
      lVar1 = plVar28[-3];
      lVar2 = plVar28[-2];
      plStack_70 = plVar31;
      if (lStack_98 == 0) {
LAB_1013c9e48:
        uVar16 = *(undefined8 *)(unaff_x20 + lVar3);
        uVar34 = *(undefined8 *)(unaff_x20 + lVar4);
        uVar40 = *(undefined8 *)(unaff_x20 + lVar5);
        uVar36 = *(undefined8 *)(unaff_x20 + lVar6);
        uVar37 = *(undefined8 *)(unaff_x20 + lVar7);
        uStack_f0 = *(ulong *)(*(long *)(unaff_x20 + lVar8) + _DAT_1130190c8);
        lVar22 = 0;
        FUN_1013c7f7c();
        lVar23 = lVar22;
        func_0x000107c610f8();
        *(undefined8 *)(lVar23 + _DAT_112d7a710) = 0;
        plVar19 = (long *)(lVar23 + _DAT_112d7a6d8);
        plVar19[1] = lStack_98;
        *plVar19 = lStack_a0;
        plVar19[3] = lStack_88;
        plVar19[2] = lStack_90;
        plVar19[5] = lStack_78;
        plVar19[4] = uStack_80;
        plVar19[6] = (long)plStack_70;
        *(undefined8 *)(lVar23 + _DAT_112d7a6e0) = uVar36;
        *(undefined8 *)(lVar23 + _DAT_112d7a6e8) = uVar16;
        *(undefined8 *)(lVar23 + _DAT_112d7a6f0) = uVar40;
        *(undefined8 *)(lVar23 + _DAT_112d7a6f8) = uVar34;
        *(undefined8 *)(lVar23 + _DAT_112d7a700) = uVar37;
        *(ulong *)(lVar23 + _DAT_112d7a708) = uStack_f0;
        FUN_1013cad30(&lStack_a0,auStack_d8);
        func_0x000107c61174();
        func_0x000107c6157c(uVar34);
        func_0x000107c61174();
        func_0x000107c615f0(uVar36);
        func_0x000107c61174();
        func_0x000107c61174();
        FUN_1013cad30(&lStack_a0,auStack_d8);
        puVar24 = PTR_s_initWithFrame__1125e2948;
        lStack_e8 = lVar23;
        lStack_e0 = lVar22;
        func_0x000107c615f0(uVar36);
        func_0x000107c61174();
        func_0x000107c61174();
        func_0x000107c6157c(uVar34);
        func_0x000107c61174();
        func_0x000107c61174();
        plVar21 = &lStack_e8;
        func_0x000107c61154(0,0,0,0,plVar21,puVar24);
        puVar24 = PTR__OBJC_CLASS___UIBlurEffect_1126b00d8;
        func_0x000107c61168(PTR__OBJC_CLASS___UIBlurEffect_1126b00d8);
        func_0x000107c61174(plVar21);
        func_0x000107c42448(puVar24);
        func_0x000107c61180();
        puVar25 = PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0;
        func_0x000107c610f8(PTR__OBJC_CLASS___UIVisualEffectView_1126b00e0);
        func_0x000107c46734();
        func_0x000107c61170(puVar24);
        func_0x000107c52ab8(puVar25);
        puVar24 = puVar25;
        func_0x000107c4aba4(puVar25);
        func_0x000107c61180();
        func_0x000107c539d4(0x4030000000000000);
        func_0x000107c61170(puVar24);
        puVar24 = puVar25;
        func_0x000107c4aba4(puVar25);
        func_0x000107c61180();
        func_0x000107c562fc();
        func_0x000107c61170(puVar24);
        func_0x000107c5a050(plVar21);
        plVar19 = plVar21;
        func_0x000107c44d9c(plVar21);
        func_0x000107c61180();
        func_0x000107c61170(plVar21);
        plVar20 = plVar19;
        func_0x000107c40290(0x4040000000000000,plVar19);
        func_0x000107c61180();
        func_0x000107c61170(plVar19);
        func_0x000107c521e8(plVar20);
        func_0x000107c61170(plVar20);
        plStack_140 = plStack_70;
        lVar12 = lStack_78;
        uVar32 = uStack_80;
        lVar11 = lStack_88;
        lVar10 = lStack_90;
        lVar22 = lStack_98;
        lVar23 = lStack_a0;
        if (lStack_98 == 0) {
          plVar31 = plVar21;
          func_0x000107c61174(plVar21);
          func_0x000107c3d89c();
          plVar19 = plVar31;
          func_0x000107c5e308(plVar31);
          func_0x000107c61180();
          func_0x000107c61170(plVar31);
          plVar31 = plVar19;
          func_0x000107c40290(0x405f400000000000,plVar19);
          func_0x000107c61180();
          func_0x000107c61170(plVar19);
          func_0x000107c521e8(plVar31);
          func_0x000107c61170(puVar25);
          func_0x000107c61170(plVar31);
          func_0x000107c61170(uVar16);
          func_0x000107c61574(uVar34);
          func_0x000107c61170(uVar40);
          func_0x000107c615e8(uVar36);
          func_0x000107c61170(uVar37);
        }
        else {
          if (plStack_70 == (long *)0x0) {
            func_0x000107c61174(plVar31);
            func_0x000107c61434(lVar33);
            func_0x000107c61434(lVar1);
            func_0x000107c61174(lVar2);
            func_0x000107c61174(lVar27);
            plStack_140 = (long *)0x0;
LAB_1013ca284:
            func_0x000107c3d89c(plVar21);
            plVar31 = plVar21;
            func_0x000107c4aba4(plVar21);
            func_0x000107c61180();
            func_0x000107c52e0c(0x3ff0000000000000);
            func_0x000107c61170(plVar31);
            plVar31 = plVar21;
            func_0x000107c4aba4(plVar21);
            func_0x000107c61180();
            puVar24 = PTR__OBJC_CLASS___UIColor_1126aea70;
            func_0x000107c61168(PTR__OBJC_CLASS___UIColor_1126aea70);
            func_0x000107c5af88();
            func_0x000107c61180();
            puVar26 = puVar24;
            func_0x000107c3fdd0(0x3fd0000000000000);
            func_0x000107c61180();
            func_0x000107c61170(puVar24);
            puVar24 = puVar26;
            func_0x000107c3ab24(puVar26);
            func_0x000107c61180();
            func_0x000107c61170(puVar26);
            func_0x000107c52df8(plVar31);
            func_0x000107c61170(plVar31);
            func_0x000107c61170(puVar24);
          }
          else {
            FUN_1013cad30(&lStack_a0,auStack_d8);
            func_0x000107c61174();
            plVar31 = plStack_140;
            func_0x000107c3cfdc();
            if ((int)plVar31 != 0xe) {
LAB_1013ca24c:
              func_0x000107c61170(plStack_140);
              goto LAB_1013ca284;
            }
            plVar31 = plStack_140;
            func_0x000107c4adbc();
            func_0x000107c61180();
            if (plVar31 == (long *)0x0) {
                    /* WARNING: Does not return */
              pcVar13 = (code *)SoftwareBreakpoint(1,0x1013ca5fc);
              (*pcVar13)();
            }
            plVar19 = plVar31;
            func_0x000107c4a3a4();
            func_0x000107c61170(plVar31);
            if (((ulong)plVar19 & 1) == 0) goto LAB_1013ca24c;
            uVar17 = uStack_f0;
            func_0x000107c5c734();
            func_0x000107c61180();
            if (uVar17 == 0) goto LAB_1013ca24c;
            uVar35 = uVar17;
            func_0x000107c4b308();
            if ((uVar35 & 1) == 0) {
              func_0x000107c61170(plStack_140);
              func_0x000107c615e8(uVar17);
              goto LAB_1013ca284;
            }
            FUN_1013c6dd0();
            func_0x000107c61170(plStack_140);
            func_0x000107c615e8(uVar17);
          }
          plVar31 = plVar21;
          func_0x000107c4aba4(plVar21);
          func_0x000107c61180();
          func_0x000107c539d4(0x4030000000000000);
          func_0x000107c61170(plVar31);
          FUN_1013c6e8c(lVar23,lVar22,lVar10,lVar11,uVar32,lVar12);
          func_0x000107c61170(uVar16);
          func_0x000107c61574(uVar34);
          func_0x000107c61170(uVar40);
          func_0x000107c615e8(uVar36);
          func_0x000107c61170(uVar37);
          func_0x000107c61170(uStack_f0);
          FUN_1013cb014(&lStack_a0);
          func_0x000107c61170(puVar25);
          func_0x000107c61170(plStack_140);
          func_0x000107c6142c(lVar22);
          func_0x000107c6142c(lVar11);
          func_0x000107c61170(lVar12);
          uStack_f0 = uVar32;
        }
        func_0x000107c61170(uStack_f0);
        puVar24 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
        func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
        func_0x000107c61174(plVar21);
        func_0x000107c61174();
        func_0x000107c48c2c(puVar24);
        func_0x000107c3d6fc(plVar21);
        func_0x000107c61170(puVar24);
        lVar27 = -0x7ffffffef10c4070;
        uVar16 = 0xd000000000000014;
        func_0x000107c5fadc(0xd000000000000014);
        func_0x000107c520f4(plVar21);
        func_0x000107c61170(plVar21);
        func_0x000107c61170(uVar16);
        func_0x000107c61174(plVar21);
        plVar31 = &lStack_a0;
        FUN_1013caf3c(plVar31);
        if (lVar27 == 0) {
          plVar31 = (long *)0x0;
        }
        else {
          func_0x000107c5fadc();
          func_0x000107c6142c(lVar27);
        }
        func_0x000107c52104(plVar21);
        func_0x000107c61170(plVar21);
        func_0x000107c61170(plVar21);
        func_0x000107c61170(plVar31);
        func_0x000107c3d5b4(uVar15);
        FUN_1013cb014(&lStack_a0);
      }
      else {
        if (plVar31 == (long *)0x0) {
          func_0x000107c61174();
          func_0x000107c61434(lVar33);
          func_0x000107c61434(lVar1);
          func_0x000107c61174(lVar2);
          func_0x000107c61174(lVar27);
          goto LAB_1013c9e48;
        }
        plVar19 = plVar31;
        func_0x000107c61174();
        func_0x000107c61434(lVar33);
        func_0x000107c61434(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(lVar27);
        plVar20 = plVar31;
        func_0x000107c4adbc();
        func_0x000107c61180();
        if (plVar20 == (long *)0x0) goto LAB_1013c9e48;
        plVar21 = plVar20;
        func_0x000107c49e58();
        func_0x000107c61170();
        if (((int)plVar21 == 0) || (*(int *)(unaff_x20 + lVar9) == 1)) goto LAB_1013c9e48;
        plVar29 = *(long **)(unaff_x20 + lVar14);
        plVar30 = plVar29;
        plVar21 = plVar29;
        if (plVar29 == (long *)0x0) {
          FUN_1013ca628();
          plVar29 = (long *)0x0;
          plVar30 = *(long **)(unaff_x20 + lVar14);
          plVar21 = plVar20;
        }
        *(long **)(unaff_x20 + lVar14) = plVar21;
        func_0x000107c61174(plVar29);
        func_0x000107c61174();
        func_0x000107c61170(plVar30);
        uVar16 = *(undefined8 *)((long)plVar21 + _DAT_112d7a750);
        *(long **)((long)plVar21 + _DAT_112d7a750) = plVar31;
        func_0x000107c61174(plVar19);
        func_0x000107c61170(uVar16);
        func_0x000107c61174(plVar21);
        func_0x000107c550d8();
        FUN_1013cb014(&lStack_a0);
        func_0x000107c61170(plVar21);
      }
      func_0x000107c61170(plVar21);
      plVar28 = plVar28 + 7;
      lVar39 = lVar39 + -1;
    } while (lVar39 != 0);
    uVar16 = *(undefined8 *)(unaff_x20 + _DAT_112d7a8d0);
    if (*(long *)(unaff_x20 + lVar14) != 0) {
      func_0x000107c49eac();
    }
    func_0x000107c550d8(uVar16);
  }
  return;
}



/* Entry: 1013ca600; end: 1013ca627; -[_TtC22SCContextTopLevelCards27TopLevelCardsViewController viewDidLoad] */

void FUN_1013ca600(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1013c938c();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013ca628; end: 1013ca86f;  */

undefined8 FUN_1013ca628(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  
  uVar2 = 0;
  FUN_1013c8974();
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c61180();
  func_0x000107c5a050();
  puVar3 = PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UITapGestureRecognizer_1126aed68);
  func_0x000107c48c2c();
  func_0x000107c3d6fc(uVar2);
  func_0x000107c61170(puVar3);
  FUN_1013c92d0();
  func_0x000107c4970c();
  func_0x000107c61170(puVar3);
  lVar4 = 0x112d360b8;
  FUN_1013cacb8(0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50,0x112d36e78,
                &UNK_10d9011a0);
  func_0x000107c613fc();
  *(undefined8 *)(lVar4 + 0x18) = 5;
  *(undefined8 *)(lVar4 + 0x10) = 2;
  uVar8 = uVar2;
  func_0x000107c4acb0();
  func_0x000107c61180();
  lVar5 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar5 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ca86c);
    (*pcVar1)();
  }
  lVar6 = lVar5;
  func_0x000107c4acb0();
  func_0x000107c61180();
  func_0x000107c61170(lVar5);
  uVar7 = uVar8;
  func_0x000107c40284(0x4030000000000000);
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  func_0x000107c61170(lVar6);
  *(undefined8 *)(lVar4 + 0x20) = uVar7;
  uVar8 = uVar2;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  func_0x000107c5de64();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
    func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = unaff_x20;
    func_0x000107c5ce8c(unaff_x20);
    func_0x000107c61180();
    func_0x000107c61170(unaff_x20);
    uVar7 = uVar8;
    func_0x000107c40284(0xc030000000000000);
    func_0x000107c61180();
    func_0x000107c61170(uVar8);
    func_0x000107c61170(lVar5);
    *(undefined8 *)(lVar4 + 0x28) = uVar7;
    uVar8 = 0;
    FUN_1013cac78(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
    lVar5 = lVar4;
    func_0x000107c5fc48(lVar4,uVar8);
    func_0x000107c61574(lVar4);
    func_0x000107c3d048(puVar3);
    func_0x000107c61170(lVar5);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013ca870);
  (*pcVar1)();
}



/* Entry: 1013ca870; end: 1013ca94f; -[_TtC22SCContextTopLevelCards27TopLevelCardsViewController didTapGameCTAWithGesture:] */

/* WARNING: Possible PIC construction at 0x0001013ca8f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ca924: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ca8f4) */
/* WARNING: Removing unreachable block (ram,0x0001013ca8f8) */
/* WARNING: Removing unreachable block (ram,0x0001013ca928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ca870(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  lVar1 = param_3;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar1 == 0) {
    func_0x000107c61170(param_3);
    param_3 = param_1;
  }
  else {
    uVar2 = 0;
    FUN_1013c8974(0);
    lVar3 = lVar1;
    func_0x000107c61480(lVar1,uVar2);
    if (lVar3 != 0) {
      func_0x000107c61174(*(undefined8 *)(lVar3 + _DAT_112d7a750));
      param_3 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013ca950; end: 1013caa57;  */

/* WARNING: Possible PIC construction at 0x0001013ca9d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013ca9e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013caa20: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013ca9d4) */
/* WARNING: Removing unreachable block (ram,0x0001013ca9d8) */
/* WARNING: Removing unreachable block (ram,0x0001013ca9e8) */
/* WARNING: Removing unreachable block (ram,0x0001013ca9fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013ca950(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  func_0x000107c5de64();
  func_0x000107c61180();
  if (param_1 == 0) {
    return;
  }
  uVar2 = 0;
  FUN_1013c7f7c(0);
  lVar3 = param_1;
  func_0x000107c61480(param_1,uVar2);
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d7a6d8);
    FUN_1013cac14(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6]);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1013caa58; end: 1013caaa7; -[_TtC22SCContextTopLevelCards27TopLevelCardsViewController didTapCardWithGesture:] */

/* WARNING: Possible PIC construction at 0x0001013caa90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013caa94) */

void FUN_1013caa58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1013ca950(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1013caaa8; end: 1013cab07; -[_TtC22SCContextTopLevelCards27TopLevelCardsViewController initWithNibName:bundle:] */

void FUN_1013caaa8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextTopLevelCards.TopLevelCardsViewController",0x32,
                      "init(nibName:bundle:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1013caad4);
  (*pcVar1)();
}



/* Entry: 1013cab08; end: 1013cabf3; -[_TtC22SCContextTopLevelCards27TopLevelCardsViewController .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001013cab24: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cab54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cab88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013caba8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cabc8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cabac) */
/* WARNING: Removing unreachable block (ram,0x0001013cab8c) */
/* WARNING: Removing unreachable block (ram,0x0001013cab58) */
/* WARNING: Removing unreachable block (ram,0x0001013cab28) */
/* WARNING: Removing unreachable block (ram,0x0001013cabcc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cab08(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d7a870));
  return;
}



/* Entry: 1013cabf4; end: 1013cac13;  */

void FUN_1013cabf4(void)

{
  func_0x000107c61168(&PTR_PTR_1127cf6a0);
  return;
}



/* Entry: 1013cac14; end: 1013cac6f;  */

/* WARNING: Possible PIC construction at 0x0001013cac3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001013cac54: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001013cac40) */
/* WARNING: Removing unreachable block (ram,0x0001013cac58) */

void FUN_1013cac14(undefined8 param_1,long param_2)

{
  undefined8 in_x6;
  
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_retain_11034d2d8)(in_x6);
    return;
  }
  return;
}



/* Entry: 1013cac70; end: 1013cac77;  */

void FUN_1013cac70(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_1013c9ba8(uVar2);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1013cac78; end: 1013cacb7;  */

void FUN_1013cac78(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1013cacb8; end: 1013cad2f;  */

void FUN_1013cacb8(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1013cac78(0,param_1,param_2);
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



/* Entry: 1013cad30; end: 1013cad6b;  */

undefined8 FUN_1013cad30(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_1039b7894)(param_2,param_1);
  return param_2;
}



/* Entry: 1013cad6c; end: 1013caf3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cad6c(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long unaff_x20;
  long lVar7;
  undefined8 uStack_70;
  undefined4 auStack_68 [2];
  
  lVar4 = 0;
  func_0x000107c5f804();
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _DAT_112d7a868) = 0x4030000000000000;
  lVar2 = _DAT_112d7a870;
  puVar5 = PTR__OBJC_CLASS___UIStackView_1126aefe8;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d7a878;
  uVar6 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(unaff_x20 + lVar2) = uVar6;
  lVar2 = _DAT_112d7a8a0;
  (**(code **)(lVar7 + 0x68))
            (&stack0xffffffffffffffa0 + lVar1,
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO13userInitiatedyA2EmFWC_11034f7e0,lVar4
            );
  puVar5 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar6 = 0xd000000000000020;
  func_0x000107c5fadc(0xd000000000000020,0x800000010ef3bf20);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar6);
  (**(code **)(lVar7 + 8))(&stack0xffffffffffffffa0 + lVar1,lVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  lVar2 = _DAT_112d7a8d0;
  puVar5 = PTR__OBJC_CLASS___UIScrollView_1126af098;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a8d8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d7a8e0) = 0;
  *(undefined4 *)((long)auStack_68 + lVar1) = 0;
  *(undefined8 *)((long)&uStack_70 + lVar1) = 0x49;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SCContextTopLevelCards/TopLevelCardsViewController.swift",0x38,2);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1013caf3c);
  (*pcVar3)();
}



/* Entry: 1013caf3c; end: 1013cb013;  */

undefined1  [16] FUN_1013caf3c(long param_1)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  
  lVar3 = *(long *)(param_1 + 0x30);
  if (*(long *)(param_1 + 8) != 0 && lVar3 != 0) {
    func_0x000107c61174();
    lVar4 = lVar3;
    func_0x000107c3cfdc();
    if ((int)lVar4 == 0x1c) {
      func_0x000107c61170(lVar3);
      uVar7 = 0xe500000000000000;
      uVar6 = 0x636973756d;
      goto LAB_1013cb000;
    }
    if ((int)lVar4 == 0x43) {
      lVar4 = lVar3;
      func_0x000107c5c7c8();
      func_0x000107c61180();
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1013cb014);
        (*pcVar1)();
      }
      lVar5 = lVar4;
      func_0x000107c44a78();
      func_0x000107c61170(lVar3);
      func_0x000107c61170(lVar4);
      bVar2 = (int)lVar5 == 0;
      uVar6 = 0x75635f6b63697571;
      if (bVar2) {
        uVar6 = 0;
      }
      uVar7 = 0xe900000000000074;
      if (bVar2) {
        uVar7 = 0;
      }
      goto LAB_1013cb000;
    }
    func_0x000107c61170(lVar3);
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_1013cb000:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}



/* Entry: 1013cb014; end: 1013cb047;  */

undefined8 FUN_1013cb014(undefined8 param_1)

{
  (*(code *)&DAT_1039b783c)();
  return param_1;
}



/* Entry: 1013cb048; end: 1013cb053; -[SCTopLevelCardsEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb048(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a910;
  func_0x000107c61428(param_1 + _DAT_112d7a910,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb054; end: 1013cb05f; -[SCTopLevelCardsEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb054(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a910;
  func_0x000107c61428(param_1 + _DAT_112d7a910,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cb060; end: 1013cb06b; -[SCTopLevelCardsEntryPoint networkImageServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb060(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a918;
  func_0x000107c61428(param_1 + _DAT_112d7a918,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb06c; end: 1013cb077; -[SCTopLevelCardsEntryPoint setNetworkImageServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb06c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a918;
  func_0x000107c61428(param_1 + _DAT_112d7a918,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cb078; end: 1013cb083; -[SCTopLevelCardsEntryPoint musicServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb078(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a920;
  func_0x000107c61428(param_1 + _DAT_112d7a920,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb084; end: 1013cb08f; -[SCTopLevelCardsEntryPoint setMusicServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb084(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a920;
  func_0x000107c61428(param_1 + _DAT_112d7a920,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1013cb090; end: 1013cb09b; -[SCTopLevelCardsEntryPoint bloopsCTAServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb090(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d7a928;
  func_0x000107c61428(param_1 + _DAT_112d7a928,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1013cb09c; end: 1013cb0a7; -[SCTopLevelCardsEntryPoint setBloopsCTAServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1013cb09c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d7a928;
  func_0x000107c61428(param_1 + _DAT_112d7a928,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


