/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101018c4c; end: 101018c8b;  */

void FUN_101018c4c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54f70 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91c124;
  func_0x000107c61520(&UNK_10d91c124,&UNK_110377600);
  puRam0000000112d54f70 = puVar1;
  return;
}



/* Entry: 101018c8c; end: 101018ccf;  */

void FUN_101018c8c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c6142c(param_1[1]);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  func_0x000107c61434(uVar2);
  return;
}



/* Entry: 101018cd0; end: 101018cf7;  */

void FUN_101018cd0(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 *puStack_88;
  ulong uStack_80;
  undefined1 auStack_68 [24];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  puVar5 = auStack_68;
  func_0x000107c61428(lVar1 + 0x10,puVar5,0,0,*(undefined8 *)(unaff_x20 + 0x20),
                      *(undefined8 *)(unaff_x20 + 0x28));
  lVar1 = lVar1 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    return;
  }
  if (param_1 != 0) {
    uVar6 = *(undefined8 *)(lVar1 + 0x48);
    func_0x000107c6157c(uVar6);
    func_0x000107c61174();
    func_0x0001000c74f0(&uStack_90);
    func_0x000107c61574(uVar6);
    uVar4 = CONCAT71(uStack_8f,uStack_90);
    uVar2 = param_1;
    func_0x000107c4b1dc();
    func_0x000107c61180();
    uVar3 = uVar2;
    func_0x000107c5faec();
    func_0x000107c61170(uVar2);
    if (puStack_88 == (undefined1 *)0x0) {
      func_0x000107c6142c(puVar5);
    }
    else {
      if ((uVar4 == uVar3) && (puStack_88 == puVar5)) {
        func_0x000107c6142c(puStack_88);
        func_0x000107c6142c(puVar5);
LAB_1010185d0:
        uVar6 = *(undefined8 *)(lVar1 + 0x50);
        uStack_80 = param_1;
        func_0x000107c6157c(uVar6);
        func_0x000100075034(FUN_101018cf8,&uStack_90,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(uVar6);
        FUN_1010180c4();
        uVar4 = param_1;
        FUN_101018420();
        uStack_90 = (undefined1)uVar4;
        func_0x0001007d6d78(&uStack_90);
        func_0x000107c61574(uVar6);
        func_0x000107c61574(lVar1);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c605b8(uVar4,puStack_88,uVar3,puVar5,0);
      func_0x000107c6142c(puStack_88);
      func_0x000107c6142c(puVar5);
      if ((uVar4 & 1) != 0) goto LAB_1010185d0;
    }
    uVar6 = *(undefined8 *)(lVar1 + 0x50);
    func_0x000107c6157c(uVar6);
    func_0x000100075034(0x1010191c8,0,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar6);
    func_0x000107c61170(param_1);
  }
  func_0x000107c61574();
  return;
}



/* Entry: 101018cf8; end: 101018d3b;  */

void FUN_101018cf8(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61170(*param_1);
  *param_1 = uVar1;
  func_0x000107c61174(uVar1);
  return;
}



/* Entry: 101018d3c; end: 101018d43;  */

void FUN_101018d3c(void)

{
  undefined8 *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*unaff_x20);
  return;
}



/* Entry: 101018d44; end: 101018e73;  */

void FUN_101018d44(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uStack_40;
  long lStack_38;
  
  func_0x000107c61170(*param_2);
  uStack_40 = 0;
  lStack_38 = 0;
  func_0x000107c5fae4(param_1,&uStack_40);
  lVar1 = lStack_38;
  if (lStack_38 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = uStack_40;
    func_0x000107c5fadc(uStack_40,lStack_38);
    func_0x000107c6142c(lVar1);
  }
  *param_2 = uVar2;
  return;
}



/* Entry: 101018e74; end: 101018ec3;  */

void FUN_101018e74(undefined8 param_1)

{
  undefined *puVar1;
  
  if (lRam0000000112d54f80 != 0) {
    return;
  }
  puVar1 = &UNK_110377698;
  func_0x000107c614d4();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  lRam0000000112d54f80 = param_1;
  return;
}



/* Entry: 101018ec4; end: 101018f07;  */

void FUN_101018ec4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 101018f08; end: 101018f2f;  */

void FUN_101018f08(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Entry: 101018f30; end: 101018f9b;  */

void FUN_101018f30(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0x112d54fa0;
  FUN_101019174(0x112d54fa0,&UNK_10d91c1e0);
  uVar2 = 0x112d54fa8;
  FUN_101019174(0x112d54fa8,&UNK_10dbfb160);
                    /* WARNING: Could not recover jumptable at 0x00010bdb96bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss20_SwiftNewtypeWrapperPsSHRzSH8RawValueSYRpzrlE20_toCustomAnyHashables0hI0VSgyF_11034e980
  )(param_1,param_2,uVar1,uVar2,PTR___sSSSHsWP_11034da90);
  return;
}



/* Entry: 101018f9c; end: 101018fe3;  */

void FUN_101018f9c(void)

{
  FUN_101019174(0x112d54f88,&UNK_10d91c1a0);
  return;
}



/* Entry: 101018fe4; end: 10101905b;  */

undefined8 FUN_101018fe4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c5fbbc();
  func_0x000107c6142c(param_2);
  return uVar1;
}



/* Entry: 10101905c; end: 10101914f;  */

undefined1 * FUN_10101905c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c5faec(uVar1);
  func_0x000107c6068c(auStack_78,param_1);
  puVar2 = auStack_78;
  func_0x000107c5fb58(puVar2,uVar1,param_2);
  func_0x000107c606a8();
  func_0x000107c6142c(param_2);
  return puVar2;
}



/* Entry: 101019150; end: 101019173;  */

void FUN_101019150(void)

{
  FUN_101019174(0x112d54f98,&UNK_10dbfb190);
  return;
}



/* Entry: 101019174; end: 1010191b3;  */

