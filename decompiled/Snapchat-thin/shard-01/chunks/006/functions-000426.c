/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1012cf798; end: 1012cf79f;  */

undefined8 FUN_1012cf798(void)

{
  return 0;
}



/* Entry: 1012cf7a0; end: 1012cf7bf;  */

void FUN_1012cf7a0(void)

{
  func_0x000107c61168(&PTR_PTR_112d70060);
  return;
}



/* Entry: 1012cf7c0; end: 1012cf7fb;  */

void FUN_1012cf7c0(void)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    pcVar3 = "onTrayDismiss()";
    func_0x0001000c10c0("onTrayDismiss()");
    func_0x000107c61180();
    uStack_58 = 0x1012cf7c8;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11039dcd8;
    ppuVar4 = &puStack_78;
    lStack_50 = lVar2;
    func_0x000107c60bc4(ppuVar4);
    lVar1 = lStack_50;
    func_0x000107c6157c(lVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c4e590(pcVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(lVar2);
    func_0x000107c615e8(pcVar3);
  }
  return;
}



/* Entry: 1012cf7fc; end: 1012cf95f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_1012cf7fc(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  ulong uVar5;
  long unaff_x20;
  uint uVar6;
  
  if ((*(byte *)(unaff_x20 + _DAT_112d701f8) & 1) == 0) {
    lVar1 = *(long *)(unaff_x20 + _DAT_112d70108);
    lVar2 = ((long *)(unaff_x20 + _DAT_112d70108))[1];
    uVar6 = (uint)*(byte *)(unaff_x20 + _DAT_112d70208);
    uVar5 = 0x49464f52505f594d;
    if (lVar1 != 0x49464f52505f594d || lVar2 != -0x10b3b3b6afa0bab4) {
      bVar3 = *(byte *)(unaff_x20 + _DAT_112d70200);
      func_0x000107c605b8(0x49464f52505f594d,0xef4c4c49505f454c,lVar1,lVar2,0);
      if (((((uVar5 & 1) == 0) &&
           (uVar5 = 0, lVar1 != 0x4b4e494c50454544 || lVar2 != -0x1800000000000000)) &&
          (func_0x000107c605b8(0x4b4e494c50454544,0xe800000000000000,lVar1,lVar2,0),
          (uVar5 & 1) == 0)) && (lVar1 != -0x2ffffffffffffff0 || lVar2 != -0x7ffffffef10cbb90)) {
        uVar5 = 0;
        func_0x000107c605b8(0xd000000000000010,0x800000010ef34470,lVar1,lVar2,0);
        if (((uVar5 & 1) == 0) &&
           ((uVar4 = 0x13, lVar1 != -0x2fffffffffffffed ||
            (uVar6 = (uint)bVar3, lVar2 != -0x7ffffffef10cbb50)))) {
          func_0x000107c605b8(0xd000000000000013,0x800000010ef344b0,lVar1,lVar2,0);
          uVar6 = uVar4 & bVar3;
        }
      }
    }
  }
  else {
    uVar6 = 0;
  }
  return uVar6 & 1;
}



/* Entry: 1012cf960; end: 1012cf987; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController initWithCoder:] */

void FUN_1012cf960(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  FUN_1012d32ec();
  return;
}



/* Entry: 1012cf988; end: 1012d023b;  */

/* WARNING: Possible PIC construction at 0x0001012cfad4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfb00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfb2c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfb68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfba4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfbe0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfc08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfc3c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfc68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfc94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfcd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfd0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfd48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfd84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfdc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfdfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfe38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfe74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfeb0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfeec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cff28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cff64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cff8c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cffc4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012cfff8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d0034: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d01b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d0208: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d0218: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d020c) */
/* WARNING: Removing unreachable block (ram,0x0001012d01bc) */
/* WARNING: Removing unreachable block (ram,0x0001012d0038) */
/* WARNING: Removing unreachable block (ram,0x0001012cfffc) */
/* WARNING: Removing unreachable block (ram,0x0001012cffc8) */
/* WARNING: Removing unreachable block (ram,0x0001012cff90) */
/* WARNING: Removing unreachable block (ram,0x0001012cff68) */
/* WARNING: Removing unreachable block (ram,0x0001012cff2c) */
/* WARNING: Removing unreachable block (ram,0x0001012cff50) */
/* WARNING: Removing unreachable block (ram,0x0001012cff40) */
/* WARNING: Removing unreachable block (ram,0x0001012cff54) */
/* WARNING: Removing unreachable block (ram,0x0001012cfef0) */
/* WARNING: Removing unreachable block (ram,0x0001012cff14) */
/* WARNING: Removing unreachable block (ram,0x0001012cff04) */
/* WARNING: Removing unreachable block (ram,0x0001012cff18) */
/* WARNING: Removing unreachable block (ram,0x0001012cfeb4) */
/* WARNING: Removing unreachable block (ram,0x0001012cfed8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfec8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfedc) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe78) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe9c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe8c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfea0) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe3c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe60) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe50) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe64) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe00) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe24) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe14) */
/* WARNING: Removing unreachable block (ram,0x0001012cfe28) */
/* WARNING: Removing unreachable block (ram,0x0001012cfdc4) */
/* WARNING: Removing unreachable block (ram,0x0001012cfde8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfdd8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfdec) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd88) */
/* WARNING: Removing unreachable block (ram,0x0001012cfdac) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd9c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfdb0) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd4c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd70) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd60) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd74) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd10) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd34) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd24) */
/* WARNING: Removing unreachable block (ram,0x0001012cfd38) */
/* WARNING: Removing unreachable block (ram,0x0001012cfcd4) */
/* WARNING: Removing unreachable block (ram,0x0001012cfcf8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfce8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfcfc) */
/* WARNING: Removing unreachable block (ram,0x0001012cfc98) */
/* WARNING: Removing unreachable block (ram,0x0001012cfcbc) */
/* WARNING: Removing unreachable block (ram,0x0001012cfcac) */
/* WARNING: Removing unreachable block (ram,0x0001012cfcc0) */
/* WARNING: Removing unreachable block (ram,0x0001012cfc6c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfc40) */
/* WARNING: Removing unreachable block (ram,0x0001012cfc0c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfbe4) */
/* WARNING: Removing unreachable block (ram,0x0001012cfba8) */
/* WARNING: Removing unreachable block (ram,0x0001012cfbcc) */
/* WARNING: Removing unreachable block (ram,0x0001012cfbbc) */
/* WARNING: Removing unreachable block (ram,0x0001012cfbd0) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb6c) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb90) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb80) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb94) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb30) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb54) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb44) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb58) */
/* WARNING: Removing unreachable block (ram,0x0001012cfb04) */
/* WARNING: Removing unreachable block (ram,0x0001012cfad8) */
/* WARNING: Removing unreachable block (ram,0x0001012d021c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012cf988(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lVar2 = *(long *)(unaff_x20 + _DAT_112d700d0);
  func_0x000107c509b4();
  func_0x000107c61180();
  if (lVar2 == 0) {
    puVar5 = PTR__OBJC_CLASS___UIView_1126aec20;
    func_0x000107c610f8(PTR__OBJC_CLASS___UIView_1126aec20);
    func_0x000107c453e4();
    func_0x000107c5a568();
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d70210);
    uVar6 = puVar1[1];
    uVar8 = puVar1[1];
    uVar7 = *puVar1;
    puVar3 = PTR_PTR_1126a6938;
    func_0x000107c610f8(PTR_PTR_1126a6938);
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    puStack_80 = &UNK_1000f6b44;
    puStack_78 = &UNK_11039e050;
    ppuVar4 = &puStack_90;
    uStack_70 = uVar7;
    uStack_68 = uVar8;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c6157c(uVar6);
    func_0x000107c47bfc(puVar3);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(uStack_68);
    if (((undefined8 *)(unaff_x20 + _DAT_112d70100))[1] == 0) {
      puVar5 = (undefined *)0x0;
    }
    else {
      puVar5 = *(undefined **)(unaff_x20 + _DAT_112d70100);
      func_0x000107c5fadc(puVar5);
    }
    func_0x000107c54a50(puVar3);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar5);
  return;
}



/* Entry: 1012d023c; end: 1012d031f;  */

