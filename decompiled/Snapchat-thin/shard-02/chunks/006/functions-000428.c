/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101fb0c90; end: 101fb0e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb0c90(undefined8 *param_1)

{
  long lVar1;
  long lVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x000100083b20(&puStack_78);
  uVar5 = *(undefined8 *)(puStack_78 + _DAT_113043d30);
  func_0x000107c6157c(uVar5);
  func_0x000107c61170(puStack_78);
  func_0x0001000d224c(&lStack_48);
  func_0x000107c61574(uVar5);
  lVar1 = lStack_48;
  lVar2 = lStack_48;
  func_0x000107c425c8();
  func_0x000107c615e8(lVar1);
  if ((int)lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    func_0x0001000a0a8c(0);
    func_0x000100083b20(&lStack_48);
    uVar5 = *(undefined8 *)(lStack_48 + _DAT_113043cf0);
    func_0x000107c61174();
    func_0x000107c61170(lStack_48);
    uStack_58 = 0x101fb0e3c;
    uStack_50 = 0;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    uStack_68 = 0x101fb0fbc;
    puStack_60 = &UNK_1104b17d0;
    ppuVar3 = &puStack_78;
    func_0x000107c60bc4(ppuVar3);
    uVar4 = uVar5;
    func_0x000107c4c280();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(uVar5);
    uVar5 = uVar4;
    func_0x000100a0dc54(uVar4,0x5f6b636172746461,0xea00000000003276);
    func_0x000107c61170(uVar4);
  }
  *param_1 = uVar5;
  return;
}



/* Entry: 101fb0e0c; end: 101fb0e4f;  */

undefined1  [16] FUN_101fb0e0c(void)

{
  return ZEXT816(0x1104b1780);
}



/* Entry: 101fb0e50; end: 101fb0e9b;  */

void FUN_101fb0e50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(param_3,param_4);
  func_0x000107c60184();
  uVar1 = param_3;
  func_0x000107c614f0();
  param_1[3] = uVar1;
  *param_1 = param_3;
  return;
}



/* Entry: 101fb0e9c; end: 101fb0f8b;  */

void FUN_101fb0e9c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_60 [24];
  long lStack_48;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  func_0x000107c615f0(param_2);
  (*pcVar1)(auStack_60);
  func_0x000107c61574(uVar2);
  func_0x000107c615e8(param_2);
  if (lStack_48 == 0) {
    puVar3 = (undefined1 *)0x0;
  }
  else {
    func_0x0001006732c8(auStack_60,lStack_48);
    lVar5 = *(long *)(lStack_48 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar5 + 0x40));
    puVar4 = auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x10))(puVar4);
    puVar3 = puVar4;
    func_0x000107c605b0(puVar4,lStack_48);
    (**(code **)(lVar5 + 8))(puVar4,lStack_48);
    func_0x000100183ab8(auStack_60);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101fb0f8c; end: 101fb0fc3;  */

void FUN_101fb0f8c(long param_1,long param_2)

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



/* Entry: 101fb0fc4; end: 101fb1217;  */

void FUN_101fb0fc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112e4aa98,&UNK_10da42e60);
  puVar1 = &UNK_1104b1900;
  func_0x000107c613fc(&UNK_1104b1900,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_3;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(0x101fb1080,puVar1);
  return;
}



/* Entry: 101fb1218; end: 101fb1227;  */

undefined1  [16] FUN_101fb1218(void)

{
  return ZEXT816(0x1104b1928);
}



/* Entry: 101fb1228; end: 101fb1273;  */

void FUN_101fb1228(undefined8 param_1)

{
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_101fb1274,param_1);
  return;
}



/* Entry: 101fb1274; end: 101fb1377;  */

void FUN_101fb1274(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined8 unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  
  ppuVar4 = &puStack_70;
  func_0x0001000a0a8c(0);
  puVar3 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  pcStack_50 = FUN_101fb1388;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_101443eec;
  puStack_58 = &UNK_1104b19d8;
  func_0x000107c60bc4();
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0();
  func_0x00010399c61c();
  uVar1 = *ppuVar4;
  uVar2 = ppuVar4[1];
  func_0x000107c61434(uVar2);
  puVar5 = puVar3;
  func_0x000100a0dc54(puVar3,uVar1,uVar2);
  func_0x000107c6142c(uVar2);
  func_0x000107c61170(puVar3);
  *param_1 = puVar5;
  return;
}



/* Entry: 101fb1378; end: 101fb1387;  */

undefined1  [16] FUN_101fb1378(void)

{
  return ZEXT816(0x1104b19c8);
}



/* Entry: 101fb1388; end: 101fb13f3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_101fb1388(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_28;
  
  func_0x000100083b20(&lStack_28);
  uVar1 = *(undefined8 *)(lStack_28 + _DAT_112fbd378);
  func_0x000107c61174(uVar1);
  func_0x000107c61170(lStack_28);
  uVar2 = uVar1;
  func_0x000107c5c734(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(uVar1);
  return uVar2;
}



/* Entry: 101fb13f4; end: 101fb140f;  */

void FUN_101fb13f4(long param_1,long param_2)

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



/* Entry: 101fb1410; end: 101fb148f;  */

void FUN_101fb1410(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b1a90;
  func_0x000107c613fc(&UNK_1104b1a90,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fb1490,puVar1);
  return;
}