void FUN_101019174(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_101018e74(0xff);
    func_0x000107c61520(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Entry: 1010191b4; end: 1010191db;  */

void FUN_1010191b4(void)

{
  FUN_100ca0650();
  return;
}



/* Entry: 1010191dc; end: 1010192bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1010191dc(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d55028;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d55028);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar2;
    func_0x000107c6157c();
    func_0x000107c61574(uVar4);
    lVar3 = 0;
  }
  func_0x000107c6157c(lVar3);
  return lVar2;
}



/* Entry: 1010192c0; end: 101019377;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1010192c0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d55040;
  puVar2 = *(undefined **)(unaff_x20 + _DAT_112d55040);
  puVar3 = puVar2;
  if (puVar2 == (undefined *)0x0) {
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112d55010);
    FUN_10101bffc(*(undefined8 *)(unaff_x20 + _DAT_112d54fd0),uVar4,
                  ((undefined8 *)(unaff_x20 + _DAT_112d55010))[1],0);
    puVar3 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c49470();
    func_0x000107c61170(uVar4);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined **)(unaff_x20 + lVar1) = puVar3;
    func_0x000107c61174(puVar3);
    func_0x000107c61170(uVar4);
    puVar2 = (undefined *)0x0;
  }
  func_0x000107c61174(puVar2);
  return puVar3;
}



/* Entry: 101019378; end: 10101944f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_101019378(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar1 = PTR_PTR_1126b0820;
  func_0x000107c610f8(PTR_PTR_1126b0820);
  func_0x000107c453e4();
  uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d55010);
  func_0x000107c5fadc(uVar2,((undefined8 *)(unaff_x20 + _DAT_112d55010))[1]);
  puVar3 = puVar1;
  func_0x000107c5e650(puVar1);
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  puVar1 = PTR_PTR_1126bb828;
  func_0x000107c610f8(PTR_PTR_1126bb828);
  func_0x000107c48ee4();
  puVar4 = puVar3;
  func_0x000107c5e4f0(puVar3);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  func_0x000107c61170(puVar1);
  puVar1 = puVar4;
  func_0x000107c3ecc8(puVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar4);
  return puVar1;
}



/* Entry: 101019450; end: 10101949f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101019450(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c42194(*(undefined8 *)(unaff_x20 + _DAT_112d55020));
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1010194a0; end: 101019507; -[_TtC32SnapEditorAiModePluginEntryPoint20AiModePluginProvider dealloc] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010194a0(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lStack_40;
  long lStack_38;
  
  lVar1 = param_1;
  func_0x000107c614f0();
  uVar2 = *(undefined8 *)(param_1 + _DAT_112d55020);
  func_0x000107c61174();
  func_0x000107c42194(uVar2);
  lStack_40 = param_1;
  lStack_38 = lVar1;
  func_0x000107c61154(&lStack_40,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101019508; end: 10101968b; -[_TtC32SnapEditorAiModePluginEntryPoint20AiModePluginProvider .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101019508(long param_1)

{
  long lVar1;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54fb0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54fb8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54fc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d54fc8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54fd0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54fd8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54fe0));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d54fe8));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112d54ff0));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d54ff8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55000));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d55008 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d55010 + 8));
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112d55018 + 8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55020));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112d55028));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55030));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55038));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55040));
  func_0x000107c61610(param_1 + _DAT_112d55048);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d55050));
  param_1 = param_1 + _DAT_112d55058;
  lVar1 = 0x112d55088;
  func_0x0001000285a8(0x112d55088,&UNK_10db19ca0);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 10101968c; end: 101019803;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10101968c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d55050;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d55050);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    func_0x0001010196f0();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 101019804; end: 101019b8f;  */

undefined * FUN_101019804(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined1 *puVar10;
  undefined **ppuVar11;
  code *pcVar12;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar6 = &puStack_90;
  ppuVar7 = &puStack_90;
  ppuVar8 = &puStack_90;
  ppuVar9 = &puStack_90;
  ppuVar11 = &puStack_90;
  puVar1 = PTR_PTR_1126a6148;
  func_0x000107c610f8(PTR_PTR_1126a6148);
  func_0x000107c453e4();
  puVar2 = &UNK_110377748;
  func_0x000107c613fc(&UNK_110377748,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c6157c(puVar2);
  puVar4 = puVar3;
  func_0x000107c4a02c();
  pcVar12 = FUN_10101b6b8;
  puVar5 = puVar2;
  if (((ulong)puVar4 & 1) == 0) {
    puVar5 = &UNK_110377770;
    func_0x000107c613fc(&UNK_110377770,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10101b6b8;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar12 = FUN_10101b6d8;
  }
  func_0x000107c61574(puVar2);
  puVar4 = PTR___NSConcreteStackBlock_11034bd00;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_110377788;
  pcStack_70 = pcVar12;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c57d78(puVar1);
  func_0x000107c60bd0(ppuVar6);
  puVar2 = &UNK_110377748;
  func_0x000107c613fc(&UNK_110377748,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  func_0x000107c6157c(puVar2);
  func_0x000107c4a02c();
  pcVar12 = FUN_10101b6fc;
  puVar5 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar5 = &UNK_1103777c0;
    func_0x000107c613fc(&UNK_1103777c0,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_10101b6fc;
    *(undefined **)(puVar5 + 0x18) = puVar2;
    pcVar12 = (code *)0x10101bfec;
  }
  func_0x000107c61574(puVar2);
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)&UNK_1000f6b44;
  puStack_78 = &UNK_1103777d8;
  pcStack_70 = pcVar12;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c521c0(puVar1);
  func_0x000107c60bd0(ppuVar7);
  puVar2 = &UNK_110377748;
  puVar5 = puVar2;
  func_0x000107c613fc(&UNK_110377748,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  pcStack_70 = FUN_10101b71c;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10101a9b0;
  puStack_78 = &UNK_110377800;
  puStack_68 = puVar5;
  func_0x000107c60bc4(&puStack_90);
  func_0x000107c61574(puStack_68);
  func_0x000107c5440c(puVar1);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c613fc(&UNK_110377748,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_70 = (code *)0x10101b724;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_100e46924;
  puStack_78 = &UNK_110377828;
  puStack_68 = puVar2;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_68);
  func_0x000107c597a8(puVar1);
  func_0x000107c60bd0();
  func_0x000101019254();
  puVar10 = (undefined1 *)ppuVar9;
  func_0x000107c5cb24();
  func_0x000107c61180();
  func_0x000107c61170(ppuVar9);
  puVar2 = &UNK_110377860;
  func_0x000107c613fc(&UNK_110377860,0x18,7);
  *(undefined1 **)(puVar2 + 0x10) = puVar10;
  pcStack_70 = (code *)0x10101b72c;
  puStack_90 = puVar4;
  uStack_88 = 0x42000000;
  pcStack_80 = (code *)0x10101bff8;
  puStack_78 = &UNK_110377878;
  puStack_68 = puVar2;
  func_0x000107c60bc4(&puStack_90);
  puVar2 = puStack_68;
  func_0x000107c61174(puVar10);
  func_0x000107c61574(puVar2);
  func_0x000107c56bf8(puVar1);
  func_0x000107c60bd0(ppuVar11);
  puVar2 = PTR_PTR_1126a6150;
  func_0x000107c610f8(PTR_PTR_1126a6150);
  func_0x000107c453e4();
  func_0x000107c525ac();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(puVar10);
  return puVar2;
}



/* Entry: 101019b90; end: 10101a40b;  */

/* WARNING: Possible PIC construction at 0x000101019ca4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101a05c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101a354: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101a3a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101019e40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101019e24: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101019e44) */
/* WARNING: Removing unreachable block (ram,0x00010101a3a4) */
/* WARNING: Removing unreachable block (ram,0x00010101a358) */
/* WARNING: Removing unreachable block (ram,0x00010101a060) */
/* WARNING: Removing unreachable block (ram,0x00010101a098) */
/* WARNING: Removing unreachable block (ram,0x00010101a0a4) */
/* WARNING: Removing unreachable block (ram,0x00010101a120) */
/* WARNING: Removing unreachable block (ram,0x00010101a180) */
/* WARNING: Removing unreachable block (ram,0x00010101a134) */
/* WARNING: Removing unreachable block (ram,0x00010101a3e4) */
/* WARNING: Removing unreachable block (ram,0x00010101a15c) */
/* WARNING: Removing unreachable block (ram,0x00010101a0c8) */
/* WARNING: Removing unreachable block (ram,0x000101019ca8) */
/* WARNING: Removing unreachable block (ram,0x000101019d68) */
/* WARNING: Removing unreachable block (ram,0x000101019e48) */
/* WARNING: Removing unreachable block (ram,0x000101019e6c) */
/* WARNING: Removing unreachable block (ram,0x000101019d74) */
/* WARNING: Removing unreachable block (ram,0x000101019d94) */
/* WARNING: Removing unreachable block (ram,0x000101019d9c) */
/* WARNING: Removing unreachable block (ram,0x000101019da0) */
/* WARNING: Removing unreachable block (ram,0x000101019cc0) */
/* WARNING: Removing unreachable block (ram,0x000101019cf8) */
/* WARNING: Removing unreachable block (ram,0x000101019e8c) */
/* WARNING: Removing unreachable block (ram,0x000101019e94) */
/* WARNING: Removing unreachable block (ram,0x000101019d30) */
/* WARNING: Removing unreachable block (ram,0x000101019ea0) */
/* WARNING: Removing unreachable block (ram,0x000101019ea8) */
/* WARNING: Removing unreachable block (ram,0x000101019d3c) */
/* WARNING: Removing unreachable block (ram,0x00010101a3f4) */
/* WARNING: Removing unreachable block (ram,0x000101019d44) */
/* WARNING: Removing unreachable block (ram,0x00010101a404) */
/* WARNING: Removing unreachable block (ram,0x000101019d50) */
/* WARNING: Removing unreachable block (ram,0x000101019d58) */
/* WARNING: Removing unreachable block (ram,0x000101019eac) */
/* WARNING: Removing unreachable block (ram,0x000101019fa0) */
/* WARNING: Removing unreachable block (ram,0x000101019f0c) */
/* WARNING: Removing unreachable block (ram,0x000101019fac) */
/* WARNING: Removing unreachable block (ram,0x000101019fb8) */
/* WARNING: Removing unreachable block (ram,0x000101019f30) */
/* WARNING: Removing unreachable block (ram,0x000101019fc0) */
/* WARNING: Removing unreachable block (ram,0x000101019fc8) */
/* WARNING: Removing unreachable block (ram,0x000101019fd0) */
/* WARNING: Removing unreachable block (ram,0x00010101a0ec) */
/* WARNING: Removing unreachable block (ram,0x00010101a188) */
/* WARNING: Removing unreachable block (ram,0x00010101a190) */
/* WARNING: Removing unreachable block (ram,0x00010101a214) */
/* WARNING: Removing unreachable block (ram,0x00010101a194) */
/* WARNING: Removing unreachable block (ram,0x00010101a238) */
/* WARNING: Removing unreachable block (ram,0x00010101a1f8) */
/* WARNING: Removing unreachable block (ram,0x00010101a240) */
/* WARNING: Removing unreachable block (ram,0x00010101a27c) */
/* WARNING: Removing unreachable block (ram,0x00010101a274) */
/* WARNING: Removing unreachable block (ram,0x00010101a298) */
/* WARNING: Removing unreachable block (ram,0x00010101a2a4) */
/* WARNING: Removing unreachable block (ram,0x00010101a048) */
/* WARNING: Removing unreachable block (ram,0x000101019e28) */
/* WARNING: Removing unreachable block (ram,0x00010101a380) */
/* WARNING: Removing unreachable block (ram,0x000101019e34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101019b90(undefined8 param_1,code *param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 auStack_108 [24];
  long alStack_f0 [10];
  undefined8 uStack_a0;
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_11034bdc0;
  lVar2 = 0;
  func_0x000107c5ede0();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar2 = 0;
  func_0x000107c5fb10();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar2 + -8) + 0x40));
  lVar1 = (-0xd0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
          (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar2 = unaff_x20 + _DAT_112d55048;
  func_0x000107c61618();
  if (lVar2 != 0) {
    uVar5 = *(undefined8 *)(lVar2 + _DAT_11302bac8);
    puVar3 = PTR_PTR_1126b0320;
    func_0x000107c61168(PTR_PTR_1126b0320);
    func_0x000107c615f0(uVar5);
    func_0x000107c4d044(puVar3);
    func_0x000107c61180();
    uVar4 = uVar5;
    func_0x000107c4d048();
    func_0x000107c61180();
    uStack_a0 = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar5);
    return;
  }
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lStack_68) {
    return;
  }
  func_0x000107c60e78();
  *(long *)((long)alStack_f0 + lVar1 + 0xd0) = unaff_x20;
  *(long *)((long)alStack_f0 + lVar1 + 0xd8) = unaff_x20;
  *(undefined1 **)((long)alStack_f0 + lVar1 + 0xe0) = &stack0xfffffffffffffff0;
  *(code **)((long)alStack_f0 + lVar1 + 0xe8) = FUN_10101a40c;
  func_0x000107c61428(lVar2 + 0x10,auStack_108 + lVar1 + 0xd0,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    (*param_2)();
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 10101a40c; end: 10101a463;  */

void FUN_10101a40c(long param_1,code *param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 != 0) {
    (*param_2)();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10101a464; end: 10101a867;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101a464(void)

{
  long *plVar1;
  undefined *puVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  long **pplVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  code *pcVar10;
  long lVar11;
  long **pplVar12;
  long unaff_x20;
  undefined8 uVar13;
  long *plStack_a0;
  long *plStack_98;
  undefined8 uStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  pplVar6 = &plStack_a0;
  pplVar12 = &plStack_a0;
  func_0x0001000d224c(&plStack_a0);
  plVar9 = plStack_a0;
  func_0x000107c4b9ec(plStack_a0);
  func_0x000107c615e8(plVar9);
  func_0x0001000d224c(&uStack_70);
  uVar13 = uStack_70;
  func_0x000107c614f0(uStack_70);
  FUN_10101b310(&plStack_a0);
  (**(code **)(lStack_68 + 0x18))(&plStack_a0,uVar13,lStack_68);
  func_0x000107c615e8(uStack_70);
  FUN_10101bb90(&plStack_a0);
  lVar4 = *(long *)(unaff_x20 + _DAT_112d54fc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar2 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar4 != 0) {
    lVar11 = lVar4;
    func_0x000107c3e280();
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10101a868);
      (*pcVar3)();
    }
    puVar5 = PTR__OBJC_CLASS___NSOperationQueue_1126ae508;
    func_0x000107c61168(PTR__OBJC_CLASS___NSOperationQueue_1126ae508);
    func_0x000107c4c188();
    func_0x000107c61180();
    lVar4 = lVar11;
    func_0x000107c4da80(lVar11);
    func_0x000107c61180();
    func_0x000107c61170(lVar11);
    func_0x000107c61170(puVar5);
    puVar5 = &UNK_110377748;
    func_0x000107c613fc(&UNK_110377748,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_80 = (code *)0x10101bd30;
    plStack_a0 = (long *)puVar2;
    plStack_98 = (long *)0x42000000;
    uStack_90 = 0x10101bff0;
    puStack_88 = &UNK_1103779b8;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&plStack_a0);
    func_0x000107c61574(puStack_78);
    lVar11 = lVar4;
    func_0x000107c5c320(lVar4);
    func_0x000107c61180();
    func_0x000107c60bd0(pplVar6);
    func_0x000107c61170(lVar4);
    func_0x000107c3e924(lVar11);
    func_0x000107c61170(lVar11);
  }
  plVar9 = *(long **)(unaff_x20 + _DAT_112d55010);
  plVar1 = (long *)((long *)(unaff_x20 + _DAT_112d55010))[1];
  uVar13 = *(undefined8 *)(*(long *)(unaff_x20 + _DAT_112d54fe0) + 0x48);
  func_0x000107c6157c(uVar13);
  func_0x0001000c74f0(&plStack_a0);
  func_0x000107c61574(uVar13);
  plVar8 = plStack_98;
  if (plStack_98 != (long *)0x0) {
    if ((plStack_a0 == plVar9) && (plStack_98 == plVar1)) {
      func_0x000107c6142c();
      goto LAB_10101a6dc;
    }
    plVar7 = plStack_a0;
    func_0x000107c605b8(plStack_a0,plStack_98,plVar9,plVar1,0);
    func_0x000107c6142c();
    if (((ulong)plVar7 & 1) != 0) goto LAB_10101a6dc;
  }
  FUN_101018228(plVar9,plVar1);
  plVar8 = plVar9;
LAB_10101a6dc:
  FUN_1010180c4();
  pcVar3 = FUN_10101aff8;
  lVar4 = 0;
  (**(code **)(*plVar8 + 0x60))(FUN_10101aff8);
  func_0x000107c61574(plVar8);
  pcVar10 = pcVar3;
  func_0x000107c614f0(pcVar3);
  FUN_1010191dc();
  (**(code **)(lVar4 + 0x10))();
  func_0x000107c615e8(pcVar3);
  func_0x000107c61574(pcVar10);
  lVar11 = *(long *)(unaff_x20 + _DAT_112d54fc0);
  func_0x000107c5c884();
  func_0x000107c61180();
  lVar4 = lVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar11);
  if (lVar4 != 0) {
    lVar11 = lVar4;
    func_0x000107c5ae88(lVar4);
    func_0x000107c61180();
    func_0x000107c615e8(lVar4);
    puVar5 = &UNK_110377748;
    func_0x000107c613fc(&UNK_110377748,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    pcStack_80 = FUN_10101bd28;
    plStack_a0 = (long *)puVar2;
    plStack_98 = (long *)0x42000000;
    uStack_90 = 0x10101bff4;
    puStack_88 = &UNK_110377990;
    puStack_78 = puVar5;
    func_0x000107c60bc4(&plStack_a0);
    func_0x000107c61574(puStack_78);
    lVar4 = lVar11;
    func_0x000107c5c320(lVar11);
    func_0x000107c61180();
    func_0x000107c60bd0(pplVar12);
    func_0x000107c61170(lVar11);
    func_0x000107c3e924(lVar4);
    func_0x000107c61170(lVar4);
  }
  return;
}



/* Entry: 10101a868; end: 10101a92f;  */

void FUN_10101a868(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  puVar1 = &UNK_110377928;
  func_0x000107c613fc(&UNK_110377928,0x31,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  puVar1[0x30] = param_2;
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c61174(param_1);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_4);
  func_0x000107c4a02c();
  pcVar4 = (code *)0x10101b74c;
  puVar3 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = &UNK_110377950;
    func_0x000107c613fc(&UNK_110377950,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10101b74c;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    pcVar4 = FUN_10101b6d8;
  }
  (*pcVar4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10101a930; end: 10101a9af;  */

void FUN_10101a930(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,uint param_5)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    (*param_2)();
  }
  else {
    FUN_10101babc(param_5 & 1,param_2,param_3);
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10101a9b0; end: 10101aa4f;  */

/* WARNING: Possible PIC construction at 0x00010101aa2c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101aa30) */

void FUN_10101a9b0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c60bc4();
  puVar3 = &UNK_110377900;
  func_0x000107c613fc(&UNK_110377900,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  func_0x000107c6157c(uVar2);
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2,param_3,0x10101b73c,puVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10101aa50; end: 10101ab0f;  */

undefined * FUN_10101aa50(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  
  puVar1 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar2 = &UNK_1103778b0;
  func_0x000107c613fc(&UNK_1103778b0,0x20,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  puVar3 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c61174(puVar1);
  func_0x000107c6157c(param_1);
  func_0x000107c4a02c();
  pcVar5 = (code *)0x10101b734;
  puVar4 = puVar2;
  if (((ulong)puVar3 & 1) == 0) {
    puVar4 = &UNK_1103778d8;
    func_0x000107c613fc(&UNK_1103778d8,0x20,7);
    *(undefined8 *)(puVar4 + 0x10) = 0x10101b734;
    *(undefined **)(puVar4 + 0x18) = puVar2;
    pcVar5 = FUN_10101b6d8;
  }
  (*pcVar5)();
  func_0x000107c61574(puVar4);
  return puVar1;
}



/* Entry: 10101ab10; end: 10101abd7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101ab10(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  uVar1 = param_2 + 0x10;
  func_0x000107c61618();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    func_0x000101018158();
    if ((uVar2 & 0xff) == 0) {
      FUN_101018720();
    }
    else {
      FUN_10101b214();
    }
    func_0x000107c61170(uVar1);
  }
  puVar3 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c43b74(param_1);
  func_0x000107c61170(puVar3);
  return;
}



/* Entry: 10101abd8; end: 10101ac0f;  */

void FUN_10101abd8(long param_1)

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



/* Entry: 10101ac10; end: 10101ada3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101ac10(void)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined *puVar7;
  long unaff_x20;
  long lVar8;
  
  lVar3 = unaff_x20 + _DAT_112d55048;
  func_0x000107c61618();
  if (lVar3 == 0) {
    return;
  }
  lVar4 = *(long *)(lVar3 + _DAT_11302bb50);
  if (lVar4 != 0) {
    func_0x000107c3da58();
    func_0x000107c61180();
    if (lVar4 != 0) {
      uVar6 = *(ulong *)(lVar4 + _DAT_11307e7c0);
      uVar1 = ((ulong *)(lVar4 + _DAT_11307e7c0))[1];
      lVar8 = *(long *)(lVar3 + _DAT_11302bad8);
      func_0x000107c61434(uVar1);
      func_0x000107c5b198();
      func_0x000107c61180();
      lVar5 = lVar8;
      func_0x000107c4adb4();
      func_0x000107c61180();
      func_0x000107c61170(lVar8);
      if (lVar5 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10101ada4);
        (*pcVar2)();
      }
      func_0x000107c44fd8();
      func_0x000107c61170(lVar5);
      puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68;
      func_0x000107c6057c(PTR___ss5Int64VN_11034ee50,
                          PTR___ss5Int64Vs23CustomStringConvertiblesWP_11034ee68);
      func_0x000107c5fb78();
      func_0x000107c6142c(puVar7);
      if (uVar6 == 0 && uVar1 == 0xe000000000000000) {
        func_0x000107c6142c(uVar1);
        func_0x000107c6142c(0xe000000000000000);
        func_0x000107c61170(lVar3);
        return;
      }
      func_0x000107c605b8(uVar6,uVar1,0,0xe000000000000000,0);
      func_0x000107c6142c(uVar1);
      func_0x000107c6142c(0xe000000000000000);
      func_0x000107c61170(lVar3);
      lVar3 = lVar4;
      if ((uVar6 & 1) != 0) {
        return;
      }
    }
  }
  func_0x000107c61170(lVar3);
  return;
}



/* Entry: 10101ada4; end: 10101aff7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101ada4(ulong param_1,long param_2)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 auStack_68 [24];
  
  puVar7 = auStack_68;
  func_0x000107c61428(param_2 + 0x10,puVar7,0,0);
  puVar1 = (undefined *)(param_2 + 0x10);
  func_0x000107c61618();
  if (puVar1 == (undefined *)0x0) {
    return;
  }
  uVar2 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c4b1dc();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  puVar8 = puVar7;
  func_0x000107c61170(uVar3);
  if (uVar2 == *(ulong *)(puVar1 + _DAT_112d55010) &&
      puVar7 == *(undefined1 **)((long)(puVar1 + _DAT_112d55010) + 8)) {
    func_0x000107c6142c(puVar7);
  }
  else {
    puVar8 = puVar7;
    func_0x000107c605b8();
    func_0x000107c6142c(puVar7);
    if ((uVar2 & 1) == 0) goto LAB_10101afd4;
  }
  uVar2 = param_1;
  func_0x000107c50300();
  func_0x000107c61180();
  uVar3 = uVar2;
  func_0x000107c428b4();
  func_0x000107c61180();
  func_0x000107c61170(uVar2);
  uVar2 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  if ((uVar2 == 0x7061635f74736f70) && (puVar8 == (undefined1 *)0xef69615f65727574)) {
    func_0x000107c6142c(0xef69615f65727574);
  }
  else {
    func_0x000107c605b8(uVar2,puVar8,0x7061635f74736f70,0xef69615f65727574,0);
    func_0x000107c6142c(puVar8);
    if ((uVar2 & 1) == 0) goto LAB_10101afd4;
  }
  uVar4 = *(undefined8 *)(puVar1 + _DAT_112d55030);
  *(ulong *)(puVar1 + _DAT_112d55030) = param_1;
  func_0x000107c61170(uVar4);
  func_0x000107c61174();
  func_0x000101019254();
  func_0x000107c5bd00();
  puVar5 = PTR_PTR_1126a6158;
  func_0x000107c610f8(PTR_PTR_1126a6158);
  uVar4 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  uVar6 = 0;
  func_0x000107c5fadc(0,0xe000000000000000);
  func_0x000107c489ac(puVar5);
  func_0x000107c61170(uVar4);
  func_0x000107c61170(uVar6);
  func_0x000107c4d664(param_1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  puVar1 = puVar5;
LAB_10101afd4:
  func_0x000107c61170(puVar1);
  return;
}



/* Entry: 10101aff8; end: 10101affb;  */

void FUN_10101aff8(void)

{
  return;
}



/* Entry: 10101affc; end: 10101b057;  */

void FUN_10101affc(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_10101b058(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 10101b058; end: 10101b1c7;  */

/* WARNING: Possible PIC construction at 0x00010101b0b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101b0dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101b16c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101b19c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101b170) */
/* WARNING: Removing unreachable block (ram,0x00010101b0e0) */
/* WARNING: Removing unreachable block (ram,0x00010101b0e8) */
/* WARNING: Removing unreachable block (ram,0x00010101b104) */
/* WARNING: Removing unreachable block (ram,0x00010101b0f0) */
/* WARNING: Removing unreachable block (ram,0x00010101b134) */
/* WARNING: Removing unreachable block (ram,0x00010101b0b8) */
/* WARNING: Removing unreachable block (ram,0x00010101b1a0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101b058(undefined8 param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar1 = param_1;
  FUN_101019378();
  uVar2 = *(ulong *)(unaff_x20 + _DAT_112d54ff0);
  func_0x000107c4a230();
  if ((uVar2 & 1) == 0) {
    func_0x000107c4b1dc(param_1);
    func_0x000107c61180();
    func_0x000107c5faec();
    uVar1 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10101b1c8; end: 10101b213;  */

void FUN_10101b1c8(long param_1,undefined8 param_2)

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



/* Entry: 10101b214; end: 10101b30f;  */

/* WARNING: Possible PIC construction at 0x00010101b258: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101b2c4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101b25c) */
/* WARNING: Removing unreachable block (ram,0x00010101b2fc) */
/* WARNING: Removing unreachable block (ram,0x00010101b260) */
/* WARNING: Removing unreachable block (ram,0x00010101b2c8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101b214(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d54fc0);
  func_0x000107c3fb74(uVar1);
  func_0x000107c61180();
  func_0x000107c5c734();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10101b310; end: 10101b44b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101b310(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puVar7;
  long unaff_x20;
  long lStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  char cStack_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [48];
  
  lVar5 = _DAT_112d55058;
  func_0x000107c61428(unaff_x20 + _DAT_112d55058,auStack_98,0,0);
  func_0x00010101bbc4(unaff_x20 + lVar5,&lStack_c8);
  if (cStack_a0 == -1) {
    plVar6 = &lStack_c8;
    func_0x00010101bc14();
    uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112d55010);
    uVar3 = ((undefined8 *)(unaff_x20 + _DAT_112d55010))[1];
    uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112d55018);
    uVar4 = ((undefined8 *)(unaff_x20 + _DAT_112d55018))[1];
    param_1[3] = (long)&UNK_110377a70;
    FUN_10101bc5c();
    param_1[4] = (long)plVar6;
    puVar7 = &UNK_110377978;
    func_0x000107c613fc(&UNK_110377978,0x30,7);
    *param_1 = (long)puVar7;
    *(undefined8 *)(puVar7 + 0x10) = uVar1;
    *(undefined8 *)(puVar7 + 0x18) = uVar3;
    *(undefined8 *)(puVar7 + 0x20) = uVar2;
    *(undefined8 *)(puVar7 + 0x28) = uVar4;
    *(undefined1 *)(param_1 + 5) = 0;
    FUN_10101bc9c(param_1,auStack_80);
    func_0x000107c61428(unaff_x20 + lVar5,&lStack_c8,0x21,0);
    func_0x000107c61434(uVar3);
    func_0x000107c61434(uVar4);
    func_0x00010101bcd8(auStack_80,unaff_x20 + lVar5);
    func_0x000107c614a8(&lStack_c8);
  }
  else {
    param_1[1] = lStack_c0;
    *param_1 = lStack_c8;
    param_1[3] = CONCAT71(uStack_af,uStack_b0);
    param_1[2] = lStack_b8;
    *(ulong *)((long)param_1 + 0x21) = CONCAT17(cStack_a0,uStack_a7);
    *(ulong *)((long)param_1 + 0x19) = CONCAT17(uStack_a8,uStack_af);
  }
  return;
}



/* Entry: 10101b44c; end: 10101b497; -[_TtC32SnapEditorAiModePluginEntryPoint20AiModePluginProvider init] */

void FUN_10101b44c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorAiModePluginEntryPoint.AiModePluginProvider",0x35,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10101b478);
  (*pcVar1)();
}



/* Entry: 10101b498; end: 10101b4ef;  */

undefined1  [16] FUN_10101b498(void)

{
  undefined1 auVar1 [16];
  undefined1 (*unaff_x20) [16];
  
  auVar1 = *unaff_x20;
  func_0x000107c61434(*(undefined8 *)(*unaff_x20 + 8));
  return auVar1;
}



/* Entry: 10101b4f0; end: 10101b633;  */

/* WARNING: Possible PIC construction at 0x00010101b52c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101b530) */

long FUN_10101b4f0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *param_1;
  lVar2 = param_1[1];
  lVar3 = *param_2;
  lVar4 = param_2[1];
  if ((lVar1 == lVar3 && lVar2 == lVar4) &&
     (lVar1 = param_1[2], lVar2 = param_1[3], lVar3 = param_2[2], lVar4 = param_2[3],
     param_1[2] == param_2[2] && param_1[3] == param_2[3])) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdb99e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)
    PTR___ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF_11034ec88
  )(lVar1,lVar2,lVar3,lVar4,0);
  return lVar1;
}



/* Entry: 10101b634; end: 10101b6b7; -[_TtC32SnapEditorAiModePluginEntryPoint20AiModePluginProvider generativeContentReportDidCompleteWithCancelled:] */

/* WARNING: Possible PIC construction at 0x00010101b670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101b68c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101b674) */
/* WARNING: Removing unreachable block (ram,0x00010101b690) */
/* WARNING: Removing unreachable block (ram,0x000107c615e8) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0578) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101b634(void)

{
  func_0x000107c61174();
  func_0x000107c5194c();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)();
  return;
}



/* Entry: 10101b6b8; end: 10101b6d7;  */

void FUN_10101b6b8(void)

{
  FUN_10101a40c();
  return;
}



/* Entry: 10101b6d8; end: 10101b6fb;  */

void FUN_10101b6d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  ppuVar4 = &puStack_60;
  pcVar3 = "runOnMain(_:)";
  func_0x0001000c10c0("runOnMain(_:)");
  func_0x000107c61180();
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_1103779e0;
  uStack_40 = uVar1;
  uStack_38 = uVar2;
  func_0x000107c60bc4(&puStack_60);
  uVar1 = uStack_38;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar1);
  func_0x000107c4e524(pcVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c615e8(pcVar3);
  return;
}



/* Entry: 10101b6fc; end: 10101b71b;  */

void FUN_10101b6fc(void)

{
  FUN_10101a40c();
  return;
}



/* Entry: 10101b71c; end: 10101b75b;  */

void FUN_10101b71c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 unaff_x20;
  
  puVar1 = &UNK_110377928;
  func_0x000107c613fc(&UNK_110377928,0x31,7);
  *(undefined8 *)(puVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  puVar1[0x30] = param_2;
  puVar2 = PTR__OBJC_CLASS___NSThread_1126b47e0;
  func_0x000107c61168();
  func_0x000107c61174(param_1);
  func_0x000107c6157c();
  func_0x000107c6157c(param_4);
  func_0x000107c4a02c();
  pcVar4 = (code *)0x10101b74c;
  puVar3 = puVar1;
  if (((ulong)puVar2 & 1) == 0) {
    puVar3 = &UNK_110377950;
    func_0x000107c613fc(&UNK_110377950,0x20,7);
    *(undefined8 *)(puVar3 + 0x10) = 0x10101b74c;
    *(undefined **)(puVar3 + 0x18) = puVar1;
    pcVar4 = FUN_10101b6d8;
  }
  (*pcVar4)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar3);
  return;
}



/* Entry: 10101b75c; end: 10101b91f;  */

ulong FUN_10101b75c(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10101b840);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10101b844);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000107c615f0(param_1);
    puVar4 = PTR_PTR_1126b1d00;
    func_0x000107c61168(PTR_PTR_1126b1d00);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x52);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    uVar3 = 0xd000000000000043;
  }
  else {
    uVar5 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar5 = param_2;
    }
    func_0x000107c60488(param_1,uVar5);
    puVar4 = PTR_PTR_1126b1d00;
    func_0x000107c61168(PTR_PTR_1126b1d00);
    uVar5 = param_1;
    func_0x000107c6148c(param_1,puVar4);
    if (uVar5 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  FUN_10101bd38(0,0x112d550a8,&PTR_PTR_1126b1d00);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10101b920);
  (*pcVar2)();
}