void FUN_1012d023c(long param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = &UNK_11039e178;
    func_0x000107c613fc(&UNK_11039e178,0x18,7);
    *(long *)(puVar1 + 0x10) = param_1;
    uStack_58 = 0x1012d3f90;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11039e190;
    ppuVar2 = &puStack_78;
    puStack_50 = puVar1;
    func_0x000107c60bc4(ppuVar2);
    puVar1 = puStack_50;
    func_0x000107c61174(param_1);
    func_0x000107c61574(puVar1);
    func_0x0001000d76cc(&UNK_10d9316b0,ppuVar2);
    func_0x000107c60bd0(ppuVar2);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012d0320; end: 1012d0383;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d0320(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    func_0x0001012d19e4(*(undefined8 *)(param_1 + _DAT_112d70120),
                        ((undefined8 *)(param_1 + _DAT_112d70120))[1]);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012d0384; end: 1012d03f3;  */

void FUN_1012d0384(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  if (param_3 != 0) {
    FUN_1012d03f4(param_1,param_2);
    func_0x000107c61170(param_3);
  }
  return;
}



/* Entry: 1012d03f4; end: 1012d06ef;  */

void FUN_1012d03f4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long lVar8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  long lStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  lVar1 = 0;
  func_0x000107c5eb08();
  lVar13 = *(long *)(lVar1 + -8);
  lStack_98 = lVar1;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar9 - extraout_x8_00;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar8 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  uVar10 = lVar11 - extraout_x12;
  func_0x000107c5edd0(lVar12,param_1,param_2);
  lVar1 = lVar12;
  (**(code **)(lVar8 + 0x30))(lVar12,1,lVar2);
  if ((int)lVar1 == 1) {
    FUN_1012d3dd0(lVar12,0x112d36580,&UNK_10d9016d0);
    return;
  }
  uVar3 = uVar10;
  (**(code **)(lVar8 + 0x20))(uVar10,lVar12,lVar2);
  func_0x000107c5edc8();
  if (lVar12 != 0) {
    if (uVar3 == 0x7370747468 && lVar12 == -0x1b00000000000000) {
      func_0x000107c6142c(lVar12);
    }
    else {
      func_0x000107c605b8();
      func_0x000107c6142c(lVar12);
      if ((uVar3 & 1) == 0) goto LAB_1012d06c0;
    }
    (**(code **)(lVar8 + 0x10))(lVar11,uVar10,lVar2);
    func_0x000107c5eaec(puVar9,0x404e000000000000,lVar11,0);
    func_0x000107c5eadc(0x4024000000000000);
    func_0x000107c5ead4(2);
    puVar4 = PTR__OBJC_CLASS___NSURLSession_1126c7fe8;
    func_0x000107c61168(PTR__OBJC_CLASS___NSURLSession_1126c7fe8);
    func_0x000107c5aa38();
    func_0x000107c61180();
    puVar5 = puVar4;
    func_0x000107c5eae0();
    puVar6 = &UNK_11039df20;
    func_0x000107c613fc(&UNK_11039df20,0x18,7);
    func_0x000107c61614(puVar6 + 0x10);
    uStack_70 = 0x1012d3eb4;
    puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_88 = 0x42000000;
    pcStack_80 = FUN_1012d0a0c;
    puStack_78 = &UNK_11039e0f0;
    ppuVar7 = &puStack_90;
    puStack_68 = puVar6;
    func_0x000107c60bc4(ppuVar7);
    func_0x000107c61574(puStack_68);
    puVar6 = puVar4;
    func_0x000107c412c4(puVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar7);
    func_0x000107c61170(puVar4);
    func_0x000107c61170(puVar5);
    func_0x000107c50714(puVar6);
    func_0x000107c61170(puVar6);
    (**(code **)(lVar13 + 8))(puVar9,lStack_98);
  }
LAB_1012d06c0:
  (**(code **)(lVar8 + 8))(uVar10,lVar2);
  return;
}



/* Entry: 1012d06f0; end: 1012d0717; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController loadView] */

void FUN_1012d06f0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012cf988();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012d0718; end: 1012d0803;  */

/* WARNING: Possible PIC construction at 0x0001012d0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d07c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d07ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d0774) */
/* WARNING: Removing unreachable block (ram,0x0001012d07b0) */
/* WARNING: Removing unreachable block (ram,0x0001012d0788) */
/* WARNING: Removing unreachable block (ram,0x0001012d07b4) */
/* WARNING: Removing unreachable block (ram,0x0001012d07c8) */
/* WARNING: Removing unreachable block (ram,0x0001012d07f0) */
/* WARNING: Removing unreachable block (ram,0x0001012d07dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d0718(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_PTR_1126a6930;
  func_0x000107c610f8(PTR_PTR_1126a6930);
  func_0x000107c453e4();
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c592f4(puVar1,param_2,puVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar2);
  return;
}



/* Entry: 1012d0804; end: 1012d0987;  */

/* WARNING: Possible PIC construction at 0x0001012d088c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d0918: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d0944: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d091c) */
/* WARNING: Removing unreachable block (ram,0x0001012d0890) */
/* WARNING: Removing unreachable block (ram,0x0001012d0894) */
/* WARNING: Removing unreachable block (ram,0x0001012d0960) */
/* WARNING: Removing unreachable block (ram,0x0001012d0968) */
/* WARNING: Removing unreachable block (ram,0x0001012d08a0) */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_1012d0804(ulong param_1,ulong param_2)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  
  if (0xe < param_2 >> 0x3c) {
    return;
  }
  puVar1 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIImage_1126aea68);
  func_0x00010006c00c(param_1,param_2);
  func_0x00010006c00c(param_1,param_2);
  uVar2 = param_1;
  func_0x000107c5ee20(param_1,param_2);
  func_0x000107c4635c(puVar1);
  func_0x000107c61170(uVar2);
  if (param_2 >> 0x3c < 0xf) {
    uVar3 = (uint)(param_2 >> 0x3e);
    if (uVar3 == 1) {
      param_1 = param_2 & 0x3fffffffffffffff;
    }
    else if (uVar3 != 2) {
      return;
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_release_11034f4c0)(param_1);
    return;
  }
  return;
}



/* Entry: 1012d0988; end: 1012d0a0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d0988(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + _DAT_112d700f0);
    uVar2 = puVar1[1];
    *puVar1 = param_2;
    puVar1[1] = param_3;
    func_0x000107c6142c(uVar2);
    func_0x000107c61434(param_3);
    FUN_1012d0718();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012d0a0c; end: 1012d0ee3;  */

void FUN_1012d0a0c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  if (param_2 == 0) {
    func_0x000107c6157c(uVar2);
    lVar6 = -0x1000000000000000;
  }
  else {
    lVar6 = param_2;
    func_0x000107c6157c(uVar2);
    lVar3 = param_2;
    func_0x000107c61174(param_2);
    func_0x000107c5ee30(param_2);
    func_0x000107c61170(lVar3);
  }
  uVar4 = param_3;
  func_0x000107c61174(param_3);
  uVar5 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(param_2,lVar6,param_3,param_4);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar5);
  func_0x0001000b44c0(param_2,lVar6);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1012d0ee4; end: 1012d0fd3;  */

long FUN_1012d0ee4(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  lVar3 = unaff_x20;
  func_0x000107c5de64();
  func_0x000107c61180();
  if (lVar3 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d0fd0);
    (*pcVar1)();
  }
  lVar2 = lVar3;
  func_0x000107c5e3f8();
  func_0x000107c61180();
  func_0x000107c61170(lVar3);
  lVar3 = lVar2;
  func_0x000107c5e400();
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  if (lVar3 == 0) {
    func_0x000107c4f090();
    func_0x000107c61180();
    if (unaff_x20 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = unaff_x20;
      func_0x000107c5de64();
      func_0x000107c61180();
      func_0x000107c61170(unaff_x20);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d0fd4);
        (*pcVar1)();
      }
      lVar2 = lVar3;
      func_0x000107c5e3f8(lVar3);
      func_0x000107c61180();
      func_0x000107c61170(lVar3);
      lVar3 = lVar2;
      func_0x000107c5e400(lVar2);
      func_0x000107c61180();
      func_0x000107c61170(lVar2);
    }
  }
  return lVar3;
}



/* Entry: 1012d0fd4; end: 1012d14f7;  */

/* WARNING: Possible PIC construction at 0x0001012d107c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d12c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d12d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d1320: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d1350: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d137c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d13b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d13f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d140c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d141c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d14a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d1420) */
/* WARNING: Removing unreachable block (ram,0x0001012d1410) */
/* WARNING: Removing unreachable block (ram,0x0001012d13fc) */
/* WARNING: Removing unreachable block (ram,0x0001012d1380) */
/* WARNING: Removing unreachable block (ram,0x0001012d13b8) */
/* WARNING: Removing unreachable block (ram,0x0001012d1388) */
/* WARNING: Removing unreachable block (ram,0x0001012d1354) */
/* WARNING: Removing unreachable block (ram,0x0001012d1324) */
/* WARNING: Removing unreachable block (ram,0x0001012d12d8) */
/* WARNING: Removing unreachable block (ram,0x0001012d12c8) */
/* WARNING: Removing unreachable block (ram,0x0001012d1080) */
/* WARNING: Removing unreachable block (ram,0x0001012d1218) */
/* WARNING: Removing unreachable block (ram,0x0001012d126c) */
/* WARNING: Removing unreachable block (ram,0x0001012d1274) */
/* WARNING: Removing unreachable block (ram,0x0001012d1220) */
/* WARNING: Removing unreachable block (ram,0x0001012d128c) */
/* WARNING: Removing unreachable block (ram,0x0001012d1134) */
/* WARNING: Removing unreachable block (ram,0x0001012d1260) */
/* WARNING: Removing unreachable block (ram,0x0001012d1268) */
/* WARNING: Removing unreachable block (ram,0x0001012d1138) */
/* WARNING: Removing unreachable block (ram,0x0001012d1168) */
/* WARNING: Removing unreachable block (ram,0x0001012d1170) */
/* WARNING: Removing unreachable block (ram,0x0001012d1290) */
/* WARNING: Removing unreachable block (ram,0x0001012d14a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d0fd4(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long alStack_78 [3];
  
  uVar7 = 0xea00000000004e45;
  uVar6 = 0x455243534c4c5546;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1012d0ee4();
  if (lVar3 == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d70218);
    uVar8 = 0xd000000000000018;
    func_0x000107c5fadc(0xd000000000000018,0x800000010ef34690);
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70108);
    func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d70108))[1]);
    alStack_78[0] = *(long *)(unaff_x20 + _DAT_112d70110);
    if (alStack_78[0] < 2) {
      if (alStack_78[0] == 0) {
        bVar2 = *(char *)(unaff_x20 + _DAT_112d701f8) == '\0';
        uVar6 = 0x54494e554d4d4f43;
        if (bVar2) {
          uVar6 = 0x544c5541464544;
        }
        uVar7 = 0xe900000000000059;
        if (bVar2) {
          uVar7 = 0xe700000000000000;
        }
      }
      else if (alStack_78[0] != 1) {
LAB_1012d14d4:
        func_0x000107c60614(&UNK_110731b98,alStack_78,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d14f8);
        (*pcVar1)();
      }
    }
    else {
      if (alStack_78[0] == 3) {
        uVar6 = 0x4f525f45524f5453;
        uVar7 = 0x455455;
      }
      else {
        if (alStack_78[0] != 2) goto LAB_1012d14d4;
        uVar6 = 0x4f4d5f45524f5453;
        uVar7 = 0x4c4144;
      }
      uVar7 = uVar7 | 0xeb00000000000000;
    }
    func_0x000107c5fadc(uVar6,uVar7);
    func_0x000107c6142c(uVar7);
    func_0x00010511ebcc(uVar5,uVar8,uVar4,uVar6,1);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112d700f8);
    *(long *)(unaff_x20 + _DAT_112d700f8) = lVar3;
    func_0x000107c61174();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar8);
  return;
}



/* Entry: 1012d14f8; end: 1012d157f; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController viewWillAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d14f8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewWillAppear__1126853f0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  func_0x0001012d0ad4();
  if ((*(long *)(param_1 + _DAT_112d700d8) == 0) && (FUN_1012d0ee4(), plVar3 != (long *)0x0)) {
    func_0x000107c61170();
    FUN_1012d0fd4();
  }
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012d1580; end: 1012d1967;  */

