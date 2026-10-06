/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1031d1384; end: 1031d1817;  */

/* WARNING: Removing unreachable block (ram,0x0001031d1810) */
/* WARNING: Removing unreachable block (ram,0x0001031d1814) */
/* WARNING: Removing unreachable block (ram,0x0001031d180c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031d1384(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined **ppuVar13;
  undefined1 auStack_160 [16];
  char *pcStack_150;
  undefined **ppuStack_140;
  undefined1 *puStack_138;
  char *pcStack_130;
  undefined1 auStack_120 [183];
  char acStack_69 [9];
  
  puVar1 = *(undefined **)(unaff_x20 + _DAT_112f4a7f0);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar1 != (undefined *)0x0) {
    lVar12 = *(long *)(unaff_x20 + _DAT_112f4a7e8);
    lVar2 = lVar12;
    func_0x000107c3e690();
    func_0x000107c61180();
    func_0x000107c5def4();
    func_0x000107c61180();
    acStack_69[0] = '\x01';
    if (lVar12 != 0) {
      pcStack_150 = acStack_69;
      lVar8 = lVar12;
      pcStack_130 = pcStack_150;
      func_0x000107c61174(lVar12);
      func_0x000104321844(FUN_1031d1818,0,0x1031d181c,0,0x1031d1820,0,0x1031d1824,0,0x1031d1828,0,
                          0x1031d182c,0,0x1031d1830,0,0x1031d1834,0,FUN_1031d1e44,&ppuStack_140,
                          0x1031d1838,0,0x1031d1e50,auStack_160,0x1031d183c,0,0x1031d1840,0,
                          0x1031d1844,0);
      func_0x000107c61170(lVar8);
    }
    uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f4a7f8);
    func_0x000107c3fa04();
    func_0x000107c61180();
    if (acStack_69[0] == '\x01') {
      func_0x0001005929c0();
    }
    lVar8 = 0x112f4a810;
    func_0x0001000285a8(0x112f4a810,&UNK_10db993c0);
    puVar9 = auStack_120;
    func_0x000107c61534();
    *(undefined8 *)(lVar8 + 0x18) = 6;
    *(undefined8 *)(lVar8 + 0x10) = 3;
    ppuVar13 = &PTR____CFConstantStringClassReference_110dcad78;
    ppuVar4 = ppuVar13;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110dcad78);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar4);
    ppuStack_140 = ppuVar13;
    puStack_138 = puVar9;
    func_0x000107c61434(puVar9);
    puVar10 = PTR___sSSN_11034da80;
    func_0x000107c602d4(lVar8 + 0x20,&ppuStack_140,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined **)(lVar8 + 0x48) = puVar5;
    ppuVar13 = &PTR____CFConstantStringClassReference_110f41c98;
    ppuVar4 = ppuVar13;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110f41c98);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar4);
    ppuStack_140 = ppuVar13;
    puStack_138 = puVar10;
    func_0x000107c61434(puVar10);
    puVar11 = PTR___sSSN_11034da80;
    func_0x000107c602d4(lVar8 + 0x50,&ppuStack_140,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    *(undefined **)(lVar8 + 0x78) = puVar5;
    ppuVar13 = &PTR____CFConstantStringClassReference_110ea1ad8;
    ppuVar4 = ppuVar13;
    func_0x000107c61174(&PTR____CFConstantStringClassReference_110ea1ad8);
    func_0x000107c5faec();
    func_0x000107c61170(ppuVar4);
    ppuStack_140 = ppuVar13;
    puStack_138 = puVar11;
    func_0x000107c61434(puVar11);
    func_0x000107c602d4(lVar8 + 0x80,&ppuStack_140,PTR___sSSN_11034da80,PTR___sSSSHsWP_11034da90);
    puVar5 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8();
    func_0x000107c46ed0();
    func_0x000107c6142c(puVar11);
    func_0x000107c6142c(puVar9);
    func_0x000107c6142c(puVar10);
    *(undefined **)(lVar8 + 0xa8) = puVar5;
    lVar6 = lVar8;
    FUN_1031d1d40(lVar8);
    func_0x000107c61588(lVar8);
    uVar7 = 0x112f4a818;
    func_0x0001000285a8(0x112f4a818,&UNK_10dc29f70);
    func_0x000107c61408(lVar8 + 0x20,3,uVar7);
    lVar8 = *(long *)(unaff_x20 + _DAT_112f4a800);
    if (lVar8 == 0) {
      func_0x000107c61170(lVar12);
      func_0x000107c61170(lVar2);
      func_0x000107c615e8(puVar1);
      func_0x000107c615e8(uVar3);
      func_0x000107c6142c(lVar6);
      puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x000107c61174();
      puVar5 = puVar1;
      func_0x000107c615f0(puVar1);
      func_0x000103963fc4();
      func_0x000107c615e8(uVar3);
      func_0x000107c61170(lVar8);
      func_0x000107c61170(lVar2);
      func_0x000107c6142c(lVar6);
      func_0x000107c615ec(puVar1,2);
      func_0x000107c61170(lVar12);
    }
  }
  return puVar5;
}



/* Entry: 1031d1818; end: 1031d1847;  */

void FUN_1031d1818(void)

{
  return;
}



/* Entry: 1031d1848; end: 1031d186f; -[SCRemoteStoriesConfigProvider playbackDataProvider] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d1848(long param_1)

{
  func_0x000107c5c734(*(undefined8 *)(param_1 + _DAT_112f4a7f0));
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031d1870; end: 1031d18a3;  */

void FUN_1031d1870(void)

{
  return;
}



/* Entry: 1031d18a4; end: 1031d1903; -[SCRemoteStoriesConfigProvider init] */

void FUN_1031d18a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentProductPlaybackSwift.RemoteStoriesConfigProvider",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d18d0);
  (*pcVar1)();
}



/* Entry: 1031d1904; end: 1031d197b; -[SCRemoteStoriesConfigProvider .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031d1920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d1950: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d1924) */
/* WARNING: Removing unreachable block (ram,0x0001031d1954) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d1904(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4a7e8));
  return;
}



/* Entry: 1031d197c; end: 1031d197f;  */

void FUN_1031d197c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 1031d1980; end: 1031d1d3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d1980(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined8 uVar10;
  long lStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  
  func_0x000107c614f0();
  lVar9 = _DAT_112f4a7e0;
  func_0x000107c61614(unaff_x20 + _DAT_112f4a7e0,0);
  *(long *)(unaff_x20 + _DAT_112f4a7e8) = param_1;
  puVar2 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar3 = &UNK_11061f348;
  func_0x000107c613fc(&UNK_11061f348,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  uStack_80 = 0x1031d1f20;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_1031d0f34;
  puStack_88 = &UNK_11061f360;
  ppuVar4 = &puStack_a0;
  puStack_78 = puVar3;
  func_0x000107c60bc4(ppuVar4);
  puVar3 = puStack_78;
  func_0x000107c61174();
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar3);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar4);
  lVar7 = _DAT_112f4a7f0;
  *(undefined **)(unaff_x20 + _DAT_112f4a7f0) = puVar2;
  func_0x000107c61604(unaff_x20 + lVar9,param_3);
  *(undefined8 *)(unaff_x20 + _DAT_112f4a7f8) = param_5;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a800) = param_6;
  uStack_b0 = 0;
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_5);
  lVar9 = param_1;
  func_0x000107c5def4();
  func_0x000107c61180();
  if (lVar9 == 0) {
    uVar10 = 0;
  }
  else {
    pcStack_90 = (code *)&uStack_b0;
    func_0x000104321844(FUN_1031d1870,0,0x1031d1874,0,0x1031d1878,0,0x1031d187c,0,0x1031d1880,0,
                        0x1031d1884,0,0x1031d1888,0,0x1031d1f28,&puStack_a0,0x1031d188c,0,
                        0x1031d1890,0,0x1031d1894,0,0x1031d1898,0,0x1031d189c,0,0x1031d18a0,0);
    func_0x000107c61170(lVar9);
    uVar10 = uStack_b0;
  }
  uVar5 = *(undefined8 *)(unaff_x20 + lVar7);
  func_0x000107c61174();
  func_0x000107c3e690(param_1);
  func_0x000107c61180();
  func_0x0001000bb420(param_1 + _DAT_11306e6c0,&puStack_a0);
  func_0x000107c61170(param_1);
  puVar6 = &uStack_b0;
  func_0x000107c6147c(puVar6,&puStack_a0,PTR___sypN_11034f1a8 + 8,PTR___sSSN_11034da80,6);
  uVar1 = uStack_b0;
  if ((int)puVar6 == 0) {
    uVar1 = 0;
    uStack_a8 = 0;
  }
  lVar7 = 0;
  FUN_1031d2bd4();
  lVar9 = lVar7;
  func_0x000107c610f8();
  *(undefined8 *)(lVar9 + _DAT_112f4a870) = 0;
  *(undefined **)(lVar9 + _DAT_112f4a878) = PTR___swiftEmptyArrayStorage_11034f1c8;
  *(undefined8 *)(lVar9 + _DAT_112f4a880) = 0;
  func_0x000107c61614(lVar9 + _DAT_112f4a888,0);
  *(undefined8 *)(lVar9 + _DAT_112f4a850) = uVar10;
  *(undefined8 *)(lVar9 + _DAT_112f4a858) = uVar5;
  *(undefined8 *)(lVar9 + _DAT_112f4a860) = param_4;
  puVar6 = (undefined8 *)(lVar9 + _DAT_112f4a868);
  *puVar6 = uVar1;
  puVar6[1] = uStack_a8;
  puVar3 = PTR_s_init_1125d9248;
  lStack_c0 = lVar9;
  lStack_b8 = lVar7;
  func_0x000107c615f0();
  plVar8 = &lStack_c0;
  func_0x000107c61154(plVar8,puVar3);
  *(long **)(unaff_x20 + _DAT_112f4a808) = plVar8;
  lVar9 = *(long *)((long)plVar8 + _DAT_112f4a850);
  func_0x000107c61174();
  if (lVar9 == 0) {
    func_0x0001031d26ac();
  }
  else {
    FUN_1031d1f2c();
  }
  func_0x000107c61170(plVar8);
  func_0x000107c61154(&stack0xffffffffffffff30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d1d40; end: 1031d1e43;  */

undefined * FUN_1031d1d40(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  puVar6 = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar6 != (undefined *)0x0) {
    func_0x0001000285a8(0x112f4a848,&UNK_10dc29fd0);
    puVar2 = puVar6;
    func_0x000107c60498();
    param_1 = param_1 + 0x20;
    func_0x000107c6157c();
    do {
      uVar4 = 0;
      FUN_1031d1ea0(param_1);
      puVar3 = &uStack_70;
      func_0x000100df95d0();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d1e40);
        (*pcVar1)();
      }
      uVar4 = (ulong)puVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) =
           *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << ((ulong)puVar3 & 0x3f);
      puVar5 = (undefined8 *)(*(long *)(puVar2 + 0x30) + (long)puVar3 * 0x28);
      puVar5[4] = uStack_50;
      puVar5[1] = uStack_68;
      *puVar5 = uStack_70;
      puVar5[3] = uStack_58;
      puVar5[2] = uStack_60;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + (long)puVar3 * 8) = uStack_48;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d1e44);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      puVar6 = puVar6 + -1;
    } while (puVar6 != (undefined *)0x0);
    func_0x000107c61574(puVar2);
  }
  return puVar2;
}



/* Entry: 1031d1e44; end: 1031d1e5b;  */

void FUN_1031d1e44(void)