/* Entry: 10101b920; end: 10101babb;  */

ulong FUN_10101b920(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10101b9f0);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10101b9f4);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x000103e2a910(0);
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
    func_0x000103e2a910(0);
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
  func_0x000107c5fb78(0xd000000000000012,0x800000010ef20180);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10101babc);
  (*pcVar2)();
}



/* Entry: 10101babc; end: 10101bb8f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101babc(ulong param_1,code *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_90 [48];
  undefined8 uStack_60;
  long lStack_58;
  
  if ((param_1 & 1) == 0) {
    func_0x0001000d224c(&uStack_60);
    uVar1 = uStack_60;
    func_0x000107c614f0(uStack_60);
    FUN_10101b310(auStack_90);
    pcVar2 = *(code **)(lStack_58 + 0x28);
    uVar3 = uStack_60;
  }
  else {
    func_0x0001000d224c(&uStack_60);
    uVar1 = uStack_60;
    func_0x000107c614f0(uStack_60);
    FUN_10101b310(auStack_90);
    pcVar2 = *(code **)(lStack_58 + 0x20);
    uVar3 = uStack_60;
  }
  (*pcVar2)(auStack_90,uVar1,lStack_58);
  func_0x000107c615e8(uVar3);
  FUN_10101bb90(auStack_90);
  (*param_2)(0);
  return;
}



/* Entry: 10101bb90; end: 10101bc5b;  */

