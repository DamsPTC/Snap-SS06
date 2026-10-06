/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103844618; end: 10384461f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103844618(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_113071300);
  func_0x000107c5c734();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 103844620; end: 103844643;  */

void FUN_103844620(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103844644; end: 10384464f;  */

void FUN_103844644(void)

{
  return;
}



/* Entry: 103844650; end: 10384466f;  */

void FUN_103844650(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2560);
  return;
}



/* Entry: 103844670; end: 10384499f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103844670(long param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long unaff_x20;
  long *plVar13;
  code *pcVar14;
  long lVar15;
  undefined1 auStack_b0 [24];
  undefined8 uStack_98;
  long lStack_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  func_0x0001000d224c(&lStack_88);
  lVar15 = lStack_88;
  if (lStack_88 != 0) {
    lVar2 = lStack_88;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lVar15);
    plVar13 = *(long **)(param_1 + 0x10);
    if (plVar13 == (long *)0x0) {
      lVar15 = *(long *)(PTR___swiftEmptyArrayStorage_11034f1c8 + 0x10);
      plVar3 = (long *)PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61434(param_1);
      plVar3 = plVar13;
      func_0x000101341d44(plVar13,0);
      plVar4 = &lStack_88;
      func_0x000101343178(plVar4,plVar3 + 4,plVar13,param_1);
      func_0x000100ba5608(lStack_88,uStack_80,uStack_78,uStack_70,uStack_68);
      if (plVar4 != plVar13) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x1038449a0);
        (*pcVar14)();
      }
      lVar15 = plVar3[2];
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
    if (lVar15 != 0) {
      plVar13 = plVar3 + 4;
      do {
        plVar4 = plVar13;
        func_0x0001007bbd18(plVar13,&lStack_88);
        func_0x000107c602bc();
        uVar5 = 0;
        FUN_10388af40(0);
        plVar6 = plVar4;
        func_0x000107c61480(plVar4,uVar5);
        if (plVar6 == (long *)0x0) {
          func_0x000107c61170(plVar4);
          func_0x0001007bbff0(&lStack_88);
        }
        else {
          FUN_10381db40((undefined *)((long)plVar6 + _DAT_112fa56c8),auStack_b0);
          func_0x000107c61170(plVar4);
          lVar7 = lStack_90;
          uVar5 = uStack_98;
          FUN_103845ccc(auStack_b0,uStack_98);
          (**(code **)(lVar7 + 8))(uVar5,lVar7);
          lVar7 = lVar2;
          func_0x000100471e0c(lVar2,1);
          func_0x000107c61574(uVar5);
          func_0x0001007bbff0(&lStack_88);
          func_0x0001000834e4(auStack_b0);
          puVar9 = puVar10;
          func_0x000107c61550();
          if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
             (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar10 >> 0x3e == 0) {
              puVar8 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar8 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar10) {
                puVar8 = puVar10;
              }
              func_0x000107c60480(puVar8);
            }
            puVar9 = (undefined *)0x0;
            FUN_10383a82c(0,puVar8 + 1,1,puVar10);
          }
          uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
          uVar1 = *(ulong *)(uVar12 + 0x10);
          puVar10 = puVar9;
          if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar1) {
            puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
            FUN_10383a82c(puVar10,uVar1 + 1,1,puVar9);
            uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar12 + 0x10) = uVar1 + 1;
          *(long *)(uVar12 + uVar1 * 8 + 0x20) = lVar7;
        }
        plVar13 = plVar13 + 5;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
    func_0x000107c61574(plVar3);
    func_0x0001000285a8(0x112f9fac0,&UNK_10dc14d00);
    puVar9 = puVar10;
    func_0x000100b658a4(puVar10);
    func_0x000107c6142c(puVar10);
    uVar5 = 0x112f9fac8;
    func_0x0001000285a8(0x112f9fac8,&UNK_10dc17980);
    plVar13 = (long *)0x10381d508;
    func_0x0001000bfde0(0x10381d508,0,uVar5);
    func_0x000107c61574(puVar9);
    pcVar14 = *(code **)(*plVar13 + 0x58);
    lVar15 = 0x112f9f198;
    func_0x0001000285a8(0x112f9f198,&UNK_10dc14d10);
    lVar11 = lVar15;
    FUN_10381daf0();
    lVar7 = unaff_x20 + 0x18;
    (*pcVar14)(lVar7,lVar15,lVar11);
    func_0x000107c61574(plVar13);
    lVar11 = lVar7;
    func_0x000107c614f0(lVar7);
    (**(code **)(lVar15 + 0x10))(*(undefined8 *)(unaff_x20 + 0x38),lVar11,lVar15);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(lVar7);
  }
  return;
}



/* Entry: 1038449a0; end: 103844d3b;  */

void FUN_1038449a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar3 = &puStack_80;
  ppuVar4 = &puStack_80;
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  puVar2 = &UNK_11069d7d8;
  func_0x000107c613fc(&UNK_11069d7d8,0x20,7);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(puVar2 + 0x18) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(puVar2 + 0x10) = uVar7;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_60 = FUN_103845d3c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10381d994;
  puStack_68 = &UNK_11069d7f0;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  puVar2 = puStack_58;
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11069d828;
  func_0x000107c613fc(&UNK_11069d828,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  pcStack_60 = (code *)0x103845dc0;
  puStack_80 = puVar1;
  uStack_78 = 0x42000000;
  pcStack_70 = (code *)&UNK_100ba5314;
  puStack_68 = &UNK_11069d840;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c61574(puStack_58);
  func_0x000107c42c14(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 103844d3c; end: 103844d97;  */

void FUN_103844d3c(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_103844670(param_1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 103844d98; end: 103844df3;  */

void FUN_103844d98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x20;
  
  func_0x000107c61170();
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = param_3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  *(undefined8 *)(unaff_x20 + 0x28) = param_5;
  *(undefined8 *)(unaff_x20 + 0x30) = param_6;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Entry: 103844df4; end: 1038454ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103844df4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  code *pcVar7;
  code *pcVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  code *pcVar14;
  code *pcVar15;
  code *pcVar16;
  undefined *puVar17;
  long lVar18;
  long lVar19;
  long *plVar20;
  long unaff_x20;
  undefined8 uVar21;
  undefined8 uVar22;
  long lStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x0001000285a8(0x112d5a5f8,&UNK_10d921380);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  uVar2 = uVar1;
  func_0x0001000bda74();
  func_0x000107c61170(uVar1);
  func_0x0001000285a8(0x112f9f198,&UNK_10dc14d10);
  func_0x000107c613fc();
  uVar3 = 1;
  func_0x00010008747c();
  func_0x0001000285a8(0x112d53b48,&UNK_10d925340);
  func_0x000107c613fc();
  uVar4 = 1;
  func_0x00010008747c();
  uVar1 = 0x112fa0248;
  func_0x0001000285a8(0x112fa0248,&UNK_10dc151e0);
  func_0x000107c613fc();
  func_0x0001000c2754();
  puVar5 = &UNK_11069d658;
  func_0x000107c613fc(&UNK_11069d658,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  uVar9 = 0x112d53a70;
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  pcVar6 = FUN_1038455d4;
  func_0x0001000bdd8c(FUN_1038455d4,puVar5,uVar9);
  puVar5 = &UNK_11069d680;
  func_0x000107c613fc(&UNK_11069d680,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar3;
  *(code **)(puVar5 + 0x18) = pcVar6;
  func_0x0001000285a8(0x112fa0250,&UNK_10dc151f0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(pcVar6);
  pcVar7 = FUN_103845644;
  func_0x0001000bdd8c(FUN_103845644,puVar5);
  uVar9 = 0x112f9fad8;
  func_0x0001000285a8(0x112f9fad8,&UNK_10dc15650);
  pcVar8 = FUN_103827568;
  func_0x0001000d5158(FUN_103827568,0,uVar9);
  uVar9 = 0;
  func_0x0001007b706c(0);
  pcVar10 = FUN_10382777c;
  func_0x00010068b194(FUN_10382777c,0,uVar9);
  func_0x000107c61574(pcVar8);
  uStack_90 = 0;
  puVar11 = &uStack_90;
  func_0x0001006c71a4();
  func_0x000107c61574(pcVar10);
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c613fc();
  uVar9 = 0x10383130c;
  func_0x0001000bdd8c(0x10383130c,0);
  puVar5 = &UNK_11069d6a8;
  func_0x000107c613fc(&UNK_11069d6a8,0x40,7);
  *(code **)(puVar5 + 0x10) = pcVar7;
  *(undefined2 *)(puVar5 + 0x18) = 1;
  puVar5[0x1a] = 0;
  *(undefined8 *)(puVar5 + 0x20) = 1;
  puVar5[0x28] = 0;
  *(undefined8 *)(puVar5 + 0x30) = uVar9;
  *(undefined8 **)(puVar5 + 0x38) = puVar11;
  func_0x0001000285a8(0x112fa03b0,&UNK_10dc152f0);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(puVar11);
  uVar9 = 0x103845be0;
  func_0x0001000bdd8c(0x103845be0,puVar5);
  puVar5 = &UNK_11069d6d0;
  func_0x000107c613fc(&UNK_11069d6d0,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  func_0x0001000285a8(0x112fa03a0,&UNK_10dc152e0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(uVar4);
  pcVar8 = FUN_103845c4c;
  func_0x0001000bdd8c(FUN_103845c4c,puVar5);
  func_0x0001000285a8(0x112fa0258,&UNK_10dc15200);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar9);
  uVar12 = 0x103845c54;
  func_0x0001000bdd8c(0x103845c54,uVar9);
  uVar21 = 0x112fa0260;
  func_0x0001000285a8(0x112fa0260,&UNK_10dc15208);
  uVar13 = 0x1038456d0;
  func_0x0001000cb480(0x1038456d0,0,uVar21);
  uVar22 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar19 = 0x112fa25c0;
  func_0x0001000285a8(0x112fa25c0,&UNK_10dc16540);
  func_0x000107c613fc();
  func_0x0001000c6560(0);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar21 = uVar22;
  func_0x0001000c6580();
  *(undefined8 *)(lVar19 + 0x10) = uVar22;
  *(undefined8 *)(lVar19 + 0x18) = uVar3;
  *(undefined8 *)(lVar19 + 0x20) = uVar2;
  *(code **)(lVar19 + 0x28) = FUN_103845788;
  *(undefined8 *)(lVar19 + 0x30) = 0;
  *(undefined8 *)(lVar19 + 0x38) = uVar21;
  uVar21 = *(undefined8 *)(unaff_x20 + 0x38);
  *(long *)(unaff_x20 + 0x38) = lVar19;
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(lVar19);
  func_0x000107c61574(uVar21);
  puVar5 = &UNK_11069d6f8;
  func_0x000107c613fc(&UNK_11069d6f8,0x40,7);
  *(long *)(puVar5 + 0x10) = lVar19;
  *(code **)(puVar5 + 0x18) = pcVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar13;
  *(undefined8 *)(puVar5 + 0x28) = uVar4;
  *(undefined8 *)(puVar5 + 0x30) = uVar1;
  *(undefined8 *)(puVar5 + 0x38) = uVar2;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  uVar21 = 0x103845c5c;
  func_0x0001000bdd8c(0x103845c5c,puVar5);
  uVar13 = 0;
  func_0x0001002ed07c(0);
  pcVar10 = FUN_1038458b0;
  func_0x0001000bfde0(FUN_1038458b0,0,uVar13);
  pcVar14 = pcVar10;
  func_0x0001004575f0();
  func_0x000107c61574();
  func_0x0001004575f0();
  pcVar15 = pcVar10;
  func_0x0001003a5b88();
  pcVar16 = pcVar15;
  func_0x0001003a5b88();
  puVar5 = PTR_PTR_1126ad778;
  func_0x000107c610f8(PTR_PTR_1126ad778);
  func_0x000107c45778();
  func_0x000107c61170(pcVar14);
  func_0x000107c61170(pcVar10);
  func_0x000107c61170(pcVar15);
  func_0x000107c61170(pcVar16);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x20));
  puVar17 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  func_0x000107c451b0();
  func_0x000107c61180();
  uVar13 = 0x112fa0268;
  func_0x0001000285a8(0x112fa0268,&UNK_10dc159f0);
  uVar22 = 0x103845734;
  func_0x0001000cb480(0x103845734,0,uVar13);
  lVar18 = 0;
  func_0x0001005b7104();
  uStack_88 = 0;
  uStack_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_70 = 0;
  lVar19 = lVar18;
  func_0x000107c610f8();
  *(undefined **)(lVar19 + _DAT_112f9f6d8) = puVar17;
  *(undefined8 *)(lVar19 + _DAT_112f9f6e0) = uVar22;
  func_0x0001007b7bf0(&uStack_90,lVar19 + _DAT_112f9f6e8);
  plVar20 = &lStack_a0;
  lStack_a0 = lVar19;
  lStack_98 = lVar18;
  func_0x000107c61154(plVar20,PTR_s_init_1125d9248);
  func_0x0001007b7c40(&uStack_90);
  func_0x000107c42c20(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(uVar2);
  func_0x000107c61574(uVar3);
  func_0x000107c61574(uVar4);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(pcVar6);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(puVar11);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar8);
  func_0x000107c61574(uVar12);
  func_0x000107c61574(uVar21);
  func_0x000107c61170(puVar5);
  func_0x000107c61170(plVar20);
  return;
}



/* Entry: 1038454f0; end: 1038455d3;  */

void FUN_1038454f0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    pcVar2 = *(char **)(param_2 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(param_2);
    pcVar1 = pcVar2;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    pcVar2 = pcVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar1);
    if (pcVar2 != (char *)0x0) {
      pcVar1 = pcVar2;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar2);
      goto LAB_1038455bc;
    }
  }
  pcVar1 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_1038455bc:
  *param_1 = pcVar1;
  return;
}



/* Entry: 1038455d4; end: 1038455db;  */

void FUN_1038455d4(undefined8 *param_1)

{
  long lVar1;
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    pcVar3 = *(char **)(lVar1 + 0x10);
    func_0x000107c61174();
    func_0x000107c61574(lVar1);
    pcVar2 = pcVar3;
    func_0x000107c4b2ec();
    func_0x000107c61180();
    func_0x000107c61170(pcVar3);
    pcVar3 = pcVar2;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    if (pcVar3 != (char *)0x0) {
      pcVar2 = pcVar3;
      func_0x000107c4c18c();
      func_0x000107c61180();
      func_0x000107c615e8(pcVar3);
      goto LAB_1038455bc;
    }
  }
  pcVar2 = "begin()";
  func_0x0001000c10c0();
  func_0x000107c61180();
LAB_1038455bc:
  *param_1 = pcVar2;
  return;
}



/* Entry: 1038455dc; end: 103845643;  */

void FUN_1038455dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010388ced4(param_2,param_3);
  *param_1 = param_2;
  return;
}