/* Entry: 101fb1490; end: 101fb1603;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb1490(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  ppuVar5 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000100083b20(&puStack_80);
  uVar2 = *(undefined8 *)(puStack_80 + _DAT_113083f80);
  func_0x000107c61174();
  func_0x000107c61170(puStack_80);
  uVar3 = uVar2;
  func_0x000107c49e24();
  if (((int)uVar3 == 0) && (uVar3 = uVar2, func_0x000107c49e14(), (int)uVar3 == 0)) {
    func_0x0001000a0a8c(0);
    puVar4 = PTR_PTR_1126ae720;
    func_0x000107c61168();
    pcStack_60 = FUN_101fb1614;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    puStack_70 = &UNK_101443eec;
    puStack_68 = &UNK_1104b1ac8;
    uStack_58 = uVar1;
    func_0x000107c60bc4(&puStack_80);
    uVar3 = uStack_58;
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(uVar3);
    func_0x000107c3e4fc();
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    ppuVar5 = &PTR____CFConstantStringClassReference_110e78a58;
    func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e78a58);
    puVar6 = puVar4;
    func_0x000100a0dc54(puVar4,ppuVar5,param_3);
    func_0x000107c61170(uVar2);
    func_0x000107c6142c(param_3);
    func_0x000107c61170(puVar4);
  }
  else {
    func_0x000107c61170(uVar2);
    puVar6 = (undefined *)0x0;
  }
  *param_1 = puVar6;
  return;
}



/* Entry: 101fb1604; end: 101fb1613;  */

undefined1  [16] FUN_101fb1604(void)

{
  return ZEXT816(0x1104b1ab8);
}



/* Entry: 101fb1614; end: 101fb1663;  */

undefined * FUN_101fb1614(void)

{
  undefined *puVar1;
  undefined8 uStack_28;
  
  func_0x000100083b20(&uStack_28);
  puVar1 = PTR_PTR_1126a9cc0;
  func_0x000107c610f8(PTR_PTR_1126a9cc0);
  func_0x000107c47c64();
  func_0x000107c61170(uStack_28);
  return puVar1;
}



/* Entry: 101fb1664; end: 101fb167f;  */

void FUN_101fb1664(long param_1,long param_2)

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



/* Entry: 101fb1680; end: 101fb1923;  */

void FUN_101fb1680(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b1b80;
  func_0x000107c613fc(&UNK_1104b1b80,0x48,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_7);
  func_0x0001000823a8(0x101fb1760,puVar1);
  return;
}



/* Entry: 101fb1924; end: 101fb1933;  */

undefined1  [16] FUN_101fb1924(void)

{
  return ZEXT816(0x1104b1ba8);
}



/* Entry: 101fb1934; end: 101fb1cfb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fb1934(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  func_0x000100083b20(&puStack_a0);
  puVar9 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar10 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar1 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar2 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar3 = puStack_a0;
  func_0x000100083b20(&puStack_a0);
  puVar4 = puStack_a0;
  puVar15 = puVar3;
  func_0x000107c44580();
  func_0x000107c61180();
  puVar5 = puVar15;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  if (puVar5 == (undefined *)0x0) {
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
  }
  else {
    lVar6 = *(long *)(puVar4 + _DAT_113093a98);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 != 0) {
      puVar7 = PTR_PTR_1126ae720;
      func_0x000107c61168();
      puVar15 = &UNK_1104b1c18;
      func_0x000107c613fc(&UNK_1104b1c18,0x20,7);
      *(undefined **)(puVar15 + 0x10) = puVar9;
      *(undefined **)(puVar15 + 0x18) = puVar10;
      pcStack_80 = FUN_101fb1d50;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x101fb1f6c;
      puStack_88 = &UNK_1104b1c30;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar15;
      func_0x000107c60bc4(ppuVar8);
      puVar15 = puStack_78;
      func_0x000107c61174();
      func_0x000107c61174(puVar10);
      func_0x000107c61574(puVar15);
      func_0x000107c3e4fc();
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      puVar11 = PTR_PTR_1126ae720;
      func_0x000107c61168(PTR_PTR_1126ae720);
      puVar15 = &UNK_1104b1c68;
      func_0x000107c613fc(&UNK_1104b1c68,0x20,7);
      *(undefined **)(puVar15 + 0x10) = puVar5;
      *(long *)(puVar15 + 0x18) = lVar6;
      pcStack_80 = (code *)0x101fb1df0;
      puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_98 = 0x42000000;
      uStack_90 = 0x101fb1f68;
      puStack_88 = &UNK_1104b1c80;
      ppuVar8 = &puStack_a0;
      puStack_78 = puVar15;
      func_0x000107c60bc4(ppuVar8);
      puVar15 = puStack_78;
      func_0x000107c615f0(puVar5);
      func_0x000107c615f0(lVar6);
      func_0x000107c61574(puVar15);
      func_0x000107c3e4fc(puVar11);
      func_0x000107c61180();
      func_0x000107c60bd0(ppuVar8);
      uVar12 = *(undefined8 *)(puVar1 + _DAT_113091ae0);
      uVar14 = *(undefined8 *)(puVar2 + _DAT_113083868);
      func_0x000107c61174(uVar12);
      func_0x000107c61174(uVar14);
      puVar15 = puVar10;
      func_0x000107c444a4(puVar10);
      func_0x000107c61180();
      puVar13 = PTR_PTR_1126d1520;
      func_0x000107c610f8(PTR_PTR_1126d1520);
      func_0x000107c493d0();
      func_0x000107c61170(puVar15);
      func_0x000107c61170(uVar14);
      func_0x000107c61170(uVar12);
      puVar15 = PTR_PTR_1126a9cc8;
      func_0x000107c610f8(PTR_PTR_1126a9cc8);
      func_0x000107c48338();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(puVar10);
      func_0x000107c61170(puVar9);
      func_0x000107c615e8(puVar5);
      func_0x000107c615e8(lVar6);
      func_0x000107c61170(puVar13);
      func_0x000107c61170(puVar2);
      func_0x000107c61170(puVar1);
      goto LAB_101fb1ccc;
    }
    func_0x000107c61170(puVar3);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar9);
    func_0x000107c615e8(puVar5);
  }
  func_0x000107c61170(puVar2);
  func_0x000107c61170(puVar1);
  puVar15 = (undefined *)0x0;
LAB_101fb1ccc:
  func_0x000107c61170(puVar4);
  return puVar15;
}



/* Entry: 101fb1cfc; end: 101fb1d33;  */