{
  long unaff_x20;
  
  **(undefined1 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1031d1e5c; end: 1031d1e7f;  */

undefined8 FUN_1031d1e5c(undefined8 param_1)

{
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031d1e80; end: 1031d1e9f;  */

void FUN_1031d1e80(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1690);
  return;
}



/* Entry: 1031d1ea0; end: 1031d1f1b;  */

undefined8 FUN_1031d1ea0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4a818;
  func_0x0001000285a8(0x112f4a818,&UNK_10dc29f70);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 1031d1f1c; end: 1031d1f2b;  */

void FUN_1031d1f1c(long param_1,long param_2)

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



/* Entry: 1031d1f2c; end: 1031d2127;  */

/* WARNING: Possible PIC construction at 0x0001031d1fa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d20b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d20bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d1f2c(void)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  if (*(int *)(unaff_x20 + _DAT_112f4a870) != 3 && *(int *)(unaff_x20 + _DAT_112f4a870) != 0) {
    return;
  }
  lVar5 = *(long *)(unaff_x20 + _DAT_112f4a850);
  if (lVar5 == 0) {
    *(undefined8 *)(unaff_x20 + _DAT_112f4a870) = 3;
    lVar5 = unaff_x20 + _DAT_112f4a888;
    func_0x000107c61618();
    if (lVar5 == 0) {
      return;
    }
    func_0x000107c4b7dc();
  }
  else {
    *(undefined8 *)(unaff_x20 + _DAT_112f4a870) = 1;
    lVar1 = unaff_x20 + _DAT_112f4a888;
    func_0x000107c61618();
    func_0x000107c615f0(lVar5);
    if (lVar1 == 0) {
      puVar2 = PTR_PTR_1126ae810;
      func_0x000107c610f8();
      func_0x000107c453e4();
      uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f4a880);
      *(undefined **)(unaff_x20 + _DAT_112f4a880) = puVar2;
      func_0x000107c61174();
      func_0x000107c61170(uVar6);
      lVar1 = lVar5;
      func_0x000107c5bf6c(lVar5);
      func_0x000107c61180();
      lVar3 = lVar1;
      func_0x000107c4da88();
      func_0x000107c61180();
      func_0x000107c61170(lVar1);
      puVar2 = &UNK_11061f398;
      func_0x000107c613fc(&UNK_11061f398,0x18,7);
      func_0x000107c61614(puVar2 + 0x10);
      uStack_50 = 0x1031d3228;
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      puStack_60 = &UNK_101218f4c;
      puStack_58 = &UNK_11061f3b0;
      puStack_48 = puVar2;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puStack_48);
      lVar1 = lVar3;
      func_0x000107c5c320(lVar3);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c3e924(lVar1);
    }
    else {
      func_0x000107c4b7dc(lVar1);
      lVar5 = lVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar5);
  return;
}



/* Entry: 1031d2128; end: 1031d21af;  */

void FUN_1031d2128(undefined8 param_1,long param_2)

{
  long lVar1;
  long alStack_38 [3];
  
  alStack_38[0] = 0;
  func_0x000107c5fc50(param_1,alStack_38,PTR___sSSN_11034da80);
  lVar1 = alStack_38[0];
  if (alStack_38[0] != 0) {
    func_0x000107c61428(param_2 + 0x10,alStack_38,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 == 0) {
      func_0x000107c6142c(lVar1);
    }
    else {
      FUN_1031d21b0(lVar1);
      func_0x000107c6142c(lVar1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1031d21b0; end: 1031d2307;  */

/* WARNING: Possible PIC construction at 0x0001031d22bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d22e8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d22c0) */
/* WARNING: Removing unreachable block (ram,0x0001031d2614) */
/* WARNING: Removing unreachable block (ram,0x0001031d2618) */
/* WARNING: Removing unreachable block (ram,0x0001031d232c) */
/* WARNING: Removing unreachable block (ram,0x0001031d2340) */
/* WARNING: Removing unreachable block (ram,0x0001031d2344) */
/* WARNING: Removing unreachable block (ram,0x0001031d24a0) */
/* WARNING: Removing unreachable block (ram,0x0001031d23f4) */
/* WARNING: Removing unreachable block (ram,0x0001031d25f0) */
/* WARNING: Removing unreachable block (ram,0x0001031d2400) */
/* WARNING: Removing unreachable block (ram,0x0001031d2368) */
/* WARNING: Removing unreachable block (ram,0x0001031d2420) */
/* WARNING: Removing unreachable block (ram,0x0001031d2380) */
/* WARNING: Removing unreachable block (ram,0x0001031d242c) */
/* WARNING: Removing unreachable block (ram,0x0001031d243c) */
/* WARNING: Removing unreachable block (ram,0x0001031d2440) */
/* WARNING: Removing unreachable block (ram,0x0001031d2444) */
/* WARNING: Removing unreachable block (ram,0x0001031d24d4) */
/* WARNING: Removing unreachable block (ram,0x0001031d24dc) */
/* WARNING: Removing unreachable block (ram,0x0001031d244c) */
/* WARNING: Removing unreachable block (ram,0x0001031d2454) */
/* WARNING: Removing unreachable block (ram,0x0001031d246c) */
/* WARNING: Removing unreachable block (ram,0x0001031d24b0) */
/* WARNING: Removing unreachable block (ram,0x0001031d2484) */
/* WARNING: Removing unreachable block (ram,0x0001031d249c) */
/* WARNING: Removing unreachable block (ram,0x0001031d23d0) */
/* WARNING: Removing unreachable block (ram,0x0001031d2360) */
/* WARNING: Removing unreachable block (ram,0x0001031d23d8) */
/* WARNING: Removing unreachable block (ram,0x0001031d23dc) */
/* WARNING: Removing unreachable block (ram,0x0001031d25f4) */
/* WARNING: Removing unreachable block (ram,0x0001031d23e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d21b0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  
  ppuVar4 = &puStack_70;
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4a858);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar2 != 0) {
    if (*(long *)(param_1 + 0x10) != 0) {
      func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
      func_0x000107c614f0(*(undefined8 *)(unaff_x20 + _DAT_112f4a860));
      func_0x000100bcb214();
      puVar3 = &UNK_11061f398;
      func_0x000107c613fc(&UNK_11061f398,0x18,7);
      func_0x000107c61614(puVar3 + 0x10);
      puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_68 = 0x42000000;
      func_0x000107c60bc4(&puStack_70);
      func_0x000107c61574(puVar3);
      func_0x000107c432cc(lVar2);
      func_0x000107c60bd0(ppuVar4);
    }
code_r0x000107c615e8:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
    return;
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f4a850);
  if (lVar2 != 0) {
    uVar5 = 0;
    func_0x0001044aafa0(0);
    puVar6 = puVar3;
    func_0x000107c5fc48(puVar3,uVar5);
    func_0x000107c4e978(lVar2);
    func_0x000107c61170(puVar6);
  }
  if ((ulong)puVar3 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar6 = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar3) {
      puVar6 = puVar3;
    }
    func_0x000107c60480();
  }
  if (puVar6 != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f4a878);
    *(undefined **)(unaff_x20 + _DAT_112f4a878) = puVar3;
    func_0x000107c61434(puVar3);
    func_0x000107c6142c(uVar5);
  }
  lVar2 = _DAT_112f4a870;
  iVar1 = *(int *)(unaff_x20 + _DAT_112f4a870);
  func_0x000107c6142c(puVar3);
  if (iVar1 != 2) {
    uVar5 = 2;
    if (puVar6 == (undefined *)0x0) {
      uVar5 = 3;
    }
    *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
    lVar2 = unaff_x20 + _DAT_112f4a888;
    func_0x000107c61618();
    if (lVar2 != 0) {
      func_0x000107c4b7dc();
      goto code_r0x000107c615e8;
    }
  }
  return;
}



/* Entry: 1031d2308; end: 1031d2627;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d2308(undefined *param_1,undefined *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined *puStack_68;
  
  puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_1 != (undefined *)0x0) {
    puVar13 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar11 = *(undefined **)(puVar13 + 0x10);
    }
    else {
      puVar11 = param_1;
      if (-1 < (long)param_1) {
        puVar11 = puVar13;
      }
      func_0x000107c60480();
    }
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar6 = (undefined *)0x0;
    if (puVar11 != (undefined *)0x0) {
      do {
        while( true ) {
          if (((ulong)param_1 & 0xc000000000000001) == 0) {
            if (*(undefined **)(puVar13 + 0x10) <= puVar6) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d25f8);
              (*pcVar4)();
            }
            puVar5 = *(undefined **)(param_1 + (long)puVar6 * 8 + 0x20);
            func_0x000107c61174();
          }
          else {
            puVar5 = puVar6;
            param_2 = param_1;
            FUN_1031d5d3c(puVar6,param_1);
          }
          puVar1 = puVar6 + 1;
          if (SCARRY8((long)puVar6,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d25f4);
            (*pcVar4)();
          }
          lVar9 = *(long *)(puVar5 + _DAT_11307fb30);
          func_0x000107c5bfec();
          func_0x000107c61180();
          if (lVar9 == 0) {
            lVar10 = 0;
            param_2 = (undefined *)0x0;
          }
          else {
            lVar10 = lVar9;
            func_0x000107c5faec();
            func_0x000107c61170(lVar9);
          }
          uVar12 = *(undefined8 *)(puVar5 + _DAT_11307fb38);
          uVar7 = 0;
          func_0x0001044aafa0(0);
          func_0x000107c610f8();
          func_0x0001044aaa78(lVar10,param_2,uVar12,puVar6,1,uVar7);
          func_0x000107c61170(puVar5);
          puVar6 = puVar6 + 1;
          if (lVar10 != 0) break;
          if (puVar11 == puVar6) goto LAB_1031d24f0;
        }
        puVar6 = puStack_68;
        func_0x000107c61550();
        if ((((int)puVar6 == 0) || ((long)puStack_68 < 0)) ||
           (puVar6 = puStack_68, ((ulong)puStack_68 >> 0x3e & 1) != 0)) {
          if ((ulong)puStack_68 >> 0x3e == 0) {
            param_2 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
          }
          else {
            param_2 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puStack_68) {
              param_2 = puStack_68;
            }
            func_0x000107c60480();
          }
          param_2 = param_2 + 1;
          puVar6 = (undefined *)0x0;
          FUN_1031d63cc(0,param_2,1,puStack_68);
        }
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar8 + 0x10);
        puVar5 = (undefined *)(uVar2 + 1);
        puStack_68 = puVar6;
        if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
          puStack_68 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
          param_2 = puVar5;
          FUN_1031d63cc(puStack_68,puVar5,1,puVar6);
          uVar8 = (ulong)puStack_68 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar8 + 0x10) = puVar5;
        *(long *)(uVar8 + uVar2 * 8 + 0x20) = lVar10;
        puVar6 = puVar1;
      } while (puVar11 != puVar1);
    }
  }
LAB_1031d24f0:
  lVar9 = *(long *)(unaff_x20 + _DAT_112f4a850);
  if (lVar9 != 0) {
    uVar7 = 0;
    func_0x0001044aafa0(0);
    puVar13 = puStack_68;
    func_0x000107c5fc48(puStack_68,uVar7);
    func_0x000107c4e978(lVar9);
    func_0x000107c61170(puVar13);
  }
  if ((ulong)puStack_68 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puStack_68 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puStack_68 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puStack_68) {
      puVar13 = puStack_68;
    }
    func_0x000107c60480();
  }
  if (puVar13 != (undefined *)0x0) {
    uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f4a878);
    *(undefined **)(unaff_x20 + _DAT_112f4a878) = puStack_68;
    func_0x000107c61434(puStack_68);
    func_0x000107c6142c(uVar7);
  }
  lVar9 = _DAT_112f4a870;
  iVar3 = *(int *)(unaff_x20 + _DAT_112f4a870);
  func_0x000107c6142c(puStack_68);
  if (iVar3 != 2) {
    uVar7 = 2;
    if (puVar13 == (undefined *)0x0) {
      uVar7 = 3;
    }
    *(undefined8 *)(unaff_x20 + lVar9) = uVar7;
    lVar9 = unaff_x20 + _DAT_112f4a888;
    func_0x000107c61618();
    if (lVar9 != 0) {
      func_0x000107c4b7dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar9);
      return;
    }
  }
  return;
}



/* Entry: 1031d2628; end: 1031d28b3;  */

void FUN_1031d2628(long param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 != 0) {
    uVar3 = 0;
    func_0x0001044c0ab8(0);
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



/* Entry: 1031d28b4; end: 1031d2927;  */

void FUN_1031d28b4(undefined8 param_1,long param_2,long param_3,code *param_4)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    if (param_2 != 0) {
      param_1 = 0;
    }
    (*param_4)(param_1);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1031d2928; end: 1031d2ae7;  */

/* WARNING: Possible PIC construction at 0x0001031d2970: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d2a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d2a74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d2974) */
/* WARNING: Removing unreachable block (ram,0x0001031d2a0c) */
/* WARNING: Removing unreachable block (ram,0x0001031d2ad4) */
/* WARNING: Removing unreachable block (ram,0x0001031d2adc) */
/* WARNING: Removing unreachable block (ram,0x0001031d2a18) */
/* WARNING: Removing unreachable block (ram,0x0001031d2a20) */
/* WARNING: Removing unreachable block (ram,0x0001031d2a28) */
/* WARNING: Removing unreachable block (ram,0x0001031d2a58) */
/* WARNING: Removing unreachable block (ram,0x0001031d2a44) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d2928(long param_1)

{
  long lVar1;
  long unaff_x20;
  
  if (param_1 != 0) {
    func_0x000107c61174();
    lVar1 = param_1;
    func_0x000107c5bfec();
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
  *(undefined8 *)(unaff_x20 + _DAT_112f4a870) = 3;
  lVar1 = unaff_x20 + _DAT_112f4a888;
  func_0x000107c61618();
  if (lVar1 == 0) {
    return;
  }
  func_0x000107c4b7dc();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1031d2ae8; end: 1031d2b47; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher init] */

void FUN_1031d2ae8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentProductPlaybackSwift.RemoteStoriesPlaylistFetcher",0x3a,"init()",6,0
                     );
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d2b14);
  (*pcVar1)();
}



/* Entry: 1031d2b48; end: 1031d2bd3; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1031d2b48(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4a850));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4a858));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f4a860));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f4a868 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112f4a878));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4a880));
  param_1 = param_1 + _DAT_112f4a888;
  func_0x000107c61610();
  return param_1;
}



/* Entry: 1031d2bd4; end: 1031d2bf3;  */

void FUN_1031d2bd4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1778);
  return;
}



/* Entry: 1031d2bf4; end: 1031d2c33; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher fetchPlaylist] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d2bf4(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112f4a850);
  func_0x000107c61174();
  if (lVar1 == 0) {
    func_0x0001031d26ac();
  }
  else {
    FUN_1031d1f2c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031d2c34; end: 1031d2d1f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031d2c34(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 auStack_38 [8];
  
  func_0x000107c614f0();
  puVar1 = PTR_PTR_1126b2340;
  func_0x000107c61168();
  uVar2 = 0x112f4a8b8;
  func_0x0001000285a8(0x112f4a8b8,&UNK_10db99418);
  puVar3 = auStack_38;
  func_0x000107c5fb18(puVar3,uVar2);
  func_0x000107c5fadc();
  func_0x000107c6142c(uVar2);
  func_0x000107c4b7d8();
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  if (puVar1 == (undefined *)0x0) {
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = puVar1;
    func_0x000107c5f9e8(puVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c61170(puVar1);
  }
  return puVar4;
}



/* Entry: 1031d2d20; end: 1031d2d8f; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher currentLoadingProperties] */

void FUN_1031d2d20(long param_1)

{
  long lVar1;
  long lVar2;
  
  func_0x000107c61174();
  lVar1 = param_1;
  FUN_1031d2c34();
  func_0x000107c61170(param_1);
  if (lVar1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = lVar1;
    func_0x000107c5f9dc(lVar1,PTR___ss11AnyHashableVN_11034e448,PTR___sypN_11034f1a8 + 8,
                        PTR___ss11AnyHashableVSHsWP_11034e450);
    func_0x000107c6142c(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(lVar2);
  return;
}



/* Entry: 1031d2d90; end: 1031d2f53;  */

undefined * FUN_1031d2d90(ulong param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong uStack_80;
  undefined1 auStack_78 [32];
  undefined *puStack_58;
  
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
    puStack_58 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x000100c077e4(0,uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar6 = puStack_58;
    puVar1 = PTR___sypN_11034f1a8;
    if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d2f54);
      (*pcVar2)();
    }
    if ((param_1 & 0xc000000000000001) == 0) {
      uVar4 = 0;
      func_0x0001044aafa0(0);
      puVar1 = PTR___sypN_11034f1a8;
      puVar8 = (ulong *)(param_1 + 0x20);
      do {
        uStack_80 = *puVar8;
        func_0x000107c61174();
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar7 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar7) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar7 + 1,1);
        }
        puVar6 = puStack_58;
        *(ulong *)(puStack_58 + 0x10) = uVar7 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar7 * 0x20 + 0x20);
        uVar5 = uVar5 - 1;
        puVar8 = puVar8 + 1;
      } while (uVar5 != 0);
    }
    else {
      uVar7 = 0;
      do {
        uVar3 = uVar7;
        func_0x0001031d5ed8(uVar7,param_1);
        uVar4 = 0;
        uStack_80 = uVar3;
        func_0x0001044aafa0(0);
        func_0x000107c6147c(auStack_78,&uStack_80,uVar4,puVar1 + 8,7);
        uVar3 = *(ulong *)(puVar6 + 0x10);
        puStack_58 = puVar6;
        if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar3) {
          func_0x000100c077e4(1 < *(ulong *)(puVar6 + 0x18),uVar3 + 1,1);
        }
        puVar6 = puStack_58;
        uVar7 = uVar7 + 1;
        *(ulong *)(puStack_58 + 0x10) = uVar3 + 1;
        func_0x000100102924(auStack_78,puStack_58 + uVar3 * 0x20 + 0x20);
      } while (uVar5 != uVar7);
    }
  }
  return puVar6;
}