/* Entry: 103845644; end: 10384564b;  */

void FUN_103845644(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001007b6e3c(0);
  func_0x000107c613fc();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x00010388ced4(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10384564c; end: 103845787;  */

void FUN_10384564c(undefined8 *param_1,undefined8 param_2)

{
  code *pcVar1;
  
  func_0x0001000285a8(0x112fa0398,&UNK_10dc15fd0);
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  pcVar1 = FUN_103845cf0;
  func_0x0001000bdd8c(FUN_103845cf0,param_2);
  func_0x000103894904(0);
  func_0x000107c610f8();
  func_0x0001038948c8();
  *param_1 = pcVar1;
  return;
}



/* Entry: 103845788; end: 1038457bf;  */

void FUN_103845788(undefined8 param_1)

{
  FUN_10388b298(0);
  func_0x000107c610f8();
  func_0x000107c61174(param_1);
  func_0x00010388b1dc();
  return;
}



/* Entry: 1038457c0; end: 10384589b;  */

void FUN_1038457c0(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined1 auStack_78 [40];
  
  func_0x000103844c08();
  uVar1 = 0x112fa0390;
  func_0x0001000285a8(0x112fa0390,&UNK_10dc152d0);
  pcVar2 = FUN_10384589c;
  func_0x0001000cb480(FUN_10384589c,0,uVar1);
  func_0x0001000d224c(auStack_78);
  FUN_103893e40(0);
  func_0x000107c610f8();
  func_0x000107c6157c(in_x3);
  func_0x000107c6157c(in_x4);
  func_0x000107c6157c(in_x5);
  func_0x000103890d38(pcVar2,auStack_78,in_x3,in_x4,in_x5,0);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10384589c; end: 1038458af;  */

void FUN_10384589c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = &PTR_DAT_1106a1938;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 1038458b0; end: 1038458e7;  */

void FUN_1038458b0(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8();
  func_0x000107c45a48();
  *param_1 = puVar1;
  return;
}



/* Entry: 1038458e8; end: 103845a07;  */

void FUN_1038458e8(undefined8 *param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uStack_88;
  undefined1 uStack_80;
  undefined8 uStack_78;
  ulong uStack_70;
  undefined8 uStack_68;
  
  uVar3 = param_4;
  uVar4 = param_5;
  func_0x0001000d224c(&uStack_68);
  uVar1 = 0x112f9fdd0;
  uStack_80 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  puVar2 = &uStack_88;
  uStack_88 = uVar1;
  uStack_78 = uVar3;
  uStack_70 = uVar4;
  func_0x000100854cb0(puVar2);
  func_0x000107c61170(uVar1);
  FUN_10381e510(uVar3,uVar4);
  FUN_1038a4550(0);
  func_0x000107c610f8();
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001038a159c(uStack_68,&PTR_DAT_1106a18f8,param_3 & 0x10101,param_4,param_5 & 0xffffffff,
                      param_6,puVar2,0,param_7);
  *param_1 = uStack_68;
  param_1[1] = &PTR_DAT_1106a2208;
  return;
}



/* Entry: 103845a08; end: 103845b3b;  */

void FUN_103845a08(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar2 = &uStack_70;
  func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
  uVar4 = 7;
  func_0x000107c613fc();
  pcVar1 = FUN_103845b3c;
  func_0x0001000bdd8c(FUN_103845b3c,0);
  uVar3 = 0x112f9fdd0;
  uStack_68 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  uStack_70 = uVar3;
  uStack_60 = uVar4;
  uStack_58 = param_5;
  func_0x000100854cb0(&uStack_70);
  func_0x000107c61170(uVar3);
  FUN_10381e510(uVar4,param_5);
  uVar3 = 0;
  FUN_10388caa4();
  func_0x000107c613fc();
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010388bee8(pcVar1,param_2,param_3,puVar2,0);
  param_1[3] = uVar3;
  param_1[4] = &PTR_DAT_1106a17d8;
  param_1[5] = &PTR_DAT_1106a1800;
  *param_1 = pcVar1;
  return;
}



/* Entry: 103845b3c; end: 103845b6b;  */

void FUN_103845b3c(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_PTR_1126b40c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *param_1 = puVar1;
  return;
}



/* Entry: 103845b6c; end: 103845bb7;  */

void FUN_103845b6c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103845bb8; end: 103845bd7;  */

void FUN_103845bb8(void)

{
  FUN_103844df4();
  return;
}



/* Entry: 103845bd8; end: 103845c1f;  */

undefined8 FUN_103845bd8(void)

{
  return 0;
}



/* Entry: 103845c20; end: 103845c4b;  */

void FUN_103845c20(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103845c4c; end: 103845c6b;  */

void FUN_103845c4c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 in_x3;
  long unaff_x20;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar4 = &uStack_70;
  func_0x0001000285a8(0x112fa03a8,&UNK_10dc15a70);
  uVar6 = 7;
  func_0x000107c613fc();
  pcVar3 = FUN_103845b3c;
  func_0x0001000bdd8c(FUN_103845b3c,0);
  uVar5 = 0x112f9fdd0;
  uStack_68 = 0xe0;
  func_0x0001000285a8();
  FUN_1038a5554();
  uStack_70 = uVar5;
  uStack_60 = uVar6;
  uStack_58 = in_x3;
  func_0x000100854cb0(&uStack_70);
  func_0x000107c61170(uVar5);
  FUN_10381e510(uVar6,in_x3);
  uVar5 = 0;
  FUN_10388caa4();
  func_0x000107c613fc();
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  func_0x00010388bee8(pcVar3,uVar1,uVar2,puVar4,0);
  param_1[3] = uVar5;
  param_1[4] = &PTR_DAT_1106a17d8;
  param_1[5] = &PTR_DAT_1106a1800;
  *param_1 = pcVar3;
  return;
}



/* Entry: 103845c6c; end: 103845c8b;  */

void FUN_103845c6c(void)

{
  func_0x000107c61168(&PTR_PTR_112fa2608);
  return;
}



/* Entry: 103845c8c; end: 103845cb3;  */

void FUN_103845c8c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  FUN_10388b298();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103845cb4; end: 103845ccb;  */

void FUN_103845cb4(void)

{
  FUN_103844d3c();
  return;
}



/* Entry: 103845ccc; end: 103845cef;  */

long * FUN_103845ccc(long *param_1,long param_2)

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



/* Entry: 103845cf0; end: 103845d3b;  */

void FUN_103845cf0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x0001000d224c(&uStack_40);
  uVar1 = uStack_40;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(lStack_38 + 8);
  param_1[3] = uVar1;
  param_1[4] = uVar2;
  *param_1 = uStack_40;
  return;
}



/* Entry: 103845d3c; end: 103845d53;  */

void FUN_103845d3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  (*(code *)&SUB_1007de270)();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103845d54; end: 103845d97;  */

void FUN_103845d54(undefined8 *param_1,undefined8 param_2,code *param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  uVar1 = 0;
  (*param_3)();
  param_1[3] = uVar1;
  *param_1 = param_2;
  return;
}



/* Entry: 103845d98; end: 103845dc7;  */

void FUN_103845d98(long param_1,long param_2)

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



/* Entry: 103845dc8; end: 103847307;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103845dc8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,long param_8,undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined **ppuVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  long lVar27;
  code *pcVar28;
  code *pcVar29;
  undefined *puVar30;
  code *pcVar31;
  undefined *puVar32;
  long lVar33;
  undefined *puVar34;
  undefined *puVar35;
  code *pcVar36;
  undefined8 uVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  undefined8 uVar40;
  undefined8 uVar41;
  long lVar42;
  undefined8 uVar43;
  long *plVar44;
  undefined *puVar45;
  undefined8 uVar46;
  undefined8 uVar47;
  undefined8 *puVar48;
  long unaff_x20;
  long lVar49;
  long lVar50;
  long lVar51;
  undefined *puVar52;
  undefined8 uVar53;
  undefined8 uVar54;
  undefined *puStack_518;
  undefined *puStack_408;
  undefined1 auStack_300 [40];
  undefined *apuStack_2d8 [3];
  undefined *puStack_2c0;
  undefined **ppuStack_2b8;
  long lStack_2b0;
  long lStack_2a8;
  long *aplStack_2a0 [3];
  long lStack_288;
  undefined **ppuStack_280;
  undefined8 uStack_278;
  undefined1 uStack_270;
  undefined8 uStack_260;
  undefined **ppuStack_258;
  undefined8 uStack_250;
  char cStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  long lStack_228;
  long lStack_220;
  undefined1 uStack_218;
  code *pcStack_210;
  code *pcStack_208;
  undefined1 uStack_200;
  undefined1 auStack_1f8 [88];
  undefined8 uStack_1a0;
  undefined1 uStack_198;
  undefined8 uStack_190;
  undefined **ppuStack_188;
  undefined *puStack_180;
  undefined8 uStack_178;
  code *pcStack_170;
  undefined1 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  code *pcStack_148;
  undefined1 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined1 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  long lStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  func_0x000107c613fc();
  uVar46 = *(undefined8 *)(param_8 + _DAT_112fa4328);
  puVar3 = &UNK_11069d920;
  func_0x000107c613fc(&UNK_11069d920,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar46;
  uVar4 = 0x112fa03d0;
  func_0x0001000285a8(0x112fa03d0,&UNK_10dc15ff0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  pcVar5 = FUN_103847360;
  func_0x0001000bdd8c();
  ppuVar6 = &PTR____CFConstantStringClassReference_110f310f8;
  func_0x000107c5faec();
  func_0x0001000285a8(0x112d382e8,&UNK_10d902020);
  func_0x000107c61534();
  pcVar7 = FUN_10383d3cc;
  func_0x0001000bdd8c(FUN_10383d3cc,0);
  puVar8 = &UNK_11069d948;
  func_0x000107c613fc(&UNK_11069d948,0x18,7);
  *(undefined8 *)(puVar8 + 0x10) = param_9;
  func_0x0001000285a8(0x112fa03c8,&UNK_10dc15780);
  func_0x000107c61534();
  func_0x000107c61174();
  uVar9 = 0x103847368;
  func_0x0001000bdd8c(0x103847368,puVar8);
  uStack_118 = 0;
  uStack_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_100 = 0;
  uStack_1a0 = 3;
  uStack_198 = 0;
  uStack_190 = 1;
  uStack_178 = 0;
  uStack_168 = 1;
  uStack_160 = 0x10383d3d4;
  uStack_158 = 0;
  uStack_140 = 1;
  uStack_130 = 0;
  uStack_138 = 1;
  uStack_128 = 0;
  plVar44 = (long *)(param_3 + _DAT_112fa2d40);
  ppuStack_188 = ppuVar6;
  puStack_180 = puVar3;
  pcStack_170 = pcVar7;
  uStack_150 = uVar9;
  pcStack_148 = pcVar5;
  func_0x0001000a8868(plVar44,plVar44[3]);
  uVar47 = *(undefined8 *)(param_1 + _DAT_112fa5758);
  func_0x0001000285a8(0x112d5d810,&UNK_10d923f50);
  func_0x000107c61174();
  uVar9 = param_4;
  func_0x000107c4aeb0();
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  uVar11 = uVar10;
  func_0x0001000bda74();
  func_0x000107c61170(uVar10);
  puVar8 = PTR_PTR_1126ae558;
  func_0x000107c61168();
  uVar9 = param_4;
  func_0x000107c4aeb0(param_4);
  func_0x000107c61180();
  uVar10 = uVar9;
  func_0x000107c4aeb4();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c451b0();
  func_0x000107c61180();
  func_0x000107c61170(uVar10);
  lVar49 = *plVar44;
  uVar9 = *(undefined8 *)(lVar49 + 0x10);
  lVar13 = *(long *)(lVar49 + 0x18);
  lVar51 = *(long *)(lVar49 + 0x20);
  puVar3 = *(undefined **)(lVar49 + 0x28);
  uVar10 = *(undefined8 *)(lVar49 + 0x30);
  uVar14 = *(undefined8 *)(lVar49 + 0x38);
  uVar15 = *(undefined8 *)(lVar49 + 0x40);
  uVar16 = *(undefined8 *)(lVar49 + 0x48);
  uVar17 = *(undefined8 *)(lVar49 + 0x50);
  uVar18 = *(undefined8 *)(lVar49 + 0x58);
  uVar19 = *(undefined8 *)(lVar49 + 0x60);
  lVar20 = *(long *)(lVar49 + 0x68);
  puVar45 = *(undefined **)(lVar49 + 0x70);
  FUN_103825850(&uStack_1a0,&uStack_278);
  lVar50 = *(long *)(lVar49 + 0x78);
  lVar12 = 0;
  func_0x00010384c030();
  lVar49 = lVar12;
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c6157c(uVar11);
  func_0x000107c61174();
  func_0x0001000d224c(&uStack_98);
  uVar38 = 0;
  lVar42 = 0;
  uVar39 = 0;
  uVar40 = 0;
  uVar41 = 0;
  uVar43 = 0;
  if ((char)uStack_98 == '\x01') {
    puVar52 = puVar3;
    func_0x000107c4b100(puVar3);
    func_0x000107c61180();
    FUN_1038233a8(&uStack_f8);
    func_0x000107c61170(puVar52);
    uVar38 = uStack_f8;
    lVar42 = lStack_f0;
    uVar39 = uStack_e8;
    uVar40 = uStack_e0;
    uVar41 = uStack_d8;
    uVar43 = uStack_d0;
  }
  uStack_c8 = uVar38;
  lStack_c0 = lVar42;
  uStack_b8 = uVar39;
  uStack_b0 = uVar40;
  uStack_a8 = uVar41;
  uStack_a0 = uVar43;
  if (cStack_240 == '\x01') {
    puVar52 = puVar3;
    func_0x000107c4b100();
    func_0x000107c61180();
    puVar21 = puVar52;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(puVar52);
    puStack_408 = puVar21;
    if (puVar21 != (undefined *)0x0) {
      puVar52 = puVar21;
      func_0x000107c4daf8();
      func_0x000107c615e8(puVar21);
      if ((int)puVar52 == 0) {
        puStack_408 = (undefined *)0x0;
        puVar52 = puVar21;
      }
      else {
        puStack_408 = puVar45;
        FUN_10384c71c();
        puVar52 = puStack_408;
        if (puStack_408 != (undefined *)0x0) {
          func_0x000107c615f0(puStack_408);
          func_0x000107c5bc1c();
        }
      }
    }
    *(undefined **)(lVar49 + 0x28) = puStack_408;
    if (puStack_408 == (undefined *)0x0) {
      FUN_103822e30();
    }
    else {
      puVar52 = puStack_408;
      func_0x000107c615f0(puStack_408);
      FUN_103823038();
    }
    func_0x000107c6157c();
    func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
    uVar22 = *(undefined8 *)(lVar51 + _DAT_113080ad0);
    func_0x0001000bda74(uVar22);
    func_0x000107c6157c();
    uVar1 = uStack_250;
    uVar24 = uStack_238;
    uVar25 = uStack_230;
    uVar2 = uStack_200;
  }
  else {
    uVar22 = 0;
    puVar52 = (undefined *)0x0;
    *(undefined8 *)(lVar49 + 0x28) = 0;
    puStack_408 = (undefined *)0x0;
    uVar1 = uStack_250;
    uVar24 = uStack_238;
    uVar25 = uStack_230;
    uVar2 = uStack_200;
  }
  if (lStack_228 == 0) {
    uVar53 = 0;
  }
  else {
    func_0x0001000d224c(&uStack_98);
    uVar53 = uStack_98;
  }
  FUN_1038796f4(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar11);
  func_0x000107c6157c(uVar25);
  func_0x00010382597c(uVar38,lVar42,uVar39,uVar40,uVar41,uVar43);
  func_0x000107c6157c(uVar1);
  uVar23 = uVar11;
  func_0x000103878a74(uVar11,uVar24,uVar25,uVar1,puVar52,&uStack_c8,uVar22,uVar53,uVar2);
  func_0x000107c615e8(puStack_408);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(puVar52);
  uVar22 = uVar9;
  func_0x000107c41284();
  func_0x000107c61180();
  uVar24 = uVar22;
  func_0x000107c4f750();
  func_0x000107c61180();
  func_0x000107c615e8(uVar22);
  uVar22 = uVar10;
  func_0x000107c4b2f8();
  func_0x000107c61180();
  if (lStack_220 == 0) {
    puVar52 = &UNK_11069d970;
    func_0x000107c613fc(&UNK_11069d970,0x18,7);
    *(undefined8 *)(puVar52 + 0x10) = uVar22;
    func_0x000107c613fc(uVar4,0x18,7);
    pcVar5 = (code *)0x1038473a0;
    func_0x0001000bdd8c(0x1038473a0,puVar52);
  }
  else {
    func_0x000107c6157c(lStack_220);
    uVar4 = 0x112fa0410;
    func_0x0001000285a8(0x112fa0410,&UNK_10dc15370);
    pcVar5 = FUN_10384bf80;
    func_0x0001000cb480(FUN_10384bf80,0,uVar4);
    func_0x000107c61574(lStack_220);
    func_0x000107c61170(uVar22);
  }
  puVar52 = &UNK_11069d998;
  func_0x000107c613fc(&UNK_11069d998,0x18,7);
  func_0x000107c61614(puVar52 + 0x10,param_5);
  puVar21 = &UNK_11069d9c0;
  func_0x000107c613fc(&UNK_11069d9c0,0x28,7);
  *(undefined **)(puVar21 + 0x10) = puVar52;
  *(code **)(puVar21 + 0x18) = pcVar5;
  *(undefined **)(puVar21 + 0x20) = puVar8;
  func_0x0001000285a8(0x112fa03d8,&UNK_10dc15310);
  func_0x000107c613fc();
  func_0x000107c61174();
  uVar4 = 0x1038473a8;
  func_0x0001000bdd8c(0x1038473a8,puVar21);
  if (lVar42 == 0) {
    puVar48 = (undefined8 *)0x0;
  }
  else {
    uStack_98 = uVar38;
    lStack_90 = lVar42;
    uStack_88 = uVar39;
    uStack_80 = uVar40;
    uStack_78 = uVar41;
    uStack_70 = uVar43;
    FUN_103883920(0);
    func_0x000107c610f8();
    puVar52 = puVar8;
    func_0x000107c61174(puVar8);
    func_0x000107c61434(lVar42);
    func_0x000107c61434(uVar40);
    func_0x000107c61434(uVar43);
    puVar48 = &uStack_98;
    FUN_1038831fc(puVar48,puVar52);
  }
  puVar52 = &UNK_11069d998;
  func_0x000107c613fc(&UNK_11069d998,0x18,7);
  func_0x000107c61614(puVar52 + 0x10,param_5);
  uVar22 = 0x112fa03e0;
  func_0x0001000285a8(0x112fa03e0,&UNK_10dc15a80);
  func_0x000107c613fc();
  uVar25 = 0x1038473b4;
  func_0x0001000bdd8c(0x1038473b4,puVar52,uVar22);
  uVar22 = *(undefined8 *)(param_7 + _DAT_112fe95f8);
  uVar53 = *(undefined8 *)(param_6 + _DAT_112f9f6e0);
  lVar26 = 0;
  FUN_10381fe7c();
  lVar27 = lVar26;
  func_0x000107c610f8();
  *(undefined8 *)(lVar27 + _DAT_112f9ffa0) = 0;
  *(undefined8 *)(lVar27 + _DAT_112f9ffa8) = 1;
  *(undefined8 *)(lVar27 + _DAT_112f9ffb0) = 0;
  *(undefined8 *)(lVar27 + _DAT_112f9ff88) = uVar22;
  *(undefined8 *)(lVar27 + _DAT_112f9ff90) = uVar25;
  *(undefined8 *)(lVar27 + _DAT_112f9ff98) = uVar53;
  puVar52 = PTR_s_init_1125d9248;
  lStack_2b0 = lVar27;
  lStack_2a8 = lVar26;
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar25);
  func_0x000107c6157c(uVar53);
  plVar44 = &lStack_2b0;
  func_0x000107c61154(plVar44,puVar52);
  ppuStack_280 = &PTR_DAT_11069a800;
  lStack_288 = lVar26;
  func_0x000107c61574(uVar25);
  uVar22 = *(undefined8 *)(lVar13 + _DAT_113071300);
  aplStack_2a0[0] = plVar44;
  FUN_1038473d0(aplStack_2a0,apuStack_2d8);
  puVar52 = &UNK_11069d9e8;
  func_0x000107c613fc(&UNK_11069d9e8,0x62,7);
  *(undefined8 *)(puVar52 + 0x10) = uVar22;
  *(undefined8 *)(puVar52 + 0x18) = uVar4;
  func_0x000100d602a8(apuStack_2d8,puVar52 + 0x20);
  *(undefined8 *)(puVar52 + 0x48) = uVar24;
  *(undefined8 **)(puVar52 + 0x50) = puVar48;
  *(undefined8 *)(puVar52 + 0x58) = uStack_278;
  puVar52[0x60] = uStack_270;
  puVar52[0x61] = uStack_218;
  func_0x0001000285a8(0x112fa03e8,&UNK_10dc15320);
  func_0x000107c613fc();
  func_0x000107c61174(uVar22);
  func_0x000107c6157c(uVar4);
  func_0x000107c61174();
  func_0x000107c61174();
  puVar21 = (undefined *)0x1038473bc;
  func_0x0001000bdd8c(0x1038473bc,puVar52);
  pcVar7 = pcStack_208;
  pcVar5 = pcStack_210;
  if (pcStack_210 == (code *)0x1) {
    func_0x0001000285a8(0x112f6cf68,&UNK_10dbcadf0);
    uVar22 = uVar17;
    func_0x000107c3ee24(uVar17);
    func_0x000107c61180();
    uVar25 = uVar22;
    func_0x0001000bda74();
    func_0x000107c61170(uVar22);
    uVar22 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar5 = FUN_10384c61c;
    func_0x0001000cb480(FUN_10384c61c,0,uVar22);
    pcVar7 = FUN_10384c65c;
    func_0x0001000cb480(FUN_10384c65c,0,uVar22);
    func_0x000107c61574(uVar25);
  }
  func_0x0001000285a8(0x112e5b730,&UNK_10dc15a90);
  FUN_1038259d8(pcStack_210,pcStack_208);
  uVar22 = uVar15;
  func_0x000107c4c974(uVar15);
  func_0x000107c61180();
  uVar25 = uVar22;
  func_0x0001000bda74();
  func_0x000107c61170(uVar22);
  uVar22 = 0x112e5b738;
  func_0x0001000285a8(0x112e5b738,&UNK_10da61720);
  pcVar28 = FUN_10384b8d8;
  func_0x0001000cb480(FUN_10384b8d8,0,uVar22);
  func_0x000107c61574(uVar25);
  pcVar29 = FUN_10384b914;
  func_0x0001000cb480(FUN_10384b914,0,&UNK_11077ec38);
  puVar52 = &UNK_11069da10;
  func_0x000107c613fc(&UNK_11069da10,0x18,7);
  func_0x000107c61614(puVar52 + 0x10,uVar14);
  func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
  func_0x000107c613fc();
  uVar22 = 0x1038473c0;
  func_0x0001000bdd8c(0x1038473c0,puVar52);
  puVar52 = puVar3;
  func_0x000107c4b100();
  func_0x000107c61180();
  puVar30 = puVar52;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar52);
  if (puVar30 == (undefined *)0x0) {
    puStack_518 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar52 = puVar30;
    func_0x000107c5b458();
    func_0x000107c61180();
    puStack_518 = puVar52;
    func_0x000107c5fc54();
    func_0x000107c61170(puVar52);
  }
  func_0x0001000285a8(0x112d4f8d0,&UNK_10dc15330);
  uVar25 = uVar18;
  func_0x000107c5c360(uVar18);
  func_0x000107c61180();
  uVar53 = uVar25;
  func_0x0001000bda74();
  func_0x000107c61170(uVar25);
  uVar25 = 0x112d5ba30;
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  pcVar31 = FUN_10384ba24;
  func_0x0001000cb480(FUN_10384ba24,0,uVar25);
  func_0x000107c61574(uVar53);
  puVar52 = &UNK_11069da38;
  func_0x000107c613fc(&UNK_11069da38,0x20,7);
  *(undefined8 *)(puVar52 + 0x10) = uVar19;
  *(undefined8 *)(puVar52 + 0x18) = uVar16;
  func_0x0001000285a8(0x112fa03f0,&UNK_10dc15340);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar25 = 0x1038473c8;
  func_0x0001000bdd8c(0x1038473c8,puVar52);
  puVar32 = (undefined *)0x0;
  FUN_1038806d8();
  puVar52 = puVar32;
  func_0x000107c613fc();
  FUN_103825a1c(auStack_1f8,apuStack_2d8);
  if (puStack_2c0 == (undefined *)0x0) {
    FUN_103819ed4();
  }
  else {
    func_0x000100d602a8(apuStack_2d8,auStack_300);
    lVar27 = 0x112fa0408;
    func_0x0001000285a8(0x112fa0408,&UNK_10dc15360);
    func_0x000107c61534();
    *(undefined8 *)(lVar27 + 0x18) = 2;
    *(undefined8 *)(lVar27 + 0x10) = 1;
    *(undefined8 *)(lVar27 + 0x20) = uStack_260;
    *(undefined ***)(lVar27 + 0x28) = ppuStack_258;
    FUN_1038473d0(auStack_300,lVar27 + 0x30);
    func_0x000107c61434(ppuStack_258);
    FUN_103819ed4();
    func_0x000107c61588(lVar27);
    func_0x000103847414((undefined8 *)(lVar27 + 0x20));
    func_0x0001000834e4(auStack_300);
  }
  lVar27 = lVar20;
  func_0x000107c4b3b8();
  func_0x000107c61180();
  lVar26 = lVar27;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar27);
  func_0x0001000285a8(0x112eb17c0,&UNK_10dac6140);
  if (lVar26 == 0) {
    puVar35 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar6 = apuStack_2d8;
    apuStack_2d8[0] = puVar35;
    func_0x000100854cb0();
    func_0x000107c61170(puVar35);
  }
  else {
    lVar27 = lVar26;
    func_0x000107c5006c(lVar26);
    func_0x000107c61180();
    lVar33 = lVar27;
    func_0x0001000b637c();
    func_0x000107c61170(lVar27);
    func_0x0001000d224c(apuStack_2d8);
    puVar35 = apuStack_2d8[0];
    func_0x000100471e0c(apuStack_2d8[0],1);
    func_0x000107c61574(lVar33);
    func_0x000107c615e8(apuStack_2d8[0]);
    puVar34 = PTR__OBJC_CLASS___NSSet_1126ae870;
    func_0x000107c610f8();
    func_0x000107c453e4();
    ppuVar6 = apuStack_2d8;
    apuStack_2d8[0] = puVar34;
    func_0x0001006c71a4();
    func_0x000107c61170(puVar34);
    func_0x000107c615e8(lVar26);
    func_0x000107c61574(puVar35);
  }
  func_0x000107c61434(ppuStack_258);
  func_0x000107c6157c(ppuVar6);
  func_0x000107c6157c(pcVar28);
  func_0x000107c6157c(pcVar31);
  func_0x000107c6157c(pcVar29);
  func_0x000107c6157c(uVar22);
  func_0x000107c6157c(uVar25);
  pcVar36 = FUN_10384bbe4;
  func_0x0001000cb480(FUN_10384bbe4,0,&UNK_11077ebd0);
  ppuStack_2b8 = &PTR_DAT_1106a0c40;
  apuStack_2d8[0] = puVar52;
  puStack_2c0 = puVar32;
  func_0x000107c6157c();
  uVar53 = 0x10384bc2c;
  func_0x0001000cb480(0x10384bc2c,0,PTR___sSbN_11034dd40);
  uVar54 = *(undefined8 *)(lVar50 + _DAT_112fa6450);
  uVar37 = 0;
  FUN_10388ac54();
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x00010382597c(uVar38,lVar42,uVar39,uVar40,uVar41,uVar43);
  func_0x000107c6157c(pcVar7);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174();
  func_0x000107c6157c(uVar54);
  func_0x000107c6157c(puVar21);
  func_0x000107c6157c(pcVar5);
  puVar32 = puVar21;
  func_0x000103888844(puVar21,pcVar28,uVar24,puStack_518,puVar8,pcVar5,pcVar7,ppuVar6,pcVar31,
                      pcVar29,uVar22,uVar25,uStack_260,ppuStack_258,pcVar36,apuStack_2d8,uVar53,
                      uVar1,&uStack_c8,uVar54,uVar2);
  ppuStack_2b8 = &PTR_DAT_1106a1598;
  puStack_2c0 = (undefined *)uVar37;
  func_0x000107c61574(puVar52);
  func_0x000107c61574(uVar25);
  func_0x000107c61574(uVar22);
  func_0x000107c61574(pcVar29);
  func_0x000107c61574(pcVar31);
  func_0x000107c61574(pcVar28);
  func_0x000107c615e8(puVar30);
  func_0x000107c61574(ppuVar6);
  func_0x000103825a6c(uVar38,lVar42,uVar39,uVar40,uVar41,uVar43);
  apuStack_2d8[0] = puVar32;
  func_0x0001000285a8(0x112fa0400,&UNK_10dc15ab0);
  uVar38 = uVar24;
  func_0x000107c3f6e8();
  func_0x000107c61180();
  uVar39 = uVar38;
  func_0x0001000bda74();
  func_0x000107c61170(uVar38);
  func_0x0001000285a8(0x112da9c48,&UNK_10dc15350);
  uVar40 = *(undefined8 *)(lVar51 + _DAT_113080ad0);
  func_0x000107c61174(uVar40);
  uVar38 = uVar40;
  func_0x0001000bda74();
  func_0x000107c61170(uVar40);
  FUN_1038473d0(apuStack_2d8,auStack_300);
  uVar41 = 0;
  FUN_103872568();
  uVar40 = uVar41;
  func_0x000107c610f8();
  FUN_1038714fc(uVar39,uVar38,auStack_300,uVar40);
  *(undefined8 *)(lVar49 + 0x10) = uVar47;
  *(undefined8 *)(lVar49 + 0x18) = uVar39;
  func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
  func_0x000107c61174(uVar47);
  func_0x000107c61174(uVar39);
  uVar38 = param_5;
  func_0x000107c3e060();
  func_0x000107c61180();
  uVar40 = uVar38;
  func_0x0001000bda74();
  func_0x000107c61170();
  FUN_1038714a4();
  lVar42 = 0;
  func_0x00010384cca8();
  func_0x000107c613fc();
  uVar43 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  func_0x000107c61170(uVar23);
  func_0x000107c61170(puVar8);
  func_0x000107c61170(puVar48);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(uVar24);
  func_0x000107c61170(uVar19);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(pcVar5);
  func_0x000107c61170(uVar47);
  func_0x000107c61170(uVar39);
  func_0x000107c61170(lVar51);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(lVar13);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(lVar50);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar3);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c61170(lVar20);
  func_0x000107c61170(puVar45);
  func_0x000107c615e8(puStack_408);
  *(undefined8 *)(lVar42 + 0x10) = uVar40;
  *(undefined8 *)(lVar42 + 0x18) = uVar38;
  *(undefined **)(lVar42 + 0x20) = puVar21;
  *(undefined8 *)(lVar42 + 0x28) = uVar43;
  func_0x0001000834e4(apuStack_2d8);
  func_0x0001000834e4(aplStack_2a0);
  func_0x000103825aa8(&uStack_278);
  *(long *)(lVar49 + 0x20) = lVar42;
  func_0x000107c61574(uVar11);
  *(long *)(unaff_x20 + 0x28) = lVar12;
  *(undefined ***)(unaff_x20 + 0x30) = &PTR_DAT_11069df40;
  func_0x000107c61170(uVar47);
  func_0x000107c61574(uVar11);
  func_0x000107c61170(puVar8);
  plVar44 = (long *)(unaff_x20 + 0x10);
  *plVar44 = lVar49;
  func_0x0001000a8868(plVar44,lVar12);
  lVar51 = *plVar44;
  FUN_103871654();
  uVar4 = *(undefined8 *)(lVar51 + 0x10);
  uVar9 = *(undefined8 *)(lVar51 + 0x18);
  ppuStack_258 = &PTR_DAT_11069f880;
  uStack_278 = uVar9;
  uStack_260 = uVar41;
  FUN_10388af40(0);
  func_0x000107c610f8();
  func_0x000107c61174(uVar9);
  puVar48 = &uStack_278;
  func_0x00010388ae60(puVar48);
  func_0x000107c4fba8(uVar4);
  func_0x000107c61170(puVar48);
  FUN_10384c9b0();
  func_0x000107c61170(uVar46);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_4);
  func_0x000103825aa8(&uStack_1a0);
  return unaff_x20;
}



/* Entry: 103847308; end: 10384735f;  */

void FUN_103847308(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x00010381e004();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a740;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 103847360; end: 10384736f;  */

void FUN_103847360(long *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = 0;
  func_0x00010381e004();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a740;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(uVar3);
  return;
}



/* Entry: 103847370; end: 103847393;  */

void FUN_103847370(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103847394; end: 1038473cf;  */

void FUN_103847394(void)

{
  return;
}



/* Entry: 1038473d0; end: 10384745b;  */

long FUN_1038473d0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10384745c; end: 1038474d3;  */

void FUN_10384745c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1038474d4; end: 1038474ef;  */

void FUN_1038474d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long unaff_x20;
  undefined1 auStack_88 [40];
  
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined1 *)(unaff_x20 + 0x60);
  uVar4 = *(undefined1 *)(unaff_x20 + 0x61);
  uVar6 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(uVar5,uVar6);
  FUN_10384c884(unaff_x20 + 0x20,auStack_88);
  uVar6 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x000107c61174(uVar7);
  func_0x000103872c28(uVar5,uVar1,auStack_88,uVar7,uVar2,uVar8,uVar3,uVar4);
  param_1[3] = uVar6;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = uVar5;
  return;
}



/* Entry: 1038474f0; end: 103847533;  */

void FUN_1038474f0(void)

{
  func_0x000107c61168(&PTR_PTR_112fa26d0);
  return;
}



/* Entry: 103847534; end: 103847573;  */

void FUN_103847534(undefined8 *param_1)

{
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 uStack_30;
  
  uStack_48 = param_1[1];
  uStack_50 = *param_1;
  uStack_38 = param_1[3];
  uStack_40 = param_1[2];
  uStack_30 = *(undefined1 *)(param_1 + 4);
  func_0x000100087c34(&uStack_50);
  return;
}



/* Entry: 103847574; end: 1038475e7;  */

void FUN_103847574(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  *(undefined1 *)(unaff_x20 + 0x20) = 0;
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  *(undefined1 *)(unaff_x20 + 0x50) = 0;
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  *(undefined8 *)(unaff_x20 + 0x90) = param_3;
  *(undefined8 *)(unaff_x20 + 0x98) = param_4;
  func_0x000107c61434(param_4);
  func_0x000107c6142c(uVar2);
  if (*(long *)(unaff_x20 + 0xe0) != -1) {
    *(long *)(unaff_x20 + 0xe0) = *(long *)(unaff_x20 + 0xe0) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1038475e8);
  (*pcVar1)();
}



/* Entry: 1038475e8; end: 1038478a3;  */

undefined * FUN_1038475e8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  
  puVar2 = PTR_PTR_1126ad7d0;
  func_0x000107c610f8(PTR_PTR_1126ad7d0);
  func_0x000107c453e4();
  func_0x000107c520d0();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c5fadc(uVar6,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c5328c(puVar2);
  func_0x000107c61170(uVar6);
  lVar4 = *(long *)(unaff_x20 + 0x98);
  if (lVar4 != 0) {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
    func_0x000107c61434(lVar4);
    func_0x000107c5fadc(uVar6,lVar4);
    func_0x000107c6142c(lVar4);
    func_0x000107c55e70(puVar2);
    func_0x000107c61170(uVar6);
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  puVar3 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
  func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
  func_0x000107c5fb78();
  func_0x000107c6142c(puVar3);
  func_0x000107c61434(uVar1);
  func_0x000107c5fb78(0x7e,0xe100000000000000);
  func_0x000107c6142c(0xe100000000000000);
  func_0x000107c5fadc(uVar6,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c55ea0(puVar2);
  func_0x000107c61170(uVar6);
  func_0x000107c57c78(puVar2);
  func_0x000107c59b80(puVar2);
  func_0x000107c59b8c(puVar2);
  if (*(char *)(unaff_x20 + 0xd8) != '\x01') {
    func_0x000107c59fa0(*(undefined8 *)(unaff_x20 + 0xd0),puVar2);
  }
  uVar5 = *(ulong *)(unaff_x20 + 0xa8);
  if (uVar5 != 1) {
    lVar4 = *(long *)(unaff_x20 + 0xb8);
    if (lVar4 != 0) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0xb0);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar6,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c52638(puVar2);
      func_0x000107c61170(uVar6);
      uVar5 = *(ulong *)(unaff_x20 + 0xa8);
    }
    if (1 < uVar5) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0xa0);
      func_0x000107c61434(uVar5);
      func_0x000107c5fadc(uVar6,uVar5);
      func_0x000107c6142c(uVar5);
      func_0x000107c5263c(puVar2);
      func_0x000107c61170(uVar6);
      uVar5 = *(ulong *)(unaff_x20 + 0xa8);
    }
    if ((uVar5 != 1) && (lVar4 = *(long *)(unaff_x20 + 200), lVar4 != 0)) {
      uVar6 = *(undefined8 *)(unaff_x20 + 0xc0);
      func_0x000107c61434(lVar4);
      func_0x000107c5fadc(uVar6,lVar4);
      func_0x000107c6142c(lVar4);
      func_0x000107c56e3c(puVar2);
      func_0x000107c61170(uVar6);
    }
  }
  return puVar2;
}



