/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fb7fc8; end: 101fb8073; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint setValue:forIvarName:] */

void FUN_101fb7fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101fb7ea8(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 101fb8074; end: 101fb80d3; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb8074(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112e4b080,0);
  *(undefined8 *)(param_1 + _DAT_112e4b088) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb80d4; end: 101fb8107;  */

void FUN_101fb80d4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fb8108; end: 101fb813f; -[SCSCBitmojiGroupProfileSharingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb8108(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112e4b080);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b088));
  return;
}



/* Entry: 101fb8140; end: 101fb815f;  */

void FUN_101fb8140(void)

{
  func_0x000107c61168(&PTR_PTR_1128117e0);
  return;
}



/* Entry: 101fb8160; end: 101fb872b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb8160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x20;
  long lStack_a8;
  long lStack_70;
  long lStack_68;
  
  func_0x000107c613fc();
  lVar1 = *(long *)(param_9 + _DAT_1130343d8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    lStack_a8 = 0;
  }
  else {
    lStack_a8 = lVar1;
    func_0x000107c40ee4();
    func_0x000107c615e8(lVar1);
  }
  uVar2 = param_2;
  func_0x000107c4d80c();
  func_0x000107c61180();
  uVar3 = param_6;
  func_0x000107c42df8();
  func_0x000107c61180();
  uVar4 = param_3;
  func_0x000107c4f194();
  func_0x000107c61180();
  uVar5 = param_7;
  func_0x000107c406f4();
  func_0x000107c61180();
  uVar6 = param_5;
  func_0x000107c42d48();
  func_0x000107c61180();
  uVar7 = param_8;
  func_0x000107c4f124();
  func_0x000107c61180();
  lVar8 = 0;
  FUN_101fb953c();
  lVar1 = lVar8;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4b158) = param_1;
  *(undefined8 *)(lVar1 + _DAT_112e4b160) = uVar2;
  *(undefined8 *)(lVar1 + _DAT_112e4b168) = uVar3;
  *(undefined8 *)(lVar1 + _DAT_112e4b170) = uVar4;
  *(undefined8 *)(lVar1 + _DAT_112e4b178) = param_4;
  *(undefined8 *)(lVar1 + _DAT_112e4b180) = uVar5;
  *(undefined8 *)(lVar1 + _DAT_112e4b188) = uVar6;
  *(undefined8 *)(lVar1 + _DAT_112e4b190) = uVar7;
  puVar9 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar4);
  func_0x000107c61174(param_4);
  func_0x000107c61174(uVar5);
  func_0x000107c615f0(uVar6);
  func_0x000107c615f0(uVar7);
  func_0x000107c453e4();
  *(undefined **)(lVar1 + _DAT_112e4b1a0) = puVar9;
  *(long *)(lVar1 + _DAT_112e4b198) = lStack_a8;
  plVar10 = &lStack_70;
  lStack_70 = lVar1;
  lStack_68 = lVar8;
  func_0x000107c61154(plVar10,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(uVar5);
  func_0x000107c615e8(uVar6);
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  *(long **)(unaff_x20 + 0x10) = plVar10;
  return;
}



/* Entry: 101fb872c; end: 101fb874b;  */

void FUN_101fb872c(void)

{
  FUN_101fb87bc();
  return;
}



/* Entry: 101fb874c; end: 101fb876f;  */