/* Entry: 1031d2f54; end: 1031d2fcb; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher resolvedDataModels] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d2f54(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112f4a878);
  func_0x000107c61174();
  uVar1 = uVar2;
  func_0x000107c61434(uVar2);
  FUN_1031d2d90();
  func_0x000107c61170(param_1);
  func_0x000107c6142c(uVar2);
  uVar2 = uVar1;
  func_0x000107c5fc48(uVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1031d2fcc; end: 1031d31af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d2fcc(void)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar4 = ((ulong *)(unaff_x20 + _DAT_112f4a868))[1];
  if (uVar4 == 0) {
    uVar4 = *(ulong *)(unaff_x20 + _DAT_112f4a878);
    if (uVar4 >> 0x3e == 0) {
      uVar5 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar5 = uVar4;
      }
      func_0x000107c60480();
    }
    if (uVar5 != 0) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar4 & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d31b0);
          (*pcVar1)();
        }
        func_0x000107c61174(*(undefined8 *)(uVar4 + 0x20));
      }
      else {
        func_0x000107c61434(uVar4);
        func_0x0001031d5ed8(0,uVar4);
        func_0x000107c6142c(uVar4);
      }
    }
  }
  else {
    uVar6 = *(ulong *)(unaff_x20 + _DAT_112f4a868);
    uVar5 = *(ulong *)(unaff_x20 + _DAT_112f4a878);
    if (uVar5 >> 0x3e == 0) {
      uVar7 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar7 = uVar5 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar5) {
        uVar7 = uVar5;
      }
      func_0x000107c60480();
    }
    func_0x000107c61434(uVar5);
    if (uVar7 != 0) {
      uVar8 = 0;
      do {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d3154);
            (*pcVar1)();
          }
          uVar2 = *(ulong *)(uVar5 + uVar8 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar2 = uVar8;
          func_0x0001031d5ed8(uVar8,uVar5);
        }
        if (SCARRY8(uVar8,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d30d4);
          (*pcVar1)();
        }
        uVar9 = uVar8 + 1;
        uVar3 = ((ulong *)(uVar2 + _DAT_11307ee50))[1];
        if ((uVar3 != 0) &&
           ((uVar2 = *(ulong *)(uVar2 + _DAT_11307ee50), uVar2 == uVar6 && uVar3 == uVar4 ||
            (func_0x000107c605b8(uVar2,uVar3,uVar6,uVar4,0), (uVar2 & 1) != 0)))) {
          func_0x000107c6142c(uVar5);
          return;
        }
        func_0x000107c61170();
        uVar8 = uVar8 + 1;
      } while (uVar9 != uVar7);
    }
    func_0x000107c6142c(uVar5);
  }
  return;
}



/* Entry: 1031d31b0; end: 1031d31e3; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher firstDisplayGroupDataModel] */

void FUN_1031d31b0(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_1031d2fcc();
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 1031d31e4; end: 1031d31f7; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher setDelegate:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d31e4(long param_1,undefined8 param_2,undefined8 param_3)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc05d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakAssign_11034f568)(param_1 + _DAT_112f4a888,param_3);
  return;
}



/* Entry: 1031d31f8; end: 1031d3217; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher delegate] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d31f8(long param_1)

{
  func_0x000107c61618(param_1 + _DAT_112f4a888);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1031d3218; end: 1031d324b; -[_TtC29SCContentProductPlaybackSwift28RemoteStoriesPlaylistFetcher loadingState] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031d3218(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112f4a870);
}



/* Entry: 1031d324c; end: 1031d328b;  */

void FUN_1031d324c(void)

{
  FUN_1031d28b4();
  return;
}



/* Entry: 1031d328c; end: 1031d329b;  */

void FUN_1031d328c(long param_1,long param_2)

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