/* Entry: 1038478a4; end: 10384790f;  */

void FUN_1038478a4(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x98));
  FUN_103847b6c(*(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103847910; end: 10384796b;  */

long FUN_103847910(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10384796c; end: 103847a4b;  */

undefined8 * FUN_10384796c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  func_0x000107c61434(uVar2);
  return param_1;
}



/* Entry: 103847a4c; end: 103847a9f;  */

undefined8 * FUN_103847a4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[3];
  uVar2 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  func_0x000107c6142c(uVar2);
  uVar1 = param_2[5];
  uVar2 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  func_0x000107c6142c(uVar2);
  return param_1;
}



/* Entry: 103847aa0; end: 103847b6b;  */

int FUN_103847aa0(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 103847b6c; end: 103847bab;  */

/* WARNING: Possible PIC construction at 0x000103847b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103847b94) */

void FUN_103847b6c(undefined8 param_1,long param_2)

{
  if (param_2 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 103847bac; end: 103847d03;  */

void FUN_103847bac(void)

{
  char cVar1;
  bool bVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_88;
  long lStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (lVar5 == 0) {
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
    bVar2 = false;
  }
  else {
    uVar8 = *(undefined8 *)(lVar5 + 0x28);
    uVar9 = *(undefined8 *)(lVar5 + 0x30);
    uStack_a0 = 0x7e;
    uStack_98 = 0xe100000000000000;
    uStack_78 = *(undefined8 *)(lVar5 + 0xe0);
    func_0x000107c6157c(lVar5);
    puVar3 = PTR___sSus23CustomStringConvertiblesWP_11034e240;
    func_0x000107c6057c(PTR___sSuN_11034e220,PTR___sSus23CustomStringConvertiblesWP_11034e240);
    func_0x000107c5fb78();
    func_0x000107c6142c(puVar3);
    uVar7 = uStack_98;
    uVar6 = uStack_a0;
    uStack_a0 = uVar8;
    uStack_98 = uVar9;
    func_0x000107c61434(uVar9);
    func_0x000107c5fb78(uVar6,uVar7);
    func_0x000107c6142c(uVar7);
    uVar7 = uStack_98;
    uVar6 = uStack_a0;
    uVar8 = *(undefined8 *)(lVar5 + 0x10);
    uVar9 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x70);
    cVar1 = *(char *)(lVar5 + 0x78);
    func_0x000107c61434(uVar9);
    func_0x000107c61574(lVar5);
    bVar2 = cVar1 != '\x01' && lVar4 == 3;
  }
  uStack_78 = uVar6;
  uStack_70 = uVar7;
  uStack_68 = uVar8;
  uStack_60 = uVar9;
  uStack_58 = bVar2;
  func_0x0001000d224c(&uStack_a0);
  func_0x0001000a8868(&uStack_a0,uStack_88);
  (**(code **)(lStack_80 + 8))(&uStack_78,uStack_88,lStack_80);
  FUN_103848388(uVar6,uVar7,uVar8,uVar9,bVar2);
  func_0x0001000834e4(&uStack_a0);
  return;
}



/* Entry: 103847d04; end: 103847db7;  */

void FUN_103847d04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(param_2 + 0x10,puVar2,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar3 = *(long *)(param_2 + 0x10);
    if (lVar3 == 0) {
      func_0x000107c61574();
    }
    else {
      func_0x000107c6157c(lVar3);
      func_0x000107c61574(param_2);
      func_0x000107c52060();
      func_0x000107c61180();
      uVar1 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
      uVar4 = *(undefined8 *)(lVar3 + 0x98);
      *(undefined8 *)(lVar3 + 0x90) = uVar1;
      *(undefined1 **)(lVar3 + 0x98) = puVar2;
      func_0x000107c61574(lVar3);
      func_0x000107c6142c(uVar4);
    }
  }
  return;
}



/* Entry: 103847db8; end: 103847e3b;  */

void FUN_103847db8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 103847e3c; end: 103847ee7;  */

void FUN_103847e3c(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c614f0(*(undefined8 *)(param_1 + 0x38));
    func_0x000100bc7fa4();
    uVar1 = param_2;
    func_0x000107c3e08c();
    if ((uVar1 & 0xfffffffffffffffe) == 2) {
      FUN_1038483b8(param_2,param_3,param_4,param_5);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103847ee8; end: 103848007;  */

void FUN_103847ee8(long param_1,ulong param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    func_0x000107c614f0(*(undefined8 *)(param_1 + 0x38));
    func_0x000100bc7fa4();
    uVar1 = param_2;
    func_0x000107c3e08c();
    if ((uVar1 & 0xfffffffffffffffe) == 2) {
      FUN_10384874c(param_2,param_3);
    }
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103848008; end: 10384837f;  */

void FUN_103848008(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar1 = 0;
  uStack_70 = param_3;
  uStack_68 = param_4;
  func_0x000107c5f824();
  lVar6 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar6 + 0x40));
  lVar5 = (long)&uStack_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *unaff_x20;
  uVar7 = *(undefined8 *)(lVar4 + 0x38);
  func_0x000107c614f0(uVar7);
  func_0x000107c5f818(lVar5);
  puVar2 = &UNK_11069db58;
  func_0x000107c613fc(&UNK_11069db58,0x18,7);
  func_0x000107c61644(puVar2 + 0x10,lVar4);
  puVar3 = &UNK_11069dd38;
  func_0x000107c613fc(&UNK_11069dd38,0x38,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = uStack_70;
  *(undefined8 *)(puVar3 + 0x30) = uStack_68;
  func_0x000107c6157c(puVar2);
  func_0x000107c615f0(param_1);
  func_0x000100905790(lVar5,FUN_103849d38,puVar3,uVar7);
  func_0x000107c61574(puVar3);
  (**(code **)(lVar6 + 8))(lVar5,lVar1);
  func_0x000107c61574(puVar2);
  return;
}



/* Entry: 103848380; end: 103848387;  */

void FUN_103848380(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c614f0(*(undefined8 *)(lVar2 + 0x38));
    func_0x000100bc7fa4();
    *(undefined8 *)(lVar2 + 0x18) = uVar1;
    *(undefined1 *)(lVar2 + 0x20) = 0;
    lVar3 = *(long *)(lVar2 + 0x10);
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 0x70) = uVar1;
      *(undefined1 *)(lVar3 + 0x78) = 0;
    }
    FUN_103847bac();
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 103848388; end: 1038483b7;  */

/* WARNING: Possible PIC construction at 0x0001038483a0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038483a4) */

void FUN_103848388(undefined8 param_1,long param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
    return;
  }
  return;
}



/* Entry: 1038483b8; end: 10384874b;  */

void FUN_1038483b8(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x20;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  ulong uStack_78;
  long lStack_70;
  undefined *puStack_68;
  
  uVar1 = param_1;
  puVar5 = PTR_s_respondsToSelector__11262c7e0;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_identifier_1125d7178);
  if ((uVar1 & 1) != 0) {
    uVar2 = param_1;
    func_0x000107c44fdc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170();
    uVar1 = uVar3 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      func_0x000107c5eac8();
      if ((param_2 == uVar2) || (func_0x000107c5eac8(), param_3 == uVar2)) {
        lStack_70 = 0;
        puStack_68 = (undefined *)0xe000000000000000;
        func_0x000107c602fc(0x48);
        func_0x000107c5fb78(0xd000000000000033,0x800000010f16ef30);
        puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        uStack_78 = param_2;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c5fb78(0xd000000000000011,0x800000010f16ef70);
        puVar7 = PTR___sSis23CustomStringConvertiblesWP_11034df00;
        uStack_78 = param_3;
        func_0x000107c6057c(PTR___sSiN_11034deb0,PTR___sSis23CustomStringConvertiblesWP_11034df00);
        func_0x000107c5fb78();
        func_0x000107c6142c(puVar7);
        func_0x000107c6142c(puStack_68);
        uVar1 = param_1;
        func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_identifier_1125d7178);
        if ((uVar1 & 1) != 0) {
          func_0x000107c44fdc(param_1);
          func_0x000107c61180();
          func_0x000107c61170();
        }
      }
      lVar8 = *(long *)(unaff_x20 + 0x10);
      if (lVar8 != 0) {
        lVar9 = *(long *)(unaff_x20 + 0x28);
        if (lVar9 == 0) {
          func_0x000107c6157c(lVar8);
          uVar4 = 0;
        }
        else {
          func_0x000107c6157c(lVar8);
          func_0x000107c498f8(lVar9);
          uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
        }
        *(undefined8 *)(unaff_x20 + 0x28) = 0;
        func_0x000107c61170(uVar4);
        uVar1 = *(ulong *)(lVar8 + 0x10);
        puVar7 = *(undefined **)(lVar8 + 0x18);
        if (((uVar1 == uVar3) && (puVar7 == puVar5)) ||
           (func_0x000107c605b8(uVar1,puVar7,uVar3,puVar5,0), (uVar1 & 1) != 0)) {
          func_0x000107c6142c(puVar5);
          func_0x0001000d224c(&lStack_70);
          lVar9 = lStack_70;
          if (lStack_70 != 0) {
            lVar6 = lStack_70;
            func_0x000107c4b3f8();
            func_0x000107c61180();
            func_0x000107c615e8(lVar9);
            if (lVar6 != 0) {
              lVar9 = lVar6;
              func_0x000107c5faec(lVar6);
              func_0x000107c61170(lVar6);
              goto LAB_10384871c;
            }
            lVar9 = 0;
          }
          puVar7 = (undefined *)0x0;
LAB_10384871c:
          FUN_103847574(param_4,lVar9,puVar7);
          func_0x000107c6142c(puVar7);
          FUN_103847bac();
          func_0x000107c61574(lVar8);
          return;
        }
        lVar9 = *(long *)(unaff_x20 + 0x10);
        if (lVar9 != 0) {
          func_0x000107c6157c(lVar9);
          func_0x000103849064();
          func_0x000107c61574(lVar9);
        }
        func_0x000107c61574(lVar8);
      }
      FUN_103848980(uVar3,puVar5,param_2,param_3,param_4);
      goto LAB_103848610;
    }
    func_0x000107c6142c(puVar5);
  }
  lStack_70 = 0;
  puStack_68 = (undefined *)0xe000000000000000;
  func_0x000107c602fc(0x44);
  func_0x000107c5fb78(0xd000000000000042,0x800000010f16eeb0);
  func_0x000107c3e08c();
  uVar4 = 0;
  uStack_78 = param_1;
  func_0x00010381929c(0);
  func_0x000107c603d0(&uStack_78,&lStack_70,uVar4,PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  puVar5 = puStack_68;
LAB_103848610:
  func_0x000107c6142c(puVar5);
  return;
}