undefined8 FUN_10101bb90(undefined8 param_1)

{
  (*(code *)&DAT_103a1d3f8)();
  return param_1;
}



/* Entry: 10101bc5c; end: 10101bc9b;  */

void FUN_10101bc5c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d55090 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10d91c2e8;
  func_0x000107c61520(&DAT_10d91c2e8,&UNK_110377a70);
  puRam0000000112d55090 = puVar1;
  return;
}



/* Entry: 10101bc9c; end: 10101bd27;  */

undefined8 FUN_10101bc9c(undefined8 param_1,undefined8 param_2)

{
  (*(code *)&DAT_103a1d3fc)(param_2,param_1);
  return param_2;
}



/* Entry: 10101bd28; end: 10101bd37;  */

void FUN_10101bd28(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_10101b058(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10101bd38; end: 10101be07;  */

void FUN_10101bd38(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10101be08; end: 10101be73;  */

undefined8 * FUN_10101be08(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  return param_1;
}



/* Entry: 10101be74; end: 10101beb7;  */

undefined8 * FUN_10101be74(undefined8 *param_1,undefined8 *param_2)

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
  return param_1;
}



/* Entry: 10101beb8; end: 10101bf4f;  */

int FUN_10101beb8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10101bf50; end: 10101bf73;  */

void FUN_10101bf50(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10101bf74();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Entry: 10101bf74; end: 10101bfb3;  */

void FUN_10101bf74(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d550b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91c2c0;
  func_0x000107c61520(&UNK_10d91c2c0,&UNK_110377a70);
  puRam0000000112d550b0 = puVar1;
  return;
}



/* Entry: 10101bfb4; end: 10101bffb;  */

void FUN_10101bfb4(long param_1,long param_2)

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



/* Entry: 10101bffc; end: 10101c1db;  */

undefined * FUN_10101bffc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x000107c5c848();
  func_0x000107c61180();
  puVar2 = &UNK_110377ad0;
  func_0x000107c613fc(&UNK_110377ad0,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  puVar3 = PTR_PTR_1126a6170;
  func_0x000107c610f8(PTR_PTR_1126a6170);
  func_0x000107c61174(uVar1);
  func_0x000107c5fadc(param_1,param_2);
  pcStack_60 = FUN_10101ccac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_10101ccb4;
  puStack_68 = &UNK_110377ae8;
  puStack_58 = puVar2;
  func_0x000107c60bc4(&puStack_80);
  func_0x000107c472e4(puVar3);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61170(param_1);
  func_0x000107c61574(puStack_58);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c46ecc();
  func_0x000107c5a1f4(puVar3);
  func_0x000107c61170(puVar2);
  func_0x000107c553cc(puVar3);
  func_0x000107c4a230(*(undefined8 *)(unaff_x20 + 0x38));
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c57d00(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c52670(puVar3);
  func_0x000107c61170(puVar2);
  puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c45a48();
  func_0x000107c59784(puVar3);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(puVar2);
  return puVar3;
}



/* Entry: 10101c1dc; end: 10101c557;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10101c1dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5dbd4();
  func_0x000107c61180();
  lVar2 = lVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 != 0) {
    lVar1 = lVar2;
    func_0x000107c509b4();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    if (lVar1 != 0) {
      lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) + _DAT_113083898);
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar2 != 0) {
        lVar3 = *(long *)(unaff_x20 + 0x20);
        func_0x000107c44588();
        func_0x000107c61180();
        lVar4 = lVar3;
        func_0x000107c5c734();
        func_0x000107c61180();
        func_0x000107c61170(lVar3);
        if (lVar4 == 0) {
          func_0x000107c615e8(lVar1);
          lVar1 = lVar2;
        }
        else {
          lVar3 = *(long *)(*(long *)(unaff_x20 + 0x28) + _DAT_113093a98);
          func_0x000107c5c734();
          func_0x000107c61180();
          if (lVar3 != 0) {
            uVar5 = 0xd00000000000001e;
            func_0x000107c5fadc(0xd00000000000001e,0x800000010ef201e0);
            lVar6 = lVar3;
            func_0x000107c4e60c();
            func_0x000107c61180();
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(uVar5);
            puVar7 = PTR_PTR_1126afe50;
            func_0x000107c610f8(PTR_PTR_1126afe50);
            func_0x000107c4842c();
            puVar8 = PTR_PTR_1126ae728;
            func_0x000107c61168(PTR_PTR_1126ae728);
            func_0x000107c3edf4();
            func_0x000107c61180();
            uVar5 = 0xd000000000000018;
            func_0x000107c5fadc(0xd000000000000018,0x800000010ef1b1f0);
            puVar9 = puVar8;
            func_0x000107c545b8(puVar8);
            func_0x000107c61180();
            func_0x000107c61170(puVar8);
            func_0x000107c61170(uVar5);
            puVar8 = puVar9;
            func_0x000107c57f3c(puVar9);
            func_0x000107c61180();
            func_0x000107c61170(puVar9);
            uVar5 = 0x6c5065646f4d6941;
            func_0x000107c5fadc(0x6c5065646f4d6941,0xec0000006e696775);
            lVar3 = lVar4;
            func_0x000107c4c1b4(lVar4);
            func_0x000107c61180();
            func_0x000107c61170(uVar5);
            puVar9 = PTR_PTR_1126a6178;
            func_0x000107c610f8(PTR_PTR_1126a6178);
            func_0x000107c61174(puVar7);
            func_0x000107c615f0(lVar3);
            func_0x000107c615f0(lVar2);
            func_0x000107c61434(param_2);
            func_0x000107c5fadc(param_1,param_2);
            func_0x000107c6142c(param_2);
            func_0x000107c47a08(puVar9);
            func_0x000107c61170(puVar7);
            func_0x000107c615e8(lVar3);
            func_0x000107c615e8(lVar2);
            func_0x000107c61170(param_1);
            uVar10 = *(ulong *)(unaff_x20 + 0x38);
            func_0x000107c4a068();
            if ((uVar10 & 1) != 0) {
              FUN_10101c788();
              func_0x000107c552d8(puVar9);
              func_0x000107c61170(uVar10);
            }
            func_0x000107c615e8(lVar4);
            func_0x000107c615e8(lVar6);
            func_0x000107c615e8(lVar3);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(puVar8);
            func_0x000107c615e8(lVar2);
            func_0x000107c615e8(lVar1);
            return puVar9;
          }
          func_0x000107c615e8(lVar1);
          func_0x000107c615e8(lVar2);
          lVar1 = lVar4;
        }
      }
      func_0x000107c615e8(lVar1);
    }
  }
  return (undefined *)0x0;
}



/* Entry: 10101c558; end: 10101c787;  */

void FUN_10101c558(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar4 = param_2;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (param_2 == 0) {
    return;
  }
  if (param_1 == 0) {
    lVar3 = 0;
    lVar4 = -0x2000000000000000;
  }
  else {
    lVar6 = param_1;
    func_0x000107c41214(param_1);
    func_0x000107c61180();
    lVar3 = lVar6;
    func_0x000107c5faec();
    func_0x000107c61170(lVar6);
  }
  lVar6 = lVar4;
  func_0x000107c5fadc(lVar3,lVar4);
  func_0x000107c6142c(lVar4);
  if (param_1 == 0) {
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    lVar4 = 0;
    goto LAB_10101c718;
  }
  lVar4 = param_1;
  func_0x000107c44fcc(param_1);
  func_0x000107c61180();
  lVar5 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar5 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar6);
  }
  lVar6 = param_1;
  func_0x000107c4f4c4();
  func_0x000107c61180();
  if (lVar6 == 0) {
LAB_10101c6bc:
    lVar6 = 0;
  }
  else {
    uVar1 = 0;
    lStack_68 = lVar6;
    FUN_101018e74(0);
    uVar2 = 0;
    FUN_10101cedc(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c6147c(&uStack_58,&lStack_68,uVar1,uVar2,7);
    lStack_68 = 0;
    lStack_60 = 0;
    func_0x000107c5fae8(uStack_58,&lStack_68);
    func_0x000107c61170(uStack_58);
    lVar7 = lStack_60;
    if (lStack_60 == 0) goto LAB_10101c6bc;
    lVar6 = lStack_68;
    func_0x000107c5fadc(lStack_68,lStack_60);
    func_0x000107c6142c(lVar7);
  }
  lVar7 = param_1;
  func_0x000107c5c674(param_1);
  func_0x000107c61180();
  func_0x000107c4f4cc();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c49820();
    func_0x000107c61170(param_1);
  }
LAB_10101c718:
  func_0x000107c41190(param_2);
  func_0x000107c615e8(param_2);
  func_0x000107c61170(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  return;
}



/* Entry: 10101c788; end: 10101c89f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10101c788(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_58 [24];
  undefined8 uStack_40;
  long lStack_38;
  
  puVar1 = PTR_PTR_1126a6180;
  func_0x000107c610f8(PTR_PTR_1126a6180);
  func_0x000107c453e4();
  uVar4 = *(undefined8 *)(*(long *)(unaff_x20 + 0x40) + _DAT_113015eb8);
  func_0x000107c6157c(uVar4);
  func_0x0001000d224c(auStack_58);
  func_0x000107c61574(uVar4);
  func_0x0001000a8868(auStack_58,uStack_40);
  uVar4 = uStack_40;
  (**(code **)(lStack_38 + 0x20))(uStack_40,lStack_38);
  uVar2 = 0;
  FUN_10101cedc(0,0x112d38dd0,&PTR__OBJC_CLASS___NSArray_1126ae530);
  pcVar3 = FUN_10101c8a0;
  func_0x0001000bfde0(FUN_10101c8a0,0,uVar2);
  func_0x000107c61574(uVar4);
  func_0x0001004575f0();
  func_0x000107c61574(pcVar3);
  uVar2 = uVar4;
  func_0x000107c5cb24(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(uVar4);
  func_0x000107c54c98(puVar1);
  func_0x000107c61170(uVar2);
  func_0x0001000834e4(auStack_58);
  return puVar1;
}



/* Entry: 10101c8a0; end: 10101ca2b;  */

void FUN_10101c8a0(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  uVar6 = *param_2;
  if (uVar6 >> 0x3e == 0) {
    uVar7 = *(ulong *)((uVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar7 = uVar6 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar6) {
      uVar7 = uVar6;
    }
    func_0x000107c60480();
  }
  puVar5 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar7 != 0) {
    puStack_68 = PTR___swiftEmptyArrayStorage_11034f1c8;
    func_0x00010101cd8c(0,uVar7 & ((long)uVar7 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10101ca2c);
      (*pcVar1)();
    }
    uVar8 = 0;
    do {
      puVar5 = puStack_68;
      if ((uVar6 & 0xc000000000000001) == 0) {
        if (*(long *)((uVar6 & 0xffffffffffffff8) + 0x10) <= (long)uVar8) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10101ca10);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(uVar6 + uVar8 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar2 = uVar8;
        FUN_10101b920(uVar8,uVar6);
      }
      uStack_78 = uVar2;
      FUN_10101ca2c(&uStack_70,&uStack_78);
      func_0x000107c61170(uVar2);
      uVar3 = uStack_70;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      puStack_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
        func_0x00010101cd8c(1 < *(ulong *)(puVar5 + 0x18),uVar2 + 1,1);
      }
      uVar8 = uVar8 + 1;
      *(ulong *)(puStack_68 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puStack_68 + uVar2 * 8 + 0x20) = uVar3;
      puVar5 = puStack_68;
    } while (uVar7 != uVar8);
  }
  uVar3 = 0;
  FUN_10101cedc(0,0x112d55188,&PTR_PTR_1126a6188);
  puVar4 = puVar5;
  func_0x000107c5fc48(puVar5,uVar3);
  func_0x000107c6142c(puVar5);
  *param_1 = puVar4;
  return;
}



/* Entry: 10101ca2c; end: 10101cc1f;  */

void FUN_10101ca2c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  
  puVar2 = PTR__swift_isaMask_11034f488;
  puVar6 = (ulong *)*param_2;
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar6) + 0x78))();
  puVar7 = param_2;
  lVar4 = param_3;
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xa8))();
  lVar5 = lVar4;
  if (lVar4 == 0) {
    (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
    puVar1 = (undefined8 *)0x0;
    if (lVar4 != 0) {
      puVar1 = puVar7;
    }
    lVar5 = -0x2000000000000000;
    puVar7 = puVar1;
    if (lVar4 != 0) {
      lVar5 = lVar4;
    }
  }
  puVar3 = PTR_PTR_1126a6188;
  func_0x000107c610f8();
  func_0x000107c5fadc(param_2,param_3);
  func_0x000107c6142c(param_3);
  lVar4 = lVar5;
  func_0x000107c5fadc(puVar7);
  func_0x000107c6142c(lVar5);
  func_0x000107c491fc();
  func_0x000107c61170(param_2);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xc0))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52cc4(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0xd8))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    lVar5 = lVar4;
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    lVar4 = lVar5;
  }
  func_0x000107c52d30(puVar3);
  func_0x000107c61170(puVar7);
  (**(code **)((*(ulong *)puVar2 & *puVar6) + 0x90))();
  if (lVar4 == 0) {
    puVar7 = (undefined8 *)0x0;
  }
  else {
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
  }
  func_0x000107c5a42c(puVar3);
  func_0x000107c61170(puVar7);
  *param_1 = puVar3;
  return;
}