void FUN_101fb1cfc(long param_1)

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



/* Entry: 101fb1d34; end: 101fb1d4f;  */

void FUN_101fb1d34(long param_1,long param_2)

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



/* Entry: 101fb1d50; end: 101fb1f57;  */

undefined * FUN_101fb1d50(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ec80(uVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  func_0x000107c61180();
  func_0x000107c444a4(uVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126d1538;
  func_0x000107c610f8(PTR_PTR_1126d1538);
  func_0x000107c47fec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  return puVar4;
}



/* Entry: 101fb1f58; end: 101fb1f6f;  */

void FUN_101fb1f58(long param_1,long param_2)

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



/* Entry: 101fb1f70; end: 101fb2037;  */

void FUN_101fb1f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9f398,&UNK_10d93fb00);
  puVar1 = &UNK_1104b1d38;
  func_0x000107c613fc(&UNK_1104b1d38,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_6);
  func_0x0001000823a8(FUN_101fb2038,puVar1);
  return;
}



/* Entry: 101fb2038; end: 101fb21a7;  */

void FUN_101fb2038(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined8 uVar10;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x0001000a0a8c(0);
  puVar7 = PTR_PTR_1126ae720;
  func_0x000107c61168();
  puVar8 = &UNK_1104b1d80;
  uVar10 = 0x40;
  func_0x000107c613fc(&UNK_1104b1d80,0x40,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar1;
  *(undefined8 *)(puVar8 + 0x18) = uVar4;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  *(undefined8 *)(puVar8 + 0x28) = uVar5;
  *(undefined8 *)(puVar8 + 0x30) = uVar3;
  *(undefined8 *)(puVar8 + 0x38) = uVar6;
  pcStack_70 = FUN_101fb2204;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  puStack_80 = &UNK_101443eec;
  puStack_78 = &UNK_1104b1d98;
  ppuVar9 = &puStack_90;
  puStack_68 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar8 = puStack_68;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar4);
  func_0x000107c6157c(uVar2);
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c3e4fc();
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar9);
  ppuVar9 = &PTR____CFConstantStringClassReference_110e78ed8;
  func_0x000107c5faec(&PTR____CFConstantStringClassReference_110e78ed8);
  puVar8 = puVar7;
  func_0x000100a0dc54(puVar7,ppuVar9,uVar10);
  func_0x000107c6142c(uVar10);
  func_0x000107c61170(puVar7);
  *param_1 = puVar8;
  return;
}



/* Entry: 101fb21a8; end: 101fb21b7;  */

undefined1  [16] FUN_101fb21a8(void)

{
  return ZEXT816(0x1104b1d60);
}



/* Entry: 101fb21b8; end: 101fb2203;  */

void FUN_101fb21b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fb2204; end: 101fb24bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fb2204(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  func_0x000100083b20(&puStack_90);
  puVar9 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar1 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar2 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar3 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar4 = puStack_90;
  func_0x000100083b20(&puStack_90);
  puVar10 = puStack_90;
  puVar6 = PTR_PTR_1126ae720;
  func_0x000107c61168(PTR_PTR_1126ae720);
  puVar7 = &UNK_1104b1dd0;
  func_0x000107c613fc(&UNK_1104b1dd0,0x20,7);
  *(undefined **)(puVar7 + 0x10) = puVar9;
  *(undefined **)(puVar7 + 0x18) = puStack_90;
  pcStack_70 = FUN_101fb24dc;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  uStack_80 = 0x101fb1f6c;
  puStack_78 = &UNK_1104b1de8;
  ppuVar8 = &puStack_90;
  puStack_68 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar7 = puStack_68;
  func_0x000107c61174();
  func_0x000107c61174(puVar10);
  func_0x000107c61574(puVar7);
  func_0x000107c3e4fc(puVar6);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar8);
  puVar7 = puVar1;
  func_0x000107c3fa04();
  func_0x000107c61180();
  if (puVar7 != (undefined *)0x0) {
    uVar11 = 0;
    func_0x000100262bac(0);
    func_0x000107c610f8();
    func_0x00010372f108(puVar7,uVar11);
    uVar11 = *(undefined8 *)(puVar3 + _DAT_113091ae0);
    uVar15 = *(undefined8 *)(puVar4 + _DAT_113083868);
    func_0x000107c61174(uVar11);
    func_0x000107c61174(uVar15);
    puVar12 = puVar10;
    func_0x000107c444a4(puVar10);
    func_0x000107c61180();
    puVar13 = PTR_PTR_1126d1520;
    func_0x000107c610f8(PTR_PTR_1126d1520);
    func_0x000107c493d0();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(uVar15);
    func_0x000107c61170(uVar11);
    func_0x000107c61174(puVar7);
    puVar12 = puVar2;
    func_0x000107c5b034(puVar2);
    func_0x000107c61180();
    puVar14 = PTR_PTR_1126a9cd0;
    func_0x000107c610f8(PTR_PTR_1126a9cd0);
    func_0x000107c48340();
    func_0x000107c61170(puVar12);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar7);
    func_0x000107c61170(puVar6);
    func_0x000107c61170(puVar9);
    func_0x000107c61170(puVar10);
    func_0x000107c61170(puVar13);
    func_0x000107c61170(puVar2);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar3);
    return puVar14;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x101fb24c0);
  (*pcVar5)();
}