void FUN_101fb874c(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101fb8770; end: 101fb8793;  */

void FUN_101fb8770(void)

{
  FUN_101fb87bc();
  return;
}



/* Entry: 101fb8794; end: 101fb879b;  */

undefined8 FUN_101fb8794(void)

{
  return 0;
}



/* Entry: 101fb879c; end: 101fb87bb;  */

void FUN_101fb879c(void)

{
  func_0x000107c61168(&PTR_PTR_112e4b0f8);
  return;
}



/* Entry: 101fb87bc; end: 101fb8907;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb87bc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar6 = &puStack_60;
  uVar2 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112e4b158) + _DAT_11306d938);
  func_0x000107c61174(uVar2);
  FUN_101fb8908();
  func_0x000107c61170(uVar2);
  lVar3 = *(long *)(unaff_x20 + _DAT_112e4b180);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    lVar4 = lVar3;
    func_0x000107c51dc8();
    func_0x000107c61180();
    func_0x000107c615e8(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb8908);
      (*pcVar1)();
    }
    puVar5 = &UNK_1104b2b88;
    func_0x000107c613fc(&UNK_1104b2b88,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_40 = FUN_101fb9b60;
    puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_58 = 0x42000000;
    uStack_50 = 0x101fba20c;
    puStack_48 = &UNK_1104b2c18;
    puStack_38 = puVar5;
    func_0x000107c60bc4(&puStack_60);
    func_0x000107c61574(puStack_38);
    lVar3 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar3);
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 101fb8908; end: 101fb8f43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb8908(double param_1,double param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long extraout_x8;
  ulong uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long unaff_x20;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  double dVar20;
  undefined8 auStack_100 [8];
  undefined1 auStack_c0 [8];
  long lStack_b8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  lVar18 = unaff_x20;
  func_0x000107c614f0();
  lVar4 = 0;
  func_0x000107c5eea4();
  lVar19 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = 0;
  func_0x000107c60714(lVar18,0);
  puVar5 = PTR_PTR_1126afee0;
  func_0x000107c610f8();
  func_0x000107c5fadc(lVar18,uVar13);
  func_0x000107c6142c(uVar13);
  func_0x000107c46120();
  func_0x000107c61170(lVar18);
  if (puVar5 != (undefined *)0x0) {
    func_0x000107c56498(puVar5);
    func_0x000107c5b078(param_3);
    dVar20 = param_1;
    func_0x000107c51820(param_3);
    param_1 = param_1 * dVar20;
    func_0x000107c5b078(param_3);
    func_0x000107c51820(param_3);
    param_2 = param_2 * dVar20;
    func_0x000107c56484(param_1,param_2,puVar5);
    func_0x000107c5b078(param_3);
    func_0x000107c5b078(param_3);
    param_1 = param_1 / param_2;
    func_0x000107c563f0(param_1,puVar5);
    func_0x000107c54d18(puVar5);
    func_0x000107c61168(PTR_PTR_1126bf720);
    func_0x000107c4c860();
    puVar6 = PTR_PTR_1126c20c0;
    func_0x000107c610f8(PTR_PTR_1126c20c0);
    func_0x000107c48400(0,0x3ff0000000000000,0,0,param_1,param_2);
    func_0x000107c53b6c(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c5947c(puVar5);
    puVar6 = puVar5;
    func_0x000107c59428(puVar5);
    func_0x000107c5eea0(auStack_c0 + lVar2);
    func_0x000107c5ee70();
    (**(code **)(lVar19 + 8))(auStack_c0 + lVar2,lVar4);
    func_0x000107c53ac4(puVar5);
    func_0x000107c61170(puVar6);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e4b190);
    func_0x000107c44080(uVar13);
    func_0x000107c61180();
    func_0x000107c549c8(puVar5);
    func_0x000107c615e8(uVar13);
    func_0x000107c59160(puVar5);
    puVar6 = PTR_PTR_1126c20c8;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59558();
    lVar18 = *(long *)(unaff_x20 + _DAT_112e4b158);
    lVar4 = *(long *)(lVar18 + _DAT_11306d958);
    if ((lVar4 != 0) && (lVar19 = *(long *)(lVar4 + 0x10), lVar19 != 0)) {
      lStack_b8 = lVar18;
      func_0x000107c61434(lVar4);
      puVar16 = (undefined8 *)(lVar4 + 0x28);
      puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        uVar13 = puVar16[-1];
        uVar12 = *puVar16;
        puVar7 = PTR_PTR_1126c20d0;
        func_0x000107c610f8();
        func_0x000107c61434(uVar12);
        func_0x000107c453e4();
        func_0x000107c5fadc(uVar13,uVar12);
        func_0x000107c6142c(uVar12);
        func_0x000107c52ae0(puVar7);
        func_0x000107c61170(uVar13);
        func_0x000107c61174();
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
          FUN_101fb9da8(0,puVar8 + 1,1,puVar10);
        }
        uVar14 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar14 + 0x10);
        puVar10 = puVar9;
        if (*(ulong *)(uVar14 + 0x18) >> 1 <= uVar1) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar14 + 0x18));
          FUN_101fb9da8(puVar10,uVar1 + 1,1,puVar9);
          uVar14 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        puVar16 = puVar16 + 2;
        *(ulong *)(uVar14 + 0x10) = uVar1 + 1;
        *(undefined **)(uVar14 + uVar1 * 8 + 0x20) = puVar7;
        func_0x000107c61170(puVar7);
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
      func_0x000107c6142c(lVar4);
      puVar7 = puVar6;
      func_0x000107c3e9ac();
      func_0x000107c61180();
      if (puVar7 == (undefined *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb8f44);
        (*pcVar3)();
      }
      puVar9 = puVar10;
      FUN_101fb974c(puVar10);
      puVar8 = puVar9;
      func_0x000107c5fc48();
      func_0x000107c6142c(puVar9);
      func_0x000107c3d7a0(puVar7);
      func_0x000107c6142c(puVar10);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar8);
      lVar18 = lStack_b8;
    }
    puVar10 = puVar6;
    func_0x000107c3e9ac();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb8f3c);
      (*pcVar3)();
    }
    puVar7 = puVar10;
    func_0x000107c40808();
    func_0x000107c61170(puVar10);
    if (0 < (long)puVar7) {
      func_0x000107c52ce4(puVar5);
    }
    func_0x000107c3fe58(puVar5);
    uVar13 = *(undefined8 *)(unaff_x20 + _DAT_112e4b188);
    puVar10 = PTR_PTR_1126affc0;
    func_0x000107c61168(PTR_PTR_1126affc0);
    puStack_a0 = *(undefined **)PTR__kCMTimeZero_110348670;
    puStack_90 = *(undefined **)(PTR__kCMTimeZero_110348670 + 0x10);
    uStack_98 = *(undefined8 *)(PTR__kCMTimeZero_110348670 + 8);
    func_0x000107c5d19c();
    func_0x000107c61180();
    func_0x000107c42424(uVar13);
    func_0x000107c61180();
    func_0x000107c61170(puVar10);
    puVar10 = puVar6;
    func_0x000107c3e9ac();
    func_0x000107c61180();
    if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x101fb8f40);
      (*pcVar3)();
    }
    puVar7 = puVar10;
    func_0x000107c40808();
    func_0x000107c61170(puVar10);
    if (0 < (long)puVar7) {
      puVar10 = &UNK_1104b2c78;
      func_0x000107c613fc(&UNK_1104b2c78,0x18,7);
      *(undefined **)(puVar10 + 0x10) = puVar6;
      pcStack_80 = FUN_101fba1a4;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      puStack_90 = &UNK_1010c376c;
      puStack_88 = &UNK_1104b2c90;
      ppuVar11 = &puStack_a0;
      puStack_78 = puVar10;
      func_0x000107c60bc4(ppuVar11);
      puVar10 = puStack_78;
      func_0x000107c61174(puVar6);
      func_0x000107c61574(puVar10);
      func_0x000107c5d440(uVar13);
      func_0x000107c60bd0(ppuVar11);
    }
    uVar17 = *(undefined8 *)(unaff_x20 + _DAT_112e4b170);
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112e4b178);
    uVar15 = *(undefined8 *)(lVar18 + _DAT_11306d930);
    *(undefined8 *)((long)auStack_100 + lVar2 + 0x38) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2 + 0x30) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2 + 0x28) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2 + 0x20) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2 + 0x18) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2 + 0x10) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2 + 8) = 0;
    *(undefined8 *)((long)auStack_100 + lVar2) = uVar15;
    func_0x000107c3ed40(uVar12);
    func_0x000107c61180();
    func_0x000107c4ab34(uVar17);
    func_0x000107c61170(puVar5);
    func_0x000107c61170(puVar6);
    func_0x000107c615e8(uVar13);
    func_0x000107c61170(uVar12);
  }
  return;
}



/* Entry: 101fb8f44; end: 101fb9067;  */

void FUN_101fb8f44(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x000107c5bd00();
  if (lVar1 == 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_90,0,0);
    lVar1 = param_2 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_101fb9068(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    puVar2 = &UNK_1104b2b88;
    func_0x000107c613fc(&UNK_1104b2b88,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,param_2);
    uStack_58 = 0x101fba210;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104b2c40;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000100162d98(&UNK_10da43ec0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101fb9068; end: 101fb9437;  */

/* WARNING: Possible PIC construction at 0x000101fb90dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb9120: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb91a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb92c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb9308: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb93b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb938c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb923c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb93b8) */
/* WARNING: Removing unreachable block (ram,0x000101fb930c) */
/* WARNING: Removing unreachable block (ram,0x000101fb940c) */
/* WARNING: Removing unreachable block (ram,0x000101fb9314) */
/* WARNING: Removing unreachable block (ram,0x000101fb9368) */
/* WARNING: Removing unreachable block (ram,0x000101fb9390) */
/* WARNING: Removing unreachable block (ram,0x000101fb9328) */
/* WARNING: Removing unreachable block (ram,0x000101fb9398) */
/* WARNING: Removing unreachable block (ram,0x000101fb92cc) */
/* WARNING: Removing unreachable block (ram,0x000101fb93f4) */
/* WARNING: Removing unreachable block (ram,0x000101fb93fc) */
/* WARNING: Removing unreachable block (ram,0x000101fb92fc) */
/* WARNING: Removing unreachable block (ram,0x000101fb9304) */
/* WARNING: Removing unreachable block (ram,0x000101fb91a4) */
/* WARNING: Removing unreachable block (ram,0x000101fb9124) */
/* WARNING: Removing unreachable block (ram,0x000101fb9224) */
/* WARNING: Removing unreachable block (ram,0x000101fb922c) */
/* WARNING: Removing unreachable block (ram,0x000101fb9170) */
/* WARNING: Removing unreachable block (ram,0x000101fb9238) */
/* WARNING: Removing unreachable block (ram,0x000101fb917c) */
/* WARNING: Removing unreachable block (ram,0x000101fb9414) */
/* WARNING: Removing unreachable block (ram,0x000101fb9184) */
/* WARNING: Removing unreachable block (ram,0x000101fb9434) */
/* WARNING: Removing unreachable block (ram,0x000101fb9190) */
/* WARNING: Removing unreachable block (ram,0x000101fb9198) */
/* WARNING: Removing unreachable block (ram,0x000101fb90e0) */
/* WARNING: Removing unreachable block (ram,0x000101fb91dc) */
/* WARNING: Removing unreachable block (ram,0x000101fb90e4) */
/* WARNING: Removing unreachable block (ram,0x000101fb9200) */
/* WARNING: Removing unreachable block (ram,0x000101fb9208) */
/* WARNING: Removing unreachable block (ram,0x000101fb9118) */
/* WARNING: Removing unreachable block (ram,0x000101fb9120) */
/* WARNING: Removing unreachable block (ram,0x000101fb9240) */
/* WARNING: Removing unreachable block (ram,0x000101fb9248) */
/* WARNING: Removing unreachable block (ram,0x000101fb9374) */
/* WARNING: Removing unreachable block (ram,0x000101fb937c) */
/* WARNING: Removing unreachable block (ram,0x000101fb9298) */
/* WARNING: Removing unreachable block (ram,0x000101fb9388) */
/* WARNING: Removing unreachable block (ram,0x000101fb92a4) */
/* WARNING: Removing unreachable block (ram,0x000101fb93d4) */
/* WARNING: Removing unreachable block (ram,0x000101fb92ac) */
/* WARNING: Removing unreachable block (ram,0x000101fb9410) */
/* WARNING: Removing unreachable block (ram,0x000101fb92b8) */
/* WARNING: Removing unreachable block (ram,0x000101fb92c0) */

void FUN_101fb9068(ulong param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  func_0x000107c3ff04();
  func_0x000107c61180();
  uVar2 = 0;
  FUN_101fba1ac(0,0x112e4b1d0,&PTR_PTR_1126da900);
  uVar3 = param_1;
  func_0x000107c5fc54(param_1,uVar2);
  func_0x000107c61170(param_1);
  if (uVar3 >> 0x3e != 0) {
    uVar1 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar1 = uVar3;
    }
    func_0x000107c60480(uVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101fb9438; end: 101fb9493; -[_TtC36BitmojiGroupProfileSharingEntryPoint34BitmojiGroupProfileSharingWorkflow init] */

void FUN_101fb9438(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiGroupProfileSharingEntryPoint.BitmojiGroupProfileSharingWorkflow",0x47
                      ,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb9464);
  (*pcVar1)();
}



/* Entry: 101fb9494; end: 101fb953b; -[_TtC36BitmojiGroupProfileSharingEntryPoint34BitmojiGroupProfileSharingWorkflow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fb94b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb94d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb94f0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb94d4) */
/* WARNING: Removing unreachable block (ram,0x000101fb94b4) */
/* WARNING: Removing unreachable block (ram,0x000101fb94f4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb9494(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b158));
  return;
}



/* Entry: 101fb953c; end: 101fb955b;  */

void FUN_101fb953c(void)

{
  func_0x000107c61168(&PTR_PTR_1128118a0);
  return;
}



/* Entry: 101fb955c; end: 101fb9717; -[_TtC36BitmojiGroupProfileSharingEntryPoint34BitmojiGroupProfileSharingWorkflow didCancelFromPreview:] */

void FUN_101fb955c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_1104b2b88;
  func_0x000107c613fc(&UNK_1104b2b88,0x18,7);
  func_0x000107c61614(puVar1 + 0x10,param_1);
  pcStack_40 = FUN_101fb9aec;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1104b2ba0;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar1);
  func_0x000100162d98(&UNK_10da43ec0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101fb9718; end: 101fb9747; -[_TtC36BitmojiGroupProfileSharingEntryPoint34BitmojiGroupProfileSharingWorkflow didSendSnapsAndPostToStory:storyTypes:] */

void FUN_101fb9718(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 & 1) != 0) {
    return;
  }
  func_0x000107c61174();
  func_0x000101fb9628();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101fb9748; end: 101fb974b; -[_TtC36BitmojiGroupProfileSharingEntryPoint34BitmojiGroupProfileSharingWorkflow didPostStoryWithStoryTypes:] */

void FUN_101fb9748(void)

{
  return;
}



/* Entry: 101fb974c; end: 101fb9947;  */

undefined * FUN_101fb974c(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_90;
  undefined1 auStack_88 [32];
  undefined *puStack_68;
  
  if (param_1 >> 0x3e == 0) {
    uVar5 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar5 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar5 = param_1;
    }
    func_0x000107c60480();
  }
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_68;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb9948);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_101fba1ac(0,0x112d7a518,&PTR_PTR_1126c20d0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_90 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_68;
        *(ulong *)(puStack_68 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        FUN_101fb9fe8(uVar7,param_1,&PTR_PTR_1126c20d0,0x112d7a518);
        uVar4 = 0;
        uStack_90 = uVar3;
        FUN_101fba1ac(0,0x112d7a518,&PTR_PTR_1126c20d0);
        func_0x000107c6147c(auStack_88,&uStack_90,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_68 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_68;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_68 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_88,puStack_68 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 101fb9948; end: 101fb9993;  */

void FUN_101fb9948(long param_1,undefined8 param_2)

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



/* Entry: 101fb9994; end: 101fb9aeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb9994(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar3 = &puStack_a0;
  func_0x000107c61428(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  lVar1 = _DAT_11306d960;
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_112e4b170);
    lVar4 = *(long *)(param_1 + _DAT_112e4b158);
    func_0x000107c61428(lVar4 + _DAT_11306d960,auStack_70,0,0);
    lVar1 = lVar4 + lVar1;
    func_0x000107c61618();
    uVar5 = *(undefined8 *)(lVar4 + _DAT_11306d930);
    puVar2 = &UNK_1104b2bd8;
    func_0x000107c613fc(&UNK_1104b2bd8,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = uVar6;
    *(long *)(puVar2 + 0x18) = lVar1;
    pcStack_80 = FUN_101fb9b10;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_1104b2bf0;
    puStack_78 = puVar2;
    func_0x000107c60bc4(&puStack_a0);
    puVar2 = puStack_78;
    func_0x000107c615f0(uVar5);
    func_0x000107c61174(uVar6);
    func_0x000107c615f0(lVar1);
    func_0x000107c61574(puVar2);
    func_0x000107c41864(uVar5);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(param_1);
    func_0x000107c615e8(lVar1);
    func_0x000107c615e8(uVar5);
  }
  return;
}



/* Entry: 101fb9aec; end: 101fb9b0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb9aec(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  ppuVar4 = &puStack_a0;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar2 = _DAT_11306d960;
  if (lVar1 != 0) {
    uVar7 = *(undefined8 *)(lVar1 + _DAT_112e4b170);
    lVar5 = *(long *)(lVar1 + _DAT_112e4b158);
    func_0x000107c61428(lVar5 + _DAT_11306d960,auStack_70,0,0);
    lVar2 = lVar5 + lVar2;
    func_0x000107c61618();
    uVar6 = *(undefined8 *)(lVar5 + _DAT_11306d930);
    puVar3 = &UNK_1104b2bd8;
    func_0x000107c613fc(&UNK_1104b2bd8,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = lVar2;
    pcStack_80 = FUN_101fb9b10;
    puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_98 = 0x42000000;
    puStack_90 = &UNK_1000b0c7c;
    puStack_88 = &UNK_1104b2bf0;
    puStack_78 = puVar3;
    func_0x000107c60bc4(&puStack_a0);
    puVar3 = puStack_78;
    func_0x000107c615f0(uVar6);
    func_0x000107c61174(uVar7);
    func_0x000107c615f0(lVar2);
    func_0x000107c61574(puVar3);
    func_0x000107c41864(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar1);
    func_0x000107c615e8(lVar2);
    func_0x000107c615e8(uVar6);
  }
  return;
}



/* Entry: 101fb9b10; end: 101fb9b5f;  */

void FUN_101fb9b10(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  uVar3 = uVar1;
  func_0x000107c49f74();
  if ((int)uVar3 != 0) {
    func_0x000107c4283c(uVar1);
  }
  if (lVar2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf1b930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(lVar2,PTR_s_bitmojiGroupProfileSharingScopeD_1125a47f0);
    return;
  }
  return;
}



/* Entry: 101fb9b60; end: 101fb9b67;  */

void FUN_101fb9b60(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined1 auStack_90 [24];
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x000107c5bd00();
  if (lVar1 == 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_90,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      FUN_101fb9068(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_1104b2b88;
    func_0x000107c613fc(&UNK_1104b2b88,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,lVar1);
    uStack_58 = 0x101fba210;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_1104b2c40;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    func_0x000107c61574(puStack_50);
    func_0x000100162d98(&UNK_10da43ec0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101fb9b68; end: 101fb9cbb;  */

/* WARNING: Possible PIC construction at 0x000101fb9c74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb9c78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb9b68(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar4 = *(long *)(unaff_x20 + _DAT_112e4b168);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar4 != 0) {
    uVar5 = 0;
    if (param_4 != 0) {
      func_0x000107c5fadc(param_3,param_4);
      uVar5 = param_3;
    }
    if (param_2 != 0) {
      func_0x000107c5fadc(param_1,param_2);
    }
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + _DAT_112e4b158) + _DAT_11306d940);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    func_0x000107c61434(uVar3);
    func_0x000107c5fadc(uVar2,uVar3);
    func_0x000107c6142c(uVar3);
    func_0x000107c4be70(lVar4);
    func_0x000107c615e8(lVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar5);
    return;
  }
  return;
}



/* Entry: 101fb9cbc; end: 101fb9d27;  */

void FUN_101fb9cbc(void)

{
  int iVar1;
  ulong *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar4 = 0;
    FUN_101fba1ac(0,0x112d7a518,&PTR_PTR_1126c20d0);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112e4b1e8;
  plVar5 = (long *)&UNK_10da43ef0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 101fb9d28; end: 101fb9da7;  */

undefined * FUN_101fb9d28(undefined *param_1,undefined *param_2)

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
    FUN_101fb9cbc();
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



/* Entry: 101fb9da8; end: 101fb9fe7;  */

ulong FUN_101fb9da8(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb9ed0);
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
  FUN_101fb9d28(uVar2,uVar4);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb9ecc);
      (*pcVar1)();
    }
    func_0x000101fb9ed0(0,uVar2,uVar3 + 0x20,param_4);
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



/* Entry: 101fb9fe8; end: 101fba1a3;  */

ulong FUN_101fb9fe8(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fba0cc);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x101fba0d0);
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
  FUN_101fba1ac(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fba1a4);
  (*pcVar2)();
}



/* Entry: 101fba1a4; end: 101fba1ab;  */

void FUN_101fba1a4(undefined8 param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010c170d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (param_1,PTR_s_setBitmojiFashionContext__112639d70,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 101fba1ac; end: 101fba1eb;  */

void FUN_101fba1ac(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101fba1ec; end: 101fba213;  */

void FUN_101fba1ec(long param_1,long param_2)

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



/* Entry: 101fba214; end: 101fba27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fba214(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fba608();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4b1f8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fba280; end: 101fba2eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fba280(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4b1f8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fba2ec; end: 101fba34b; -[_TtC48BitmojiOutfitSharingScopedFactoryServiceProvider36SCBitmojiOutfitSharingScopedServices init] */

void FUN_101fba2ec(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiOutfitSharingScopedFactoryServiceProvider.SCBitmojiOutfitSharingScopedServices"
                      ,0x55,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fba318);
  (*pcVar1)();
}



/* Entry: 101fba34c; end: 101fba35b; -[_TtC48BitmojiOutfitSharingScopedFactoryServiceProvider36SCBitmojiOutfitSharingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fba34c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4b1f8));
  return;
}



/* Entry: 101fba35c; end: 101fba3c7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fba35c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b2e80;
  func_0x000107c613fc(&UNK_1104b2e80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fba6a0,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fba3c8; end: 101fba463;  */

void FUN_101fba3c8(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b2d90;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b2d90;
  return;
}



/* Entry: 101fba464; end: 101fba49b;  */

void FUN_101fba464(long *param_1)

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



/* Entry: 101fba49c; end: 101fba4a3;  */

undefined8 FUN_101fba49c(void)

{
  return 0x1b;
}



/* Entry: 101fba4a4; end: 101fba5d7;  */

void FUN_101fba4a4(undefined8 *param_1)

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
  puVar1 = &UNK_1104b2ea8;
  func_0x000107c613fc(&UNK_1104b2ea8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fba678;
  func_0x00010058fa64(FUN_101fba678,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fba5d8; end: 101fba607;  */

undefined ** FUN_101fba5d8(void)

{
  return &PTR_DAT_113066838;
}



/* Entry: 101fba608; end: 101fba627;  */

void FUN_101fba608(void)

{
  func_0x000107c61168(&PTR_PTR_1128119b0);
  return;
}



/* Entry: 101fba628; end: 101fba677;  */

undefined1  [16] FUN_101fba628(void)

{
  return ZEXT816(0x1104b2de0);
}



/* Entry: 101fba678; end: 101fba69f;  */

void FUN_101fba678(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fba6a0; end: 101fba6a3;  */

void FUN_101fba6a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fba6a4; end: 101fba823;  */

/* WARNING: Possible PIC construction at 0x000101fba79c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fba7ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fba7bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fba7cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fba7dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fba7ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fba7fc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fba7f0) */
/* WARNING: Removing unreachable block (ram,0x000101fba7e0) */
/* WARNING: Removing unreachable block (ram,0x000101fba7d0) */
/* WARNING: Removing unreachable block (ram,0x000101fba7c0) */
/* WARNING: Removing unreachable block (ram,0x000101fba7b0) */
/* WARNING: Removing unreachable block (ram,0x000101fba7a0) */
/* WARNING: Removing unreachable block (ram,0x000101fba800) */

void FUN_101fba6a4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104b2f30;
  func_0x000107c613fc(&UNK_1104b2f30,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_9;
  *(undefined8 *)(puVar1 + 0x50) = param_10;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_12;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  uVar2 = 0x112e4b268;
  func_0x0001000285a8(0x112e4b268,&UNK_10da441a8);
  func_0x000107c613fc();
  uVar3 = 0x101fbad54;
  func_0x0001000841fc(0x101fbad54,puVar1,uVar2);
  func_0x000100084214(&UNK_10da44170,0x32,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fba824; end: 101fba85f;  */

void FUN_101fba824(void)

{
  long unaff_x20;
  
  FUN_101fba6a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 101fba860; end: 101fba86f;  */

undefined1  [16] FUN_101fba860(void)

{
  return ZEXT816(0x1104b2f10);
}



/* Entry: 101fba870; end: 101fbacc7;  */

void FUN_101fba870(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 auStack_70 [2];
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112e4b270,&UNK_10da441b0);
  puVar1 = auStack_70;
  auStack_70[0] = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101fbcc80();
  func_0x000100082720("SCPreviewScopeExposerSubjectServiceProvider",0x2b,2);
  puVar3 = puVar2;
  FUN_101fbcd0c();
  func_0x000100082720("SCPreviewScopeExposerObservableServiceProvider",0x2e,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101fba464;
  func_0x0001000823a8(FUN_101fba464,0);
  func_0x000100082720("SCBitmojiOutfitSharingScopedServicesCleanupRelayServiceProvider",0x3f,2);
  puVar5 = puVar2;
  FUN_101fbcb34();
  func_0x000100082720("BitmojiOutfitSharingScopeGraphBridgeServicesServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e4b278,&UNK_10da441c0);
  puVar6 = &UNK_1104b2f58;
  func_0x000107c613fc(&UNK_1104b2f58,0x90,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 *)(puVar6 + 0x20) = param_4;
  *(undefined8 *)(puVar6 + 0x28) = param_5;
  *(undefined8 *)(puVar6 + 0x30) = param_6;
  *(undefined8 *)(puVar6 + 0x38) = param_7;
  *(undefined8 *)(puVar6 + 0x40) = param_8;
  *(undefined8 *)(puVar6 + 0x48) = param_9;
  *(undefined8 *)(puVar6 + 0x50) = param_10;
  *(undefined8 *)(puVar6 + 0x58) = param_11;
  *(undefined8 *)(puVar6 + 0x60) = param_12;
  *(undefined8 *)(puVar6 + 0x68) = param_13;
  *(undefined8 *)(puVar6 + 0x70) = param_14;
  *(undefined8 *)(puVar6 + 0x78) = param_15;
  *(undefined8 *)(puVar6 + 0x80) = param_16;
  *(undefined8 **)(puVar6 + 0x88) = puVar3;
  func_0x000107c6157c(puVar1);
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
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x101fbad9c;
  func_0x0001000823a8(0x101fbad9c,puVar6);
  func_0x000100082720("SCBitmojiOutfitSharingScopeEntryPointWrapperServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112e4b280,&UNK_10da441c8);
  puVar6 = &UNK_1104b2f80;
  func_0x000107c613fc(&UNK_1104b2f80,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  pcVar7 = FUN_101fbade0;
  func_0x0001000823a8(FUN_101fbade0,puVar6);
  func_0x000100082720("SCBitmojiOutfitSharingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e4b200,&UNK_10da43f10);
  func_0x000107c6157c(pcVar7);
  uVar8 = 0x101fbadec;
  func_0x0001000823a8(0x101fbadec,pcVar7);
  func_0x000100082720("SCBitmojiOutfitSharingScopeInitializationServiceProvider",0x38,2);
  func_0x0001000285a8(0x112e4b1f0,&UNK_10da43f00);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x101fbadf4;
  func_0x0001000823a8(0x101fbadf4,uVar8);
  func_0x000100082720("SCBitmojiOutfitSharingScopedServicesServiceProvider",0x33,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_1104b2fa8;
  func_0x000107c613fc(&UNK_1104b2fa8,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x101fbadfc;
  func_0x0001000823a8(0x101fbadfc,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(pcVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCBitmojiOutfitSharingScopeEntryPointProvider",0x2d,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 101fbacc8; end: 101fbaddf;  */

void FUN_101fbacc8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x60));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x68));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x70));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fbade0; end: 101fbae03;  */

void FUN_101fbade0(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fbc29c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCBitmojiOutfitSharingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbae04; end: 101fbc02b;  */

void FUN_101fbae04(long *param_1,long param_2)

{
  undefined8 uVar1;
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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 auStack_70 [2];
  
  func_0x000100083b20(auStack_70);
  func_0x000100083b20(&uStack_78);
  func_0x000100083b20(&uStack_80);
  func_0x000100083b20(&uStack_88);
  func_0x000100083b20(&uStack_90);
  func_0x000100083b20(&uStack_98);
  func_0x000100083b20(&uStack_a0);
  func_0x000100083b20(&uStack_a8);
  func_0x000100083b20(&uStack_b0);
  func_0x000100083b20(&uStack_b8);
  func_0x000100083b20(&uStack_c0);
  func_0x000100083b20(&uStack_c8);
  func_0x000100083b20(&uStack_d0);
  func_0x000100083b20(&uStack_d8);
  func_0x000100083b20(&uStack_e0);
  func_0x000100083b20(&uStack_e8);
  FUN_101fbc1ec();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x20) = uStack_78;
  *(undefined8 *)(param_2 + 0x28) = uStack_80;
  *(undefined8 *)(param_2 + 0x30) = uStack_88;
  *(undefined8 *)(param_2 + 0x38) = uStack_90;
  *(undefined8 *)(param_2 + 0x40) = uStack_98;
  *(undefined8 *)(param_2 + 0x48) = uStack_a0;
  *(undefined8 *)(param_2 + 0x50) = uStack_a8;
  *(undefined8 *)(param_2 + 0x58) = uStack_b0;
  *(undefined8 *)(param_2 + 0x60) = uStack_b8;
  *(undefined8 *)(param_2 + 0x68) = uStack_c0;
  *(undefined8 *)(param_2 + 0x70) = uStack_c8;
  *(undefined8 *)(param_2 + 0x78) = uStack_d0;
  *(undefined8 *)(param_2 + 0x80) = uStack_d8;
  *(undefined8 *)(param_2 + 0x88) = uStack_e0;
  func_0x0001000285a8(0x112e4b288,&UNK_10db1f2c0);
  func_0x000107c610f8();
  uVar1 = uStack_78;
  func_0x000107c61174();
  uVar2 = uStack_80;
  func_0x000107c61174();
  uVar3 = uStack_88;
  func_0x000107c61174();
  uVar4 = uStack_90;
  func_0x000107c61174();
  uVar5 = uStack_98;
  func_0x000107c61174();
  uVar6 = uStack_a0;
  func_0x000107c61174();
  uVar7 = uStack_a8;
  func_0x000107c61174();
  uVar8 = uStack_b0;
  func_0x000107c61174();
  uVar9 = uStack_b8;
  func_0x000107c61174();
  uVar10 = uStack_c0;
  func_0x000107c61174();
  uVar11 = uStack_c8;
  func_0x000107c61174();
  uVar12 = uStack_d0;
  func_0x000107c61174(uStack_d0);
  uVar13 = uStack_d8;
  func_0x000107c61174(uStack_d8);
  uVar14 = uStack_e0;
  func_0x000107c61174();
  uVar17 = uStack_e8;
  func_0x000107c6157c(uStack_e8);
  func_0x00010017da58();
  puVar15 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar17);
  *(undefined **)(param_2 + 0x18) = puVar15;
  puVar15 = PTR_PTR_1126a9ce0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar15;
  func_0x000107c61174();
  uVar16 = auStack_70[0];
  func_0x000107c61174();
  uVar17 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f04f430);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174(puVar15);
  uVar17 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef9e350);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1a230);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001a;
  func_0x000107c5fadc(0xd00000000000001a,0x800000010ef12ab0);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(puVar15);
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar17);
  uVar19 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar17);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar17 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef23540);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar17);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar19);
  uVar17 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef28cf0);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar17);
  uVar17 = *(undefined8 *)(param_2 + 0x18);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar18 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef28d10);
  func_0x000107c5a49c(uVar19);
  func_0x000107c61170(uVar19);
  func_0x000107c61170(uVar17);
  func_0x000107c61170(uVar18);
  func_0x000107c3e740(uVar19);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar14);
  func_0x000107c61574(uStack_e8);
  *param_1 = param_2;
  return;
}



/* Entry: 101fbc02c; end: 101fbc0df;  */

void FUN_101fbc02c(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x88));
  return;
}



/* Entry: 101fbc0e0; end: 101fbc0e7;  */

undefined8 FUN_101fbc0e0(void)

{
  return 0x1b;
}



/* Entry: 101fbc0e8; end: 101fbc16b;  */

void FUN_101fbc0e8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fbc22c,param_2,FUN_101fbc230,param_2,FUN_101fbc258,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fbc16c; end: 101fbc1bb;  */

undefined8 FUN_101fbc16c(void)

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



/* Entry: 101fbc1bc; end: 101fbc1eb;  */

undefined ** FUN_101fbc1bc(void)

{
  return &PTR_DAT_113066838;
}



/* Entry: 101fbc1ec; end: 101fbc20b;  */

void FUN_101fbc1ec(void)

{
  func_0x000107c61168(&PTR_PTR_112e4b2f8);
  return;
}



/* Entry: 101fbc20c; end: 101fbc22f;  */

undefined1  [16] FUN_101fbc20c(void)

{
  return ZEXT816(0x1104b3000);
}



/* Entry: 101fbc230; end: 101fbc257;  */

void FUN_101fbc230(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fbc258; end: 101fbc25f;  */

undefined8 FUN_101fbc258(void)

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



/* Entry: 101fbc260; end: 101fbc29b;  */

void FUN_101fbc260(undefined8 *param_1,undefined8 param_2)

{
  FUN_101fbc29c();
  func_0x0001000a7f38("SCBitmojiOutfitSharingScopeInitializationPluginRegistryServiceProvider",0x46,
                      2);
  *param_1 = param_2;
  return;
}



/* Entry: 101fbc29c; end: 101fbc487;  */

void FUN_101fbc29c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d028;
  ppuVar4 = &PTR_DAT_113066838;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b3050;
  func_0x000107c613fc(&UNK_1104b3050,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4b3d0;
  func_0x0001000285a8(0x112e4b3d0,&UNK_10da44390);
  func_0x0001000a6ee8(&UNK_1104b32a0,
                      "BitmojiOutfitSharingScopeGraphBridgeScopeInitializationPluginKey",0x40,2,
                      FUN_101fbc488,puVar2,uVar3,&UNK_1104b32a0,&PTR_DAT_112e4b468);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b3000,
                      "SCBitmojiOutfitSharingScopeEntryPointWrapperScopeInitializationPluginKey",
                      0x48,2,FUN_101fbc53c,param_3,uVar3,&UNK_1104b3000,&PTR_DAT_112e4b290);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104b3078;
  func_0x000107c613fc(&UNK_1104b3078,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b2e20,
                      "SCBitmojiOutfitSharingScopedServicesScopeInitializationPluginKey",0x40,2,
                      FUN_101fbc5ec,puVar2,uVar3,&UNK_1104b2e20,&PTR_DAT_112e4b208);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4b3d8;
  func_0x0001000285a8(0x112e4b3d8,&UNK_10da44398);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101fbc488; end: 101fbc4c7;  */

void FUN_101fbc488(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fbcdb4(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiOutfitSharingScopeGraphBridgeScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbc4c8; end: 101fbc53b;  */

void FUN_101fbc4c8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101fbc628;
  func_0x0001000823a8(0x101fbc628,param_3);
  func_0x000100082720("SCBitmojiOutfitSharingScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbc53c; end: 101fbc543;  */

void FUN_101fbc53c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101fbc628;
  func_0x0001000823a8();
  func_0x000100082720("SCBitmojiOutfitSharingScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fbc544; end: 101fbc5eb;  */

void FUN_101fbc544(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b30a0;
  func_0x000107c613fc(&UNK_1104b30a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fbc620;
  func_0x0001000823a8(FUN_101fbc620,puVar1);
  func_0x000100082720("SCBitmojiOutfitSharingScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fbc5ec; end: 101fbc5f3;  */

void FUN_101fbc5ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b30a0;
  func_0x000107c613fc(&UNK_1104b30a0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fbc620;
  func_0x0001000823a8(FUN_101fbc620,puVar3);
  func_0x000100082720("SCBitmojiOutfitSharingScopedServicesScopeInitializationPluginProvider",0x45,2
                     );
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fbc5f4; end: 101fbc61f;  */

void FUN_101fbc5f4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fbc620; end: 101fbc62f;  */

void FUN_101fbc620(undefined8 *param_1)

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
  puVar1 = &UNK_1104b2ea8;
  func_0x000107c613fc(&UNK_1104b2ea8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fba678;
  func_0x00010058fa64(FUN_101fba678,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fbc630; end: 101fbc70b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fbc630(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_70 [8];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar3 = auStack_70;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101fbca44();
  if (lVar2 != 0) {
    func_0x000100083b20(&uStack_58);
    uStack_60 = param_2;
    func_0x000100087c34(&uStack_60);
    func_0x000107c61574(uStack_58);
    *(long *)(unaff_x20 + _DAT_112e4b3e0) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4b3e8) = param_3;
    func_0x000107c61154(auStack_70,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    func_0x000107c61170(param_2);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbc70c);
  (*pcVar1)();
}



/* Entry: 101fbc70c; end: 101fbc76b; -[_TtC36BitmojiOutfitSharingScopeGraphBridge51BitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fbc70c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiOutfitSharingScopeGraphBridge.BitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbc738);
  (*pcVar1)();
}



/* Entry: 101fbc76c; end: 101fbc7a3; -[_TtC36BitmojiOutfitSharingScopeGraphBridge51BitmojiOutfitSharingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fbc788: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fbc78c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbc76c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b3e0));
  return;
}



/* Entry: 101fbc7a4; end: 101fbc7cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbc7a4(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4b3e8),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4b3e0));
  return;
}



/* Entry: 101fbc7cc; end: 101fbc7eb;  */

void FUN_101fbc7cc(void)

{
  func_0x000107c61168(&PTR_PTR_112811a70);
  return;
}



/* Entry: 101fbc7ec; end: 101fbc873;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fbc7ec(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4b418) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4b420);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fbc874);
  (*pcVar2)();
}



/* Entry: 101fbc874; end: 101fbc95b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fbc874(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long unaff_x20;
  code *pcVar5;
  
  puVar2 = PTR_PTR_1126afc98;
  func_0x000107c61168();
  func_0x000107c3e26c();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4b418);
  *(undefined **)(unaff_x20 + _DAT_112e4b418) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4b420);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4b420))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b31c0;
  func_0x000107c613fc(&UNK_1104b31c0,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fbc960,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fbc95c; end: 101fbc967;  */

void FUN_101fbc95c(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fbc968; end: 101fbc9c7; -[_TtC36BitmojiOutfitSharingScopeGraphBridge51SCBitmojiOutfitSharingScopedServicesSaberEntryPoint init] */

void FUN_101fbc968(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiOutfitSharingScopeGraphBridge.SCBitmojiOutfitSharingScopedServicesSaberEntryPoint"
                      ,0x58,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbc994);
  (*pcVar1)();
}



/* Entry: 101fbc9c8; end: 101fbc9ff; -[_TtC36BitmojiOutfitSharingScopeGraphBridge51SCBitmojiOutfitSharingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbc9c8(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4b420));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4b418));
  return;
}



/* Entry: 101fbca00; end: 101fbca03;  */

void FUN_101fbca00(void)

{
  return;
}



/* Entry: 101fbca04; end: 101fbca23;  */

void FUN_101fbca04(void)

{
  FUN_101fbc874();
  return;
}



/* Entry: 101fbca24; end: 101fbca43;  */

void FUN_101fbca24(void)

{
  func_0x000107c61168(&PTR_PTR_112811b38);
  return;
}



/* Entry: 101fbca44; end: 101fbcb13;  */

undefined8 FUN_101fbca44(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long lStack_28;
  
  func_0x000107c61428(0x112e4b450,&uStack_40,0x20,0);
  func_0x000107c61134();
  func_0x000107c61180();
  puVar1 = &uStack_40;
  func_0x000107c614a8(puVar1);
  if (unaff_x20 == (undefined8 *)0x0) {
    uStack_58 = 0;
    uStack_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    func_0x000107c60234(&uStack_60,unaff_x20);
    func_0x000107c615e8(unaff_x20);
    puVar1 = unaff_x20;
  }
  uStack_38 = uStack_58;
  uStack_40 = uStack_60;
  lStack_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    func_0x00010006e7f4(&uStack_40);
    uStack_68 = 0;
  }
  else {
    FUN_101fbcb14();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fbcb14; end: 101fbcb33;  */

void FUN_101fbcb14(void)

{
  func_0x000107c61168(&PTR_PTR_112811c00);
  return;
}



/* Entry: 101fbcb34; end: 101fbcb4f;  */

void FUN_101fbcb34(undefined8 param_1)

{
  func_0x0001000285a8(0x112e4b458,&UNK_10da44468);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fbcbbc,param_1);
  return;
}



/* Entry: 101fbcb50; end: 101fbcbbb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbcb50(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long lStack_40;
  long lStack_38;
  
  plVar4 = &lStack_40;
  lVar2 = param_2;
  FUN_101fbcb14();
  lVar3 = lVar2;
  func_0x000107c610f8();
  *(long *)(lVar3 + _DAT_112e4b460) = param_2;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar3;
  lStack_38 = lVar2;
  func_0x000107c6157c(param_2);
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar4;
  return;
}



/* Entry: 101fbcbbc; end: 101fbcbc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbcbbc(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [16];
  
  puVar3 = auStack_40;
  lVar2 = unaff_x20;
  FUN_101fbcb14();
  func_0x000107c610f8();
  *(long *)(lVar2 + _DAT_112e4b460) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  func_0x000107c6157c();
  func_0x000107c61154(auStack_40,puVar1);
  *param_1 = puVar3;
  return;
}



/* Entry: 101fbcbc4; end: 101fbcc0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbcbc4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4b460) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fbcc10; end: 101fbcc6f; -[_TtC36BitmojiOutfitSharingScopeGraphBridge44BitmojiOutfitSharingScopeGraphBridgeServices init] */

void FUN_101fbcc10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiOutfitSharingScopeGraphBridge.BitmojiOutfitSharingScopeGraphBridgeServices"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fbcc3c);
  (*pcVar1)();
}



/* Entry: 101fbcc70; end: 101fbcc7f; -[_TtC36BitmojiOutfitSharingScopeGraphBridge44BitmojiOutfitSharingScopeGraphBridgeServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fbcc70(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4b460));
  return;
}



/* Entry: 101fbcc80; end: 101fbcd0b;  */

void FUN_101fbcc80(void)

{
  func_0x0001000285a8(0x112d9e8f8,&UNK_10d93ef70);
  func_0x0001000823a8(0x101fbccc0,0);
  return;
}



/* Entry: 101fbcd0c; end: 101fbcd27;  */

void FUN_101fbcd0c(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9e900,&UNK_10d93ef78);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fbcd78,param_1);
  return;
}



/* Entry: 101fbcd28; end: 101fbcd77;  */

void FUN_101fbcd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_2,param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(param_4,param_1);
  return;
}



/* Entry: 101fbcd78; end: 101fbcdab;  */

void FUN_101fbcd78(undefined8 *param_1)

{
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  *param_1 = uStack_28;
  return;
}



/* Entry: 101fbcdac; end: 101fbcdb3;  */

undefined8 FUN_101fbcdac(void)

{
  return 0x1b;
}