/* Entry: 10101cc20; end: 10101ccab;  */

void FUN_10101cc20(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10101ccac; end: 10101ccb3;  */

void FUN_10101ccac(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lStack_68;
  long lStack_60;
  undefined8 uStack_58;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar5 = lVar3;
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 == 0) {
    return;
  }
  if (param_1 == 0) {
    lVar4 = 0;
    lVar5 = -0x2000000000000000;
  }
  else {
    lVar7 = param_1;
    func_0x000107c41214(param_1);
    func_0x000107c61180();
    lVar4 = lVar7;
    func_0x000107c5faec();
    func_0x000107c61170(lVar7);
  }
  lVar7 = lVar5;
  func_0x000107c5fadc(lVar4,lVar5);
  func_0x000107c6142c(lVar5);
  if (param_1 == 0) {
    lVar8 = 0;
    lVar7 = 0;
    lVar6 = 0;
    lVar5 = 0;
    goto LAB_10101c718;
  }
  lVar5 = param_1;
  func_0x000107c44fcc(param_1);
  func_0x000107c61180();
  lVar6 = param_1;
  func_0x000107c5c82c();
  func_0x000107c61180();
  if (lVar6 == 0) {
    func_0x000107c5faec();
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar7);
  }
  lVar7 = param_1;
  func_0x000107c4f4c4();
  func_0x000107c61180();
  if (lVar7 == 0) {
LAB_10101c6bc:
    lVar7 = 0;
  }
  else {
    uVar1 = 0;
    lStack_68 = lVar7;
    FUN_101018e74(0);
    uVar2 = 0;
    FUN_10101cedc(0,0x112d4c408,&PTR__OBJC_CLASS___NSString_1126ae4d0);
    func_0x000107c6147c(&uStack_58,&lStack_68,uVar1,uVar2,7);
    lStack_68 = 0;
    lStack_60 = 0;
    func_0x000107c5fae8(uStack_58,&lStack_68);
    func_0x000107c61170(uStack_58);
    lVar8 = lStack_60;
    if (lStack_60 == 0) goto LAB_10101c6bc;
    lVar7 = lStack_68;
    func_0x000107c5fadc(lStack_68,lStack_60);
    func_0x000107c6142c(lVar8);
  }
  lVar8 = param_1;
  func_0x000107c5c674(param_1);
  func_0x000107c61180();
  func_0x000107c4f4cc();
  func_0x000107c61180();
  if (param_1 != 0) {
    func_0x000107c49820();
    func_0x000107c61170(param_1);
  }