/* WARNING: Possible PIC construction at 0x0001012d1668: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d1678: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d1790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d193c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d1794) */
/* WARNING: Removing unreachable block (ram,0x0001012d167c) */
/* WARNING: Removing unreachable block (ram,0x0001012d166c) */
/* WARNING: Removing unreachable block (ram,0x0001012d1940) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d1580(void)

{
  undefined *puVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar6 = &puStack_80;
  ppuVar7 = &puStack_80;
  ppuVar8 = &puStack_80;
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  if ((*(byte *)(unaff_x20 + _DAT_112d70140) & 1) == 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112d70140) = 1;
    puVar9 = *(undefined **)(unaff_x20 + _DAT_112d70110);
    if ((undefined *)0x1 < puVar9) {
      if (puVar9 == (undefined *)0x3) {
        uVar11 = *(undefined8 *)(unaff_x20 + _DAT_112d70218);
        uVar10 = 0x706f5f6574756f72;
        func_0x000107c5fadc(0x706f5f6574756f72,0xec00000064656e65);
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70108);
        func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d70108))[1]);
        uVar5 = 0x4f525f45524f5453;
        func_0x000107c5fadc(0x4f525f45524f5453,0xeb00000000455455);
        func_0x00010511f0bc(uVar11,uVar10,uVar4,uVar5,1);
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__objc_release_11034d2d0)();
        return;
      }
      if (puVar9 != (undefined *)0x2) {
        puStack_80 = puVar9;
        func_0x000107c60614(&UNK_110731b98,&puStack_80,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1012d1968);
        (*pcVar2)();
      }
      *(undefined1 *)(unaff_x20 + _DAT_112d70158) = 1;
      if (*(char *)(unaff_x20 + _DAT_112d70148) == '\x01') {
        if (*(long *)(unaff_x20 + _DAT_112d70138) != 0) {
          func_0x000107c61174();
          lVar3 = unaff_x20;
          func_0x000107c4f078();
          func_0x000107c61180();
          if (lVar3 == 0) {
            puVar9 = &UNK_11039de30;
            func_0x000107c613fc(&UNK_11039de30,0x18,7);
            *(long *)(puVar9 + 0x10) = unaff_x20;
            puVar1 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_60 = 0x1012d3f50;
            puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_78 = 0x42000000;
            puStack_70 = &UNK_1000f6b44;
            puStack_68 = &UNK_11039de48;
            puStack_58 = puVar9;
            func_0x000107c60bc4(&puStack_80);
            puVar9 = puStack_58;
            func_0x000107c61174();
            func_0x000107c61574(puVar9);
            func_0x0001000d76cc(&UNK_10d9316b0,ppuVar7);
            func_0x000107c60bd0(ppuVar7);
            puVar9 = &UNK_11039de80;
            func_0x000107c613fc(&UNK_11039de80,0x18,7);
            *(long *)(puVar9 + 0x10) = unaff_x20;
            uStack_60 = 0x1012d3dc8;
            puStack_80 = puVar1;
            uStack_78 = 0x42000000;
            puStack_70 = &UNK_1000f6b44;
            puStack_68 = &UNK_11039de98;
            puStack_58 = puVar9;
            func_0x000107c60bc4(&puStack_80);
            puVar9 = puStack_58;
            func_0x000107c61174(unaff_x20);
            func_0x000107c61574(puVar9);
            func_0x000107c4f018(unaff_x20);
            func_0x000107c60bd0(ppuVar8);
          }
          goto code_r0x000107c61170;
        }
      }
      else if (*(char *)(unaff_x20 + _DAT_112d70150) == '\x01') {
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70128);
        uVar10 = ((undefined8 *)(unaff_x20 + _DAT_112d70128))[1];
        puVar9 = &UNK_11039dde0;
        func_0x000107c613fc(&UNK_11039dde0,0x30,7);
        *(undefined8 *)(puVar9 + 0x10) = uVar4;
        *(undefined8 *)(puVar9 + 0x18) = uVar10;
        *(long *)(puVar9 + 0x20) = unaff_x20;
        *(long *)(puVar9 + 0x28) = lVar3;
        uStack_60 = 0x1012d3f40;
        puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
        uStack_78 = 0x42000000;
        puStack_70 = &UNK_1000f6b44;
        puStack_68 = &UNK_11039ddf8;
        puStack_58 = puVar9;
        func_0x000107c60bc4(&puStack_80);
        puVar9 = puStack_58;
        func_0x000107c61174();
        func_0x000107c61434(uVar10);
        func_0x000107c61574(puVar9);
        func_0x0001000d76cc(&UNK_10d9316b0,ppuVar6);
        func_0x000107c60bd0(ppuVar6);
      }
    }
  }
  return;
}



/* Entry: 1012d1968; end: 1012d1b7f; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController viewDidAppear:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d1968(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lStack_40;
  long lStack_38;
  
  lVar2 = param_1;
  func_0x000107c614f0();
  puVar1 = PTR_s_viewDidAppear__112684bd0;
  lStack_40 = param_1;
  lStack_38 = lVar2;
  func_0x000107c61174();
  func_0x000107c61154(&lStack_40,puVar1,param_3);
  if (*(long *)(param_1 + _DAT_112d700d8) == 0) {
    FUN_1012d0fd4();
  }
  FUN_1012d1580();
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012d1b80; end: 1012d20ef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d1b80(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined **ppuVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_78,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    uVar13 = 0xea00000000004e45;
    uVar12 = 0x455243534c4c5546;
    if ((param_2 & 1) == 0) {
      *(undefined1 *)(param_1 + _DAT_112d70150) = 1;
      uVar5 = *(undefined8 *)(param_1 + _DAT_112d70218);
      func_0x000107c61174(uVar5);
      uVar6 = 0x6961665f64616f6c;
      func_0x000107c5fadc(0x6961665f64616f6c,0xeb0000000064656c);
      uVar7 = *(undefined8 *)(param_1 + _DAT_112d70108);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112d70108))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c6142c(uVar1);
      puVar11 = *(undefined **)(param_1 + _DAT_112d70110);
      if ((long)puVar11 < 2) {
        if (puVar11 == (undefined *)0x0) {
          bVar4 = *(char *)(param_1 + _DAT_112d701f8) == '\0';
          uVar12 = 0x54494e554d4d4f43;
          if (bVar4) {
            uVar12 = 0x544c5541464544;
          }
          uVar13 = 0xe900000000000059;
          if (bVar4) {
            uVar13 = 0xe700000000000000;
          }
        }
        else if (puVar11 != (undefined *)0x1) goto LAB_1012d20cc;
      }
      else {
        if (puVar11 == (undefined *)0x3) {
          uVar12 = 0x4f525f45524f5453;
          uVar13 = 0x455455;
        }
        else {
          if (puVar11 != (undefined *)0x2) goto LAB_1012d20cc;
          uVar12 = 0x4f4d5f45524f5453;
          uVar13 = 0x4c4144;
        }
        uVar13 = uVar13 | 0xeb00000000000000;
      }
      func_0x000107c5fadc(uVar12,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x00010511f0bc(uVar5,uVar6,uVar7,uVar12,1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar12);
      uVar12 = *(undefined8 *)(param_1 + _DAT_112d70138);
      *(undefined8 *)(param_1 + _DAT_112d70138) = 0;
      func_0x000107c61170(uVar12);
      if (*(char *)(param_1 + _DAT_112d70158) == '\x01') {
        uVar12 = *(undefined8 *)(param_1 + _DAT_112d70128);
        uVar7 = ((undefined8 *)(param_1 + _DAT_112d70128))[1];
        func_0x000107c61434(uVar7);
        func_0x0001012d19e4(uVar12,uVar7);
        func_0x000107c61170(param_1);
        func_0x000107c6142c(uVar7);
        return;
      }
    }
    else {
      *(undefined1 *)(param_1 + _DAT_112d70148) = 1;
      uVar5 = *(undefined8 *)(param_1 + _DAT_112d70218);
      func_0x000107c61174(uVar5);
      uVar6 = 0x6375735f64616f6c;
      func_0x000107c5fadc(0x6375735f64616f6c,0xec00000073736563);
      uVar7 = *(undefined8 *)(param_1 + _DAT_112d70108);
      uVar1 = ((undefined8 *)(param_1 + _DAT_112d70108))[1];
      func_0x000107c61434(uVar1);
      func_0x000107c5fadc(uVar7,uVar1);
      func_0x000107c6142c(uVar1);
      puVar11 = *(undefined **)(param_1 + _DAT_112d70110);
      if ((long)puVar11 < 2) {
        if (puVar11 == (undefined *)0x0) {
          bVar4 = *(char *)(param_1 + _DAT_112d701f8) == '\0';
          uVar12 = 0x54494e554d4d4f43;
          if (bVar4) {
            uVar12 = 0x544c5541464544;
          }
          uVar13 = 0xe900000000000059;
          if (bVar4) {
            uVar13 = 0xe700000000000000;
          }
        }
        else if (puVar11 != (undefined *)0x1) {
LAB_1012d20cc:
          puStack_a8 = puVar11;
          func_0x000107c60614(&UNK_110731b98,&puStack_a8,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d20f0);
          (*pcVar3)();
        }
      }
      else {
        if (puVar11 == (undefined *)0x3) {
          uVar12 = 0x4f525f45524f5453;
          uVar13 = 0x455455;
        }
        else {
          if (puVar11 != (undefined *)0x2) goto LAB_1012d20cc;
          uVar12 = 0x4f4d5f45524f5453;
          uVar13 = 0x4c4144;
        }
        uVar13 = uVar13 | 0xeb00000000000000;
      }
      func_0x000107c5fadc(uVar12,uVar13);
      func_0x000107c6142c(uVar13);
      func_0x00010511f0bc(uVar5,uVar6,uVar7,uVar12,1);
      func_0x000107c61170(uVar5);
      func_0x000107c61170(uVar6);
      func_0x000107c61170(uVar7);
      func_0x000107c61170(uVar12);
      if ((*(char *)(param_1 + _DAT_112d70158) == '\x01') &&
         (lVar8 = *(long *)(param_1 + _DAT_112d70138), lVar8 != 0)) {
        func_0x000107c61174();
        lVar9 = param_1;
        func_0x000107c4f078();
        func_0x000107c61180();
        if (lVar9 == 0) {
          puVar11 = &UNK_11039dfc0;
          func_0x000107c613fc(&UNK_11039dfc0,0x18,7);
          *(long *)(puVar11 + 0x10) = param_1;
          puVar2 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_88 = 0x1012d3f68;
          puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_11039dfd8;
          ppuVar10 = &puStack_a8;
          puStack_80 = puVar11;
          func_0x000107c60bc4(ppuVar10);
          puVar11 = puStack_80;
          func_0x000107c61174();
          func_0x000107c61574(puVar11);
          func_0x0001000d76cc(&UNK_10d9316b0,ppuVar10);
          func_0x000107c60bd0(ppuVar10);
          puVar11 = &UNK_11039e010;
          func_0x000107c613fc(&UNK_11039e010,0x18,7);
          *(long *)(puVar11 + 0x10) = param_1;
          uStack_88 = 0x1012d3f70;
          puStack_a8 = puVar2;
          uStack_a0 = 0x42000000;
          puStack_98 = &UNK_1000f6b44;
          puStack_90 = &UNK_11039e028;
          ppuVar10 = &puStack_a8;
          puStack_80 = puVar11;
          func_0x000107c60bc4(ppuVar10);
          puVar11 = puStack_80;
          func_0x000107c61174(param_1);
          func_0x000107c61574(puVar11);
          func_0x000107c4f018(param_1);
          func_0x000107c61170(param_1);
          func_0x000107c60bd0(ppuVar10);
          param_1 = lVar8;
        }
        else {
          func_0x000107c61170();
          func_0x000107c61170(lVar8);
        }
      }
    }
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 1012d20f0; end: 1012d22fb;  */

void FUN_1012d20f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1012d22fc; end: 1012d2467; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController viewWillDisappear:] */