/* Entry: 1031d329c; end: 1031d3d0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031d329c(void)

{
  long *plVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  code *pcVar7;
  long lVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  undefined **ppuVar18;
  undefined **ppuVar19;
  long lVar20;
  undefined **ppuVar21;
  long lVar22;
  undefined *puVar23;
  undefined *puVar24;
  long unaff_x20;
  undefined **ppuVar25;
  undefined **ppuVar26;
  undefined *puVar27;
  undefined *puStack_f8;
  undefined *puStack_e8;
  ulong uStack_d8;
  undefined *apuStack_d0 [3];
  long lStack_b8;
  undefined1 auStack_b0 [32];
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  
  if (*(int *)(unaff_x20 + _DAT_112f4a908) == 0) {
    lVar8 = *(long *)(unaff_x20 + _DAT_112f4a8d8);
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      puVar24 = (undefined *)0x112d38dc0;
      func_0x0001000285a8(0x112d38dc0,&UNK_10d902c20);
      func_0x000107c613fc();
      *(undefined8 *)(puVar24 + 0x18) = 2;
      *(undefined8 *)(puVar24 + 0x10) = 1;
      uVar9 = 0;
      FUN_1031d4e84(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
      *(undefined8 *)(puVar24 + 0x38) = uVar9;
      *(long *)(puVar24 + 0x20) = lVar8;
      func_0x000107c61174(lVar8);
    }
  }
  else {
    lVar8 = *(long *)(unaff_x20 + _DAT_112f4a8f8);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar8 != 0) {
      puStack_70 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar24 = *(undefined **)(unaff_x20 + _DAT_112f4a8d8);
      puStack_e8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      if (puVar24 != (undefined *)0x0) {
        uVar9 = 0;
        FUN_1031d4e84(0,0x112d36830,&PTR__OBJC_CLASS___NSObject_1126b1300);
        puStack_90 = puVar24;
        uStack_78 = uVar9;
        func_0x000107c61174(puVar24);
        puVar24 = (undefined *)0x0;
        func_0x000100f6a040(0,1,1,PTR___swiftEmptyArrayStorage_11034f1c8);
        uVar4 = *(ulong *)(puVar24 + 0x10);
        puStack_e8 = puVar24;
        if (*(ulong *)(puVar24 + 0x18) >> 1 <= uVar4) {
          puStack_e8 = (undefined *)(ulong)(1 < *(ulong *)(puVar24 + 0x18));
          func_0x000100f6a040(puStack_e8,uVar4 + 1,1,puVar24);
        }
        *(ulong *)(puStack_e8 + 0x10) = uVar4 + 1;
        func_0x000100102924(&puStack_90,puStack_e8 + uVar4 * 0x20 + 0x20);
      }
      puVar24 = &DAT_112f4a8c8;
      puVar15 = (undefined *)0x1031d3a00;
      puStack_70 = puStack_e8;
      FUN_1031d3d10();
      if ((ulong)puVar24 >> 0x3e == 0) {
        puVar27 = *(undefined **)(((ulong)puVar24 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar27 = (undefined *)((ulong)puVar24 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar24) {
          puVar27 = puVar24;
        }
        func_0x000107c60480();
      }
      uStack_d8 = (ulong)puVar24 & 0xffffffffffffff8;
      puVar3 = (undefined8 *)(unaff_x20 + _DAT_112f4a8e0);
      if (puVar27 != (undefined *)0x0) {
        puVar23 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar24 & 0xc000000000000001) == 0) {
              if (*(undefined **)(uStack_d8 + 0x10) <= puVar23) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1031d38f4);
                (*pcVar7)();
              }
              puVar10 = *(undefined **)(puVar24 + (long)puVar23 * 8 + 0x20);
              func_0x000107c61174();
              puVar13 = puVar15;
            }
            else {
              puVar10 = puVar23;
              puVar13 = puVar24;
              FUN_103028e4c();
            }
            puVar2 = puVar23 + 1;
            if (SCARRY8((long)puVar23,1)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1031d38f0);
              (*pcVar7)();
            }
            puVar11 = puVar10;
            func_0x000107c5bfec();
            func_0x000107c61180();
            if (puVar11 == (undefined *)0x0) break;
            puVar12 = puVar11;
            func_0x000107c5faec();
            puVar15 = puVar13;
            func_0x000107c61170(puVar11);
            if ((undefined *)puVar3[1] == (undefined *)0x0) {
              func_0x000107c6142c(puVar13);
            }
            else {
              if ((puVar12 == (undefined *)*puVar3) && ((undefined *)puVar3[1] == puVar13)) {
                func_0x000107c61170(puVar10);
                func_0x000107c6142c(puVar13);
                goto LAB_1031d33d8;
              }
              puVar15 = puVar13;
              func_0x000107c605b8();
              func_0x000107c6142c(puVar13);
              if (((ulong)puVar12 & 1) != 0) goto LAB_1031d33d0;
            }
LAB_1031d34a8:
            puVar13 = puVar10;
            func_0x000107c5bfec();
            func_0x000107c61180();
            if (puVar13 == (undefined *)0x0) {
              puStack_f8 = (undefined *)0x0;
              puVar15 = (undefined *)0x0;
            }
            else {
              puStack_f8 = puVar13;
              func_0x000107c5faec();
              func_0x000107c61170(puVar13);
            }
            puVar13 = puVar10;
            func_0x000107c5bfc8(puVar10);
            func_0x000107a88008();
            uVar14 = 0;
            func_0x0001044aafa0();
            uVar9 = uVar14;
            func_0x000107c610f8();
            func_0x0001044aaa78(puStack_f8,puVar15,puVar13,puVar23,1,uVar9);
            puVar15 = puStack_e8;
            puStack_90 = puStack_f8;
            uStack_78 = uVar14;
            func_0x000107c61558();
            if (((ulong)puVar15 & 1) == 0) {
              plVar1 = (long *)(puStack_e8 + 0x10);
              puStack_e8 = (undefined *)0x0;
              func_0x000100f6a040(0,*plVar1 + 1,1);
            }
            uVar4 = *(ulong *)(puStack_e8 + 0x10);
            if (*(ulong *)(puStack_e8 + 0x18) >> 1 <= uVar4) {
              puVar15 = (undefined *)(ulong)(1 < *(ulong *)(puStack_e8 + 0x18));
              func_0x000100f6a040(puVar15,uVar4 + 1,1,puStack_e8);
              puStack_e8 = puVar15;
            }
            *(ulong *)(puStack_e8 + 0x10) = uVar4 + 1;
            puVar15 = puStack_e8 + uVar4 * 0x20 + 0x20;
            func_0x000100102924(&puStack_90);
            func_0x000107c61170(puVar10);
            puStack_70 = puStack_e8;
            puVar23 = puVar2;
            if (puVar2 == puVar27) goto LAB_1031d35b8;
          }
          puVar15 = puVar13;
          if (puVar3[1] != 0) goto LAB_1031d34a8;
LAB_1031d33d0:
          func_0x000107c61170(puVar10);
LAB_1031d33d8:
          puVar23 = puVar23 + 1;
        } while (puVar2 != puVar27);
      }
LAB_1031d35b8:
      func_0x000107c6142c(puVar24);
      ppuVar16 = (undefined **)&DAT_112f4a8d0;
      pcVar7 = FUN_1031d3d6c;
      FUN_1031d3d10();
      if ((ulong)ppuVar16 >> 0x3e == 0) {
        ppuVar25 = *(undefined ***)(((ulong)ppuVar16 & 0xffffffffffffff8) + 0x10);
        puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        ppuVar25 = (undefined **)((ulong)ppuVar16 & 0xffffffffffffff8);
        if ((undefined **)0x7fffffffffffffff < ppuVar16) {
          ppuVar25 = ppuVar16;
        }
        func_0x000107c60480();
        puVar24 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar24;
      if (ppuVar25 != (undefined **)0x0) {
        if ((long)ppuVar25 < 1) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1031d3a00);
          (*pcVar7)();
        }
        ppuVar26 = (undefined **)0x0;
        ppuVar5 = (undefined **)*puVar3;
        ppuVar6 = (undefined **)puVar3[1];
        do {
          if (((ulong)ppuVar16 & 0xc000000000000001) == 0) {
            ppuVar17 = (undefined **)ppuVar16[(long)((long)ppuVar26 + 4)];
            func_0x000107c61174();
            ppuVar21 = (undefined **)pcVar7;
          }
          else {
            ppuVar17 = ppuVar26;
            ppuVar21 = ppuVar16;
            func_0x000101eff02c();
          }
          ppuVar18 = ppuVar17;
          func_0x000107c4004c();
          func_0x000107c61180();
          ppuVar19 = ppuVar18;
          func_0x000108f51f98();
          func_0x000107c61180();
          func_0x000107c61170(ppuVar18);
          if (ppuVar19 == (undefined **)0x0) {
            pcVar7 = (code *)ppuVar21;
            if (ppuVar6 != (undefined **)0x0) goto LAB_1031d3700;
LAB_1031d3618:
            func_0x000107c61170(ppuVar17);
          }
          else {
            ppuVar18 = ppuVar19;
            func_0x000107c5faec();
            pcVar7 = (code *)ppuVar21;
            func_0x000107c61170(ppuVar19);
            if (ppuVar6 == (undefined **)0x0) {
              func_0x000107c6142c(ppuVar21);
            }
            else {
              if ((ppuVar18 == ppuVar5) && (ppuVar6 == ppuVar21)) {
                func_0x000107c61170(ppuVar17);
                func_0x000107c6142c(ppuVar21);
                goto LAB_1031d3620;
              }
              pcVar7 = (code *)ppuVar21;
              func_0x000107c605b8(ppuVar18,ppuVar21,ppuVar5,ppuVar6,0);
              func_0x000107c6142c(ppuVar21);
              if (((ulong)ppuVar18 & 1) != 0) goto LAB_1031d3618;
            }
LAB_1031d3700:
            lVar20 = lVar8;
            func_0x000107c4e8d0();
            func_0x000107c61180();
            func_0x000107c61174();
            ppuVar21 = ppuVar17;
            func_0x000107c4deb8(ppuVar17);
            func_0x000107c61180();
            ppuVar18 = ppuVar21;
            func_0x000107c51b84();
            func_0x000107c61180();
            func_0x000107c61170(ppuVar21);
            lVar22 = lVar20;
            func_0x00010799a5f0(lVar20,ppuVar18);
            func_0x000107c61180();
            func_0x000107c61170(lVar20);
            func_0x000107c61170(ppuVar18);
            if (lVar22 == 0) {
              uStack_88 = 0;
              puStack_90 = (undefined *)0x0;
              uStack_78 = 0;
              uStack_80 = 0;
            }
            else {
              func_0x000107c60234(&puStack_90,lVar22);
              func_0x000107c615e8(lVar22);
            }
            pcVar7 = (code *)apuStack_d0;
            func_0x000100672b50(&puStack_90);
            if (lStack_b8 == 0) {
              func_0x00010006e7f4(&puStack_90);
              func_0x000107c61170(ppuVar17);
              func_0x000107c61170(lVar20);
              ppuVar17 = apuStack_d0;
            }
            else {
              func_0x000100102924(apuStack_d0,auStack_b0);
              func_0x0001000bb420(auStack_b0,apuStack_d0);
              puVar15 = puVar24;
              func_0x000107c61558();
              puVar27 = puVar24;
              if (((ulong)puVar15 & 1) == 0) {
                puVar27 = (undefined *)0x0;
                func_0x000100f6a040(0,*(long *)(puVar24 + 0x10) + 1,1,puVar24);
              }
              uVar4 = *(ulong *)(puVar27 + 0x10);
              puVar24 = puVar27;
              if (*(ulong *)(puVar27 + 0x18) >> 1 <= uVar4) {
                puVar24 = (undefined *)(ulong)(1 < *(ulong *)(puVar27 + 0x18));
                func_0x000100f6a040(puVar24,uVar4 + 1,1,puVar27);
              }
              *(ulong *)(puVar24 + 0x10) = uVar4 + 1;
              pcVar7 = (code *)(puVar24 + uVar4 * 0x20 + 0x20);
              func_0x000100102924(apuStack_d0);
              func_0x000107c61170(lVar20);
              func_0x000107c61170(ppuVar17);
              func_0x000100183ab8(auStack_b0);
              ppuVar17 = &puStack_90;
            }
            func_0x00010006e7f4(ppuVar17);
          }
LAB_1031d3620:
          ppuVar26 = (undefined **)((long)ppuVar26 + 1);
        } while (ppuVar25 != ppuVar26);
      }
      func_0x000107c6142c(ppuVar16);
      puVar15 = PTR___sypN_11034f1a8;
      puVar27 = puVar24;
      func_0x000107c5fc48(puVar24,PTR___sypN_11034f1a8 + 8);
      puVar23 = puVar27;
      func_0x00010799afc8();
      func_0x000107c61180();
      func_0x000107c61170(puVar27);
      if (puVar23 == (undefined *)0x0) {
        func_0x000107c61434(puVar24);
        puVar27 = puVar24;
      }
      else {
        puVar27 = puVar23;
        func_0x000107c5fc54(puVar23,puVar15 + 8);
        func_0x000107c61170(puVar23);
      }
      func_0x000102cf7840(puVar27);
      func_0x000107c6142c(puVar24);
      func_0x000107c615e8(lVar8);
      puVar24 = puStack_70;
    }
  }
  return puVar24;
}



/* Entry: 1031d3d10; end: 1031d3d6b;  */

long FUN_1031d3d10(long *param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar1 = *(long *)(unaff_x20 + lVar4);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    (*param_2)();
    uVar3 = *(undefined8 *)(unaff_x20 + lVar4);
    *(long *)(unaff_x20 + lVar4) = lVar1;
    func_0x000107c61434();
    func_0x000107c6142c(uVar3);
    lVar2 = 0;
  }
  func_0x000107c61434(lVar2);
  return lVar1;
}



/* Entry: 1031d3d6c; end: 1031d435f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1031d3d6c(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puStack_70;
  
  puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (*(int *)(unaff_x20 + _DAT_112f4a908) == 0) {
    return PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  if (*(int *)(unaff_x20 + _DAT_112f4a908) == 1) {
    puVar5 = (undefined *)0x0;
    func_0x000107d00a08(0,*(undefined8 *)(unaff_x20 + _DAT_112f4a910),
                        *(undefined8 *)(unaff_x20 + _DAT_112f4a8f0),
                        *(undefined8 *)(unaff_x20 + _DAT_112f4a918),
                        *(undefined8 *)(unaff_x20 + _DAT_112f4a920));
    func_0x000107c61180();
    puVar13 = puVar5;
    func_0x000107af933c();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    if (puVar13 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d3e14);
      (*pcVar4)();
    }
  }
  else {
    puVar6 = *(undefined **)(unaff_x20 + _DAT_112f4a8f0);
    func_0x000107c5c734();
    func_0x000107c61180();
    puVar5 = (undefined *)0x0;
    puVar13 = puVar6;
    func_0x000107af987c();
    func_0x000107c61180();
    func_0x000107c615e8(puVar6);
    puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (puVar13 == (undefined *)0x0) goto joined_r0x0001031d40a4;
  }
  puVar5 = (undefined *)0x0;
  FUN_1031d4e84(0,0x112e0fd70,&PTR_PTR_1126c2098);
  puVar6 = puVar13;
  func_0x000107c5fc54();
  func_0x000107c61170(puVar13);
joined_r0x0001031d40a4:
  if ((ulong)puVar6 >> 0x3e == 0) {
    puVar13 = *(undefined **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    puVar13 = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      puVar13 = puVar6;
    }
    func_0x000107c60480();
  }
  if (puVar13 == (undefined *)0x0) {
    func_0x000107c6142c(puVar6);
  }
  else {
    if ((long)puVar13 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d40f0);
      (*pcVar4)();
    }
    puVar14 = (undefined *)0x0;
    puVar1 = *(undefined **)(unaff_x20 + _DAT_112f4a8e0);
    puVar3 = (undefined *)((ulong *)(unaff_x20 + _DAT_112f4a8e0))[1];
    puStack_70 = (undefined *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        puVar7 = *(undefined **)(puVar6 + (long)puVar14 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar7 = puVar14;
        puVar5 = puVar6;
        func_0x000101eff02c();
      }
      puVar9 = puVar7;
      func_0x000107c4004c();
      func_0x000107c61180();
      puVar8 = puVar9;
      func_0x000108f51f98();
      func_0x000107c61180();
      func_0x000107c61170(puVar9);
      if (puVar8 == (undefined *)0x0) {
        if (puVar3 == (undefined *)0x0) goto LAB_1031d3ec0;
LAB_1031d3f94:
        func_0x000107c61174();
        puVar9 = puVar10;
        func_0x000107c61550();
        if ((((int)puVar9 == 0) || ((long)puVar10 < 0)) ||
           (puVar9 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar5 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar5 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar5 = puVar10;
            }
            func_0x000107c60480();
          }
          puVar5 = puVar5 + 1;
          puVar9 = (undefined *)0x0;
          func_0x000102d29b74(0,puVar5,1,puVar10);
        }
        uVar12 = (ulong)puVar9 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar12 + 0x10);
        puVar8 = (undefined *)(uVar2 + 1);
        puVar10 = puVar9;
        if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar2) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar12 + 0x18));
          puVar5 = puVar8;
          func_0x000102d29b74(puVar10,puVar8,1,puVar9);
          uVar12 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(undefined **)(uVar12 + 0x10) = puVar8;
        *(undefined **)(uVar12 + uVar2 * 8 + 0x20) = puVar7;
        func_0x000107c61170(puVar7);
      }
      else {
        puVar9 = puVar8;
        func_0x000107c5faec();
        puVar11 = puVar5;
        func_0x000107c61170(puVar8);
        if (puVar3 == (undefined *)0x0) {
          func_0x000107c6142c(puVar5);
          puVar5 = puVar11;
          goto LAB_1031d3f94;
        }
        if ((puVar9 == puVar1) && (puVar3 == puVar5)) {
          func_0x000107c6142c(puVar5);
          puVar5 = puVar11;
        }
        else {
          puVar8 = puVar5;
          func_0x000107c605b8(puVar9,puVar5,puVar1,puVar3,0);
          func_0x000107c6142c(puVar5);
          puVar5 = puVar8;
          if (((ulong)puVar9 & 1) == 0) goto LAB_1031d3f94;
        }
LAB_1031d3ec0:
        func_0x000107c61170(puStack_70);
        puStack_70 = puVar7;
      }
      puVar14 = puVar14 + 1;
    } while (puVar13 != puVar14);
    func_0x000107c6142c(puVar6);
    if (puStack_70 != (undefined *)0x0) {
      if ((ulong)puVar10 >> 0x3e != 0) {
        puVar5 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar10) {
          puVar5 = puVar10;
        }
        func_0x000107c60480();
        if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d4108);
          (*pcVar4)();
        }
      }
      func_0x0001031d4d88(0,0,puStack_70,&SUB_102d29b74,0x112e0fd70,&PTR_PTR_1126c2098);
      func_0x000107c61170(puStack_70);
    }
  }
  return puVar10;
}



/* Entry: 1031d4360; end: 1031d4453; -[SCContentProductPlaylistGenerator initWithInitialGroupDataModel:initialStoryId:playbackMode:dataFetcher:viewModelGenerator:friendStoryDataCoordinator:autoAdvanceMode:storiesConfigProvider:dataMutator:readReceiptCoordinator:] */