LAB_10101c718:
  func_0x000107c41190(lVar3);
  func_0x000107c615e8(lVar3);
  func_0x000107c61170(lVar4);
  func_0x000107c61170(lVar5);
  func_0x000107c61170(lVar6);
  func_0x000107c61170(lVar7);
  func_0x000107c61170(lVar8);
  return;
}



/* Entry: 10101ccb4; end: 10101cd03;  */

void FUN_10101ccb4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  uVar3 = param_2;
  func_0x000107c61174(param_2);
  (*pcVar1)(param_2);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar3);
  return;
}



/* Entry: 10101cd04; end: 10101cd1f;  */

void FUN_10101cd04(long param_1,long param_2)

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



/* Entry: 10101cd20; end: 10101cda7;  */

void FUN_10101cd20(void)

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
    FUN_10101cedc(0,0x112d55188,&PTR_PTR_1126a6188);
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112d55190;
  plVar5 = (long *)&UNK_10d91c378;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 10101cda8; end: 10101cedb;  */

undefined * FUN_10101cda8(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10101cedc);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar6 != 0) {
    puVar3 = param_1;
    FUN_10101cd20();
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(ulong *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1 | 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if (((ulong)param_1 & 1) == 0) {
    uVar5 = 0;
    FUN_10101cedc(0,0x112d55188,&PTR_PTR_1126a6188);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 10101cedc; end: 10101cf1b;  */

void FUN_10101cedc(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10101cf1c; end: 10101cf7f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_10101cf1c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar1 = _DAT_112d55228;
  lVar2 = *(long *)(unaff_x20 + _DAT_112d55228);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    lVar3 = unaff_x20;
    FUN_10101cf80();
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar3;
    func_0x000107c61174();
    func_0x000107c61170(uVar4);
    lVar2 = 0;
  }
  func_0x000107c61174(lVar2);
  return lVar3;
}



/* Entry: 10101cf80; end: 10101d65b;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long * FUN_10101cf80(long param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  long extraout_x8;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  code *pcVar17;
  undefined8 uVar18;
  undefined8 uStack_110;
  long lStack_108;
  long *plStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  long *plStack_e0;
  long lStack_d8;
  long lStack_d0;
  long lStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  long lStack_b0;
  long lStack_a8;
  long lStack_a0;
  long lStack_98;
  long lStack_90;
  long alStack_88 [5];
  
  lVar3 = 0;
  func_0x000107c5eec8();
  lStack_a8 = *(long *)(lVar3 + -8);
  lStack_b0 = lVar3;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_a8 + 0x40));
  lStack_a0 = (long)&uStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d551b8);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d551d0);
  uVar12 = *(undefined8 *)(param_1 + _DAT_112d551e0);
  uVar13 = *(undefined8 *)(param_1 + _DAT_112d551c8);
  uVar14 = *(undefined8 *)(param_1 + _DAT_112d551e8);
  uVar16 = *(undefined8 *)(param_1 + _DAT_112d551b0);
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c61174();
  uVar15 = uVar16;
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar18 = *(undefined8 *)(param_1 + _DAT_112d55220);
  lVar5 = 0;
  func_0x00010101cc8c();
  func_0x000107c613fc();
  *(undefined8 *)(lVar5 + 0x10) = uVar4;
  *(undefined8 *)(lVar5 + 0x18) = uVar11;
  *(undefined8 *)(lVar5 + 0x20) = uVar12;
  *(undefined8 *)(lVar5 + 0x28) = uVar13;
  *(undefined8 *)(lVar5 + 0x30) = uVar14;
  *(undefined8 *)(lVar5 + 0x38) = uVar15;
  *(undefined8 *)(lVar5 + 0x40) = uVar18;
  lVar3 = *(long *)(param_1 + _DAT_112d55198);
  uStack_c0 = uVar14;
  func_0x000107c61174(uVar18);
  func_0x000107c61174();
  uVar15 = uVar16;
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d551f0);
  uStack_b8 = uVar15;
  func_0x000107c5d138();
  func_0x000107c61180();
  uVar15 = *(undefined8 *)(param_1 + _DAT_112d551f8);
  uVar11 = *(undefined8 *)(param_1 + _DAT_112d55200);
  lStack_c8 = *(long *)(param_1 + _DAT_112d55210);
  uVar13 = *(undefined8 *)(lStack_c8 + _DAT_11302bac8);
  lVar6 = 0;
  FUN_101018ac4();
  func_0x000107c613fc();
  *(undefined8 *)(lVar6 + 0x40) = 0;
  alStack_88[1] = 0;
  alStack_88[2] = 0;
  func_0x0001000285a8(0x112d38320,&UNK_10d9021d0);
  func_0x000107c613fc();
  func_0x000107c61174();
  func_0x000107c61174();
  func_0x000107c615f0(uVar13);
  plVar7 = alStack_88 + 1;
  func_0x00010006c248();
  *(long **)(lVar6 + 0x48) = plVar7;
  alStack_88[1] = 0;
  func_0x0001000285a8(0x112d55258,&UNK_10d91c3a0);
  uVar12 = 0x20;
  func_0x000107c613fc();
  plVar7 = alStack_88 + 1;
  func_0x00010006c248();
  lVar8 = lStack_a0;
  lVar2 = lStack_b0;
  *(long **)(lVar6 + 0x50) = plVar7;
  *(long *)(lVar6 + 0x10) = lVar3;
  *(undefined8 *)(lVar6 + 0x18) = uStack_b8;
  *(undefined8 *)(lVar6 + 0x20) = uVar4;
  *(undefined8 *)(lVar6 + 0x28) = uVar15;
  *(undefined8 *)(lVar6 + 0x30) = uVar11;
  *(undefined8 *)(lVar6 + 0x38) = uVar13;
  func_0x000107c5eec4(lStack_a0);
  func_0x000107c5eeac();
  func_0x000107c6142c(uVar12);
  pcVar17 = *(code **)(lStack_a8 + 8);
  (*pcVar17)(lVar8,lVar2);
  uVar11 = *(undefined8 *)(*(long *)(param_1 + _DAT_112d551d8) + _DAT_112ff60d0);
  func_0x000107c6157c(uVar11);
  uVar15 = uVar16;
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar4 = 0;
  func_0x000103bf1ed0(0);
  func_0x000107c610f8();
  func_0x000103bf1774(uVar15,uVar4);
  uVar4 = uVar15;
  func_0x000103bf17c0();
  func_0x000107c61170(uVar15);
  lVar8 = _DAT_1130364e8;
  plVar7 = alStack_88 + 1;
  func_0x000107c61428(lVar3 + _DAT_1130364e8,plVar7,0,0);
  lVar3 = lVar3 + lVar8;
  func_0x000107c61648();
  lStack_d0 = lVar5;
  uStack_b8 = uVar4;
  lStack_a8 = uVar11;
  if (lVar3 != 0) {
    func_0x0001000d224c(alStack_88);
    func_0x000107c61574(lVar3);
    lVar3 = alStack_88[0];
    func_0x000107c3d198();
    func_0x000107c61180();
    func_0x000107c615e8(alStack_88[0]);
    if (lVar3 != 0) {
      lVar8 = lVar3;
      func_0x000107c49820();
      func_0x000107c61170(lVar3);
      func_0x0001008cc2b4();
      func_0x000107c61180();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x10101d65c);
        (*pcVar17)();
      }
      lVar3 = lVar8;
      func_0x000107c5faec();
      plStack_e0 = plVar7;
      lStack_d8 = lVar3;
      func_0x000107c61170(lVar8);
      goto LAB_10101d33c;
    }
  }
  plStack_e0 = (long *)0x0;
  lStack_d8 = 0;
LAB_10101d33c:
  uVar4 = *(undefined8 *)(param_1 + _DAT_112d551a0);
  uVar15 = *(undefined8 *)(param_1 + _DAT_112d551a8);
  func_0x000107c3dd34();
  func_0x000107c61180();
  uStack_e8 = uVar15;
  func_0x000107c3ce84();
  func_0x000107c61180();
  uVar14 = *(undefined8 *)(param_1 + _DAT_112d551c0);
  uStack_f8 = *(undefined8 *)(param_1 + _DAT_112d55208);
  uStack_f0 = *(undefined8 *)(*(long *)(param_1 + _DAT_112d55218) + _DAT_112fcac98);
  func_0x000107c6157c();
  lVar8 = lStack_c8;
  func_0x000107c61174();
  lVar3 = lStack_a0;
  lStack_108 = lVar8;
  func_0x000107c5eec4(lStack_a0);
  func_0x000107c5eeac();
  plStack_100 = plVar7;
  lStack_c8 = lVar8;
  (*pcVar17)(lVar3,lVar2);
  lVar9 = 0;
  func_0x00010101b478();
  lVar5 = lVar9;
  func_0x000107c610f8();
  lVar3 = _DAT_112d55020;
  puVar10 = PTR_PTR_1126ae810;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar5 + lVar3) = puVar10;
  *(undefined8 *)(lVar5 + _DAT_112d55028) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d55030) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d55038) = 0;
  *(undefined8 *)(lVar5 + _DAT_112d55040) = 0;
  lVar3 = _DAT_112d55048;
  uVar13 = 0;
  func_0x000107c61614(lVar5 + _DAT_112d55048);
  *(undefined8 *)(lVar5 + _DAT_112d55050) = 0;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d55058);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 5) = 0xff;
  *(undefined8 *)(lVar5 + _DAT_112d54fb0) = uVar4;
  *(undefined8 *)(lVar5 + _DAT_112d54ff0) = uVar16;
  uStack_110 = uVar16;
  func_0x000107c61174(uVar4);
  func_0x000107c615f0();
  func_0x000107c4b1e0();
  func_0x000107c61180();
  uVar4 = uVar16;
  func_0x000107c5faec();
  func_0x000107c61170(uVar16);
  uVar12 = uStack_c0;
  lVar2 = lStack_d0;
  uVar11 = uStack_e8;
  uVar15 = uStack_f8;
  lVar8 = lStack_108;
  puVar1 = (undefined8 *)(lVar5 + _DAT_112d55010);
  *puVar1 = uVar4;
  puVar1[1] = uVar13;
  *(undefined8 *)(lVar5 + _DAT_112d54fb8) = uVar14;
  *(undefined8 *)(lVar5 + _DAT_112d54fc0) = uStack_c0;
  *(undefined8 *)(lVar5 + _DAT_112d54fc8) = uStack_e8;
  *(long *)(lVar5 + _DAT_112d54fd0) = lStack_d0;
  *(undefined8 *)(lVar5 + _DAT_112d54fe8) = uStack_f8;
  func_0x000107c61604(lVar5 + lVar3,lStack_108);
  uVar4 = uStack_f0;
  *(long *)(lVar5 + _DAT_112d54fe0) = lVar6;
  *(undefined8 *)(lVar5 + _DAT_112d54fd8) = uStack_f0;
  plVar7 = (long *)(lVar5 + _DAT_112d55018);
  *plVar7 = lStack_c8;
  plVar7[1] = (long)plStack_100;
  *(long *)(lVar5 + _DAT_112d54ff8) = lStack_a8;
  *(undefined8 *)(lVar5 + _DAT_112d55000) = uStack_b8;
  plVar7 = (long *)(lVar5 + _DAT_112d55008);
  *plVar7 = lStack_d8;
  plVar7[1] = (long)plStack_e0;
  puVar10 = PTR_s_init_1125d9248;
  lStack_98 = lVar5;
  lStack_90 = lVar9;
  func_0x000107c61174(uVar12);
  func_0x000107c6157c(uVar4);
  func_0x000107c61174(uVar14);
  func_0x000107c61174(uVar11);
  func_0x000107c6157c(lVar2);
  func_0x000107c615f0(uVar15);
  func_0x000107c6157c(lVar6);
  plVar7 = &lStack_98;
  func_0x000107c61154(plVar7,puVar10);
  func_0x000107c615e8(uStack_110);
  func_0x000107c61170(uVar11);
  func_0x000107c61574(lVar2);
  func_0x000107c61574(lVar6);
  func_0x000107c61574(uVar4);
  func_0x000107c61170(lVar8);
  return plVar7;
}



/* Entry: 10101d65c; end: 10101d76b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101d65c(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar5 = &puStack_60;
  uVar1 = param_1;
  FUN_10101cf1c();
  uVar2 = uVar1;
  FUN_10101968c();
  func_0x000107c61170(uVar1);
  func_0x000107c525b0(param_1);
  func_0x000107c61170(uVar2);
  puVar3 = &UNK_110377b20;
  func_0x000107c613fc(&UNK_110377b20,0x18,7);
  func_0x000107c61614(puVar3 + 0x10,*(undefined8 *)(unaff_x20 + _DAT_112d55228));
  puVar4 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_40 = FUN_10101d9f4;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101016bdc;
  puStack_48 = &UNK_110377b38;
  puStack_38 = puVar3;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c46b38(puVar4);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puStack_38);
  func_0x000107c525b8(param_1);
  func_0x000107c61170(puVar4);
  return;
}



/* Entry: 10101d76c; end: 10101d7db;  */

void FUN_10101d76c(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61618();
  if (param_1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a6150);
    func_0x000107c453e4();
  }
  else {
    FUN_101019804();
    func_0x000107c61170(param_1);
  }
  return;
}



/* Entry: 10101d7dc; end: 10101d82b; -[_TtC32SnapEditorAiModePluginEntryPoint22SnapEditorAiModePlugin populateDependencies:] */

/* WARNING: Possible PIC construction at 0x00010101d814: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101d818) */

void FUN_10101d7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_10101d65c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 10101d82c; end: 10101d88b; -[_TtC32SnapEditorAiModePluginEntryPoint22SnapEditorAiModePlugin init] */

void FUN_10101d82c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorAiModePluginEntryPoint.SnapEditorAiModePlugin",0x37,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10101d858);
  (*pcVar1)();
}