/* Entry: 10384874c; end: 10384897f;  */

/* WARNING: Possible PIC construction at 0x0001038487c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010384882c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038487c8) */
/* WARNING: Removing unreachable block (ram,0x0001038488c8) */
/* WARNING: Removing unreachable block (ram,0x0001038488e4) */
/* WARNING: Removing unreachable block (ram,0x0001038487d0) */
/* WARNING: Removing unreachable block (ram,0x0001038487d8) */
/* WARNING: Removing unreachable block (ram,0x0001038487dc) */
/* WARNING: Removing unreachable block (ram,0x000103848910) */
/* WARNING: Removing unreachable block (ram,0x0001038487e0) */
/* WARNING: Removing unreachable block (ram,0x000103848920) */
/* WARNING: Removing unreachable block (ram,0x000103848928) */
/* WARNING: Removing unreachable block (ram,0x000103848950) */
/* WARNING: Removing unreachable block (ram,0x00010384893c) */
/* WARNING: Removing unreachable block (ram,0x000103848808) */
/* WARNING: Removing unreachable block (ram,0x00010384881c) */
/* WARNING: Removing unreachable block (ram,0x000103848830) */
/* WARNING: Removing unreachable block (ram,0x000103848960) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Type propagation algorithm not settling */

void FUN_10384874c(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ulong auStack_68 [3];
  
  func_0x000107c614f0(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000100bc7fa4();
  uVar1 = param_1;
  func_0x000107c61150(param_1,PTR_s_respondsToSelector__11262c7e0,PTR_s_identifier_1125d7178);
  if ((uVar1 & 1) != 0) {
    func_0x000107c44fdc(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  auStack_68[1] = 0;
  auStack_68[2] = 0xe000000000000000;
  func_0x000107c602fc(0x44);
  func_0x000107c5fb78(0xd000000000000042,0x800000010f16eeb0);
  func_0x000107c3e08c();
  uVar2 = 0;
  auStack_68[0] = param_1;
  func_0x00010381929c(0);
  func_0x000107c603d0(auStack_68,auStack_68 + 1,uVar2,
                      PTR___ss26DefaultStringInterpolationVN_11034ec00,
                      PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_11034ec08);
  func_0x000107c6142c(auStack_68[2]);
  return;
}



/* Entry: 103848980; end: 103848b6f;  */

void FUN_103848980(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long extraout_x8;
  long unaff_x20;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  lVar1 = 0;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  uStack_78 = param_4;
  uStack_70 = param_5;
  func_0x000107c5eec8();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar8 = (long)&uStack_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000d224c(&lStack_68);
  if (lStack_68 != 0) {
    lVar2 = lStack_68;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_68);
    if (lVar2 != 0) {
      lVar5 = lVar2;
      func_0x000107c5faec();
      func_0x000107c61170(lVar2);
      goto LAB_103848a40;
    }
  }
  lVar5 = 0;
  param_2 = 0;
LAB_103848a40:
  uVar6 = *(undefined8 *)(unaff_x20 + 0x48);
  lVar2 = 0;
  func_0x0001038478f0();
  uVar4 = 0xe8;
  func_0x000107c613fc();
  *(undefined1 *)(lVar2 + 0x20) = 0;
  *(undefined8 *)(lVar2 + 0x48) = 0;
  *(undefined1 *)(lVar2 + 0x50) = 1;
  *(undefined8 *)(lVar2 + 0x60) = 0;
  *(undefined1 *)(lVar2 + 0x68) = 1;
  *(undefined8 *)(lVar2 + 0x70) = 0;
  *(undefined1 *)(lVar2 + 0x78) = 1;
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined1 *)(lVar2 + 0x88) = 1;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  *(undefined8 *)(lVar2 + 0x98) = 0;
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  *(undefined8 *)(lVar2 + 0xa8) = 1;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
  uVar15 = 0;
  uVar16 = 0;
  *(undefined8 *)(lVar2 + 0xb8) = 0;
  *(undefined8 *)(lVar2 + 0xb0) = 0;
  *(undefined8 *)(lVar2 + 200) = 0;
  *(undefined8 *)(lVar2 + 0xc0) = 0;
  *(undefined8 *)(lVar2 + 0xd0) = 0;
  *(undefined1 *)(lVar2 + 0xd8) = 1;
  *(undefined8 *)(lVar2 + 0xe0) = 0;
  uVar3 = uVar6;
  func_0x000107c615f0();
  func_0x000107c5eec4(lVar8);
  func_0x000107c5eeac();
  (**(code **)(lVar7 + 8))(lVar8,lVar1);
  *(undefined8 *)(lVar2 + 0x28) = uVar3;
  *(undefined8 *)(lVar2 + 0x30) = uVar4;
  func_0x000107c3ceac(uVar6);
  *(ulong *)(lVar2 + 0x60) =
       CONCAT17(uVar16,CONCAT16(uVar15,CONCAT15(uVar14,CONCAT14(uVar13,CONCAT13(uVar12,CONCAT12(
                                                  uVar11,CONCAT11(uVar10,uVar9)))))));
  *(undefined1 *)(lVar2 + 0x68) = 0;
  *(undefined8 *)(lVar2 + 0x10) = uStack_90;
  *(undefined8 *)(lVar2 + 0x18) = uStack_88;
  *(long *)(lVar2 + 0x90) = lVar5;
  *(undefined8 *)(lVar2 + 0x98) = param_2;
  func_0x000107c61434();
  func_0x000107c6142c(0);
  *(undefined8 *)(lVar2 + 0x38) = uStack_80;
  *(undefined8 *)(lVar2 + 0x40) = uStack_78;
  *(undefined8 *)(lVar2 + 0x48) = uStack_70;
  *(undefined1 *)(lVar2 + 0x50) = 0;
  *(undefined8 *)(lVar2 + 0x58) = uVar6;
  uVar9 = *(undefined1 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined1 *)(lVar2 + 0x78) = uVar9;
  *(long *)(unaff_x20 + 0x10) = lVar2;
  func_0x000107c61580(lVar2,2);
  func_0x000107c61574(uVar3);
  FUN_103847bac();
  func_0x000107c61578(lVar2,2);
  return;
}



/* Entry: 103848b70; end: 103849587;  */

/* WARNING: Possible PIC construction at 0x000103848d78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103848f98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103848fb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010384901c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103848fbc) */
/* WARNING: Removing unreachable block (ram,0x000103848f9c) */
/* WARNING: Removing unreachable block (ram,0x000103848d7c) */
/* WARNING: Removing unreachable block (ram,0x000103849020) */

void FUN_103848b70(double param_1,undefined *param_2,undefined8 param_3)

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
  undefined8 *unaff_x20;
  undefined8 uVar12;
  double dVar13;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  if ((param_2[0x20] & 1) != 0) {
    return;
  }
  uVar12 = *unaff_x20;
  param_2[0x20] = 1;
  if (param_2[0x68] != '\x01') {
    dVar13 = *(double *)(param_2 + 0x60);
    func_0x000107c3ceac(*(undefined8 *)(param_2 + 0x58));
    *(double *)(param_2 + 0xd0) = param_1 - dVar13;
    param_2[0xd8] = 0;
    *(undefined8 *)(param_2 + 0x60) = 0;
    param_2[0x68] = 1;
    *(undefined8 *)(param_2 + 0x80) = param_3;
    param_2[0x88] = 0;
  }
  FUN_103849588();
  puVar5 = &UNK_11069dc70;
  func_0x000107c613fc(&UNK_11069dc70,0x20,7);
  *(undefined8 **)(puVar5 + 0x10) = unaff_x20;
  *(undefined **)(puVar5 + 0x18) = param_2;
  if (*(long *)(param_2 + 0xa8) == 1) {
    uVar1 = *(undefined8 *)(param_2 + 0x10);
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    uVar2 = *(undefined8 *)(param_2 + 0x90);
    puVar4 = *(undefined **)(param_2 + 0x98);
    puVar6 = &UNK_11069dc98;
    func_0x000107c613fc(&UNK_11069dc98,0x30,7);
    *(undefined **)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = 0x103849d5c;
    *(undefined **)(puVar6 + 0x20) = puVar5;
    *(undefined8 *)(puVar6 + 0x28) = uVar12;
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c61580(param_2,3);
      func_0x000107c61580();
      func_0x000107c61438(puVar4,2);
      func_0x000107c6157c(puVar5);
      func_0x0001000d224c(&puStack_a0);
      puVar10 = puStack_a0;
      if (puStack_a0 == (undefined *)0x0) {
        puVar9 = puVar4;
        func_0x000107c6142c(puVar4);
        FUN_1038475e8();
        func_0x000107c614f0(unaff_x20[7]);
        func_0x000100bc7fa4();
        puVar10 = (undefined *)unaff_x20[8];
        func_0x000107c5c734();
        func_0x000107c61180();
        if (puVar10 == (undefined *)0x0) {
          func_0x000107c61574();
          func_0x000107c61574(puVar5);
          func_0x000107c6142c(puVar4);
          func_0x000107c61574(puVar6);
          goto LAB_103849034;
        }
        func_0x000107c4bfb0();
        func_0x000107c61574(param_2);
        func_0x000107c61574();
        func_0x000107c61574(puVar5);
        func_0x000107c6142c(puVar4);
        func_0x000107c61574(puVar6);
        func_0x000107c61170(puVar9);
      }
      else {
        puVar9 = puStack_a0;
        func_0x000107c3f6c0();
        func_0x000107c61180();
        if (puVar9 == (undefined *)0x0) {
          func_0x000107c6142c(puVar4);
          FUN_1038475e8();
          func_0x000107c614f0(unaff_x20[7]);
          func_0x000100bc7fa4();
          lVar11 = unaff_x20[8];
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar11 == 0) {
            func_0x000107c61574();
            func_0x000107c61574(puVar5);
          }
          else {
            func_0x000107c4bfb0();
            func_0x000107c61574(param_2);
            func_0x000107c61574();
            func_0x000107c61574(puVar5);
          }
        }
        else {
          puVar7 = &UNK_11069dcc0;
          func_0x000107c613fc(&UNK_11069dcc0,0x48,7);
          *(undefined8 *)(puVar7 + 0x10) = uVar2;
          *(undefined **)(puVar7 + 0x18) = puVar4;
          *(undefined8 *)(puVar7 + 0x20) = uVar1;
          *(undefined8 *)(puVar7 + 0x28) = uVar3;
          *(undefined8 *)(puVar7 + 0x30) = 0x103849d58;
          *(undefined **)(puVar7 + 0x38) = puVar6;
          *(undefined8 *)(puVar7 + 0x40) = uVar12;
          uStack_80 = 0x103849d60;
          puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_98 = 0x42000000;
          pcStack_90 = FUN_103849a5c;
          puStack_88 = &UNK_11069dcd8;
          ppuVar8 = &puStack_a0;
          puStack_78 = puVar7;
          func_0x000107c60bc4(ppuVar8);
          puVar7 = puStack_78;
          func_0x000107c61434(uVar3);
          func_0x000107c6157c(puVar6);
          func_0x000107c61574(puVar7);
          func_0x000107c5dc64(puVar9);
          func_0x000107c6142c(puVar4);
          func_0x000107c61574(puVar6);
          func_0x000107c60bd0(ppuVar8);
          func_0x000107c61574(param_2);
          func_0x000107c61574();
          func_0x000107c61574(puVar5);
        }
      }
      goto code_r0x000107c615e8;
    }
    func_0x000107c61580(param_2,3);
    func_0x000107c61580();
    puVar9 = puVar5;
    func_0x000107c6157c(puVar5);
    FUN_1038475e8();
    func_0x000107c614f0(unaff_x20[7]);
    func_0x000100bc7fa4();
    puVar10 = (undefined *)unaff_x20[8];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c61574();
      func_0x000107c61574(puVar5);
      func_0x000107c61574(puVar6);
      goto LAB_103849034;
    }
    func_0x000107c4bfb0();
    func_0x000107c61574(param_2);
    func_0x000107c61574();
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar6);
  }
  else {
    func_0x000107c61580();
    puVar9 = param_2;
    func_0x000107c61580(param_2,2);
    FUN_1038475e8();
    func_0x000107c614f0(unaff_x20[7]);
    func_0x000100bc7fa4();
    puVar10 = (undefined *)unaff_x20[8];
    func_0x000107c5c734();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
      func_0x000107c61574();
      func_0x000107c61574(puVar5);
LAB_103849034:
      func_0x000107c61170(puVar9);
      func_0x000107c61574(param_2);
      return;
    }
    func_0x000107c4bfb0();
    func_0x000107c61574(param_2);
    func_0x000107c61574();
    func_0x000107c61574(puVar5);
  }
  func_0x000107c61170(puVar9);
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(puVar10);
  return;
}