void FUN_1031d4360(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  if (param_4 == 0) {
    param_4 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_6);
  func_0x000107c61174(param_7);
  func_0x000107c61174(param_8);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x0001031d4234(param_3,param_4,param_2,param_5,param_6,param_7,param_8,param_9,param_10,
                      param_11,param_12);
  return;
}



/* Entry: 1031d4454; end: 1031d44b7; -[SCContentProductPlaylistGenerator playlist] */

void FUN_1031d4454(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  func_0x000107c61174();
  puVar1 = &DAT_112f4a8c0;
  FUN_1031d3d10(&DAT_112f4a8c0,FUN_1031d329c);
  func_0x000107c61170(param_1);
  puVar2 = puVar1;
  func_0x000107c5fc48(puVar1,PTR___sypN_11034f1a8 + 8);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar2);
  return;
}



/* Entry: 1031d44b8; end: 1031d44db; -[SCContentProductPlaylistGenerator friendStories] */

void FUN_1031d44b8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_112f4a8c8;
  func_0x000107c61174();
  FUN_1031d3d10(&DAT_112f4a8c8,0x1031d3a00);
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_1031d4e84(0,0x112f35048,&PTR_PTR_1126cee88);
  puVar3 = puVar1;
  func_0x000107c5fc48(puVar1,uVar2);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1031d44dc; end: 1031d44ff; -[SCContentProductPlaylistGenerator nonFriendStories] */

void FUN_1031d44dc(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_112f4a8d0;
  func_0x000107c61174();
  FUN_1031d3d10(&DAT_112f4a8d0,FUN_1031d3d6c);
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_1031d4e84(0,0x112e0fd70,&PTR_PTR_1126c2098);
  puVar3 = puVar1;
  func_0x000107c5fc48(puVar1,uVar2);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 1031d4500; end: 1031d4583;  */

void FUN_1031d4500(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61174();
  FUN_1031d3d10(param_3,param_4);
  func_0x000107c61170(param_1);
  uVar1 = 0;
  FUN_1031d4e84(0,param_5,param_6);
  uVar2 = param_3;
  func_0x000107c5fc48(param_3,uVar1);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 1031d4584; end: 1031d4a37;  */

/* WARNING: Possible PIC construction at 0x0001031d49f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d49fc) */

void FUN_1031d4584(undefined1 *param_1,undefined1 *param_2,long param_3,undefined1 *param_4,
                  undefined1 *param_5,long param_6)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined1 *puVar15;
  ulong uVar16;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  if (param_1 == (undefined1 *)0x0) goto code_r0x000107c60f3c;
  puVar13 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
  puVar7 = param_2;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar14 = *(undefined1 **)(puVar13 + 0x10);
    if (puVar14 == (undefined1 *)0x0) goto LAB_1031d4944;
LAB_1031d45d0:
    puVar15 = (undefined1 *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)(puVar13 + 0x10) <= puVar15) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d4924);
          (*pcVar1)();
        }
        puVar2 = *(undefined1 **)(param_1 + (long)puVar15 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar2 = puVar15;
        puVar7 = param_1;
        FUN_103028e4c();
      }
      puVar6 = puVar15 + 1;
      if (SCARRY8((long)puVar15,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d4920);
        (*pcVar1)();
      }
      puVar3 = puVar2;
      func_0x000107c5bfec();
      func_0x000107c61180();
      if (puVar3 == (undefined1 *)0x0) {
        if (param_5 == (undefined1 *)0x0) goto LAB_1031d46e8;
      }
      else {
        puVar4 = puVar3;
        func_0x000107c5faec();
        puVar9 = puVar7;
        func_0x000107c61170(puVar3);
        if (param_5 == (undefined1 *)0x0) {
          func_0x000107c6142c(puVar7);
          puVar7 = puVar9;
        }
        else {
          if ((puVar4 == param_4) && (param_5 == puVar7)) {
            func_0x000107c6142c(puVar7);
            goto LAB_1031d46e8;
          }
          puVar3 = puVar7;
          func_0x000107c605b8(puVar4,puVar7,param_4,param_5,0);
          func_0x000107c6142c(puVar7);
          puVar7 = puVar3;
          if (((ulong)puVar4 & 1) != 0) goto LAB_1031d46e8;
        }
      }
      func_0x000107c61170(puVar2);
      puVar15 = puVar15 + 1;
    } while (puVar6 != puVar14);
    puVar2 = (undefined1 *)0x0;
LAB_1031d46e8:
    func_0x000107c61428(param_3 + 0x10,auStack_78,1,0);
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    *(undefined1 **)(param_3 + 0x10) = puVar2;
    func_0x000107c61170(uVar5);
    if ((long)puVar14 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d4a38);
      (*pcVar1)();
    }
    puVar7 = auStack_90;
    func_0x000107c61428(param_3 + 0x10,puVar7,0,0);
    puVar13 = (undefined1 *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar15 = *(undefined1 **)(param_1 + (long)puVar13 * 8 + 0x20);
        func_0x000107c61174();
        puVar2 = puVar7;
      }
      else {
        puVar15 = puVar13;
        puVar2 = param_1;
        FUN_103028e4c();
      }
      puVar6 = puVar15;
      func_0x000107c5bfec();
      func_0x000107c61180();
      if (puVar6 == (undefined1 *)0x0) {
        puVar7 = puVar2;
        if (param_5 != (undefined1 *)0x0) goto LAB_1031d47fc;
LAB_1031d4734:
        func_0x000107c61170(puVar15);
      }
      else {
        puVar3 = puVar6;
        func_0x000107c5faec();
        puVar7 = puVar2;
        func_0x000107c61170(puVar6);
        if (param_5 == (undefined1 *)0x0) {
          func_0x000107c6142c(puVar2);
          puVar2 = puVar7;
LAB_1031d47fc:
          puVar7 = puVar15;
          func_0x000107c4a53c();
          if (((((int)puVar7 == 0) || (lVar12 = *(long *)(param_3 + 0x10), lVar12 == 0)) ||
              (func_0x000107c4a53c(), (int)lVar12 == 0)) &&
             (((puVar6 = puVar15, func_0x000107c44c00(), puVar7 = puVar2, (int)puVar6 == 0 ||
               (puVar6 = puVar15, func_0x000107c4a528(), puVar7 = puVar2, ((ulong)puVar6 & 1) != 0))
              || (puVar6 = puVar15, func_0x000107c4a53c(), puVar7 = puVar2, ((ulong)puVar6 & 1) != 0
                 )))) goto LAB_1031d4734;
          puVar7 = auStack_a8;
          func_0x000107c61428(param_6 + 0x10,puVar7,0x21,0);
          uVar16 = *(ulong *)(param_6 + 0x10);
          func_0x000107c61174();
          uVar11 = uVar16;
          func_0x000107c61550();
          *(ulong *)(param_6 + 0x10) = uVar16;
          if ((((int)uVar11 == 0) || ((long)uVar16 < 0)) ||
             (uVar11 = uVar16, (uVar16 >> 0x3e & 1) != 0)) {
            if (uVar16 >> 0x3e == 0) {
              uVar11 = *(ulong *)((uVar16 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar11 = uVar16 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar16) {
                uVar11 = uVar16;
              }
              func_0x000107c60480();
            }
            puVar7 = (undefined1 *)(uVar11 + 1);
            uVar11 = 0;
            func_0x0001031d63e8(0,puVar7,1,uVar16);
            *(ulong *)(param_6 + 0x10) = uVar11;
          }
          uVar10 = uVar11 & 0xffffffffffffff8;
          uVar16 = *(ulong *)(uVar10 + 0x10);
          puVar2 = (undefined1 *)(uVar16 + 1);
          uVar8 = uVar11;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar16) {
            uVar8 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            puVar7 = puVar2;
            func_0x0001031d63e8(uVar8,puVar2,1,uVar11);
            uVar10 = uVar8 & 0xffffffffffffff8;
          }
          *(undefined1 **)(uVar10 + 0x10) = puVar2;
          *(undefined1 **)(uVar10 + uVar16 * 8 + 0x20) = puVar15;
          *(ulong *)(param_6 + 0x10) = uVar8;
          func_0x000107c614a8(auStack_a8);
          func_0x000107c61170(puVar15);
        }
        else {
          if ((puVar3 != param_4) || (param_5 != puVar2)) {
            puVar7 = puVar2;
            func_0x000107c605b8(puVar3,puVar2,param_4,param_5,0);
            func_0x000107c6142c(puVar2);
            puVar2 = puVar7;
            if (((ulong)puVar3 & 1) != 0) goto LAB_1031d4734;
            goto LAB_1031d47fc;
          }
          func_0x000107c61170(puVar15);
          func_0x000107c6142c(puVar2);
        }
      }
      puVar13 = puVar13 + 1;
    } while (puVar14 != puVar13);
  }
  else {
    puVar14 = param_1;
    if (-1 < (long)param_1) {
      puVar14 = puVar13;
    }
    func_0x000107c60480();
    if (puVar14 != (undefined1 *)0x0) goto LAB_1031d45d0;
LAB_1031d4944:
    func_0x000107c61428(param_3 + 0x10,auStack_78,1,0);
    uVar5 = *(undefined8 *)(param_3 + 0x10);
    *(undefined8 *)(param_3 + 0x10) = 0;
    func_0x000107c61170(uVar5);
  }
  func_0x000107c61428(param_3 + 0x10,auStack_a8,0,0);
  lVar12 = *(long *)(param_3 + 0x10);
  if (lVar12 != 0) {
    func_0x000107c61428(param_6 + 0x10,auStack_c0,0x21,0);
    uVar11 = *(ulong *)(param_6 + 0x10);
    if (uVar11 >> 0x3e != 0) {
      uVar16 = uVar11 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar11) {
        uVar16 = uVar11;
      }
      func_0x000107c60480();
      if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d4a34);
        (*pcVar1)();
      }
    }
    func_0x000107c61174(lVar12);
    func_0x0001031d4d88(0,0,lVar12,0x1031d63e8,0x112f35048,&PTR_PTR_1126cee88);
    func_0x000107c614a8(auStack_c0);
    func_0x000107c61170(lVar12);
  }
code_r0x000107c60f3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(param_2);
  return;
}



/* Entry: 1031d4a38; end: 1031d4a97; -[SCContentProductPlaylistGenerator init] */

void FUN_1031d4a38(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentProductPlaybackSwift.ContentProductPlaylistGenerator",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d4a64);
  (*pcVar1)();
}



/* Entry: 1031d4a98; end: 1031d4b63; -[SCContentProductPlaylistGenerator .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031d4ac8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001031d4b38: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d4acc) */
/* WARNING: Removing unreachable block (ram,0x0001031d4b3c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d4a98(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f4a8d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f4a8e0 + 8))
  ;
  return;
}



/* Entry: 1031d4b64; end: 1031d4b83;  */

void FUN_1031d4b64(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1870);
  return;
}



/* Entry: 1031d4b84; end: 1031d4c37;  */