/* Entry: 101fb24c0; end: 101fb24db;  */

void FUN_101fb24c0(long param_1,long param_2)

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



/* Entry: 101fb24dc; end: 101fb257b;  */

undefined * FUN_101fb24dc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c4ec80(uVar1);
  func_0x000107c61180();
  puVar2 = PTR__OBJC_CLASS___NSUserDefaults_1126ae528;
  func_0x000107c61168(PTR__OBJC_CLASS___NSUserDefaults_1126ae528);
  func_0x000107c5ba34();
  func_0x000107c61180();
  func_0x000107c444a4(uVar3);
  func_0x000107c61180();
  puVar4 = PTR_PTR_1126d1538;
  func_0x000107c610f8(PTR_PTR_1126d1538);
  func_0x000107c47fec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c61170(uVar1);
  return puVar4;
}



/* Entry: 101fb257c; end: 101fb2583;  */

void FUN_101fb257c(long param_1,long param_2)

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



/* Entry: 101fb2584; end: 101fb25ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb2584(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_101fb2978();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112e4aab0) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 101fb25f0; end: 101fb265b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb25f0(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4aab0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb265c; end: 101fb26bb; -[_TtC55BitmojiFriendProfileSharingScopedFactoryServiceProvider43SCBitmojiFriendProfileSharingScopedServices init] */

void FUN_101fb265c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiFriendProfileSharingScopedFactoryServiceProvider.SCBitmojiFriendProfileSharingScopedServices"
                      ,99,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb2688);
  (*pcVar1)();
}



/* Entry: 101fb26bc; end: 101fb26cb; -[_TtC55BitmojiFriendProfileSharingScopedFactoryServiceProvider43SCBitmojiFriendProfileSharingScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb26bc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e4aab0));
  return;
}



/* Entry: 101fb26cc; end: 101fb2737;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb26cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1104b1fd8;
  func_0x000107c613fc(&UNK_1104b1fd8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_101fb2a10,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101fb2738; end: 101fb27d3;  */

void FUN_101fb2738(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_1104b1ee8;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_1104b1ee8;
  return;
}



/* Entry: 101fb27d4; end: 101fb280b;  */

void FUN_101fb27d4(long *param_1)

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



/* Entry: 101fb280c; end: 101fb2813;  */

undefined8 FUN_101fb280c(void)

{
  return 0x1b;
}



/* Entry: 101fb2814; end: 101fb2947;  */