void FUN_1012d22fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  ppuVar3 = &puStack_70;
  uVar1 = param_1;
  func_0x000107c614f0();
  puVar2 = PTR_s_viewWillDisappear__112685438;
  uStack_40 = param_1;
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x000107c61154(&uStack_40,puVar2,param_3);
  puVar2 = &UNK_11039dd40;
  func_0x000107c613fc(&UNK_11039dd40,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  pcStack_50 = FUN_1012d3d98;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_11039dd58;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar2 = puStack_48;
  func_0x000107c61174(param_1);
  func_0x000107c61574(puVar2);
  func_0x0001000d76cc(&UNK_10d9316b0,ppuVar3);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 1012d2468; end: 1012d28db;  */

void FUN_1012d2468(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  ulong uVar12;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar13;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  long lStack_70;
  long lStack_68;
  
  lVar2 = 0;
  uStack_90 = param_1;
  uStack_88 = param_2;
  uStack_80 = param_3;
  func_0x000107c5ec24();
  lStack_78 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_78 + 0x40));
  lVar3 = 0x112d36580;
  puStack_a0 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (long)(auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar3 = 0;
  func_0x000107c5ede0();
  lStack_70 = *(long *)(lVar3 + -8);
  lStack_68 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_70 + 0x40));
  lVar13 = lVar16 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0;
  lStack_a8 = lVar13;
  func_0x000107c5ebbc();
  lVar19 = *(long *)(lVar3 + -8);
  lStack_98 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar19 + 0x40));
  lVar13 = lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d4b5b0;
  func_0x0001000285a8(0x112d4b5b0,&UNK_10d912140);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar13 - extraout_x8_03;
  func_0x000107c5ec14(lVar15,0xd000000000000027,0x800000010ef34630);
  uVar4 = 0x112d70260;
  func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
  lVar17 = *(long *)(lVar19 + 0x48);
  uVar18 = (ulong)*(byte *)(lVar19 + 0x50) + 0x20 &
           ((ulong)*(byte *)(lVar19 + 0x50) ^ 0xffffffffffffffff);
  func_0x000107c613fc();
  *(undefined8 *)(uVar4 + 0x18) = 6;
  *(undefined8 *)(uVar4 + 0x10) = 3;
  lVar3 = uVar4 + uVar18;
  func_0x000107c5ebb0(lVar3,0x7470,0xe200000000000000,0x3436333830303231,0xe900000000000032);
  func_0x000107c5ebb0(lVar3 + lVar17,0x7463,0xe200000000000000,uStack_90,uStack_88);
  uVar5 = 0x746d;
  func_0x000107c5ebb0(lVar3 + lVar17 * 2,0x746d,0xe200000000000000,0x38,0xe100000000000000);
  FUN_1012cf7fc();
  uVar12 = uVar4;
  if ((uVar5 & 1) != 0) {
    func_0x000107c5ebb0(lVar13,0x64697070,0xe400000000000000,0xd000000000000024,0x800000010ef34660);
    uVar5 = *(ulong *)(uVar4 + 0x10);
    if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
      uVar12 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
      FUN_1012d3170(uVar12,uVar5 + 1,1,uVar4);
    }
    *(ulong *)(uVar12 + 0x10) = uVar5 + 1;
    (**(code **)(lVar19 + 0x20))(uVar12 + uVar18 + uVar5 * lVar17,lVar13,lStack_98);
  }
  lVar3 = lStack_78;
  pcVar14 = *(code **)(lStack_78 + 0x30);
  lVar17 = lVar15;
  (*pcVar14)(lVar15,1,lVar2);
  lVar13 = lStack_70;
  if ((int)lVar17 == 0) {
    func_0x000107c61434(uVar12);
    func_0x000107c5ebc8();
  }
  lVar17 = lVar15;
  (*pcVar14)(lVar15,1,lVar2);
  puVar1 = puStack_a0;
  if ((int)lVar17 == 0) {
    (**(code **)(lVar3 + 0x10))(puStack_a0,lVar15,lVar2);
    func_0x000107c5ebe8(lVar16);
    (**(code **)(lVar3 + 8))(puVar1,lVar2);
    lVar2 = lStack_68;
    lVar17 = lVar16;
    (**(code **)(lVar13 + 0x30))(lVar16,1,lStack_68);
    lVar3 = lStack_a8;
    if ((int)lVar17 != 1) {
      (**(code **)(lVar13 + 0x20))(lStack_a8,lVar16,lVar2);
      puVar6 = PTR__OBJC_CLASS___UIApplication_1126ae590;
      func_0x000107c61168(PTR__OBJC_CLASS___UIApplication_1126ae590);
      func_0x000107c5a9c4();
      func_0x000107c61180();
      puVar7 = puVar6;
      func_0x000107c5ed90();
      puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
      FUN_100dfa5c8(PTR___swiftEmptyArrayStorage_11034f1c8);
      uVar9 = 0;
      FUN_100dfa6ec(0);
      uVar10 = uVar9;
      FUN_100f33384();
      puVar11 = puVar8;
      func_0x000107c5f9dc(puVar8,uVar9,PTR___sypN_11034f1a8 + 8,uVar10);
      func_0x000107c6142c(puVar8);
      func_0x000107c4de70(puVar6);
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c61170(puVar11);
      (**(code **)(lVar13 + 8))(lVar3,lVar2);
      func_0x000107c6142c(uVar12);
      goto LAB_1012d27b4;
    }
  }
  else {
    (**(code **)(lVar13 + 0x38))(lVar16,1,1,lStack_68);
  }
  func_0x000107c6142c(uVar12);
  FUN_1012d3dd0(lVar16,0x112d36580,&UNK_10d9016d0);
LAB_1012d27b4:
  FUN_1012d3dd0(lVar15,0x112d4b5b0,&UNK_10d912140);
  return;
}



/* Entry: 1012d28dc; end: 1012d293b; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController initWithNibName:bundle:] */

void FUN_1012d28dc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SaturnUpsellTray.SaturnUpsellTrayViewController",0x2f,"init(nibName:bundle:)"
                      ,0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d2908);
  (*pcVar1)();
}



/* Entry: 1012d293c; end: 1012d2bd3; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d293c(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d700d0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d700d8));
  func_0x000107c61610(param_1 + _DAT_112d700e0);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d700f0 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d700f8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70100 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70108 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70118 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70120 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70128 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70130 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70138));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70160 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70168 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70170 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70180));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70188));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70190));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d70198 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701a0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701a8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701b0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701b8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701c0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701c8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701d0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701d8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701e0 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701e8 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d701f0 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d70210 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d70218));
  FUN_1012d3dd0(param_1 + _DAT_112d70220,0x112d373d8,&UNK_10d9014c0);
  return;
}



/* Entry: 1012d2bd4; end: 1012d2bdb;  */

void FUN_1012d2bd4(void)

{
  if (lRam0000000112d70250 != 0) {
    return;
  }
  func_0x000107c614fc(0,&DAT_10e62ccbc);
  return;
}



/* Entry: 1012d2bdc; end: 1012d2c13;  */

void FUN_1012d2bdc(undefined8 param_1)

{
  if (lRam0000000112d70250 != 0) {
    return;
  }
  func_0x000107c614fc(param_1,&DAT_10e62ccbc);
  return;
}



/* Entry: 1012d2c14; end: 1012d2d2f;  */

void FUN_1012d2c14(long param_1,ulong param_2)

{
  long lVar1;
  undefined *puStack_178;
  undefined *puStack_170;
  undefined *puStack_168;
  undefined *puStack_160;
  undefined *puStack_158;
  undefined *puStack_150;
  undefined *puStack_148;
  undefined *puStack_140;
  undefined *puStack_138;
  undefined *puStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined *puStack_118;
  undefined *puStack_110;
  undefined *puStack_108;
  undefined *puStack_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined *puStack_e8;
  undefined *puStack_e0;
  undefined *puStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  undefined *puStack_30;
  long lStack_28;
  
  puStack_178 = &UNK_10d9316f0;
  puStack_170 = &UNK_10d931708;
  puStack_168 = &UNK_10d931720;
  puStack_160 = &UNK_10d931738;
  puStack_158 = &UNK_10d931750;
  puStack_150 = &UNK_10d931708;
  puStack_148 = &UNK_10d931750;
  puStack_140 = &UNK_10d931768;
  puStack_138 = PTR___sBi64_WV_11034d670 + 0x40;
  puStack_130 = &UNK_10d931768;
  puStack_128 = &UNK_10d931768;
  puStack_120 = &UNK_10d931768;
  puStack_118 = &UNK_10d931768;
  puStack_110 = &UNK_10d931708;
  puStack_108 = &UNK_10d931738;
  puStack_100 = &UNK_10d931738;
  puStack_f8 = &UNK_10d931738;
  puStack_f0 = &UNK_10d931738;
  puStack_e8 = &UNK_10d931750;
  puStack_e0 = &UNK_10d931750;
  puStack_d8 = &UNK_10d931750;
  puStack_c8 = PTR___sBbWV_11034d660 + 0x40;
  puStack_b0 = &UNK_10d931750;
  puStack_a8 = &UNK_10d931750;
  puStack_a0 = &UNK_10d931750;
  puStack_98 = &UNK_10d931750;
  puStack_90 = &UNK_10d931750;
  puStack_88 = &UNK_10d931750;
  puStack_80 = &UNK_10d931750;
  puStack_78 = &UNK_10d931750;
  puStack_70 = &UNK_10d931750;
  puStack_68 = &UNK_10d931750;
  puStack_60 = &UNK_10d931750;
  puStack_58 = &UNK_10d931750;
  puStack_50 = &UNK_10d931738;
  puStack_48 = &UNK_10d931738;
  puStack_40 = &UNK_10d931738;
  puStack_38 = PTR___syycWV_11034f1c0 + 0x40;
  puStack_30 = PTR___sBOWV_11034d658 + 0x40;
  lVar1 = 0x13f;
  puStack_d0 = puStack_138;
  puStack_c0 = puStack_c8;
  puStack_b8 = puStack_c8;
  func_0x0001000776dc();
  if (param_2 < 0x40) {
    lStack_28 = *(long *)(lVar1 + -8) + 0x40;
    func_0x000107c61630(param_1,0x100,0x2b,&puStack_178,param_1 + 0x50);
  }
  return;
}



/* Entry: 1012d2d30; end: 1012d2d93; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController storeOverlay:willStartPresentation:] */

/* WARNING: Possible PIC construction at 0x0001012d2d74: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d2d78) */

void FUN_1012d2d30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1012d3414();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012d2d94; end: 1012d2df7; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController storeOverlay:didFinishPresentation:] */

/* WARNING: Possible PIC construction at 0x0001012d2dd8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d2ddc) */

void FUN_1012d2d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1012d35bc();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012d2df8; end: 1012d2e5b; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController storeOverlay:willStartDismissal:] */

/* WARNING: Possible PIC construction at 0x0001012d2e3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d2e40) */

void FUN_1012d2df8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_1012d3a50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012d2e5c; end: 1012d2ed7; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController storeOverlay:didFinishDismissal:] */

/* WARNING: Possible PIC construction at 0x0001012d2eb8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d2ebc) */