void FUN_1031d4b84(long param_1,undefined8 param_2,code *param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  func_0x000107c61550();
  *unaff_x20 = uVar2;
  if ((((int)uVar1 != 0) && (uVar1 = 0, -1 < (long)uVar2)) && ((uVar2 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)((uVar2 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar1 = 1;
  }
  if (uVar2 >> 0x3e != 0) {
    func_0x000107c60480();
  }
  (*param_3)();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 1031d4c38; end: 1031d4c63;  */

/* WARNING: Possible PIC construction at 0x0001031d49f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d49fc) */

void FUN_1031d4c38(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  undefined1 *puVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  ulong uVar21;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x10);
  lVar17 = *(long *)(unaff_x20 + 0x18);
  puVar2 = *(undefined1 **)(unaff_x20 + 0x20);
  puVar3 = *(undefined1 **)(unaff_x20 + 0x28);
  lVar14 = *(long *)(unaff_x20 + 0x30);
  if (param_1 == (undefined1 *)0x0) goto code_r0x000107c60f3c;
  puVar18 = (undefined1 *)((ulong)param_1 & 0xffffffffffffff8);
  puVar10 = puVar1;
  if ((ulong)param_1 >> 0x3e == 0) {
    puVar19 = *(undefined1 **)(puVar18 + 0x10);
    if (puVar19 == (undefined1 *)0x0) goto LAB_1031d4944;
LAB_1031d45d0:
    puVar20 = (undefined1 *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        if (*(undefined1 **)(puVar18 + 0x10) <= puVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d4924);
          (*pcVar4)();
        }
        puVar5 = *(undefined1 **)(param_1 + (long)puVar20 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        puVar5 = puVar20;
        puVar10 = param_1;
        FUN_103028e4c();
      }
      puVar9 = puVar20 + 1;
      if (SCARRY8((long)puVar20,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d4920);
        (*pcVar4)();
      }
      puVar6 = puVar5;
      func_0x000107c5bfec();
      func_0x000107c61180();
      if (puVar6 == (undefined1 *)0x0) {
        if (puVar3 == (undefined1 *)0x0) goto LAB_1031d46e8;
      }
      else {
        puVar7 = puVar6;
        func_0x000107c5faec();
        puVar13 = puVar10;
        func_0x000107c61170(puVar6);
        if (puVar3 == (undefined1 *)0x0) {
          func_0x000107c6142c(puVar10);
          puVar10 = puVar13;
        }
        else {
          if ((puVar7 == puVar2) && (puVar3 == puVar10)) {
            func_0x000107c6142c(puVar10);
            goto LAB_1031d46e8;
          }
          puVar6 = puVar10;
          func_0x000107c605b8(puVar7,puVar10,puVar2,puVar3,0);
          func_0x000107c6142c(puVar10);
          puVar10 = puVar6;
          if (((ulong)puVar7 & 1) != 0) goto LAB_1031d46e8;
        }
      }
      func_0x000107c61170(puVar5);
      puVar20 = puVar20 + 1;
    } while (puVar9 != puVar19);
    puVar5 = (undefined1 *)0x0;
LAB_1031d46e8:
    func_0x000107c61428(lVar17 + 0x10,auStack_78,1,0);
    uVar8 = *(undefined8 *)(lVar17 + 0x10);
    *(undefined1 **)(lVar17 + 0x10) = puVar5;
    func_0x000107c61170(uVar8);
    if ((long)puVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d4a38);
      (*pcVar4)();
    }
    puVar10 = auStack_90;
    func_0x000107c61428(lVar17 + 0x10,puVar10,0,0);
    puVar18 = (undefined1 *)0x0;
    do {
      if (((ulong)param_1 & 0xc000000000000001) == 0) {
        puVar20 = *(undefined1 **)(param_1 + (long)puVar18 * 8 + 0x20);
        func_0x000107c61174();
        puVar5 = puVar10;
      }
      else {
        puVar20 = puVar18;
        puVar5 = param_1;
        FUN_103028e4c();
      }
      puVar9 = puVar20;
      func_0x000107c5bfec();
      func_0x000107c61180();
      if (puVar9 == (undefined1 *)0x0) {
        puVar10 = puVar5;
        if (puVar3 != (undefined1 *)0x0) goto LAB_1031d47fc;
LAB_1031d4734:
        func_0x000107c61170(puVar20);
      }
      else {
        puVar6 = puVar9;
        func_0x000107c5faec();
        puVar10 = puVar5;
        func_0x000107c61170(puVar9);
        if (puVar3 == (undefined1 *)0x0) {
          func_0x000107c6142c(puVar5);
          puVar5 = puVar10;
LAB_1031d47fc:
          puVar10 = puVar20;
          func_0x000107c4a53c();
          if (((((int)puVar10 == 0) || (lVar11 = *(long *)(lVar17 + 0x10), lVar11 == 0)) ||
              (func_0x000107c4a53c(), (int)lVar11 == 0)) &&
             (((puVar9 = puVar20, func_0x000107c44c00(), puVar10 = puVar5, (int)puVar9 == 0 ||
               (puVar9 = puVar20, func_0x000107c4a528(), puVar10 = puVar5, ((ulong)puVar9 & 1) != 0)
               ) || (puVar9 = puVar20, func_0x000107c4a53c(), puVar10 = puVar5,
                    ((ulong)puVar9 & 1) != 0)))) goto LAB_1031d4734;
          puVar10 = auStack_a8;
          func_0x000107c61428(lVar14 + 0x10,puVar10,0x21,0);
          uVar21 = *(ulong *)(lVar14 + 0x10);
          func_0x000107c61174();
          uVar16 = uVar21;
          func_0x000107c61550();
          *(ulong *)(lVar14 + 0x10) = uVar21;
          if ((((int)uVar16 == 0) || ((long)uVar21 < 0)) ||
             (uVar16 = uVar21, (uVar21 >> 0x3e & 1) != 0)) {
            if (uVar21 >> 0x3e == 0) {
              uVar16 = *(ulong *)((uVar21 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar16 = uVar21 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar21) {
                uVar16 = uVar21;
              }
              func_0x000107c60480();
            }
            puVar10 = (undefined1 *)(uVar16 + 1);
            uVar16 = 0;
            func_0x0001031d63e8(0,puVar10,1,uVar21);
            *(ulong *)(lVar14 + 0x10) = uVar16;
          }
          uVar15 = uVar16 & 0xffffffffffffff8;
          uVar21 = *(ulong *)(uVar15 + 0x10);
          puVar5 = (undefined1 *)(uVar21 + 1);
          uVar12 = uVar16;
          if (*(ulong *)(uVar15 + 0x18) >> 1 <= uVar21) {
            uVar12 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
            puVar10 = puVar5;
            func_0x0001031d63e8(uVar12,puVar5,1,uVar16);
            uVar15 = uVar12 & 0xffffffffffffff8;
          }
          *(undefined1 **)(uVar15 + 0x10) = puVar5;
          *(undefined1 **)(uVar15 + uVar21 * 8 + 0x20) = puVar20;
          *(ulong *)(lVar14 + 0x10) = uVar12;
          func_0x000107c614a8(auStack_a8);
          func_0x000107c61170(puVar20);
        }
        else {
          if ((puVar6 != puVar2) || (puVar3 != puVar5)) {
            puVar10 = puVar5;
            func_0x000107c605b8(puVar6,puVar5,puVar2,puVar3,0);
            func_0x000107c6142c(puVar5);
            puVar5 = puVar10;
            if (((ulong)puVar6 & 1) != 0) goto LAB_1031d4734;
            goto LAB_1031d47fc;
          }
          func_0x000107c61170(puVar20);
          func_0x000107c6142c(puVar5);
        }
      }
      puVar18 = puVar18 + 1;
    } while (puVar19 != puVar18);
  }
  else {
    puVar19 = param_1;
    if (-1 < (long)param_1) {
      puVar19 = puVar18;
    }
    func_0x000107c60480();
    if (puVar19 != (undefined1 *)0x0) goto LAB_1031d45d0;
LAB_1031d4944:
    func_0x000107c61428(lVar17 + 0x10,auStack_78,1,0);
    uVar8 = *(undefined8 *)(lVar17 + 0x10);
    *(undefined8 *)(lVar17 + 0x10) = 0;
    func_0x000107c61170(uVar8);
  }
  func_0x000107c61428(lVar17 + 0x10,auStack_a8,0,0);
  lVar17 = *(long *)(lVar17 + 0x10);
  if (lVar17 != 0) {
    func_0x000107c61428(lVar14 + 0x10,auStack_c0,0x21,0);
    uVar16 = *(ulong *)(lVar14 + 0x10);
    if (uVar16 >> 0x3e != 0) {
      uVar21 = uVar16 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar16) {
        uVar21 = uVar16;
      }
      func_0x000107c60480();
      if ((long)uVar21 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1031d4a34);
        (*pcVar4)();
      }
    }
    func_0x000107c61174(lVar17);
    func_0x0001031d4d88(0,0,lVar17,0x1031d63e8,0x112f35048,&PTR_PTR_1126cee88);
    func_0x000107c614a8(auStack_c0);
    func_0x000107c61170(lVar17);
  }
code_r0x000107c60f3c:
                    /* WARNING: Could not recover jumptable at 0x00010bdbdeec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__dispatch_group_leave_11034c080)(puVar1);
  return;
}



/* Entry: 1031d4c64; end: 1031d4e83;  */

void FUN_1031d4c64(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  ulong uVar9;
  ulong uVar10;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1031d4d64);
    (*pcVar6)();
  }
  uVar10 = *unaff_x20;
  uVar9 = uVar10 & 0xffffffffffffff8;
  puVar1 = (undefined8 *)(uVar9 + 0x20 + param_1 * 8);
  uVar7 = 0;
  FUN_1031d4e84(0,param_5,param_6);
  func_0x000107c61408(puVar1,lVar4,uVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1031d4d68);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
      lVar4 = uVar8 - param_2;
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
      lVar4 = uVar8 - param_2;
    }
    if (SBORROW8(uVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1031d4d80);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(uVar9 + 0x20 + param_2 * 8);
    if (puVar2 != puVar3 || puVar3 + lVar4 <= puVar2) {
      func_0x000107c610b8(puVar2,puVar3,lVar4 << 3);
    }
    if (uVar10 >> 0x3e == 0) {
      uVar8 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar8 = uVar9;
      if ((uVar10 & 0x8000000000000000) != 0) {
        uVar8 = uVar10;
      }
      func_0x000107c60480();
    }
    if (SCARRY8(uVar8,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1031d4d84);
      (*pcVar6)();
    }
    *(ulong *)(uVar9 + 0x10) = uVar8 + lVar5;
  }
  if (0 < param_3) {
    *puVar1 = param_4;
    func_0x000107c61174(param_4);
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1031d4d88);
      (*pcVar6)();
    }
  }
  return;
}



/* Entry: 1031d4e84; end: 1031d4ec3;  */

void FUN_1031d4e84(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031d4ec4; end: 1031d50bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_1031d4ec4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_70 [16];
  
  func_0x000107c610f8();
  *(long *)(unaff_x20 + _DAT_112f4a950) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a958) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4a960);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4a968);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4a970);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61434(param_8);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f4a978) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a980) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a988) = param_9;
  func_0x000107c615f0(param_11);
  lVar3 = param_1;
  func_0x000107c4aba0();
  func_0x000107c61180();
  lVar6 = *(long *)(lVar3 + _DAT_113078bd0);
  func_0x000107c61434(lVar6);
  func_0x000107c61170(lVar3);
  if (lVar6 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined8 *)(lVar6 + 0x10);
    func_0x000107c6142c(lVar6);
  }
  func_0x000107c6142c(param_6);
  func_0x000107c6142c(param_8);
  *(undefined8 *)(unaff_x20 + _DAT_112f4a990) = uVar5;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a998) = param_10;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c615e8(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_4);
  func_0x000107c615e8(param_11);
  return puVar4;
}



/* Entry: 1031d50bc; end: 1031d51f7; -[SCContentProductPlaybackUpNextV2WorkFlow initWithConfigProvider:upNextV2PlaybackSessionExposer:buildUpNextV2PlaybackSessionScope:pageSessionId:triggeringStoryId:playbackMode:viewLocation:playlistGenerator:] */