void FUN_101fb2814(undefined8 *param_1)

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
  puVar1 = &UNK_1104b2000;
  func_0x000107c613fc(&UNK_1104b2000,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fb29e8;
  func_0x00010058fa64(FUN_101fb29e8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fb2948; end: 101fb2977;  */

undefined ** FUN_101fb2948(void)

{
  return &PTR_DAT_113066808;
}



/* Entry: 101fb2978; end: 101fb2997;  */

void FUN_101fb2978(void)

{
  func_0x000107c61168(&PTR_PTR_112810f90);
  return;
}



/* Entry: 101fb2998; end: 101fb29e7;  */

undefined1  [16] FUN_101fb2998(void)

{
  return ZEXT816(0x1104b1f38);
}



/* Entry: 101fb29e8; end: 101fb2a0f;  */

void FUN_101fb29e8(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 101fb2a10; end: 101fb2a13;  */

void FUN_101fb2a10(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101fb2a14; end: 101fb2b63;  */

/* WARNING: Possible PIC construction at 0x000101fb2aec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb2afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb2b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb2b1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb2b2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb2b3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb2b30) */
/* WARNING: Removing unreachable block (ram,0x000101fb2b20) */
/* WARNING: Removing unreachable block (ram,0x000101fb2b10) */
/* WARNING: Removing unreachable block (ram,0x000101fb2b00) */
/* WARNING: Removing unreachable block (ram,0x000101fb2af0) */
/* WARNING: Removing unreachable block (ram,0x000101fb2b40) */

void FUN_101fb2a14(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1104b2088;
  func_0x000107c613fc(&UNK_1104b2088,0x70,7);
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
  uVar2 = 0x112e4ab20;
  func_0x0001000285a8(0x112e4ab20,&UNK_10da43260);
  func_0x000107c613fc();
  uVar3 = 0x101fb2ff4;
  func_0x0001000841fc(0x101fb2ff4,puVar1,uVar2);
  func_0x000100084214(&UNK_10da43220,0x39,2);
  *param_1 = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101fb2b64; end: 101fb2b9f;  */

void FUN_101fb2b64(void)

{
  long unaff_x20;
  
  FUN_101fb2a14(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Entry: 101fb2ba0; end: 101fb2baf;  */

undefined1  [16] FUN_101fb2ba0(void)

{
  return ZEXT816(0x1104b2068);
}



/* Entry: 101fb2bb0; end: 101fb2f77;  */

void FUN_101fb2bb0(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uStack_68;
  
  uVar8 = *param_2;
  func_0x0001000285a8(0x112e4ab28,&UNK_10da43268);
  puVar1 = &uStack_68;
  uStack_68 = uVar8;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_101fb49a4();
  func_0x000100082720("BitmojiFriendProfileSharingScopeGraphBridgeServicesServiceProvider",0x42,2);
  func_0x0001000285a8(0x112e4ab30,&UNK_10da43270);
  puVar3 = &UNK_1104b20b0;
  func_0x000107c613fc(&UNK_1104b20b0,0x78,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  *(undefined8 *)(puVar3 + 0x28) = param_5;
  *(undefined8 *)(puVar3 + 0x30) = param_6;
  *(undefined8 *)(puVar3 + 0x38) = param_7;
  *(undefined8 *)(puVar3 + 0x40) = param_8;
  *(undefined8 *)(puVar3 + 0x48) = param_9;
  *(undefined8 *)(puVar3 + 0x50) = param_10;
  *(undefined8 *)(puVar3 + 0x58) = param_11;
  *(undefined8 *)(puVar3 + 0x60) = param_12;
  *(undefined8 *)(puVar3 + 0x68) = param_13;
  *(undefined8 *)(puVar3 + 0x70) = param_14;
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
  uVar8 = 0x101fb3034;
  func_0x0001000823a8(0x101fb3034,puVar3);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeEntryPointWrapperServiceProvider",0x42,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_101fb27d4;
  func_0x0001000823a8(FUN_101fb27d4,0);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopedServicesCleanupRelayServiceProvider",0x46,
                      2);
  func_0x0001000285a8(0x112e4ab38,&UNK_10da43280);
  puVar3 = &UNK_1104b20d8;
  func_0x000107c613fc(&UNK_1104b20d8,0x30,7);
  *(undefined8 **)(puVar3 + 0x10) = puVar1;
  *(undefined8 **)(puVar3 + 0x18) = puVar2;
  *(undefined8 *)(puVar3 + 0x20) = uVar8;
  *(code **)(puVar3 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar2);
  func_0x000107c6157c(uVar8);
  func_0x000107c6157c(pcVar4);
  pcVar5 = FUN_101fb3070;
  func_0x0001000823a8(FUN_101fb3070,puVar3);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  func_0x0001000285a8(0x112e4aab8,&UNK_10da42fa0);
  func_0x000107c6157c(pcVar5);
  uVar6 = 0x101fb307c;
  func_0x0001000823a8(0x101fb307c,pcVar5);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeInitializationServiceProvider",0x3f,2);
  func_0x0001000285a8(0x112e4aaa8,&UNK_10da42f90);
  func_0x000107c6157c(uVar6);
  uVar7 = 0x101fb3084;
  func_0x0001000823a8(0x101fb3084,uVar6);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopedServicesServiceProvider",0x3a,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar3 = &UNK_1104b2100;
  func_0x000107c613fc(&UNK_1104b2100,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(code **)(puVar3 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x101fb308c;
  func_0x0001000823a8(0x101fb308c,puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(uVar8);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(pcVar5);
  func_0x000107c61574(uVar6);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeEntryPointProvider",0x34,2);
  *param_1 = uVar7;
  return;
}



/* Entry: 101fb2f78; end: 101fb306f;  */

void FUN_101fb2f78(void)

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
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fb3070; end: 101fb3093;  */

void FUN_101fb3070(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fb4160(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  func_0x0001000a7f38("SCBitmojiFriendProfileSharingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb3094; end: 101fb3f07;  */

void FUN_101fb3094(long *param_1,long param_2)

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
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
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
  FUN_101fb40b0();
  func_0x000107c613fc();
  *(undefined8 *)(param_2 + 0x18) = uStack_78;
  *(undefined8 *)(param_2 + 0x20) = uStack_80;
  *(undefined8 *)(param_2 + 0x28) = uStack_88;
  *(undefined8 *)(param_2 + 0x30) = uStack_90;
  *(undefined8 *)(param_2 + 0x38) = uStack_98;
  *(undefined8 *)(param_2 + 0x40) = uStack_a0;
  *(undefined8 *)(param_2 + 0x48) = uStack_a8;
  *(undefined8 *)(param_2 + 0x50) = uStack_b0;
  *(undefined8 *)(param_2 + 0x58) = uStack_b8;
  *(undefined8 *)(param_2 + 0x60) = uStack_c0;
  *(undefined8 *)(param_2 + 0x68) = uStack_c8;
  *(undefined8 *)(param_2 + 0x70) = uStack_d0;
  puVar1 = PTR_PTR_1126a9cd8;
  func_0x000107c610f8();
  uVar2 = uStack_78;
  func_0x000107c61174();
  uVar3 = uStack_80;
  func_0x000107c61174();
  uVar4 = uStack_88;
  func_0x000107c61174();
  uVar5 = uStack_90;
  func_0x000107c61174();
  uVar6 = uStack_98;
  func_0x000107c61174();
  uVar7 = uStack_a0;
  func_0x000107c61174();
  uVar8 = uStack_a8;
  func_0x000107c61174(uStack_a8);
  uVar9 = uStack_b0;
  func_0x000107c61174();
  uVar10 = uStack_b8;
  func_0x000107c61174();
  uVar11 = uStack_c0;
  func_0x000107c61174(uStack_c0);
  uVar12 = uStack_c8;
  func_0x000107c61174();
  uVar13 = uStack_d0;
  func_0x000107c61174();
  func_0x000107c453e4();
  *(undefined **)(param_2 + 0x10) = puVar1;
  func_0x000107c61174();
  uVar14 = auStack_70[0];
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010f04e750);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar14);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef113a0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010ef19d60);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd00000000000001c;
  func_0x000107c5fadc(0xd00000000000001c,0x800000010ef9e350);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174(puVar1);
  uVar15 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef19650);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar5);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010ef10a10);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1a230);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar7);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000015;
  func_0x000107c5fadc(0xd000000000000015,0x800000010ef1dff0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar8);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000019;
  func_0x000107c5fadc(0xd000000000000019,0x800000010ef2d2e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef134e0);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar10);
  func_0x000107c61170(uVar15);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd000000000000021;
  func_0x000107c5fadc(0xd000000000000021,0x800000010f01a160);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar11);
  func_0x000107c61170(uVar15);
  uVar16 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = 0xd00000000000001d;
  func_0x000107c5fadc(0xd00000000000001d,0x800000010ef1a250);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar12);
  func_0x000107c61170(uVar15);
  func_0x000107c61174(uVar13);
  func_0x000107c61174(uVar16);
  uVar15 = 0xd00000000000001b;
  func_0x000107c5fadc(0xd00000000000001b,0x800000010ef28cf0);
  func_0x000107c5a49c(uVar16);
  func_0x000107c61170(uVar16);
  func_0x000107c61170(uVar13);
  func_0x000107c61170(uVar15);
  func_0x000107c3e740(uVar16);
  func_0x000107c61170(uVar14);
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
  *param_1 = param_2;
  return;
}



/* Entry: 101fb3f08; end: 101fb3fa3;  */

void FUN_101fb3f08(void)

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
  return;
}