void FUN_1012d2e5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001012d3c08(0x657373696d736964,0xe900000000000064);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012d2ed8; end: 1012d2f4b; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController storeOverlay:didFailToLoadWithError:] */

/* WARNING: Possible PIC construction at 0x0001012d2f2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d2f30) */

void FUN_1012d2ed8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x0001012d3c08(0x64656c696166,0xe600000000000000);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012d2f4c; end: 1012d311f;  */

/* WARNING: Possible PIC construction at 0x0001012d30ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d30bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d30b0) */
/* WARNING: Removing unreachable block (ram,0x0001012d30c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d2f4c(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  long lStack_58;
  
  uVar6 = 0xe900000000000059;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112d70218);
  uVar2 = 0x657373696d736964;
  func_0x000107c5fadc(0x657373696d736964,0xe900000000000064);
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112d70108);
  func_0x000107c5fadc(uVar3,((undefined8 *)(unaff_x20 + _DAT_112d70108))[1]);
  lStack_58 = *(long *)(unaff_x20 + _DAT_112d70110);
  if (lStack_58 < 2) {
    if (lStack_58 == 0) {
      uVar4 = 0x54494e554d4d4f43;
      if (*(char *)(unaff_x20 + _DAT_112d701f8) == '\0') {
        uVar6 = 0xe700000000000000;
        uVar4 = 0x544c5541464544;
      }
    }
    else {
      if (lStack_58 != 1) {
LAB_1012d30fc:
        func_0x000107c60614(&UNK_110731b98,&lStack_58,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d3120);
        (*pcVar1)();
      }
      uVar6 = 0xea00000000004e45;
      uVar4 = 0x455243534c4c5546;
    }
  }
  else if (lStack_58 == 3) {
    uVar6 = 0xeb00000000455455;
    uVar4 = 0x4f525f45524f5453;
  }
  else {
    if (lStack_58 != 2) goto LAB_1012d30fc;
    uVar6 = 0xeb000000004c4144;
    uVar4 = 0x4f4d5f45524f5453;
  }
  func_0x000107c5fadc(uVar4,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x00010511f0bc(uVar5,uVar2,uVar3,uVar4,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 1012d3120; end: 1012d316f; -[_TtC16SaturnUpsellTray30SaturnUpsellTrayViewController productViewControllerDidFinish:] */

/* WARNING: Possible PIC construction at 0x0001012d3158: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d315c) */

void FUN_1012d3120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_1012d2f4c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 1012d3170; end: 1012d32eb;  */