undefined8
FUN_1031d50bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,long param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  func_0x000107c60bc4();
  puVar2 = &UNK_11061f528;
  uVar4 = 0x18;
  func_0x000107c613fc(&UNK_11061f528,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  if (param_6 == 0) {
    param_6 = 0;
    uVar1 = 0;
  }
  else {
    func_0x000107c5faec(param_6);
    uVar1 = uVar4;
  }
  if (param_7 == 0) {
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_10);
  uVar3 = param_3;
  FUN_1031d69f8(param_3,param_4,FUN_1031d6c04,puVar2,param_6,uVar1,param_7,uVar4,param_8,param_9,
                param_10);
  func_0x000107c615e8(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61574(puVar2);
  func_0x000107c615e8(param_10);
  return uVar3;
}



/* Entry: 1031d51f8; end: 1031d5267;  */

long FUN_1031d51f8(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
  }
  (**(code **)(param_4 + 0x10))(param_4,param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  return param_4;
}



/* Entry: 1031d5268; end: 1031d595f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d5268(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  undefined *puVar18;
  long unaff_x20;
  long lVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uStack_c8;
  long lStack_c0;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  if (*(ulong *)(unaff_x20 + _DAT_112f4a988) < 7) {
    uVar20 = *(undefined4 *)(&UNK_10db99494 + *(ulong *)(unaff_x20 + _DAT_112f4a988) * 4);
  }
  else {
    uVar20 = 1;
  }
  uVar16 = *(long *)(unaff_x20 + _DAT_112f4a998) - 0x2b;
  if (uVar16 < 3) {
    uVar21 = *(undefined4 *)(&UNK_10db994b0 + uVar16 * 4);
  }
  else {
    uVar21 = 0;
  }
  lVar19 = *(long *)(unaff_x20 + _DAT_112f4a958);
  lVar3 = lVar19;
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c61170();
    func_0x000107c4ffe8(lVar19);
    func_0x000107c61180();
    func_0x000107c615e8();
  }
  puVar18 = (undefined *)((ulong *)(unaff_x20 + _DAT_112f4a970))[1];
  if (puVar18 != (undefined *)0x0) {
    uVar16 = *(ulong *)(unaff_x20 + _DAT_112f4a970);
    pcVar2 = *(code **)(unaff_x20 + _DAT_112f4a960);
    puVar7 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    puVar4 = &UNK_11061f4d8;
    func_0x000107c613fc(&UNK_11061f4d8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_70 = FUN_1031d6bc0;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    uStack_80 = 0x1031d59d4;
    puStack_78 = &UNK_11061f4f0;
    ppuVar5 = &puStack_90;
    puStack_68 = puVar4;
    func_0x000107c60bc4(ppuVar5);
    func_0x000107c61574(puStack_68);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puVar7;
    (*pcVar2)(puVar7,*(undefined8 *)(unaff_x20 + _DAT_112f4a968),
              ((undefined8 *)(unaff_x20 + _DAT_112f4a968))[1]);
    func_0x000107c61170(puVar7);
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c42c1c(lVar19);
      puVar6 = *(undefined **)(unaff_x20 + _DAT_112f4a980);
      func_0x000107c4d70c();
      func_0x000107c61180();
      puVar7 = (undefined *)0x0;
      FUN_1031d6c0c(0,0x112e0fd70,&PTR_PTR_1126c2098);
      puVar8 = puVar6;
      func_0x000107c5fc54();
      func_0x000107c61170(puVar6);
      if ((ulong)puVar8 >> 0x3e == 0) {
        puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
      }
      else {
        puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar8) {
          puVar6 = puVar8;
        }
        func_0x000107c60480();
      }
      if (puVar6 == (undefined *)0x0) {
        uStack_c8 = 0;
        lStack_c0 = 0;
      }
      else {
        uVar22 = 0;
        do {
          if (((ulong)puVar8 & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d587c);
              (*pcVar2)();
            }
            uStack_c8 = *(ulong *)(puVar8 + uVar22 * 8 + 0x20);
            func_0x000107c61174();
            puVar11 = puVar7;
          }
          else {
            uStack_c8 = uVar22;
            puVar11 = puVar8;
            FUN_1031d6074(uVar22,puVar8,&PTR_PTR_1126c2098,0x112e0fd70);
          }
          puVar12 = (undefined *)(uVar22 + 1);
          if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5878);
            (*pcVar2)();
          }
          uVar17 = uStack_c8;
          func_0x000107c4004c();
          func_0x000107c61180();
          uVar9 = uVar17;
          func_0x000108f51f98();
          func_0x000107c61180();
          func_0x000107c61170(uVar17);
          puVar7 = puVar11;
          if (uVar9 != 0) {
            uVar17 = uVar9;
            func_0x000107c5faec();
            func_0x000107c61170(uVar9);
            if (uVar17 == uVar16 && puVar18 == puVar11) {
              func_0x000107c6142c(puVar11);
            }
            else {
              puVar7 = puVar11;
              func_0x000107c605b8();
              func_0x000107c6142c(puVar11);
              if ((uVar17 & 1) == 0) goto LAB_1031d549c;
            }
            lStack_c0 = 0x112e0fd70;
            FUN_1031d5c58(0x112e0fd70,&PTR_PTR_1126c2098,0x112e4dcc0,&UNK_10da48ad0);
            puVar7 = (undefined *)(((ulong)*(uint *)(lStack_c0 + 0x30) + 7 & 0x1fffffff8) + 8);
            func_0x000107c613fc();
            *(undefined8 *)(lStack_c0 + 0x18) = 3;
            *(undefined8 *)(lStack_c0 + 0x10) = 1;
            *(ulong *)(lStack_c0 + 0x20) = uStack_c8;
            func_0x000107c61174();
            goto LAB_1031d55f0;
          }
LAB_1031d549c:
          func_0x000107c61170(uStack_c8);
          uVar22 = uVar22 + 1;
        } while (puVar12 != puVar6);
        uStack_c8 = 0;
        lStack_c0 = 0;
      }
LAB_1031d55f0:
      puVar11 = (undefined *)0x0;
      puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
      while (puVar6 != puVar11) {
        if (((ulong)puVar8 & 0xc000000000000001) == 0) {
          if (*(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d586c);
            (*pcVar2)();
          }
          puVar10 = *(undefined **)(puVar8 + (long)puVar11 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          puVar10 = puVar11;
          puVar7 = puVar8;
          FUN_1031d6074(puVar11,puVar8,&PTR_PTR_1126c2098,0x112e0fd70);
        }
        if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5868);
          (*pcVar2)();
        }
        puVar23 = puVar11 + 1;
        puVar13 = puVar10;
        func_0x000107c4004c();
        func_0x000107c61180();
        func_0x000107c61170(puVar10);
        puVar11 = puVar11 + 1;
        if (puVar13 != (undefined *)0x0) {
          puVar11 = puVar12;
          func_0x000107c61550();
          if ((((int)puVar11 == 0) || ((long)puVar12 < 0)) ||
             (puVar11 = puVar12, ((ulong)puVar12 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar12 >> 0x3e == 0) {
              puVar7 = *(undefined **)(((ulong)puVar12 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar7 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
              if ((undefined *)0x7fffffffffffffff < puVar12) {
                puVar7 = puVar12;
              }
              func_0x000107c60480();
            }
            puVar7 = puVar7 + 1;
            puVar11 = (undefined *)0x0;
            FUN_1031d656c(0,puVar7,1,puVar12,&SUB_1044c8618,0x112f4a9c8,&UNK_10db99470);
          }
          uVar17 = (ulong)puVar11 & 0xffffffffffffff8;
          uVar22 = *(ulong *)(uVar17 + 0x10);
          puVar10 = (undefined *)(uVar22 + 1);
          puVar12 = puVar11;
          if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar22) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
            puVar7 = puVar10;
            FUN_1031d656c(puVar12,puVar10,1,puVar11,&SUB_1044c8618,0x112f4a9c8,&UNK_10db99470);
            uVar17 = (ulong)puVar12 & 0xffffffffffffff8;
          }
          *(undefined **)(uVar17 + 0x10) = puVar10;
          *(undefined **)(uVar17 + uVar22 * 8 + 0x20) = puVar13;
          puVar11 = puVar23;
        }
      }
      puVar6 = (undefined *)((ulong)puVar12 & 0xffffffffffffff8);
      if ((ulong)puVar12 >> 0x3e == 0) {
        puVar11 = *(undefined **)(puVar6 + 0x10);
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      else {
        puVar11 = puVar6;
        if ((undefined *)0x7fffffffffffffff < puVar12) {
          puVar11 = puVar12;
        }
        func_0x000107c60480();
        puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      PTR___swiftEmptyArrayStorage_11034f1c8 = puVar10;
      if (puVar11 != (undefined *)0x0) {
        puVar13 = (undefined *)0x0;
        do {
          while( true ) {
            if (((ulong)puVar12 & 0xc000000000000001) == 0) {
              if (*(undefined **)(puVar6 + 0x10) <= puVar13) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5874);
                (*pcVar2)();
              }
              puVar23 = *(undefined **)(puVar12 + (long)puVar13 * 8 + 0x20);
              func_0x000107c61174();
              puVar15 = puVar7;
            }
            else {
              puVar23 = puVar13;
              puVar15 = puVar12;
              FUN_1031d6230();
            }
            puVar1 = puVar13 + 1;
            if (SCARRY8((long)puVar13,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5870);
              (*pcVar2)();
            }
            puVar14 = puVar23;
            func_0x000108f51f98();
            func_0x000107c61180();
            if (puVar14 == (undefined *)0x0) break;
            puVar13 = puVar14;
            func_0x000107c5faec();
            puVar7 = puVar15;
            func_0x000107c61170(puVar23);
            func_0x000107c61170(puVar14);
            puVar23 = puVar10;
            func_0x000107c61558();
            puVar14 = puVar10;
            if (((ulong)puVar23 & 1) == 0) {
              puVar7 = (undefined *)(*(long *)(puVar10 + 0x10) + 1);
              puVar14 = (undefined *)0x0;
              func_0x0001000d182c(0,puVar7,1,puVar10);
            }
            uVar22 = *(ulong *)(puVar14 + 0x10);
            puVar23 = (undefined *)(uVar22 + 1);
            puVar10 = puVar14;
            if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar22) {
              puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar14 + 0x18));
              puVar7 = puVar23;
              func_0x0001000d182c(puVar10,puVar23,1,puVar14);
            }
            *(undefined **)(puVar10 + 0x10) = puVar23;
            *(undefined **)(puVar10 + uVar22 * 0x10 + 0x20) = puVar13;
            *(undefined **)(puVar10 + uVar22 * 0x10 + 0x28) = puVar15;
            puVar13 = puVar1;
            if (puVar1 == puVar11) goto LAB_1031d58b0;
          }
          func_0x000107c61170(puVar23);
          puVar7 = puVar15;
          puVar13 = puVar13 + 1;
        } while (puVar1 != puVar11);
      }
LAB_1031d58b0:
      func_0x000107c6142c(puVar12);
      func_0x000104336d40(0);
      lVar3 = lStack_c0;
      func_0x000104335f90(lStack_c0,puVar10,puVar8,uVar20,uVar21,0,0,uVar16,puVar18,0);
      func_0x000107c6142c(puVar8);
      func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112f4a978));
      func_0x000107c6142c(puVar10);
      func_0x000107c61170(puVar4);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(uStack_c8);
      func_0x000107c6142c(lStack_c0);
    }
  }
  return;
}



/* Entry: 1031d5960; end: 1031d5a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031d5960(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + _DAT_112f4a978);
    func_0x000107c61174(uVar1);
    func_0x000107c61170(param_1);
  }
  return uVar1;
}



/* Entry: 1031d5a0c; end: 1031d5a33; -[SCContentProductPlaybackUpNextV2WorkFlow begin] */

void FUN_1031d5a0c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1031d5268();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031d5a34; end: 1031d5aff;  */

/* WARNING: Possible PIC construction at 0x0001031d5a68: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d5a6c) */
/* WARNING: Removing unreachable block (ram,0x0001031d5a88) */
/* WARNING: Removing unreachable block (ram,0x0001031d5afc) */
/* WARNING: Removing unreachable block (ram,0x0001031d5aa4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d5a34(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f4a958);
  func_0x000107c5194c();
  func_0x000107c61180();
  if (lVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)();
    return;
  }
  return;
}



/* Entry: 1031d5b00; end: 1031d5b47; -[SCContentProductPlaybackUpNextV2WorkFlow fetchMoreWithOperaPresenter:] */

void FUN_1031d5b00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c615f0(param_3);
  func_0x000107c61174(param_1);
  FUN_1031d5a34(param_3);
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1031d5b48; end: 1031d5ba7; -[SCContentProductPlaybackUpNextV2WorkFlow init] */

void FUN_1031d5b48(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContentProductPlaybackSwift.ContentProductPlaybackUpNextV2WorkFlow",0x44,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d5b74);
  (*pcVar1)();
}



/* Entry: 1031d5ba8; end: 1031d5c3b; -[SCContentProductPlaybackUpNextV2WorkFlow .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001031d5bc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001031d5bc8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d5ba8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112f4a950));
  return;
}



/* Entry: 1031d5c3c; end: 1031d5c57;  */

void FUN_1031d5c3c(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  
  puVar4 = (ulong *)0x112f4a9d8;
  plVar5 = (long *)&UNK_10db99488;
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    (*(code *)&SUB_1044aafa0)();
    if (lVar3 != 0) {
      puVar4 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
    }
  }
  if (*puVar4 == 0 || (*puVar4 & 1) != 0) {
    puVar2 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar2,*plVar5 >> 0x20,0,0);
    *puVar4 = (ulong)puVar2;
  }
  return;
}



/* Entry: 1031d5c58; end: 1031d5d3b;  */

void FUN_1031d5c58(undefined8 param_1,undefined8 param_2,ulong *param_3,long *param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  iVar1 = 2;
  func_0x000100029b9c(2,0x10,0,0);
  if (iVar1 != 0) {
    lVar3 = 0;
    FUN_1031d6c0c(0,param_1,param_2);
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



/* Entry: 1031d5d3c; end: 1031d6073;  */

ulong FUN_1031d5d3c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5e0c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5e10);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044c0ab8(0);
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
    func_0x0001044c0ab8(0);
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
  func_0x000107c5fb78(0xd00000000000001a,0x800000010f12efd0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d5ed8);
  (*pcVar2)();
}