/* Entry: 101fb3fa4; end: 101fb3fab;  */

undefined8 FUN_101fb3fa4(void)

{
  return 0x1b;
}



/* Entry: 101fb3fac; end: 101fb402f;  */

void FUN_101fb3fac(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x101fb40f0,param_2,FUN_101fb40f4,param_2,FUN_101fb411c,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 101fb4030; end: 101fb407f;  */

undefined8 FUN_101fb4030(void)

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



/* Entry: 101fb4080; end: 101fb40af;  */

undefined ** FUN_101fb4080(void)

{
  return &PTR_DAT_113066808;
}



/* Entry: 101fb40b0; end: 101fb40cf;  */

void FUN_101fb40b0(void)

{
  func_0x000107c61168(&PTR_PTR_112e4aba8);
  return;
}



/* Entry: 101fb40d0; end: 101fb40f3;  */

undefined1  [16] FUN_101fb40d0(void)

{
  return ZEXT816(0x1104b2158);
}



/* Entry: 101fb40f4; end: 101fb411b;  */

void FUN_101fb40f4(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 101fb411c; end: 101fb4123;  */

undefined8 FUN_101fb411c(void)

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



/* Entry: 101fb4124; end: 101fb415f;  */

void FUN_101fb4124(undefined8 *param_1,undefined8 param_2)

{
  FUN_101fb4160();
  func_0x0001000a7f38("SCBitmojiFriendProfileSharingScopeInitializationPluginRegistryServiceProvider"
                      ,0x4d,2);
  *param_1 = param_2;
  return;
}



/* Entry: 101fb4160; end: 101fb434b;  */

void FUN_101fb4160(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074cfd8;
  ppuVar4 = &PTR_DAT_113066808;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_1104b21a8;
  func_0x000107c613fc(&UNK_1104b21a8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112e4ac68;
  func_0x0001000285a8(0x112e4ac68,&UNK_10da43448);
  func_0x0001000a6ee8(&UNK_1104b23b8,
                      "BitmojiFriendProfileSharingScopeGraphBridgeScopeInitializationPluginKey",0x47
                      ,2,FUN_101fb434c,puVar2,uVar3,&UNK_1104b23b8,&PTR_DAT_112e4acf8);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_1104b2158,
                      "SCBitmojiFriendProfileSharingScopeEntryPointWrapperScopeInitializationPluginKey"
                      ,0x4f,2,FUN_101fb4400,param_3,uVar3,&UNK_1104b2158,&PTR_DAT_112e4ab40);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_1104b21d0;
  func_0x000107c613fc(&UNK_1104b21d0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1104b1f78,
                      "SCBitmojiFriendProfileSharingScopedServicesScopeInitializationPluginKey",0x47
                      ,2,FUN_101fb44b0,puVar2,uVar3,&UNK_1104b1f78,&PTR_DAT_112e4aac0);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112e4ac70;
  func_0x0001000285a8(0x112e4ac70,&UNK_10da43450);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}



/* Entry: 101fb434c; end: 101fb438b;  */

void FUN_101fb434c(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_101fb4a88(uVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000100082720("BitmojiFriendProfileSharingScopeGraphBridgeScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb438c; end: 101fb43ff;  */

void FUN_101fb438c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c(param_3);
  uVar1 = 0x101fb44ec;
  func_0x0001000823a8(0x101fb44ec,param_3);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb4400; end: 101fb4407;  */

void FUN_101fb4400(undefined8 *param_1)

{
  undefined8 uVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  func_0x000107c6157c();
  uVar1 = 0x101fb44ec;
  func_0x0001000823a8();
  func_0x000100082720("SCBitmojiFriendProfileSharingScopeEntryPointWrapperScopeInitializationPluginProvider"
                      ,0x54,2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101fb4408; end: 101fb44af;  */

void FUN_101fb4408(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b21f8;
  func_0x000107c613fc(&UNK_1104b21f8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  pcVar2 = FUN_101fb44e4;
  func_0x0001000823a8(FUN_101fb44e4,puVar1);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar2;
  return;
}



/* Entry: 101fb44b0; end: 101fb44b7;  */

void FUN_101fb44b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar3 = &UNK_1104b21f8;
  func_0x000107c613fc(&UNK_1104b21f8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar2);
  pcVar4 = FUN_101fb44e4;
  func_0x0001000823a8(FUN_101fb44e4,puVar3);
  func_0x000100082720("SCBitmojiFriendProfileSharingScopedServicesScopeInitializationPluginProvider"
                      ,0x4c,2);
  *param_1 = pcVar4;
  return;
}



/* Entry: 101fb44b8; end: 101fb44e3;  */

void FUN_101fb44b8(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101fb44e4; end: 101fb44f3;  */

void FUN_101fb44e4(undefined8 *param_1)

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
  puVar1 = &UNK_1104b2000;
  func_0x000107c613fc(&UNK_1104b2000,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_101fb29e8;
  func_0x00010058fa64(FUN_101fb29e8,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fb44f4; end: 101fb457b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fb44f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar3 = auStack_40;
  func_0x000107c610f8();
  lVar2 = unaff_x20;
  FUN_101fb48b4();
  if (lVar2 != 0) {
    *(long *)(unaff_x20 + _DAT_112e4ac78) = lVar2;
    *(undefined8 *)(unaff_x20 + _DAT_112e4ac80) = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb457c);
  (*pcVar1)();
}



/* Entry: 101fb457c; end: 101fb45db; -[_TtC43BitmojiFriendProfileSharingScopeGraphBridge58BitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint init] */

void FUN_101fb457c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiFriendProfileSharingScopeGraphBridge.BitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb45a8);
  (*pcVar1)();
}



/* Entry: 101fb45dc; end: 101fb4613; -[_TtC43BitmojiFriendProfileSharingScopeGraphBridge58BitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000101fb45f8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb45fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb45dc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4ac78));
  return;
}



/* Entry: 101fb4614; end: 101fb463b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4614(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bf9d670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(*unaff_x20 + _DAT_112e4ac80),PTR_s_exposeServices__1125c4f40,
             *(undefined8 *)(*unaff_x20 + _DAT_112e4ac78));
  return;
}



/* Entry: 101fb463c; end: 101fb465b;  */

void FUN_101fb463c(void)

{
  func_0x000107c61168(&PTR_PTR_112811050);
  return;
}



/* Entry: 101fb465c; end: 101fb46e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_101fb465c(undefined8 param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_40 [8];
  
  puVar4 = auStack_40;
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112e4acb0) = 0;
  lVar3 = unaff_x20;
  func_0x000100a3dbac();
  if (lVar3 != 0) {
    plVar1 = (long *)(unaff_x20 + _DAT_112e4acb8);
    *plVar1 = lVar3;
    plVar1[1] = param_2;
    func_0x000107c61154(auStack_40,PTR_s_init_1125d9248);
    func_0x000107c61170(param_1);
    return puVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101fb46e4);
  (*pcVar2)();
}



/* Entry: 101fb46e4; end: 101fb47cb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101fb46e4(void)

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
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4acb0);
  *(undefined **)(unaff_x20 + _DAT_112e4acb0) = puVar2;
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e4acb8);
  lVar1 = ((undefined8 *)(unaff_x20 + _DAT_112e4acb8))[1];
  func_0x000107c614f0(uVar4);
  puVar3 = &UNK_1104b2318;
  func_0x000107c613fc(&UNK_1104b2318,0x18,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  pcVar5 = *(code **)(lVar1 + 8);
  func_0x000107c61174(puVar2);
  (*pcVar5)(0x101fb47d0,puVar3,uVar4,lVar1);
  func_0x000107c61574(puVar3);
  puVar3 = puVar2;
  func_0x000107c4f3ec(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 101fb47cc; end: 101fb47d7;  */

void FUN_101fb47cc(undefined8 param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bfaf690. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)(param_1,PTR_s_finish_1125c9748);
  return;
}



/* Entry: 101fb47d8; end: 101fb4837; -[_TtC43BitmojiFriendProfileSharingScopeGraphBridge58SCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint init] */

void FUN_101fb47d8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("BitmojiFriendProfileSharingScopeGraphBridge.SCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint"
                      ,0x66,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb4804);
  (*pcVar1)();
}



/* Entry: 101fb4838; end: 101fb486f; -[_TtC43BitmojiFriendProfileSharingScopeGraphBridge58SCBitmojiFriendProfileSharingScopedServicesSaberEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4838(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112e4acb8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112e4acb0));
  return;
}



/* Entry: 101fb4870; end: 101fb4873;  */

void FUN_101fb4870(void)

{
  return;
}



/* Entry: 101fb4874; end: 101fb4893;  */

void FUN_101fb4874(void)

{
  FUN_101fb46e4();
  return;
}



/* Entry: 101fb4894; end: 101fb48b3;  */

void FUN_101fb4894(void)

{
  func_0x000107c61168(&PTR_PTR_112811118);
  return;
}



/* Entry: 101fb48b4; end: 101fb4983;  */

undefined8 FUN_101fb48b4(void)

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
  
  func_0x000107c61428(0x112e4ace8,&uStack_40,0x20,0);
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
    FUN_101fb4984();
    puVar2 = &uStack_68;
    func_0x000107c6147c(puVar2,&uStack_40,PTR___sypN_11034f1a8 + 8,puVar1,6);
    if ((int)puVar2 == 0) {
      uStack_68 = 0;
    }
  }
  return uStack_68;
}



/* Entry: 101fb4984; end: 101fb49a3;  */

void FUN_101fb4984(void)

{
  func_0x000107c61168(&PTR_PTR_1128111e0);
  return;
}



/* Entry: 101fb49a4; end: 101fb4a0f;  */

void FUN_101fb49a4(void)

{
  func_0x0001000285a8(0x112e4acf0,&UNK_10da43538);
  func_0x0001000823a8(0x101fb49e4,0);
  return;
}



/* Entry: 101fb4a10; end: 101fb4a4b; -[_TtC43BitmojiFriendProfileSharingScopeGraphBridge51BitmojiFriendProfileSharingScopeGraphBridgeServices init] */

void FUN_101fb4a10(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101fb4a4c; end: 101fb4a7f;  */

void FUN_101fb4a4c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101fb4a80; end: 101fb4a87;  */

undefined8 FUN_101fb4a80(void)

{
  return 0x1b;
}



/* Entry: 101fb4a88; end: 101fb4bff;  */

void FUN_101fb4a88(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112d9d250,&UNK_10d93d820);
  puVar1 = &UNK_1104b2360;
  func_0x000107c613fc(&UNK_1104b2360,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x0001000823a8(FUN_101fb4c00,puVar1);
  return;
}



/* Entry: 101fb4c00; end: 101fb4c07;  */

void FUN_101fb4c00(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 auStack_50 [3];
  undefined8 uStack_38;
  
  func_0x000100083b20(auStack_50,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x000100083b20(&uStack_38);
  func_0x000107c61428(0x112e4ace8,auStack_50,0x20,0);
  uVar1 = uStack_38;
  func_0x000107c61174(uStack_38);
  func_0x000107c61188(auStack_50[0],0x112e4ace8,uVar1,1);
  func_0x000107c614a8(auStack_50);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1104b23f8;
  func_0x000107c613fc(&UNK_1104b23f8,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = auStack_50[0];
  uVar3 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  uVar1 = 0x101fb4cb4;
  func_0x00010058fa64(0x101fb4cb4,puVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 101fb4c08; end: 101fb4c63;  */

void FUN_101fb4c08(undefined8 param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(0x112e4ace8,auStack_38,0x20,0);
  func_0x000107c61188(param_1,0x112e4ace8,0,1);
  func_0x000107c614a8(auStack_38);
  return;
}



/* Entry: 101fb4c64; end: 101fb4cbb;  */

undefined ** FUN_101fb4c64(void)

{
  return &PTR_DAT_113066808;
}



/* Entry: 101fb4cbc; end: 101fb4d03; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4cbc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4ad48;
  func_0x000107c61428(param_1 + _DAT_112e4ad48,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101fb4d04; end: 101fb4d5b; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4d04(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4ad48;
  func_0x000107c61428(param_1 + _DAT_112e4ad48,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101fb4d5c; end: 101fb4da3; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint bitmojiFriendProfileSharingScopeGraphBridgeServicesExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4d5c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112e4ad50;
  func_0x000107c61428(param_1 + _DAT_112e4ad50,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101fb4da4; end: 101fb4e07; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint setBitmojiFriendProfileSharingScopeGraphBridgeServicesExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4da4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112e4ad50;
  func_0x000107c61428(param_1 + _DAT_112e4ad50,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101fb4e08; end: 101fb4f3b;  */

/* WARNING: Possible PIC construction at 0x000101fb4ec0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb4edc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101fb4ef8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101fb4ec4) */
/* WARNING: Removing unreachable block (ram,0x000101fb4ee0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101fb4e08(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  long lStack_60;
  long lStack_58;
  
  lVar2 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar2 == 0) {
    return;
  }
  func_0x000107c3e9c8();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    lVar3 = 0;
    FUN_101fb463c();
    lVar4 = lVar3;
    func_0x000107c610f8();
    func_0x000107c61174();
    func_0x000107c61174();
    lVar5 = lVar2;
    FUN_101fb48b4();
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101fb4f3c);
      (*pcVar1)();
    }
    *(long *)(lVar4 + _DAT_112e4ac78) = lVar5;
    *(long *)(lVar4 + _DAT_112e4ac80) = unaff_x20;
    lStack_60 = lVar4;
    lStack_58 = lVar3;
    func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 101fb4f3c; end: 101fb4f63; -[SCBitmojiFriendProfileSharingScopeGraphBridgeSaberEntryPoint begin] */

void FUN_101fb4f3c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101fb4e08();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