/* Entry: 103849588; end: 1038496bf;  */

void FUN_103849588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  func_0x0001000d224c(&puStack_80);
  puVar1 = puStack_80;
  if ((char)uStack_78 != '\x01') {
    uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
    func_0x000107c614f0(uVar6);
    func_0x000100bcb214();
    puVar3 = &UNK_11069db58;
    func_0x000107c613fc(&UNK_11069db58,0x18,7);
    func_0x000107c61644(puVar3 + 0x10);
    puVar4 = PTR_PTR_1126ae888;
    func_0x000107c610f8();
    pcStack_60 = FUN_103849cec;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_1000f6b44;
    puStack_68 = &UNK_11069dd00;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    puVar2 = puStack_58;
    func_0x000107c6157c(puVar3);
    func_0x000107c61574(puVar2);
    func_0x000107c48cf4(puVar1);
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61574(puVar3);
    func_0x000107c61170(uVar6);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined **)(unaff_x20 + 0x28) = puVar4;
    func_0x000107c61170(uVar6);
  }
  return;
}



/* Entry: 1038496c0; end: 103849843;  */

/* WARNING: Possible PIC construction at 0x000103849714: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103849718) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */

void FUN_1038496c0(long param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = param_1;
  FUN_1038475e8();
  func_0x000107c614f0(*(undefined8 *)(param_1 + 0x38));
  func_0x000100bc7fa4();
  lVar2 = *(long *)(param_1 + 0x40);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    func_0x000107c4bfb0();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103849844; end: 103849a5b;  */

/* WARNING: Possible PIC construction at 0x0001038498b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103849918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103849944: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001038498b8) */
/* WARNING: Removing unreachable block (ram,0x0001038498c8) */
/* WARNING: Removing unreachable block (ram,0x0001038498dc) */
/* WARNING: Removing unreachable block (ram,0x0001038498d0) */
/* WARNING: Removing unreachable block (ram,0x0001038498fc) */
/* WARNING: Removing unreachable block (ram,0x00010384991c) */

void FUN_103849844(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  code *in_x6;
  long alStack_78 [3];
  
  if ((param_2 == 0) && (param_1 != 0)) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c4b3f8();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c5faec();
      param_1 = lVar1;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(param_1);
    return;
  }
  alStack_78[1] = 0;
  alStack_78[2] = 0xe000000000000000;
  func_0x000107c602fc(0x33);
  func_0x000107c5fb78(0xd000000000000023,0x800000010f16ef00);
  alStack_78[0] = param_2;
  func_0x000107c614b0(param_2);
  uVar2 = 0x112d511f8;
  func_0x0001000285a8(0x112d511f8,&UNK_10d918df0);
  func_0x000107c5fb18(alStack_78,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c5fb78(0x687370616e73202c,0xec000000203a746f);
  alStack_78[0] = param_1;
  func_0x000107c61174(param_1);
  uVar2 = 0x112fa29c8;
  func_0x0001000285a8(0x112fa29c8,&UNK_10dc16830);
  func_0x000107c5fb18(alStack_78,uVar2);
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar2);
  func_0x000107c6142c(alStack_78[2]);
  (*in_x6)(0);
  return;
}