/* Entry: 1031d6074; end: 1031d622f;  */

ulong FUN_1031d6074(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d6158);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d615c);
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
  FUN_1031d6c0c(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d6230);
  (*pcVar2)();
}



/* Entry: 1031d6230; end: 1031d63cb;  */

ulong FUN_1031d6230(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d6300);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d6304);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001044c8618(0);
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
    func_0x0001044c8618(0);
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
  func_0x000107c5fb78(0xd000000000000020,0x800000010f12efa0);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1031d63cc);
  (*pcVar2)();
}



/* Entry: 1031d63cc; end: 1031d640b;  */

ulong FUN_1031d63cc(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d66b8);
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
  func_0x0001031d6748(uVar2,uVar4,&SUB_1044aafa0,0x112f4a9d8,&UNK_10db99488);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d66b4);
      (*pcVar1)();
    }
    func_0x0001031d68f0(0,uVar2,uVar3 + 0x20,param_4,&SUB_1044aafa0);
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



/* Entry: 1031d640c; end: 1031d656b;  */

ulong FUN_1031d640c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7,undefined8 param_8)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d656c);
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
  FUN_1031d66b8(uVar2,uVar4,param_5,param_6,param_7,param_8);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d6568);
      (*pcVar1)();
    }
    FUN_1031d67d4(0,uVar2,uVar3 + 0x20,param_4,param_5,param_6);
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



/* Entry: 1031d656c; end: 1031d66b7;  */

ulong FUN_1031d656c(ulong param_1,ulong param_2,ulong param_3,ulong param_4,undefined8 param_5,
                   undefined8 param_6,undefined8 param_7)

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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d66b8);
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
  func_0x0001031d6748(uVar2,uVar4,param_5,param_6,param_7);
  if ((param_1 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d66b4);
      (*pcVar1)();
    }
    func_0x0001031d68f0(0,uVar2,uVar3 + 0x20,param_4,param_5);
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



/* Entry: 1031d66b8; end: 1031d67d3;  */

undefined *
FUN_1031d66b8(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    FUN_1031d5c58(param_3,param_4,param_5,param_6);
    func_0x000107c613fc();
    puVar1 = param_3;
    func_0x000107c610a4();
    puVar2 = puVar1 + -0x19;
    if (0x1f < (long)puVar1) {
      puVar2 = puVar1 + -0x20;
    }
    *(long *)(param_3 + 0x10) = param_1;
    *(ulong *)(param_3 + 0x18) = ((long)puVar2 >> 3) << 1 | 1;
    puVar2 = param_3;
  }
  return puVar2;
}



/* Entry: 1031d67d4; end: 1031d69f7;  */

long FUN_1031d67d4(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  if ((param_4 & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1031d68ec);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1031d68f0);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_1031d6c0c(0,param_5,param_6);
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
      FUN_1031d6c0c(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1031d68e8);
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



/* Entry: 1031d69f8; end: 1031d6bbf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d69f8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  
  func_0x000107c614f0();
  *(long *)(unaff_x20 + _DAT_112f4a950) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a958) = param_2;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4a960);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4a968);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4a970);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar2 = PTR_PTR_1126ae820;
  func_0x000107c610f8();
  func_0x000107c61434(param_8);
  func_0x000107c615f0(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_4);
  func_0x000107c61434(param_6);
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + _DAT_112f4a978) = puVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a980) = param_11;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a988) = param_9;
  func_0x000107c615f0(param_11);
  func_0x000107c4aba0();
  func_0x000107c61180();
  lVar4 = *(long *)(param_1 + _DAT_113078bd0);
  func_0x000107c61434(lVar4);
  func_0x000107c61170(param_1);
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar4 + 0x10);
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c6142c(param_6);
  func_0x000107c6142c(param_8);
  *(undefined8 *)(unaff_x20 + _DAT_112f4a990) = uVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f4a998) = param_10;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d6bc0; end: 1031d6be3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1031d6bc0(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + _DAT_112f4a978);
    func_0x000107c61174(uVar2);
    func_0x000107c61170(lVar1);
  }
  return uVar2;
}



/* Entry: 1031d6be4; end: 1031d6c03;  */

void FUN_1031d6be4(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1990);
  return;
}



/* Entry: 1031d6c04; end: 1031d6c0b;  */

long FUN_1031d6c04(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (param_3 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5fadc(param_2,param_3);
  }
  (**(code **)(lVar1 + 0x10))(lVar1,param_1,param_2);
  func_0x000107c61180();
  func_0x000107c61170(param_2);
  return lVar1;
}



/* Entry: 1031d6c0c; end: 1031d6c4b;  */

void FUN_1031d6c0c(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1031d6c4c; end: 1031d6cb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d6c4c(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_1031d7040();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f4a9e8) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 1031d6cb8; end: 1031d6d23;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d6cb8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f4a9e8) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1031d6d24; end: 1031d6d83; -[_TtC63ContextActionHandlerStartupCompleteScopedFactoryServiceProvider64SCUserNavStartupCompleteScope_ContextActionHandlerScopedServices init] */

void FUN_1031d6d24(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ContextActionHandlerStartupCompleteScopedFactoryServiceProvider.SCUserNavStartupCompleteScope_ContextActionHandlerScopedServices"
                      ,0x80,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1031d6d50);
  (*pcVar1)();
}



/* Entry: 1031d6d84; end: 1031d6d93; -[_TtC63ContextActionHandlerStartupCompleteScopedFactoryServiceProvider64SCUserNavStartupCompleteScope_ContextActionHandlerScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d6d84(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f4a9e8));
  return;
}



/* Entry: 1031d6d94; end: 1031d6dff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1031d6d94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_11061f708;
  func_0x000107c613fc(&UNK_11061f708,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_1031d70d8,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1031d6e00; end: 1031d6e9b;  */

void FUN_1031d6e00(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061f618;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061f618;
  return;
}



/* Entry: 1031d6e9c; end: 1031d6ed3;  */

void FUN_1031d6e9c(long *param_1)

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



/* Entry: 1031d6ed4; end: 1031d6edb;  */

undefined8 FUN_1031d6ed4(void)

{
  return 0x1b;
}



/* Entry: 1031d6edc; end: 1031d700f;  */

void FUN_1031d6edc(undefined8 *param_1)

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
  puVar1 = &UNK_11061f730;
  func_0x000107c613fc(&UNK_11061f730,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_1031d70b0;
  func_0x00010058fa64(FUN_1031d70b0,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 1031d7010; end: 1031d703f;  */

undefined ** FUN_1031d7010(void)

{
  return &PTR_DAT_1130670a8;
}



/* Entry: 1031d7040; end: 1031d705f;  */

void FUN_1031d7040(void)

{
  func_0x000107c61168(&PTR_PTR_1128c1a98);
  return;
}



/* Entry: 1031d7060; end: 1031d70af;  */

undefined1  [16] FUN_1031d7060(void)

{
  return ZEXT816(0x11061f668);
}



/* Entry: 1031d70b0; end: 1031d70d7;  */

void FUN_1031d70b0(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 1031d70d8; end: 1031d70eb;  */

void FUN_1031d70d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1031d70ec; end: 1031d73e7;  */

void FUN_1031d70ec(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f4aa60,&UNK_10db99838);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1031d8088();
  func_0x000100082720("ContextActionHandlerStartupCompleteScopeGraphBridgeServicesServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112f4aa68,&UNK_10db99840);
  puVar3 = &UNK_11061f790;
  func_0x000107c613fc(&UNK_11061f790,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  uVar9 = 0x1031d73f0;
  func_0x0001000823a8(0x1031d73f0,puVar3);
  func_0x000100082720("SCContextActionHandlingInitOnStartupCompleteEntryPointWrapperServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031d6e9c;
  func_0x0001000823a8(FUN_1031d6e9c,0);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesCleanupRelayServiceProvider"
                      ,0x5b,2);
  func_0x0001000285a8(0x112f4aa70,&UNK_10db99850);
  puVar3 = &UNK_11061f7b8;
  func_0x000107c613fc(&UNK_11061f7b8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031d73f8;
  func_0x0001000823a8(0x1031d73f8,puVar3);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopeInitializationPluginRegistryServiceProvider"
                      ,0x62,2);
  func_0x0001000285a8(0x112f4a9f0,&UNK_10db994d0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031d7404;
  func_0x0001000823a8(0x1031d7404,uVar5);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopeInitializationServiceProvider"
                      ,0x54,2);
  func_0x0001000285a8(0x112f4a9e0,&UNK_10db994c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031d740c;
  func_0x0001000823a8(0x1031d740c,uVar6);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11061f7e0;
  func_0x000107c613fc(&UNK_11061f7e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031d7440;
  func_0x0001000823a8(FUN_1031d7440,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopeEntryPointProvider",
                      0x49,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031d73e8; end: 1031d7413;  */

void FUN_1031d73e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  undefined8 unaff_x20;
  undefined8 uVar9;
  undefined8 uStack_68;
  
  uVar9 = *param_2;
  func_0x0001000285a8(0x112f4aa60,&UNK_10db99838);
  puVar1 = &uStack_68;
  uStack_68 = uVar9;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_1031d8088();
  func_0x000100082720("ContextActionHandlerStartupCompleteScopeGraphBridgeServicesServiceProvider",
                      0x4a,2);
  func_0x0001000285a8(0x112f4aa68,&UNK_10db99840);
  puVar3 = &UNK_11061f790;
  func_0x000107c613fc(&UNK_11061f790,0x20,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  uVar9 = 0x1031d73f0;
  func_0x0001000823a8(0x1031d73f0,puVar3);
  func_0x000100082720("SCContextActionHandlingInitOnStartupCompleteEntryPointWrapperServiceProvider"
                      ,0x4c,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1031d6e9c;
  func_0x0001000823a8(FUN_1031d6e9c,0);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesCleanupRelayServiceProvider"
                      ,0x5b,2);
  func_0x0001000285a8(0x112f4aa70,&UNK_10db99850);
  puVar3 = &UNK_11061f7b8;
  func_0x000107c613fc(&UNK_11061f7b8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar9);
  func_0x000107c6157c(pcVar4);
  uVar5 = 0x1031d73f8;
  func_0x0001000823a8(0x1031d73f8,puVar3);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopeInitializationPluginRegistryServiceProvider"
                      ,0x62,2);
  func_0x0001000285a8(0x112f4a9f0,&UNK_10db994d0);
  func_0x000107c6157c(uVar5);
  uVar6 = 0x1031d7404;
  func_0x0001000823a8(0x1031d7404,uVar5);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopeInitializationServiceProvider"
                      ,0x54,2);
  func_0x0001000285a8(0x112f4a9e0,&UNK_10db994c0);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x1031d740c;
  func_0x0001000823a8(0x1031d740c,uVar6);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopedServicesServiceProvider"
                      ,0x4f,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_11061f7e0;
  func_0x000107c613fc(&UNK_11061f7e0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  pcVar8 = FUN_1031d7440;
  func_0x0001000823a8(FUN_1031d7440,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar9);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(uVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCUserNavStartupCompleteScope_ContextActionHandlerScopeEntryPointProvider",
                      0x49,2);
  *param_1 = pcVar8;
  return;
}



/* Entry: 1031d7414; end: 1031d743f;  */

void FUN_1031d7414(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1031d7440; end: 1031d7447;  */

void FUN_1031d7440(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 auStack_60 [3];
  long lStack_48;
  
  func_0x000100083b20(auStack_60,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&lStack_48);
  func_0x000107c61428(lStack_48 + 0x10,auStack_60,1,0);
  uVar2 = *(undefined8 *)(lStack_48 + 0x10);
  *(undefined8 *)(lStack_48 + 0x10) = auStack_60[0];
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_11061f618;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_11061f618;
  return;
}



/* Entry: 1031d7448; end: 1031d752f;  */

void FUN_1031d7448(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  func_0x000100083b20(&uStack_40);
  FUN_1031d7794();
  func_0x000107c613fc();
  uVar1 = uStack_38;
  FUN_1031d764c(uStack_38,uStack_40);
  func_0x000107c61170(uStack_38);
  func_0x000107c61170(uStack_40);
  *param_1 = uVar1;
  return;
}



/* Entry: 1031d7530; end: 1031d755b;  */

void FUN_1031d7530(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1031d755c; end: 1031d7563;  */

undefined8 FUN_1031d755c(void)

{
  return 0x1b;
}



/* Entry: 1031d7564; end: 1031d75e7;  */

void FUN_1031d7564(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x1031d77d4,param_2,FUN_1031d77d8,param_2,FUN_1031d7800,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 1031d75e8; end: 1031d7637;  */

undefined8 FUN_1031d75e8(void)

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