/* Entry: 10101d88c; end: 10101d9d3; -[_TtC32SnapEditorAiModePluginEntryPoint22SnapEditorAiModePlugin .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010101d8a8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d8c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d8e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d928: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d998: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010101d9b8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010101d99c) */
/* WARNING: Removing unreachable block (ram,0x00010101d96c) */
/* WARNING: Removing unreachable block (ram,0x00010101d94c) */
/* WARNING: Removing unreachable block (ram,0x00010101d92c) */
/* WARNING: Removing unreachable block (ram,0x00010101d90c) */
/* WARNING: Removing unreachable block (ram,0x00010101d8ec) */
/* WARNING: Removing unreachable block (ram,0x00010101d8cc) */
/* WARNING: Removing unreachable block (ram,0x00010101d8ac) */
/* WARNING: Removing unreachable block (ram,0x00010101d9bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101d88c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112d55198));
  return;
}



/* Entry: 10101d9d4; end: 10101d9f3;  */

void FUN_10101d9d4(void)

{
  func_0x000107c61168(&PTR_PTR_1127a82c8);
  return;
}



/* Entry: 10101d9f4; end: 10101da17;  */

void FUN_10101d9f4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    func_0x000107c610f8(PTR_PTR_1126a6150);
    func_0x000107c453e4();
  }
  else {
    FUN_101019804();
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 10101da18; end: 10101dde3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_10101da18(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13,
             undefined8 param_14,undefined8 param_15,undefined8 param_16,undefined8 param_17,
             undefined8 param_18,undefined8 param_19)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lStack_88;
  long lStack_80;
  undefined1 auStack_78 [8];
  
  func_0x000107c610f8();
  puVar2 = auStack_78;
  func_0x000107c61154(puVar2,PTR_s_init_1125d9248);
  if (*(int *)(param_2 + _DAT_11302bb18) == 0) {
    uVar6 = *(undefined8 *)(param_1 + _DAT_11302ba70);
    uVar7 = *(undefined8 *)(param_2 + _DAT_11302bad8);
    lVar3 = 0;
    FUN_10101d9d4();
    lVar4 = lVar3;
    func_0x000107c610f8();
    *(undefined8 *)(lVar4 + _DAT_112d55228) = 0;
    *(undefined8 *)(lVar4 + _DAT_112d55198) = param_3;
    *(undefined8 *)(lVar4 + _DAT_112d551a0) = param_4;
    *(undefined8 *)(lVar4 + _DAT_112d551a8) = param_5;
    *(undefined8 *)(lVar4 + _DAT_112d551b0) = param_6;
    *(undefined8 *)(lVar4 + _DAT_112d551b8) = param_7;
    *(undefined8 *)(lVar4 + _DAT_112d551c0) = param_8;
    *(undefined8 *)(lVar4 + _DAT_112d551c8) = param_9;
    *(undefined8 *)(lVar4 + _DAT_112d551d0) = param_10;
    *(undefined8 *)(lVar4 + _DAT_112d551d8) = param_11;
    *(undefined8 *)(lVar4 + _DAT_112d551e0) = param_12;
    *(undefined8 *)(lVar4 + _DAT_112d551e8) = param_13;
    *(undefined8 *)(lVar4 + _DAT_112d55208) = uVar7;
    *(long *)(lVar4 + _DAT_112d55210) = param_2;
    *(undefined8 *)(lVar4 + _DAT_112d551f0) = param_15;
    *(undefined8 *)(lVar4 + _DAT_112d551f8) = param_16;
    *(undefined8 *)(lVar4 + _DAT_112d55200) = param_17;
    *(undefined8 *)(lVar4 + _DAT_112d55218) = param_18;
    *(undefined8 *)(lVar4 + _DAT_112d55220) = param_19;
    puVar1 = PTR_s_init_1125d9248;
    lStack_88 = lVar4;
    lStack_80 = lVar3;
    func_0x000107c61174();
    func_0x000107c61174(param_3);
    func_0x000107c61174(param_4);
    func_0x000107c61174(param_5);
    func_0x000107c61174(param_6);
    func_0x000107c61174(param_7);
    func_0x000107c61174(param_8);
    func_0x000107c61174(param_9);
    func_0x000107c61174(param_10);
    func_0x000107c61174(param_11);
    func_0x000107c61174(param_12);
    func_0x000107c61174(param_13);
    func_0x000107c61174(param_15);
    func_0x000107c61174(param_16);
    func_0x000107c61174(param_17);
    func_0x000107c615f0(uVar7);
    func_0x000107c61174(param_2);
    func_0x000107c61174(param_18);
    func_0x000107c61174(param_19);
    plVar5 = &lStack_88;
    func_0x000107c61154(plVar5,puVar1);
    func_0x000107c4fba8(uVar6);
    func_0x000107c61170(uVar6);
    func_0x000107c61170(plVar5);
  }
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  func_0x000107c61170(param_6);
  func_0x000107c61170(param_7);
  func_0x000107c61170(param_8);
  func_0x000107c61170(param_9);
  func_0x000107c61170(param_10);
  func_0x000107c61170(param_11);
  func_0x000107c61170(param_12);
  func_0x000107c61170(param_13);
  func_0x000107c61170(param_14);
  func_0x000107c61170(param_15);
  func_0x000107c61170(param_16);
  func_0x000107c61170(param_17);
  func_0x000107c61170(param_18);
  func_0x000107c61170(param_19);
  return puVar2;
}