/* Entry: 103849a5c; end: 103849ad3;  */

/* WARNING: Possible PIC construction at 0x000103849ab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103849abc) */

void FUN_103849a5c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 103849ad4; end: 103849adf;  */

void FUN_103849ad4(void)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(ulong *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    func_0x000107c614f0(*(undefined8 *)(lVar2 + 0x38));
    func_0x000100bc7fa4();
    uVar3 = uVar1;
    func_0x000107c3e08c();
    if ((uVar3 & 0xfffffffffffffffe) == 2) {
      FUN_10384874c(uVar1,uVar4);
    }
    func_0x000107c61574(lVar2);
  }
  return;
}



/* Entry: 103849ae0; end: 103849af7;  */

void FUN_103849ae0(void)

{
  long unaff_x20;
  
  FUN_1038496c0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 103849af8; end: 103849b23;  */

void FUN_103849af8(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  if (param_1 != 0) {
    func_0x000107c61174();
    FUN_103849b24();
    func_0x000107c61170(param_1);
  }
  (*pcVar1)();
  return;
}



/* Entry: 103849b24; end: 103849c5b;  */

/* WARNING: Possible PIC construction at 0x000103849b80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103847b90: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103849b84) */
/* WARNING: Removing unreachable block (ram,0x000103849bb4) */
/* WARNING: Removing unreachable block (ram,0x000103849b98) */
/* WARNING: Removing unreachable block (ram,0x000103849bbc) */
/* WARNING: Removing unreachable block (ram,0x000103849bec) */
/* WARNING: Removing unreachable block (ram,0x000103849bd0) */
/* WARNING: Removing unreachable block (ram,0x000103849bf4) */
/* WARNING: Removing unreachable block (ram,0x000103849c24) */
/* WARNING: Removing unreachable block (ram,0x000103849c08) */
/* WARNING: Removing unreachable block (ram,0x000103849c2c) */
/* WARNING: Removing unreachable block (ram,0x000103847b6c) */
/* WARNING: Removing unreachable block (ram,0x000103847b78) */
/* WARNING: Removing unreachable block (ram,0x000103847b74) */
/* WARNING: Removing unreachable block (ram,0x000103847b94) */

void FUN_103849b24(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = param_2;
  func_0x000107c4b3f8();
  func_0x000107c61180();
  if (param_1 == 0) {
    lVar2 = 0;
    lVar3 = 0;
  }
  else {
    lVar2 = param_1;
    func_0x000107c5faec();
    func_0x000107c61170(param_1);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  *(long *)(param_2 + 0x90) = lVar2;
  *(long *)(param_2 + 0x98) = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar1);
  return;
}



/* Entry: 103849c5c; end: 103849ceb;  */

void FUN_103849c5c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103849cec; end: 103849cf3;  */

void FUN_103849cec(void)

{
  char cVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 != 0) {
    func_0x000107c6157c(lVar4);
    func_0x000107c61574(lVar2);
    cVar1 = *(char *)(lVar4 + 0x20);
    func_0x000107c61574(lVar4);
    if (cVar1 != '\x01') {
      return;
    }
    func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
    lVar2 = unaff_x20 + 0x10;
    func_0x000107c61648();
    if (lVar2 == 0) {
      return;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    *(undefined8 *)(lVar2 + 0x10) = 0;
    func_0x000107c61574(uVar3);
    FUN_103847bac();
  }
  func_0x000107c61574(lVar2);
  return;
}



/* Entry: 103849cf4; end: 103849d37;  */

void FUN_103849cf4(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103849d38; end: 103849d63;  */

void FUN_103849d38(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(ulong *)(unaff_x20 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61648();
  if (lVar4 != 0) {
    func_0x000107c614f0(*(undefined8 *)(lVar4 + 0x38));
    func_0x000100bc7fa4();
    uVar5 = uVar2;
    func_0x000107c3e08c();
    if ((uVar5 & 0xfffffffffffffffe) == 2) {
      FUN_1038483b8(uVar2,uVar1,uVar3,uVar6);
    }
    func_0x000107c61574(lVar4);
  }
  return;
}



/* Entry: 103849d64; end: 103849e73;  */

long FUN_103849d64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x20;
  
  func_0x000107c613fc();
  func_0x0001000285a8(0x112fa29d0,&UNK_10dc16860);
  func_0x000107c613fc();
  pcVar1 = FUN_103849e74;
  func_0x0001000bdd8c(FUN_103849e74,0);
  *(code **)(unaff_x20 + 0x18) = pcVar1;
  puVar2 = &UNK_11069dd68;
  func_0x000107c613fc(&UNK_11069dd68,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(code **)(puVar2 + 0x18) = pcVar1;
  func_0x0001000285a8(0x112fa29d8,&UNK_10dc16868);
  func_0x000107c613fc();
  func_0x000107c6157c(pcVar1);
  pcVar1 = FUN_103849f48;
  func_0x0001000bdd8c(FUN_103849f48,puVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  *(code **)(unaff_x20 + 0x10) = pcVar1;
  return unaff_x20;
}



/* Entry: 103849e74; end: 103849eb7;  */

void FUN_103849e74(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_10381e678();
  uVar2 = uVar1;
  func_0x000107c613fc();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11069a780;
  *param_1 = uVar2;
  return;
}



/* Entry: 103849eb8; end: 103849f47;  */

void FUN_103849eb8(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar1 = 0;
  func_0x00010381e628();
  lVar2 = lVar1;
  func_0x000107c613fc();
  uVar3 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  *(undefined8 *)(lVar2 + 0x18) = param_2;
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a768;
  *param_1 = lVar2;
  func_0x000107c615f0(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_3);
  return;
}



/* Entry: 103849f48; end: 103849f4f;  */

void FUN_103849f48(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar3 = 0;
  func_0x00010381e628();
  lVar4 = lVar3;
  func_0x000107c613fc();
  uVar5 = 0;
  func_0x0001000c6560();
  func_0x000107c613fc();
  func_0x0001000c6580();
  *(undefined8 *)(lVar4 + 0x10) = uVar5;
  *(undefined8 *)(lVar4 + 0x18) = uVar1;
  *(undefined8 *)(lVar4 + 0x20) = uVar2;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_11069a768;
  *param_1 = lVar4;
  func_0x000107c615f0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 103849f50; end: 103849f97;  */

void FUN_103849f50(void)

{
  long unaff_x20;
  
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103849f98; end: 103849fe3;  */

void FUN_103849f98(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61574(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61574();
  func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103849fe4; end: 10384a05f;  */

void FUN_103849fe4(undefined8 param_1)

{
  if (lRam0000000112fa2a08 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e783e68);
  return;
}



/* Entry: 10384a060; end: 10384a0bb;  */

void FUN_10384a060(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_10386f510(0);
  func_0x000107c610f8();
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar1);
  func_0x00010386f440(uVar2,uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10384a0bc; end: 10384a6df;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384a0bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long *plVar10;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar11;
  long unaff_x20;
  undefined8 auStack_130 [4];
  undefined8 uStack_110;
  undefined8 uStack_108;
  long lStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  long lStack_c0;
  undefined8 auStack_b8 [3];
  long lStack_a0;
  undefined **ppuStack_98;
  long alStack_90 [3];
  long lStack_78;
  undefined **ppuStack_70;
  
  uStack_d8 = param_15;
  uStack_e8 = param_14;
  uStack_f8 = param_13;
  auStack_130[0] = param_11;
  auStack_130[2] = param_4;
  auStack_130[3] = param_3;
  uStack_110 = param_2;
  uStack_108 = param_1;
  uStack_f0 = param_6;
  uStack_e0 = param_7;
  uStack_d0 = param_8;
  func_0x000107c613fc();
  lVar2 = 0;
  lStack_100 = unaff_x20;
  func_0x00010384c990();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = param_2;
  *(undefined8 *)(lVar3 + 0x18) = param_3;
  *(undefined8 *)(lVar3 + 0x20) = param_4;
  *(undefined8 *)(lVar3 + 0x28) = param_5;
  *(undefined8 *)(lVar3 + 0x30) = uStack_f0;
  *(undefined8 *)(lVar3 + 0x38) = uStack_e0;
  *(undefined8 *)(lVar3 + 0x40) = uStack_d0;
  *(undefined8 *)(lVar3 + 0x48) = param_9;
  *(undefined8 *)(lVar3 + 0x50) = param_10;
  *(undefined8 *)(lVar3 + 0x58) = param_11;
  *(undefined8 *)(lVar3 + 0x60) = param_12;
  *(undefined8 *)(lVar3 + 0x68) = uStack_f8;
  *(undefined8 *)(lVar3 + 0x70) = uStack_e8;
  *(undefined8 *)(lVar3 + 0x78) = uStack_d8;
  ppuStack_70 = &PTR_DAT_11069dfa8;
  lVar4 = 0;
  alStack_90[0] = lVar3;
  lStack_78 = lVar2;
  func_0x000100356478();
  lVar5 = lVar4;
  func_0x000107c610f8();
  func_0x0001000c6518(alStack_90,lVar2);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  puVar11 = (undefined8 *)((long)auStack_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar11);
  auStack_b8[0] = *puVar11;
  ppuStack_98 = &PTR_DAT_11069dfa8;
  lStack_a0 = lVar2;
  FUN_10384a6e0(auStack_b8,lVar5 + _DAT_112fa2d40);
  puVar1 = PTR_s_init_1125d9248;
  lStack_c8 = lVar5;
  lStack_c0 = lVar4;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  auStack_130[1] = param_5;
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174(param_9);
  func_0x000107c61174(param_10);
  uVar6 = auStack_130[0];
  func_0x000107c61174(auStack_130[0]);
  func_0x000107c61174(param_12);
  uVar7 = uStack_f8;
  func_0x000107c61174(uStack_f8);
  uVar8 = uStack_e8;
  func_0x000107c61174(uStack_e8);
  uVar9 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  func_0x000107c6157c(lVar3);
  plVar10 = &lStack_c8;
  func_0x000107c61154(plVar10,puVar1);
  func_0x0001000834e4(auStack_b8);
  func_0x0001000834e4(alStack_90);
  func_0x000107c61170(param_10);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(param_12);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uStack_108);
  func_0x000107c61574(lVar3);
  func_0x000107c61170(uStack_110);
  func_0x000107c61170(auStack_130[3]);
  func_0x000107c61170(auStack_130[2]);
  func_0x000107c61170(auStack_130[1]);
  func_0x000107c61170(uStack_f0);
  func_0x000107c61170(uStack_e0);
  func_0x000107c61170(uStack_d0);
  func_0x000107c61170(param_9);
  *(long **)(lStack_100 + 0x10) = plVar10;
  return;
}



/* Entry: 10384a6e0; end: 10384a723;  */

long FUN_10384a6e0(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10384a724; end: 10384a733;  */

void FUN_10384a724(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10384a734; end: 10384a7d3;  */

void FUN_10384a734(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384a7d4; end: 10384a7df;  */

void FUN_10384a7d4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)();
  return;
}



/* Entry: 10384a7e0; end: 10384a7ff;  */

void FUN_10384a7e0(void)

{
  func_0x000107c61170();
                    /* WARNING: Could not recover jumptable at 0x00010bdbff8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_allocObject_11034f218)();
  return;
}



/* Entry: 10384a800; end: 10384a81b;  */

void FUN_10384a800(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = 0;
  func_0x0001005de35c();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11069da70;
  *param_1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar2);
  return;
}



/* Entry: 10384a81c; end: 10384a903;  */

void FUN_10384a81c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112fa12f8,&UNK_10dc15b50);
  func_0x000107c613fc();
  puVar1 = &UNK_10073e7ac;
  func_0x0001000bdd8c(&UNK_10073e7ac,0);
  uVar4 = 0x112fa1300;
  func_0x0001000285a8(0x112fa1300,&UNK_10dc15b58);
  puVar2 = &UNK_10073eb6c;
  func_0x0001000cb480(&UNK_10073eb6c,0,uVar4);
  uVar4 = 0x112fa1308;
  func_0x0001000285a8(0x112fa1308,&UNK_10dc15b60);
  pcVar3 = FUN_10384a800;
  func_0x0001000cb480(FUN_10384a800,0,uVar4);
  uVar4 = 0;
  func_0x0001005c27f0(0);
  func_0x000107c610f8();
  func_0x0001005de37c(puVar2,pcVar3,uVar4);
  func_0x000107c61574(puVar1);
  *param_1 = puVar2;
  return;
}



/* Entry: 10384a904; end: 10384afdb;  */

void FUN_10384a904(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long *plVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  code *pcVar14;
  code *pcVar15;
  ulong uVar16;
  long unaff_x20;
  code *pcVar17;
  ulong uVar18;
  ulong uStack_90;
  long alStack_88 [3];
  ulong uStack_70;
  long lStack_68;
  
  func_0x0001000d224c(alStack_88);
  if (alStack_88[0] == 0) {
    return;
  }
  func_0x0001000d224c(alStack_88);
  lVar2 = lStack_68;
  uVar18 = uStack_70;
  if (*(char *)(unaff_x20 + 0x50) == '\x01') {
    func_0x0001000a8868(alStack_88,uStack_70);
    (**(code **)(lVar2 + 0x120))(uVar18,lVar2);
  }
  else {
    uVar18 = 0;
  }
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  lVar2 = alStack_88[0];
  func_0x000107c3d1a0(alStack_88[0]);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x0001000b637c();
  func_0x000107c61170(lVar2);
  lVar2 = lStack_68;
  uVar4 = uStack_70;
  uVar16 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar16 == 0) {
    func_0x0001000a8868(alStack_88,uStack_70);
    (**(code **)(lVar2 + 0x68))(uVar4,lVar2);
    pcVar1 = (code *)0x10384b760;
    func_0x0001000bfde0(0x10384b760,0,PTR___sSbN_11034dd40);
    if ((uVar18 & 1) == 0) goto LAB_10384aaac;
    pcVar5 = pcVar1;
    if ((uVar4 & 1) != 0) {
      lVar2 = 0x10384b418;
      func_0x0001000c0ebc(0x10384b418,0);
      func_0x000107c61574(pcVar1);
      func_0x000107c61574(lVar3);
      pcVar1 = (code *)0x1;
      func_0x00010061b458();
      lVar3 = lVar2;
      goto LAB_10384aaac;
    }
  }
  else {
    pcVar1 = (code *)0x10384b760;
    func_0x0001000bfde0(0x10384b760,0,PTR___sSbN_11034dd40);
    pcVar5 = pcVar1;
    if ((uVar18 & 1) == 0) goto LAB_10384aaac;
  }
  pcVar1 = FUN_10384b40c;
  func_0x0001000bfde0(FUN_10384b40c,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar5);
LAB_10384aaac:
  func_0x000107c61574(lVar3);
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  lVar2 = alStack_88[0];
  func_0x000107c3d14c(alStack_88[0]);
  func_0x000107c61180();
  lVar3 = lVar2;
  func_0x0001000b637c();
  func_0x000107c61170(lVar2);
  pcVar5 = FUN_10384afdc;
  func_0x0001000bfde0(FUN_10384afdc,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(lVar3);
  puVar6 = PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068();
  func_0x000107c61574(pcVar5);
  puVar7 = &UNK_11069ddd8;
  func_0x000107c613fc(&UNK_11069ddd8,0x11,7);
  puVar7[0x10] = (byte)uVar18 & 1;
  uVar8 = 0x112dc3dc8;
  func_0x0001000285a8(0x112dc3dc8,&UNK_10d9813a0);
  pcVar5 = FUN_10384b6a0;
  func_0x0001000bfde0(FUN_10384b6a0,puVar7,uVar8);
  func_0x000107c61574();
  func_0x00010487ba50();
  func_0x000107c61574();
  func_0x000102b4cefc();
  pcVar14 = pcVar5;
  func_0x000107c613fc();
  *(undefined8 *)(pcVar14 + 0x18) = 5;
  *(undefined8 *)(pcVar14 + 0x10) = 2;
  *(code **)(pcVar14 + 0x20) = pcVar1;
  *(undefined **)(pcVar14 + 0x28) = puVar7;
  func_0x000107c6157c(pcVar1);
  puVar9 = puVar7;
  func_0x000107c6157c();
  FUN_10384b0b8();
  pcVar17 = (code *)((ulong)pcVar14 & 0xffffffffffffff8);
  uVar18 = *(ulong *)(pcVar17 + 0x10);
  uVar4 = *(ulong *)(pcVar17 + 0x18);
  func_0x000107c6157c();
  pcVar15 = pcVar14;
  if (uVar4 >> 1 <= uVar18) {
    pcVar15 = (code *)(ulong)(1 < uVar4);
    FUN_10383aae0(pcVar15,uVar18 + 1,1,pcVar14);
    pcVar17 = (code *)((ulong)pcVar15 & 0xffffffffffffff8);
  }
  *(ulong *)(pcVar17 + 0x10) = uVar18 + 1;
  *(undefined **)(pcVar17 + uVar18 * 8 + 0x20) = puVar9;
  if (2 < uVar16 - 1) {
    if (uVar16 != 0) {
      func_0x00010381924c(0);
      uStack_90 = uVar16;
      func_0x000107c60614();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10384afdc);
      (*pcVar1)();
    }
    func_0x0001000a8868(alStack_88,uStack_70);
    (**(code **)(lStack_68 + 0x120))(uStack_70,lStack_68);
    if (((uStack_70 & 1) == 0) || (func_0x0001000d224c(&uStack_90), (uStack_90 & 1) == 0)) {
      func_0x000107c6157c(puVar6);
      pcVar14 = pcVar15;
      if ((ulong)pcVar15 >> 0x3e != 0) {
        if ((code *)0x7fffffffffffffff < pcVar15) {
          pcVar17 = pcVar15;
        }
        func_0x000107c60480(pcVar17);
        pcVar14 = (code *)0x0;
        FUN_10383aae0(0,pcVar17 + 1,1,pcVar15);
        pcVar17 = (code *)((ulong)pcVar14 & 0xffffffffffffff8);
      }
      uVar18 = *(ulong *)(pcVar17 + 0x10);
      pcVar15 = pcVar14;
      if (*(ulong *)(pcVar17 + 0x18) >> 1 <= uVar18) {
        pcVar15 = (code *)(ulong)(1 < *(ulong *)(pcVar17 + 0x18));
        FUN_10383aae0(pcVar15,uVar18 + 1,1,pcVar14);
        pcVar17 = (code *)((ulong)pcVar15 & 0xffffffffffffff8);
      }
      *(ulong *)(pcVar17 + 0x10) = uVar18 + 1;
      *(undefined **)(pcVar17 + uVar18 * 8 + 0x20) = puVar6;
    }
  }
  func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
  pcVar17 = pcVar15;
  func_0x000100b658a4(pcVar15);
  uVar8 = 0x10384b768;
  func_0x0001000bfde0(0x10384b768,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(pcVar17);
  plVar10 = (long *)PTR___sSbSQsWP_11034dd50;
  func_0x0001000c2068();
  func_0x000107c61574(uVar8);
  puVar11 = &UNK_11069de00;
  func_0x000107c613fc(&UNK_11069de00,0x18,7);
  func_0x000107c61644(puVar11 + 0x10);
  uVar8 = 0x10384b6a8;
  puVar13 = puVar11;
  (**(code **)(*plVar10 + 0x60))(0x10384b6a8);
  func_0x000107c61574(plVar10);
  func_0x000107c61574(puVar11);
  uVar12 = uVar8;
  func_0x000107c614f0(uVar8);
  (**(code **)(puVar13 + 0x10))(*(undefined8 *)(unaff_x20 + 0x58),uVar12,puVar13);
  func_0x000107c615e8(uVar8);
  func_0x0001000d224c(&uStack_90);
  if (uStack_90 == 0) {
    func_0x000107c6142c(pcVar15);
    func_0x000107c615e8(alStack_88[0]);
    func_0x000107c61574(puVar6);
  }
  else {
    lVar2 = alStack_88[0];
    func_0x000107c3d1a0(alStack_88[0]);
    func_0x000107c61180();
    lVar3 = lVar2;
    func_0x0001000b637c();
    func_0x000107c61170(lVar2);
    puVar11 = PTR___sSbN_11034dd40;
    uVar8 = 0x10384b75c;
    func_0x0001000bfde0(0x10384b75c,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar3);
    func_0x000107c613fc(pcVar5,((ulong)*(uint *)(pcVar5 + 0x30) + 7 & 0x1fffffff8) + 0x10,
                        *(ushort *)(pcVar5 + 0x34) | 7);
    *(undefined8 *)(pcVar5 + 0x18) = 5;
    *(undefined8 *)(pcVar5 + 0x10) = 2;
    *(undefined8 *)(pcVar5 + 0x20) = uVar8;
    *(undefined **)(pcVar5 + 0x28) = puVar7;
    func_0x000107c6157c(puVar7);
    func_0x000107c6157c(uVar8);
    pcVar17 = pcVar5;
    func_0x000100b658a4(pcVar5);
    func_0x000107c61574(pcVar5);
    uVar12 = 0x10384b764;
    func_0x0001000bfde0(0x10384b764,0,puVar11);
    func_0x000107c61574(pcVar17);
    puVar11 = PTR___sSbSQsWP_11034dd50;
    puVar13 = PTR___sSbSQsWP_11034dd50;
    func_0x0001000c2068(PTR___sSbSQsWP_11034dd50);
    func_0x000107c61574(uVar12);
    func_0x0001000c2068(puVar11);
    FUN_10384b2f8(uStack_90,puVar13,puVar11);
    func_0x000107c6142c(pcVar15);
    func_0x000107c615e8(alStack_88[0]);
    func_0x000107c61574(uStack_90);
    func_0x000107c61574(puVar13);
    func_0x000107c61574(puVar11);
    func_0x000107c61574(uVar8);
    func_0x000107c61574(puVar6);
  }
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(pcVar1);
  func_0x0001000834e4(alStack_88);
  return;
}



/* Entry: 10384afdc; end: 10384b037;  */

void FUN_10384afdc(byte *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    bVar3 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c4a144();
    func_0x000107c61170(lVar1);
    bVar3 = (byte)lVar2 ^ 1;
  }
  *param_1 = bVar3;
  return;
}



/* Entry: 10384b038; end: 10384b0af;  */

void FUN_10384b038(undefined1 *param_1,undefined8 param_2,ulong param_3)

{
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  if ((param_3 & 1) != 0) {
    *param_1 = 1;
    return;
  }
  *param_1 = 2;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008bafdc(0x10384b740,auStack_40,0x10384b750,auStack_60,FUN_10384b0b0,0,0x10384b0b4,0);
  return;
}



/* Entry: 10384b0b0; end: 10384b0b7;  */

void FUN_10384b0b0(void)

{
  return;
}



/* Entry: 10384b0b8; end: 10384b1c7;  */

void FUN_10384b0b8(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    lStack_38 = CONCAT71(lStack_38._1_7_,1);
    func_0x000100854cb0(&lStack_38);
  }
  else {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    func_0x000107c4af90(lStack_38);
    lVar3 = lStack_38;
    func_0x000107c61180();
    lVar2 = lVar3;
    func_0x0001000b637c();
    func_0x000107c61170(lVar3);
    func_0x0001002ed07c(0);
    lVar3 = 0;
    func_0x000107c6010c();
    plVar4 = &lStack_38;
    lStack_38 = lVar3;
    func_0x0001006c71a4(plVar4);
    func_0x000107c61170(lVar3);
    func_0x000107c61574(lVar2);
    func_0x0001000bfde0(FUN_10384b600,0,PTR___sSbN_11034dd40);
    func_0x000107c615e8(lVar1);
    func_0x000107c61574(plVar4);
  }
  return;
}



/* Entry: 10384b1c8; end: 10384b2c7;  */

void FUN_10384b1c8(char *param_1,long param_2)

{
  char cVar1;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  cVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    if (cVar1 == '\0') {
      func_0x00010384b25c();
    }
    else {
      func_0x0001000d224c(&lStack_40);
      if (lStack_40 != 0) {
        func_0x000107c3d0a0(lStack_40);
        func_0x000107c615e8(lStack_40);
      }
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384b2c8; end: 10384b2f7;  */

void FUN_10384b2c8(undefined8 param_1,long *param_2)

{
  byte bVar1;
  long lVar2;
  byte *pbVar3;
  long lVar4;
  
  pbVar3 = (byte *)(*param_2 + 0x20);
  lVar2 = *(long *)(*param_2 + 0x10);
  do {
    lVar4 = lVar2;
    if (lVar4 == 0) break;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + 1;
    lVar2 = lVar4 + -1;
  } while ((bVar1 & 1) != 0);
  *(bool *)param_1 = lVar4 == 0;
  return;
}



/* Entry: 10384b2f8; end: 10384b40b;  */

void FUN_10384b2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long unaff_x20;
  
  uVar1 = 0x10384b420;
  func_0x0001000c0ebc(0x10384b420,0);
  puVar2 = &UNK_11069de28;
  func_0x000107c613fc(&UNK_11069de28,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  plVar3 = (long *)0x10384b6b0;
  func_0x0001048808cc(0x10384b6b0,puVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c61574(puVar2);
  puVar2 = &UNK_11069de00;
  func_0x000107c613fc(&UNK_11069de00,0x18,7);
  func_0x000107c61644(puVar2 + 0x10);
  uVar1 = 0x10384b6b8;
  puVar5 = puVar2;
  (**(code **)(*plVar3 + 0x60))(0x10384b6b8);
  func_0x000107c61574(plVar3);
  func_0x000107c61574(puVar2);
  uVar4 = uVar1;
  func_0x000107c614f0(uVar1);
  (**(code **)(puVar5 + 0x10))(*(undefined8 *)(unaff_x20 + 0x58),uVar4,puVar5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}