undefined * FUN_1012d3170(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d32ec);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puVar4 = (undefined *)0x112d70260;
    func_0x0001000285a8(0x112d70260,&UNK_10d93c6a0);
    lVar5 = 0;
    func_0x000107c5ebbc();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    func_0x000107c613fc(puVar4,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    func_0x000107c610a4();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d32e4);
      (*pcVar3)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d32e8);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar10 != 0) {
      lVar2 = lVar5 / lVar10;
    }
    *(ulong *)(puVar4 + 0x10) = uVar9;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  lVar5 = 0;
  func_0x000107c5ebbc();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar6,puVar1,uVar9,lVar5);
  }
  else {
    if ((puVar4 < param_4) || (puVar1 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar6))
    {
      func_0x000107c61414(puVar6,puVar1,uVar9);
    }
    else if (puVar4 != param_4) {
      func_0x000107c61410(puVar6,puVar1,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar4;
}



/* Entry: 1012d32ec; end: 1012d3413;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d32ec(void)

{
  undefined8 *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + _DAT_112d700d8) = 0;
  func_0x000107c61614(unaff_x20 + _DAT_112d700e0,0);
  *(undefined1 *)(unaff_x20 + _DAT_112d700e8) = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112d700f0);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d700f8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d70138) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d70140) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d70148) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d70150) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112d70158) = 0;
  lVar2 = _DAT_112d70218;
  puVar4 = PTR_PTR_1126a6928;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + lVar2) = puVar4;
  lVar2 = _DAT_112d70220;
  lVar5 = 0;
  func_0x000107c5eea4();
  (**(code **)(*(long *)(lVar5 + -8) + 0x38))(unaff_x20 + lVar2,1,1,lVar5);
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000025,0x800000010ef0ff70,
                      "SaturnUpsellTray/SaturnUpsellTrayViewController.swift",0x35,2,0x67,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d3414);
  (*pcVar3)();
}



/* Entry: 1012d3414; end: 1012d35bb;  */

/* WARNING: Possible PIC construction at 0x0001012d3570: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d3574) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3414(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d70218);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef345e0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70108);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d70108))[1]);
  lStack_48 = *(long *)(unaff_x20 + _DAT_112d70110);
  if (lStack_48 < 2) {
    if (lStack_48 == 0) {
      bVar2 = *(char *)(unaff_x20 + _DAT_112d701f8) == '\0';
      uVar5 = 0x54494e554d4d4f43;
      if (bVar2) {
        uVar5 = 0x544c5541464544;
      }
      uVar6 = 0xe900000000000059;
      if (bVar2) {
        uVar6 = 0xe700000000000000;
      }
    }
    else {
      if (lStack_48 != 1) {
LAB_1012d3598:
        func_0x000107c60614(&UNK_110731b98,&lStack_48,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d35bc);
        (*pcVar1)();
      }
      uVar6 = 0xea00000000004e45;
      uVar5 = 0x455243534c4c5546;
    }
  }
  else if (lStack_48 == 3) {
    uVar6 = 0xeb00000000455455;
    uVar5 = 0x4f525f45524f5453;
  }
  else {
    if (lStack_48 != 2) goto LAB_1012d3598;
    uVar6 = 0xeb000000004c4144;
    uVar5 = 0x4f4d5f45524f5453;
  }
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x00010511ebcc(uVar7,uVar3,uVar4,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1012d35bc; end: 1012d3a4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d35bc(double param_1)

{
  long lVar1;
  bool bVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [8];
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long lStack_98;
  undefined8 uStack_90;
  long alStack_88 [3];
  
  uVar8 = 0x455243534c4c5546;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar10 = auStack_b0 + -extraout_x8;
  lVar3 = 0;
  func_0x000107c5eea4();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  lVar11 = (long)puVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lStack_98 = lVar11 - extraout_x12;
  uStack_90 = *(undefined8 *)(unaff_x20 + _DAT_112d70218);
  uVar4 = 0x65746e6573657270;
  func_0x000107c5fadc(0x65746e6573657270,0xe900000000000064);
  uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112d70108);
  uStack_a8 = ((undefined8 *)(unaff_x20 + _DAT_112d70108))[1];
  uStack_a0 = uVar6;
  func_0x000107c5fadc();
  lVar13 = *(long *)(unaff_x20 + _DAT_112d70110);
  if (lVar13 < 2) {
    if (lVar13 == 0) {
      bVar2 = *(char *)(unaff_x20 + _DAT_112d701f8) == '\0';
      uVar8 = 0x54494e554d4d4f43;
      if (bVar2) {
        uVar8 = 0x544c5541464544;
      }
      uVar7 = 0xe900000000000059;
      if (bVar2) {
        uVar7 = 0xe700000000000000;
      }
    }
    else {
      uVar7 = 0xea00000000004e45;
      if (lVar13 != 1) {
LAB_1012d3a2c:
        alStack_88[0] = lVar13;
        func_0x000107c60614(&UNK_110731b98,alStack_88,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1012d3a50);
        (*pcVar9)();
      }
    }
  }
  else {
    if (lVar13 == 3) {
      uVar8 = 0x4f525f45524f5453;
      uVar7 = 0x455455;
    }
    else {
      if (lVar13 != 2) goto LAB_1012d3a2c;
      uVar8 = 0x4f4d5f45524f5453;
      uVar7 = 0x4c4144;
    }
    uVar7 = uVar7 | 0xeb00000000000000;
  }
  func_0x000107c5fadc(uVar8,uVar7);
  func_0x000107c6142c(uVar7);
  func_0x00010511ebcc(uStack_90,uVar4,uVar6,uVar8,1);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c61170(uVar8);
  lVar1 = _DAT_112d70220;
  func_0x000107c61428(unaff_x20 + _DAT_112d70220,alStack_88,0,0);
  FUN_1012d3e54(unaff_x20 + lVar1,puVar10,0x112d373d8,&UNK_10d9014c0);
  puVar5 = puVar10;
  (**(code **)(lVar12 + 0x30))(puVar10,1,lVar3);
  lVar1 = lStack_98;
  if ((int)puVar5 == 1) {
    FUN_1012d3dd0(puVar10,0x112d373d8,&UNK_10d9014c0);
  }
  else {
    (**(code **)(lVar12 + 0x20))(lStack_98,puVar10,lVar3);
    func_0x000107c5eea0(lVar11);
    func_0x000107c5ee68(lVar1);
    pcVar9 = *(code **)(lVar12 + 8);
    (*pcVar9)(lVar11,lVar3);
    param_1 = param_1 * 1000.0;
    uVar8 = uStack_a0;
    func_0x000107c5fadc(uStack_a0,uStack_a8);
    if (lVar13 < 2) {
      if (lVar13 == 0) {
        bVar2 = *(char *)(unaff_x20 + _DAT_112d701f8) == '\0';
        uVar6 = 0x54494e554d4d4f43;
        if (bVar2) {
          uVar6 = 0x544c5541464544;
        }
        uVar4 = 0xe900000000000059;
        if (bVar2) {
          uVar4 = 0xe700000000000000;
        }
      }
      else {
        uVar4 = 0xea00000000004e45;
        uVar6 = 0x455243534c4c5546;
      }
    }
    else if (lVar13 == 3) {
      uVar6 = 0x4f525f45524f5453;
      uVar4 = 0xeb00000000455455;
    }
    else {
      uVar6 = 0x4f4d5f45524f5453;
      uVar4 = 0xeb000000004c4144;
    }
    func_0x000107c5fadc(uVar6,uVar4);
    func_0x000107c6142c(uVar4);
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1012d3a24);
      (*pcVar9)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1012d3a28);
      (*pcVar9)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1012d3a2c);
      (*pcVar9)();
    }
    func_0x00010511ee8c(uStack_90,uVar8,uVar6,(long)param_1);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(uVar6);
    (*pcVar9)(lStack_98,lVar3);
  }
  *(undefined1 *)(unaff_x20 + _DAT_112d700e8) = 1;
  FUN_1012d0718();
  return;
}



/* Entry: 1012d3a50; end: 1012d3d97;  */

/* WARNING: Possible PIC construction at 0x0001012d3bac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d3bbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d0770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d07c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d07ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d0774) */
/* WARNING: Removing unreachable block (ram,0x0001012d07b0) */
/* WARNING: Removing unreachable block (ram,0x0001012d0788) */
/* WARNING: Removing unreachable block (ram,0x0001012d07b4) */
/* WARNING: Removing unreachable block (ram,0x0001012d3bc0) */
/* WARNING: Removing unreachable block (ram,0x0001012d0718) */
/* WARNING: Removing unreachable block (ram,0x0001012d3bb0) */
/* WARNING: Removing unreachable block (ram,0x0001012d07c8) */
/* WARNING: Removing unreachable block (ram,0x0001012d07f0) */
/* WARNING: Removing unreachable block (ram,0x0001012d07dc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3a50(void)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long lStack_48;
  
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112d70218);
  uVar3 = 0xd000000000000014;
  func_0x000107c5fadc(0xd000000000000014,0x800000010ef345c0);
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d70108);
  func_0x000107c5fadc(uVar4,((undefined8 *)(unaff_x20 + _DAT_112d70108))[1]);
  lStack_48 = *(long *)(unaff_x20 + _DAT_112d70110);
  if (lStack_48 < 2) {
    if (lStack_48 == 0) {
      bVar2 = *(char *)(unaff_x20 + _DAT_112d701f8) == '\0';
      uVar5 = 0x54494e554d4d4f43;
      if (bVar2) {
        uVar5 = 0x544c5541464544;
      }
      uVar6 = 0xe900000000000059;
      if (bVar2) {
        uVar6 = 0xe700000000000000;
      }
    }
    else {
      if (lStack_48 != 1) {
LAB_1012d3be4:
        func_0x000107c60614(&UNK_110731b98,&lStack_48,&UNK_110731b98,PTR___sSiN_11034deb0);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d3c08);
        (*pcVar1)();
      }
      uVar6 = 0xea00000000004e45;
      uVar5 = 0x455243534c4c5546;
    }
  }
  else if (lStack_48 == 3) {
    uVar6 = 0xeb00000000455455;
    uVar5 = 0x4f525f45524f5453;
  }
  else {
    if (lStack_48 != 2) goto LAB_1012d3be4;
    uVar6 = 0xeb000000004c4144;
    uVar5 = 0x4f4d5f45524f5453;
  }
  func_0x000107c5fadc(uVar5,uVar6);
  func_0x000107c6142c(uVar6);
  func_0x00010511ebcc(uVar7,uVar3,uVar4,uVar5,1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 1012d3d98; end: 1012d3dcf;  */

/* WARNING: Possible PIC construction at 0x0001012d243c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d2440) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3d98(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  
  lVar1 = _DAT_112d700d8;
  lVar3 = *(long *)(unaff_x20 + 0x10);
  if ((*(long *)(lVar3 + _DAT_112d700f8) != 0) && (*(long *)(lVar3 + _DAT_112d700d8) != 0)) {
    func_0x000107c61168(PTR__OBJC_CLASS___SKOverlay_1126b9488);
    func_0x000107c42070();
    uVar2 = *(undefined8 *)(lVar3 + lVar1);
    *(undefined8 *)(lVar3 + lVar1) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar2);
    return;
  }
  return;
}



/* Entry: 1012d3dd0; end: 1012d3e0f;  */

undefined8 FUN_1012d3dd0(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 1012d3e10; end: 1012d3e3b;  */

void FUN_1012d3e10(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012d3e3c; end: 1012d3e53;  */

void FUN_1012d3e3c(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined *puStack_38;
  
  ppuVar2 = &puStack_60;
  puVar1 = &UNK_11039df70;
  func_0x000107c613fc(&UNK_11039df70,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  puVar1[0x18] = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  uStack_40 = 0x1012d3e44;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_11039df88;
  puStack_38 = puVar1;
  func_0x000107c60bc4(&puStack_60);
  puVar1 = puStack_38;
  func_0x000107c6157c();
  func_0x000107c614b0(param_2);
  func_0x000107c61574(puVar1);
  func_0x0001000d76cc(&UNK_10d9316b0,ppuVar2);
  func_0x000107c60bd0(ppuVar2);
  return;
}



/* Entry: 1012d3e54; end: 1012d3e9b;  */

undefined8 FUN_1012d3e54(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 1012d3e9c; end: 1012d3ebb;  */

void FUN_1012d3e9c(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    puVar2 = &UNK_11039e178;
    func_0x000107c613fc(&UNK_11039e178,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    uStack_58 = 0x1012d3f90;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    puStack_68 = &UNK_1000f6b44;
    puStack_60 = &UNK_11039e190;
    ppuVar3 = &puStack_78;
    puStack_50 = puVar2;
    func_0x000107c60bc4(ppuVar3);
    puVar2 = puStack_50;
    func_0x000107c61174(lVar1);
    func_0x000107c61574(puVar2);
    func_0x0001000d76cc(&UNK_10d9316b0,ppuVar3);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 1012d3ebc; end: 1012d3ef3;  */

void FUN_1012d3ebc(code *param_1)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1012d3ef4; end: 1012d3f97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3ef4(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar3 + 0x10,auStack_48,0,0);
  lVar3 = lVar3 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    puVar1 = (undefined8 *)(lVar3 + _DAT_112d700f0);
    uVar4 = puVar1[1];
    *puVar1 = uVar2;
    puVar1[1] = uVar5;
    func_0x000107c6142c(uVar4);
    func_0x000107c61434(uVar5);
    FUN_1012d0718();
    func_0x000107c61170(lVar3);
  }
  return;
}



/* Entry: 1012d3f98; end: 1012d3fa3; -[SCSaturnUpsellTrayEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3f98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70268;
  func_0x000107c61428(param_1 + _DAT_112d70268,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d3fa4; end: 1012d3faf; -[SCSaturnUpsellTrayEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3fa4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70268;
  func_0x000107c61428(param_1 + _DAT_112d70268,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d3fb0; end: 1012d3fbb; -[SCSaturnUpsellTrayEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3fb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70270;
  func_0x000107c61428(param_1 + _DAT_112d70270,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d3fbc; end: 1012d3fc7; -[SCSaturnUpsellTrayEntryPoint setComposerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3fbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70270;
  func_0x000107c61428(param_1 + _DAT_112d70270,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d3fc8; end: 1012d3fd3; -[SCSaturnUpsellTrayEntryPoint saturnExperimentProviderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d3fc8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d70278;
  func_0x000107c61428(param_1 + _DAT_112d70278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d3fd4; end: 1012d4017;  */

void FUN_1012d3fd4(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = *param_3;
  func_0x000107c61428(param_1 + lVar1,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d4018; end: 1012d4023; -[SCSaturnUpsellTrayEntryPoint setSaturnExperimentProviderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d4018(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d70278;
  func_0x000107c61428(param_1 + _DAT_112d70278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d4024; end: 1012d4077;  */

void FUN_1012d4024(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1012d4078; end: 1012d41b7;  */

/* WARNING: Possible PIC construction at 0x0001012d4138: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d4148: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d413c) */
/* WARNING: Removing unreachable block (ram,0x0001012d414c) */
/* WARNING: Removing unreachable block (ram,0x000107c61574) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0410) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d4078(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar1 != 0) {
    lVar2 = unaff_x20;
    func_0x000107c40014();
    func_0x000107c61180();
    if (lVar2 != 0) {
      func_0x000107c5161c();
      func_0x000107c61180();
      if (unaff_x20 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar3 = 0;
        FUN_1012cf7a0();
        func_0x000107c613fc();
        *(long *)(lVar3 + 0x10) = lVar1;
        *(long *)(lVar3 + 0x18) = lVar2;
        uVar4 = *(undefined8 *)(unaff_x20 + _DAT_113044a80);
        *(undefined8 *)(lVar3 + 0x20) = uVar4;
        func_0x000107c61174(lVar1);
        func_0x000107c61174(lVar2);
        func_0x000107c61174(uVar4);
        FUN_1012ce714();
        lVar1 = unaff_x20;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 1012d41b8; end: 1012d41df; -[SCSaturnUpsellTrayEntryPoint begin] */

void FUN_1012d41b8(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_1012d4078();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1012d41e0; end: 1012d4223; -[SCSaturnUpsellTrayEntryPoint end] */

void FUN_1012d41e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uVar1 = param_1;
  func_0x000107c614f0();
  uStack_30 = param_1;
  uStack_28 = uVar1;
  func_0x000107c61154(&uStack_30,PTR_s_end_1125c29d0);
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1012d4224; end: 1012d4427;  */

void FUN_1012d4224(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    if ((param_2 != -0x2ffffffffffffff0) || (param_3 != -0x7ffffffef10ed9b0)) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef12650,param_2,param_3,0);
      if ((uVar2 & 1) == 0) {
        uVar2 = 0;
        if (((param_2 != -0x2fffffffffffffe0) || (param_3 != -0x7ffffffef10ced70)) &&
           (func_0x000107c605b8(0xd000000000000020,0x800000010ef31290,param_2,param_3,0),
           (uVar2 & 1) == 0)) {
          func_0x000107c602fc(0x15);
          func_0x000107c6142c(0xe000000000000000);
          func_0x000107c5fb78(param_2,param_3);
          func_0x000107c60450("Fatal error",0xb,2,0xd000000000000013,0x800000010ef0fc20,
                              "SaturnUpsellTray/SCSaturnUpsellTrayEntryPoint.swift",0x33,2,0x31,0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d4428);
          (*pcVar1)();
        }
        func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c58b94();
        goto LAB_1012d42b0;
      }
    }
    func_0x0001006732c8(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c536e0();
  }
LAB_1012d42b0:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1012d4428; end: 1012d44d3; -[SCSaturnUpsellTrayEntryPoint setValue:forIvarName:] */

void FUN_1012d4428(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_1012d4224(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1012d44d4; end: 1012d455b; -[SCSaturnUpsellTrayEntryPoint init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d44d4(long param_1)

{
  long lVar1;
  long lStack_30;
  long lStack_28;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  func_0x000107c61614(param_1 + _DAT_112d70268,0);
  func_0x000107c61614(param_1 + _DAT_112d70270,0);
  func_0x000107c61614(param_1 + _DAT_112d70278,0);
  *(undefined8 *)(param_1 + _DAT_112d70280) = 0;
  lStack_30 = param_1;
  lStack_28 = lVar1;
  func_0x000107c61154(&lStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012d455c; end: 1012d458f;  */

void FUN_1012d455c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012d4590; end: 1012d45e7; -[SCSaturnUpsellTrayEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d4590(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d70268);
  func_0x000107c61610(param_1 + _DAT_112d70270);
  func_0x000107c61610(param_1 + _DAT_112d70278);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d70280));
  return;
}



/* Entry: 1012d45e8; end: 1012d4607;  */

void FUN_1012d45e8(void)

{
  func_0x000107c61168(&PTR_PTR_1127c48d8);
  return;
}



/* Entry: 1012d4608; end: 1012d461b; +[SCSaturnUpsellTrayExperimentScopeFlags showGeneralizedFriendProfileVariantWithExperiment:] */

long FUN_1012d4608(undefined8 param_1,undefined8 param_2,long param_3)

{
  if (param_3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010c07cf70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)(param_3,PTR_s_isSaturnUpsellTrayGeneralUserEna_1125fcde8)
    ;
    return param_3;
  }
  return 0;
}



/* Entry: 1012d461c; end: 1012d4673; +[SCSaturnUpsellTrayExperimentScopeFlags isGeneralizedVariantRenderingWithSource:showCommunityVariant:showGeneralizedMyProfileVariant:showGeneralizedFriendProfileVariant:] */

uint FUN_1012d461c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = (uint)param_3;
  FUN_1012d4798();
  func_0x000107c6142c(param_2);
  return uVar1 & 1;
}



/* Entry: 1012d4674; end: 1012d4727; +[SCSaturnUpsellTrayExperimentScopeFlags myProfileTrayVariantsWithExperiment:schoolName:schoolColor:showCommunityVariantOut:showGeneralizedMyProfileVariantOut:] */

/* WARNING: Possible PIC construction at 0x0001012d4708: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d470c) */

void FUN_1012d4674(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  if (param_4 != 0) {
    func_0x000107c5faec(param_4);
  }
  if (param_5 == 0) {
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
  }
  func_0x000107c615f0(param_3);
  FUN_1012d48ec();
  func_0x000107c615e8(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 1012d4728; end: 1012d4763; -[SCSaturnUpsellTrayExperimentScopeFlags init] */

void FUN_1012d4728(undefined8 param_1)

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



/* Entry: 1012d4764; end: 1012d4797;  */

void FUN_1012d4764(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1012d4798; end: 1012d48eb;  */

uint FUN_1012d4798(long param_1,long param_2,ulong param_3,uint param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  
  if ((param_3 & 1) == 0) {
    uVar2 = 0x49464f52505f594d;
    if (((((param_1 != 0x49464f52505f594d) || (param_2 != -0x10b3b3b6afa0bab4)) &&
         (func_0x000107c605b8(0x49464f52505f594d,0xef4c4c49505f454c,param_1,param_2,0),
         (uVar2 & 1) == 0)) &&
        ((uVar2 = 0, param_1 != 0x4b4e494c50454544 || (param_2 != -0x1800000000000000)))) &&
       ((func_0x000107c605b8(0x4b4e494c50454544,0xe800000000000000,param_1,param_2,0),
        (uVar2 & 1) == 0 && ((param_1 != -0x2ffffffffffffff0 || (param_2 != -0x7ffffffef10cbb90)))))
       ) {
      uVar2 = 0;
      func_0x000107c605b8(0xd000000000000010,0x800000010ef34470,param_1,param_2,0);
      if (((uVar2 & 1) == 0) &&
         ((uVar1 = 0x13, param_1 != -0x2fffffffffffffed ||
          (param_4 = param_5, param_2 != -0x7ffffffef10cbb50)))) {
        func_0x000107c605b8(0xd000000000000013,0x800000010ef344b0,param_1,param_2,0);
        param_4 = uVar1 & param_5;
      }
    }
    return param_4 & 1;
  }
  return 0;
}



/* Entry: 1012d48ec; end: 1012d49a3;  */

void FUN_1012d48ec(long param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5,
                  undefined1 *param_6,undefined1 *param_7)

{
  ulong uVar1;
  long lVar2;
  
  if ((param_1 == 0) || (lVar2 = param_1, func_0x000107c4a378(), (int)lVar2 == 0)) {
    if (param_3 != 0) {
      uVar1 = param_2 & 0xffffffffffff;
      if ((param_3 & 0x2000000000000000) != 0) {
        uVar1 = param_3 >> 0x38 & 0xf;
      }
      if ((uVar1 != 0) && (param_5 != 0)) {
        uVar1 = param_4 & 0xffffffffffff;
        if ((param_5 & 0x2000000000000000) != 0) {
          uVar1 = param_5 >> 0x38 & 0xf;
        }
        if ((uVar1 != 0) && (param_1 != 0)) {
          func_0x000107c4a36c();
          *param_6 = (char)param_1;
          goto LAB_1012d4988;
        }
      }
    }
    *param_6 = 0;
  }
  else {
    *param_7 = 1;
    param_7 = param_6;
  }
LAB_1012d4988:
  *param_7 = 0;
  return;
}



/* Entry: 1012d49a4; end: 1012d49c3;  */

void FUN_1012d49a4(void)

{
  func_0x000107c61168(&PTR_PTR_1127c49a8);
  return;
}



/* Entry: 1012d49c4; end: 1012d4a47;  */

void FUN_1012d49c4(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined *puVar2;
  
  lVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  if (lVar1 == 0) {
    puVar2 = PTR_PTR_1126a6950;
    func_0x000107c610f8();
    func_0x000107c48478();
  }
  else {
    FUN_1012d4a48();
    puVar2 = PTR_PTR_1126a6950;
    func_0x000107c610f8();
    func_0x000107c48478();
    func_0x000107c61170(lVar1);
  }
  *param_1 = puVar2;
  return;
}



/* Entry: 1012d4a48; end: 1012d4df7;  */

undefined4 FUN_1012d4a48(void)

{
  undefined *puVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined **ppuVar15;
  undefined8 unaff_x20;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined4 uStack_74;
  
  uStack_74 = 0;
  puVar4 = &UNK_11039e318;
  func_0x000107c613fc(&UNK_11039e318,0x18,7);
  *(undefined4 **)(puVar4 + 0x10) = &uStack_74;
  puVar5 = &UNK_11039e340;
  func_0x000107c613fc(&UNK_11039e340,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_1012d532c;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_88 = FUN_1012d5338;
  puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11039e358;
  ppuVar6 = &puStack_a8;
  puStack_80 = puVar5;
  func_0x000107c60bc4();
  puVar7 = puStack_80;
  func_0x000107c6157c(puVar5);
  func_0x000107c61574(puVar7);
  puVar7 = &UNK_11039e390;
  func_0x000107c613fc(&UNK_11039e390,0x18,7);
  *(undefined4 **)(puVar7 + 0x10) = &uStack_74;
  puVar8 = &UNK_11039e3b8;
  func_0x000107c613fc(&UNK_11039e3b8,0x20,7);
  *(code **)(puVar8 + 0x10) = FUN_1012d5358;
  *(undefined **)(puVar8 + 0x18) = puVar7;
  pcStack_88 = (code *)0x1012d53f8;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11039e3d0;
  ppuVar9 = &puStack_a8;
  puStack_80 = puVar8;
  func_0x000107c60bc4(ppuVar9);
  puVar10 = puStack_80;
  func_0x000107c6157c(puVar8);
  func_0x000107c61574(puVar10);
  puVar10 = &UNK_11039e408;
  func_0x000107c613fc(&UNK_11039e408,0x18,7);
  *(undefined4 **)(puVar10 + 0x10) = &uStack_74;
  puVar11 = &UNK_11039e430;
  func_0x000107c613fc(&UNK_11039e430,0x20,7);
  *(undefined8 *)(puVar11 + 0x10) = 0x1012d5368;
  *(undefined **)(puVar11 + 0x18) = puVar10;
  pcStack_88 = (code *)0x1012d53fc;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11039e448;
  ppuVar12 = &puStack_a8;
  puStack_80 = puVar11;
  func_0x000107c60bc4(ppuVar12);
  puVar13 = puStack_80;
  func_0x000107c6157c(puVar11);
  func_0x000107c61574(puVar13);
  puVar13 = &UNK_11039e480;
  func_0x000107c613fc(&UNK_11039e480,0x18,7);
  *(undefined4 **)(puVar13 + 0x10) = &uStack_74;
  puVar14 = &UNK_11039e4a8;
  func_0x000107c613fc(&UNK_11039e4a8,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x1012d5378;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_88 = (code *)0x1012d5400;
  puStack_a8 = puVar1;
  uStack_a0 = 0x42000000;
  puStack_98 = &UNK_10006eb60;
  puStack_90 = &UNK_11039e4c0;
  ppuVar15 = &puStack_a8;
  puStack_80 = puVar14;
  func_0x000107c60bc4(ppuVar15);
  puVar1 = puStack_80;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar1);
  func_0x000107c4c780(unaff_x20);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar9);
  func_0x000107c60bd0(ppuVar6);
  uVar2 = uStack_74;
  func_0x000107c61574(puVar4);
  puVar4 = puVar5;
  func_0x000107c61544(puVar5,"",0x58,0x31,0xd,1);
  func_0x000107c61574(puVar7);
  func_0x000107c61574(puVar5);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d4dec);
    (*pcVar3)();
  }
  puVar4 = puVar8;
  func_0x000107c61544(puVar8,"",0x58,0x32,0x1c,1);
  func_0x000107c61574(puVar10);
  func_0x000107c61574(puVar8);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d4df0);
    (*pcVar3)();
  }
  puVar4 = puVar11;
  func_0x000107c61544(puVar11,"",0x58,0x33,0x1e,1);
  func_0x000107c61574(puVar13);
  func_0x000107c61574(puVar11);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d4df4);
    (*pcVar3)();
  }
  puVar4 = puVar14;
  func_0x000107c61544(puVar14,"",0x58,0x34,0x14,1);
  func_0x000107c61574(puVar14);
  if (((ulong)puVar4 & 1) == 0) {
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1012d4df8);
  (*pcVar3)();
}



/* Entry: 1012d4df8; end: 1012d4ed3; -[_TtC26SCSaturnSettingsEntryPoint22SaturnPrivacyStoreImpl observeSaturnPrivacy] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d4df8(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112d702d8);
  func_0x000107c61174(param_1);
  func_0x000107c5d6fc(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  uVar3 = 0;
  FUN_1012d52e8(0);
  pcVar2 = FUN_1012d49c4;
  func_0x0001000bfde0(FUN_1012d49c4,0,uVar3);
  func_0x000107c61574(uVar1);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
  uVar3 = uVar1;
  func_0x000107c5cb24(uVar1);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 1012d4ed4; end: 1012d4fb7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d4ed4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  undefined8 uVar3;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  ppuVar2 = &puStack_70;
  uVar3 = *(undefined8 *)(param_2 + _DAT_112d702e0);
  FUN_1012d4fb8(param_3);
  uStack_50 = 0x1012d52c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1012a3d88;
  puStack_58 = &UNK_11039e2e0;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5d5e8(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_3);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 1012d4fb8; end: 1012d5023;  */

void FUN_1012d4fb8(int param_1)

{
  func_0x000107c61168(PTR_PTR_1126b8900);
  if (param_1 < 2) {
    if ((param_1 != 0) && (param_1 == 1)) {
      func_0x000107c51620();
      goto LAB_1012d5014;
    }
  }
  else {
    if (param_1 == 2) {
      func_0x000107c5b450();
      goto LAB_1012d5014;
    }
    if (param_1 == 3) {
      func_0x000107c4d6e0();
      goto LAB_1012d5014;
    }
  }
  func_0x000107c5d26c();
LAB_1012d5014:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 1012d5024; end: 1012d5133;  */

void FUN_1012d5024(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [8];
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_58 [8];
  undefined *puStack_50;
  undefined8 uStack_48;
  
  puVar1 = PTR_PTR_1126a6948;
  func_0x000107c610f8();
  func_0x000107c453e4();
  if (param_2 != 0) {
    puStack_50 = (undefined *)0x0;
    uStack_48 = 0xe000000000000000;
    func_0x000107c614b0(param_2);
    func_0x000107c602fc(0x23);
    func_0x000107c6142c(uStack_48);
    puStack_50 = (undefined *)0xd000000000000021;
    uStack_48 = 0x800000010ef34790;
    func_0x000107c614cc(param_2,auStack_58,auStack_70);
    uVar3 = uStack_60;
    func_0x000107c60640(uStack_68,uStack_60);
    func_0x000107c5fb78();
    func_0x000107c6142c(uVar3);
    uVar3 = uStack_48;
    puVar2 = puStack_50;
    func_0x000107c5fadc(puStack_50,uStack_48);
    func_0x000107c6142c(uVar3);
    func_0x000107c54654(puVar1);
    func_0x000107c61170(puVar2);
    func_0x000107c614ac(param_2);
  }
  puStack_50 = puVar1;
  func_0x000100087f6c(&puStack_50);
  func_0x000100c7f554();
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 1012d5134; end: 1012d51ff; -[_TtC26SCSaturnSettingsEntryPoint22SaturnPrivacyStoreImpl setSaturnPrivacyWithSaturnPrivacyOption:] */

void FUN_1012d5134(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  puVar1 = &UNK_11039e2c8;
  func_0x000107c613fc(&UNK_11039e2c8,0x1c,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined4 *)(puVar1 + 0x18) = param_3;
  func_0x0001000285a8(0x112d70310,&UNK_10d931808);
  func_0x000107c613fc();
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  pcVar2 = FUN_1012d52b8;
  func_0x0001000b64ac(FUN_1012d52b8,puVar1);
  pcVar3 = pcVar2;
  func_0x0001004575f0();
  func_0x000107c61574(pcVar2);
  pcVar2 = pcVar3;
  func_0x000107c5cb24(pcVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(pcVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(pcVar2);
  return;
}



/* Entry: 1012d5200; end: 1012d525f; -[_TtC26SCSaturnSettingsEntryPoint22SaturnPrivacyStoreImpl init] */

void FUN_1012d5200(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSaturnSettingsEntryPoint.SaturnPrivacyStoreImpl",0x31,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d522c);
  (*pcVar1)();
}



/* Entry: 1012d5260; end: 1012d5297; -[_TtC26SCSaturnSettingsEntryPoint22SaturnPrivacyStoreImpl .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5260(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d702d8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112d702e0));
  return;
}



/* Entry: 1012d5298; end: 1012d52b7;  */

void FUN_1012d5298(void)

{
  func_0x000107c61168(&PTR_PTR_1127c4a58);
  return;
}



/* Entry: 1012d52b8; end: 1012d52e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d52b8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined **ppuVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar3 = (ulong)*(uint *)(unaff_x20 + 0x18);
  ppuVar2 = &puStack_70;
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x10) + _DAT_112d702e0);
  FUN_1012d4fb8(uVar3);
  uStack_50 = 0x1012d52c4;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_1012a3d88;
  puStack_58 = &UNK_11039e2e0;
  uStack_48 = param_1;
  func_0x000107c60bc4(&puStack_70);
  uVar1 = uStack_48;
  func_0x000107c6157c(param_1);
  func_0x000107c61574(uVar1);
  func_0x000107c5d5e8(uVar4);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(uVar3);
  func_0x0001000b6d30(0);
  func_0x000104885df0(0,0);
  return;
}



/* Entry: 1012d52e8; end: 1012d532b;  */

void FUN_1012d52e8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d70318 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a6950;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112d70318 = puVar1;
  return;
}



/* Entry: 1012d532c; end: 1012d5337;  */

void FUN_1012d532c(void)

{
  long unaff_x20;
  
  **(undefined4 **)(unaff_x20 + 0x10) = 0;
  return;
}



/* Entry: 1012d5338; end: 1012d5357;  */

void FUN_1012d5338(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1012d5358; end: 1012d5387;  */

void FUN_1012d5358(void)

{
  long unaff_x20;
  
  **(undefined4 **)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 1012d5388; end: 1012d53d7;  */

void FUN_1012d5388(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d70320 != 0) {
    return;
  }
  puVar1 = &UNK_11039e4f8;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d70320 = param_1;
  return;
}



/* Entry: 1012d53d8; end: 1012d5403;  */

void FUN_1012d53d8(long param_1,long param_2)

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



/* Entry: 1012d5404; end: 1012d54ab;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5404(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d70328) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d70330) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112d70338) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112d70340) = param_3;
  *(undefined8 *)(unaff_x20 + _DAT_112d70348) = param_4;
  *(undefined8 *)(unaff_x20 + _DAT_112d70350) = param_5;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1012d54ac; end: 1012d56b7;  */

/* WARNING: Possible PIC construction at 0x0001012d5658: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d565c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d54ac(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  lVar1 = *(long *)(*(long *)(unaff_x20 + _DAT_112d70350) + _DAT_113044a80);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = lVar1;
  func_0x000107c4a2b0();
  if ((int)lVar2 != 0) {
    puVar3 = PTR_PTR_1126aeae0;
    func_0x000107c61168(PTR_PTR_1126aeae0);
    func_0x000107c5e2b8();
    func_0x000107c61180();
    FUN_1012d5f9c();
    puVar4 = PTR_PTR_1126aeaf0;
    func_0x000107c610f8(PTR_PTR_1126aeaf0);
    func_0x000107c5fadc(puVar3,param_2);
    func_0x000107c6142c(param_2);
    func_0x000107c48db0(puVar4);
    func_0x000107c61170(puVar3);
    puVar3 = &UNK_11039e518;
    func_0x000107c613fc(&UNK_11039e518,0x18,7);
    func_0x000107c61614(puVar3 + 0x10);
    puVar4 = PTR_PTR_1126aeae8;
    func_0x000107c610f8(PTR_PTR_1126aeae8);
    pcStack_60 = FUN_1012d5ce0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_100ea3124;
    puStack_68 = &UNK_11039e530;
    puStack_58 = puVar3;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c6157c(puVar3);
    func_0x000107c48560(puVar4);
    func_0x000107c60bd0(ppuVar5);
    puVar4 = puStack_58;
    func_0x000107c61574(puVar3);
    func_0x000107c61574(puVar4);
    func_0x000107c4e9e4(*(undefined8 *)(unaff_x20 + _DAT_112d70330));
    func_0x000107c61180();
    func_0x000107c4fba8();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 1012d56b8; end: 1012d574f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d56b8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      uVar1 = *(undefined8 *)(param_2 + _DAT_112d70328);
      *(long *)(param_2 + _DAT_112d70328) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61170(uVar1);
      FUN_1012d5750(param_1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(param_2);
    }
  }
  return;
}



/* Entry: 1012d5750; end: 1012d5b7f;  */

/* WARNING: Possible PIC construction at 0x0001012d57b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d57e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5820: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5840: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5934: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d59f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5a44: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5a54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5a64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5a98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5aa8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5b28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5afc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5b20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5b58: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d5b24) */
/* WARNING: Removing unreachable block (ram,0x0001012d5b10) */
/* WARNING: Removing unreachable block (ram,0x0001012d5b00) */
/* WARNING: Removing unreachable block (ram,0x0001012d5aac) */
/* WARNING: Removing unreachable block (ram,0x0001012d5b28) */
/* WARNING: Removing unreachable block (ram,0x0001012d5a9c) */
/* WARNING: Removing unreachable block (ram,0x0001012d5a84) */
/* WARNING: Removing unreachable block (ram,0x0001012d5a68) */
/* WARNING: Removing unreachable block (ram,0x0001012d5a58) */
/* WARNING: Removing unreachable block (ram,0x0001012d5a48) */
/* WARNING: Removing unreachable block (ram,0x0001012d59fc) */
/* WARNING: Removing unreachable block (ram,0x0001012d5938) */
/* WARNING: Removing unreachable block (ram,0x0001012d593c) */
/* WARNING: Removing unreachable block (ram,0x0001012d5844) */
/* WARNING: Removing unreachable block (ram,0x0001012d5af0) */
/* WARNING: Removing unreachable block (ram,0x0001012d591c) */
/* WARNING: Removing unreachable block (ram,0x0001012d5824) */
/* WARNING: Removing unreachable block (ram,0x0001012d5b4c) */
/* WARNING: Removing unreachable block (ram,0x0001012d5828) */
/* WARNING: Removing unreachable block (ram,0x0001012d57ec) */
/* WARNING: Removing unreachable block (ram,0x0001012d5ac4) */
/* WARNING: Removing unreachable block (ram,0x0001012d57f0) */
/* WARNING: Removing unreachable block (ram,0x0001012d57bc) */
/* WARNING: Removing unreachable block (ram,0x0001012d5abc) */
/* WARNING: Removing unreachable block (ram,0x0001012d5ad0) */
/* WARNING: Removing unreachable block (ram,0x0001012d57c0) */
/* WARNING: Removing unreachable block (ram,0x0001012d5b5c) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5750(long param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  func_0x000107c4d508();
  func_0x000107c61180();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d70340);
    func_0x000107c51630(uVar1);
    func_0x000107c61180();
    func_0x000107c5c734();
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar1);
    return;
  }
  return;
}



/* Entry: 1012d5b80; end: 1012d5bdf; -[_TtC26SCSaturnSettingsEntryPoint24SaturnSettingsEntryPoint init] */

void FUN_1012d5b80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCSaturnSettingsEntryPoint.SaturnSettingsEntryPoint",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1012d5bac);
  (*pcVar1)();
}



/* Entry: 1012d5be0; end: 1012d5c77; -[_TtC26SCSaturnSettingsEntryPoint24SaturnSettingsEntryPoint .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001012d5bfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5c1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001012d5c3c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d5c20) */
/* WARNING: Removing unreachable block (ram,0x0001012d5c00) */
/* WARNING: Removing unreachable block (ram,0x0001012d5c40) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5be0(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d70330));
  return;
}



/* Entry: 1012d5c78; end: 1012d5c7f;  */

undefined8 FUN_1012d5c78(void)

{
  return 0;
}



/* Entry: 1012d5c80; end: 1012d5cdf;  */

/* WARNING: Possible PIC construction at 0x0001012d5cc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001012d5cc4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5c80(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + _DAT_112d70328);
  if (lVar1 != 0) {
    func_0x000107c4d508();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4eb48();
      func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)PTR__objc_release_11034d2d0)();
      return;
    }
  }
  return;
}



/* Entry: 1012d5ce0; end: 1012d5d03;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1012d5ce0(long param_1)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  if (param_1 != 0) {
    func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(lVar1 + _DAT_112d70328);
      *(long *)(lVar1 + _DAT_112d70328) = param_1;
      func_0x000107c61174(param_1);
      func_0x000107c61174();
      func_0x000107c61170(uVar2);
      FUN_1012d5750(param_1);
      func_0x000107c61170(param_1);
      func_0x000107c61170(lVar1);
    }
  }
  return;
}