/* Entry: 10101dde4; end: 10101de43; -[_TtC32SnapEditorAiModePluginEntryPoint32SnapEditorAiModePluginEntryPoint init] */

void FUN_10101dde4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SnapEditorAiModePluginEntryPoint.SnapEditorAiModePluginEntryPoint",0x41,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10101de10);
  (*pcVar1)();
}



/* Entry: 10101de44; end: 10101de4f;  */

void FUN_10101de44(void)

{
  return;
}



/* Entry: 10101de50; end: 10101de6f;  */

void FUN_10101de50(void)

{
  func_0x000107c61168(&PTR_PTR_1127a8418);
  return;
}



/* Entry: 10101de70; end: 10101de7b; -[SCSnapEditorAiModePluginEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101de70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55288;
  func_0x000107c61428(param_1 + _DAT_112d55288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10101de7c; end: 10101de87; -[SCSnapEditorAiModePluginEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101de7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55288;
  func_0x000107c61428(param_1 + _DAT_112d55288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10101de88; end: 10101de93; -[SCSnapEditorAiModePluginEntryPoint scope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101de88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55290;
  func_0x000107c61428(param_1 + _DAT_112d55290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10101de94; end: 10101de9f; -[SCSnapEditorAiModePluginEntryPoint setScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101de94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55290;
  func_0x000107c61428(param_1 + _DAT_112d55290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10101dea0; end: 10101deab; -[SCSnapEditorAiModePluginEntryPoint lensPlusServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101dea0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d55298;
  func_0x000107c61428(param_1 + _DAT_112d55298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10101deac; end: 10101deb7; -[SCSnapEditorAiModePluginEntryPoint setLensPlusServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101deac(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d55298;
  func_0x000107c61428(param_1 + _DAT_112d55298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10101deb8; end: 10101dec3; -[SCSnapEditorAiModePluginEntryPoint asyncTaskCompletionAnnouncerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101deb8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d552a0;
  func_0x000107c61428(param_1 + _DAT_112d552a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10101dec4; end: 10101decf; -[SCSnapEditorAiModePluginEntryPoint setAsyncTaskCompletionAnnouncerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101dec4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d552a0;
  func_0x000107c61428(param_1 + _DAT_112d552a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10101ded0; end: 10101dedb; -[SCSnapEditorAiModePluginEntryPoint previewABServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101ded0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d552a8;
  func_0x000107c61428(param_1 + _DAT_112d552a8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10101dedc; end: 10101dee7; -[SCSnapEditorAiModePluginEntryPoint setPreviewABServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101dedc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d552a8;
  func_0x000107c61428(param_1 + _DAT_112d552a8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10101dee8; end: 10101def3; -[SCSnapEditorAiModePluginEntryPoint composerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10101dee8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d552b0;
  func_0x000107c61428(param_1 + _DAT_112d552b0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}


