/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 102d06508; end: 102d0657f; -[AdWebviewPerformanceMetricsTracker initWithAdLifecycleTimestampsTracker:adWatermarkEventsTracker:timeProvider:performer:] */

void FUN_102d06508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c615f0(param_5);
  func_0x000107c615f0(param_6);
  func_0x000102d06390(param_3,param_4,param_5,param_6);
  return;
}



/* Entry: 102d06580; end: 102d0658f; -[AdWebviewPerformanceMetricsTracker adWebviewPerformanceMetricsObservable] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06580(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112f0d6c0));
  return;
}



/* Entry: 102d06590; end: 102d06793;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06590(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar5 = &puStack_80;
  ppuVar6 = &puStack_80;
  FUN_102d06794();
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d730);
  func_0x000107c5c734();
  func_0x000107c61180();
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c3d548();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar4 = &UNK_1105c1ef8;
    func_0x000107c613fc(&UNK_1105c1ef8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_60 = FUN_102d06d3c;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    uStack_70 = 0x102d079a0;
    puStack_68 = &UNK_1105c1f38;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar2 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar5);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar2);
  }
  lVar2 = *(long *)(unaff_x20 + _DAT_112f0d738);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = lVar2;
    func_0x000107c3d298();
    func_0x000107c61180();
    func_0x000107c615e8(lVar2);
    puVar4 = &UNK_1105c1ef8;
    func_0x000107c613fc(&UNK_1105c1ef8,0x18,7);
    func_0x000107c61614(puVar4 + 0x10);
    pcStack_60 = FUN_102d06ba4;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    uStack_70 = 0x102d0799c;
    puStack_68 = &UNK_1105c1f10;
    puStack_58 = puVar4;
    func_0x000107c60bc4(&puStack_80);
    func_0x000107c61574(puStack_58);
    lVar2 = lVar3;
    func_0x000107c5c320(lVar3);
    func_0x000107c61180();
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(lVar3);
    func_0x000107c3e924(lVar2);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102d06794; end: 102d0696f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06794(double param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112f0d738);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c402f0(lVar1);
    if ((0.0 < param_1) && ((*(byte *)(unaff_x20 + _DAT_112f0d728) & 1) == 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d728) = 1;
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001063bedd4();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c402ec(lVar1);
    if ((0.0 < param_1) && (*(double *)(unaff_x20 + _DAT_112f0d6e0) == 0.0)) {
      *(double *)(unaff_x20 + _DAT_112f0d6e0) = param_1;
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001063bed74();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c402e0(lVar1);
    if ((0.0 < param_1) && ((*(byte *)(unaff_x20 + _DAT_112f0d6e8) & 1) == 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d6e8) = 1;
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001063bebf4();
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
    func_0x000107c402e4(lVar1);
    if ((0.0 < param_1) && ((*(byte *)(unaff_x20 + _DAT_112f0d6f0) & 1) == 0)) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d6f0) = 1;
      uVar2 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
      func_0x000107c61174(uVar2);
      uVar3 = uVar2;
      func_0x0001063beda4(param_1);
      func_0x000107c61180();
      func_0x000107c61170(uVar2);
      func_0x000107c61170(uVar3);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(lVar1);
  return;
}



/* Entry: 102d06970; end: 102d06b37;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06970(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined *puStack_b8;
  code *pcStack_b0;
  undefined *puStack_a8;
  undefined1 auStack_a0 [40];
  char cStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_50;
  char cStack_48;
  
  ppuVar4 = &puStack_d0;
  func_0x000107c61174();
  func_0x0001042cf344(auStack_a0);
  FUN_102d078d4(auStack_a0);
  if (cStack_78 == '\r') {
    lVar1 = *(long *)(unaff_x20 + _DAT_112f0d730);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar1 == 0) {
      lVar5 = 0;
    }
    else {
      func_0x000107c61174(param_1);
      func_0x000107c615f0(lVar1);
      func_0x0001042cf344(&uStack_70,param_1);
      if (cStack_48 == '\n') {
        func_0x000107c6142c(uStack_50);
      }
      uVar6 = uStack_70;
      func_0x000107c5fadc(uStack_70,uStack_68);
      func_0x000107c6142c(uStack_68);
      func_0x000104261924();
      lVar5 = lVar1;
      func_0x000107c3d330();
      func_0x000107c61180();
      func_0x000107c615ec(lVar1,2);
      func_0x000107c61170(uVar6);
    }
    uVar6 = *(undefined8 *)(unaff_x20 + _DAT_112f0d748);
    puVar2 = &UNK_1105c1ef8;
    func_0x000107c613fc(&UNK_1105c1ef8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10,unaff_x20);
    puVar3 = &UNK_1105c1f70;
    func_0x000107c613fc(&UNK_1105c1f70,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(long *)(puVar3 + 0x18) = lVar5;
    pcStack_b0 = FUN_102d07908;
    puStack_d0 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_c8 = 0x42000000;
    puStack_c0 = &UNK_1000f6b44;
    puStack_b8 = &UNK_1105c1f88;
    puStack_a8 = puVar3;
    func_0x000107c60bc4(&puStack_d0);
    puVar2 = puStack_a8;
    func_0x000107c61174(lVar5);
    func_0x000107c61574(puVar2);
    func_0x000107c4e524(uVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61170(lVar5);
  }
  return;
}



/* Entry: 102d06b38; end: 102d06ba3;  */

void FUN_102d06b38(undefined8 param_1,long param_2,code *param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    (*param_3)(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102d06ba4; end: 102d06bc3;  */

void FUN_102d06ba4(void)

{
  FUN_102d06b38();
  return;
}



/* Entry: 102d06bc4; end: 102d06cd3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06bc4(double param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c3ceac(*(undefined8 *)(unaff_x20 + _DAT_112f0d740));
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f0d748);
  puVar1 = &UNK_1105c1ef8;
  func_0x000107c613fc(&UNK_1105c1ef8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_1105c1fc0;
  func_0x000107c613fc(&UNK_1105c1fc0,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(double *)(puVar2 + 0x20) = param_1 * 1000.0;
  pcStack_50 = FUN_102d07948;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  puStack_60 = &UNK_1000f6b44;
  puStack_58 = &UNK_1105c1fd8;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c61174(param_2);
  func_0x000107c61574(puVar1);
  func_0x000107c4e524(uVar4);
  func_0x000107c60bd0(ppuVar3);
  return;
}



/* Entry: 102d06cd4; end: 102d06d1f;  */

void FUN_102d06cd4(long param_1,undefined8 param_2)

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



/* Entry: 102d06d20; end: 102d06d3b;  */

void FUN_102d06d20(long param_1,long param_2)

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



/* Entry: 102d06d3c; end: 102d06d5b;  */

void FUN_102d06d3c(void)

{
  FUN_102d06b38();
  return;
}



/* Entry: 102d06d5c; end: 102d06ddf; -[AdWebviewPerformanceMetricsTracker begin] */

void FUN_102d06d5c(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_102d06590();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d06de0; end: 102d06ff3;  */

/* WARNING: Possible PIC construction at 0x000102d06ef8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d06f20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d06f60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d06f70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d06fc0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d06fd0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d06fc4) */
/* WARNING: Removing unreachable block (ram,0x000102d06f74) */
/* WARNING: Removing unreachable block (ram,0x000102d06f64) */
/* WARNING: Removing unreachable block (ram,0x000102d06f24) */
/* WARNING: Removing unreachable block (ram,0x000102d06f2c) */
/* WARNING: Removing unreachable block (ram,0x000102d06fa4) */
/* WARNING: Removing unreachable block (ram,0x000102d06fb0) */
/* WARNING: Removing unreachable block (ram,0x000102d06f5c) */
/* WARNING: Removing unreachable block (ram,0x000102d06efc) */
/* WARNING: Removing unreachable block (ram,0x000102d06fd4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d06de0(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f0d748));
  if (param_1 == 0) {
    uStack_150 = 0;
    uStack_148 = 0;
    uStack_140 = 0;
    uStack_138 = 0;
    uStack_130 = 0;
    uStack_128 = 0;
    uStack_120 = 0;
    uStack_118 = 0;
    uStack_110 = 0;
    uStack_108 = 0;
    uStack_100 = 0;
    uStack_f8 = 0;
    uStack_f0 = 0;
    uStack_e8 = 0;
    uStack_e0 = 0;
    uStack_d8 = 0;
  }
  else {
    func_0x000107c61174(param_1);
    func_0x00010428c0d8(&uStack_150);
  }
  uStack_d0 = uStack_150;
  uStack_c8 = uStack_148;
  uStack_c0 = uStack_140;
  uStack_b8 = uStack_138;
  uStack_b0 = uStack_130;
  uStack_a8 = uStack_128;
  uStack_a0 = uStack_120;
  uStack_98 = uStack_118;
  uStack_90 = uStack_110;
  uStack_88 = uStack_108;
  uStack_80 = uStack_100;
  uStack_78 = uStack_f8;
  uStack_70 = uStack_f0;
  uStack_68 = uStack_e8;
  uStack_60 = uStack_e0;
  uStack_58 = uStack_d8;
  FUN_102d05d0c(&uStack_d0);
  func_0x0001063beb9c(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
  func_0x000107c61180();
  FUN_102d05e68();
  func_0x000107c610f8(PTR_PTR_1126ca468);
  func_0x0001063bd53c();
  func_0x000107c4d664(*(undefined8 *)(unaff_x20 + _DAT_112f0d6c0));
  puVar1 = PTR__OBJC_CLASS___NSProcessInfo_1126aeba8;
  func_0x000107c61168(PTR__OBJC_CLASS___NSProcessInfo_1126aeba8);
  func_0x000107c4f2b0();
  func_0x000107c61180();
  func_0x000107c429e8();
  func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(puVar1);
  return;
}



/* Entry: 102d06ff4; end: 102d0705f;  */

void FUN_102d06ff4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_102d07060(param_1,param_3);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 102d07060; end: 102d07673;  */

/* WARNING: Possible PIC construction at 0x000102d07584: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d07528: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d07640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d073b8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d073ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d075f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d075bc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d075fc) */
/* WARNING: Removing unreachable block (ram,0x000102d073f0) */
/* WARNING: Removing unreachable block (ram,0x000102d073bc) */
/* WARNING: Removing unreachable block (ram,0x000102d07644) */
/* WARNING: Removing unreachable block (ram,0x000102d0752c) */
/* WARNING: Removing unreachable block (ram,0x000102d07588) */
/* WARNING: Removing unreachable block (ram,0x000102d0758c) */
/* WARNING: Removing unreachable block (ram,0x000102d075c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d07060(double param_1,long param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  uint uVar4;
  undefined8 uVar5;
  long unaff_x20;
  ulong uVar6;
  double dVar7;
  undefined1 auStack_78 [24];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f0d748));
  func_0x000107c61174();
  func_0x000103e01c58();
  lVar2 = _DAT_112f0d6d8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_4 & 0xff) {
  case 0:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d6e8) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d6e8) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063bebf4(param_1);
      func_0x000107c61180();
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
    }
    break;
  case 1:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d6f8) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d6f8) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063bec84(param_1);
      func_0x000107c61180();
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
    }
    break;
  case 2:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d700) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d700) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063becb4(param_1);
      func_0x000107c61180();
      uVar4 = 2;
    }
    else {
      uVar4 = 2;
    }
    break;
  case 3:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d708) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d708) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063bece4(param_1);
      func_0x000107c61180();
      uVar4 = 3;
    }
    else {
      uVar4 = 3;
    }
    break;
  case 4:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d710) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d710) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063bed14(param_1);
      func_0x000107c61180();
      uVar4 = 4;
    }
    else {
      uVar4 = 4;
    }
    break;
  case 5:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d718) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d718) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063bed44(param_1);
      func_0x000107c61180();
      uVar4 = 5;
    }
    else {
      uVar4 = 5;
    }
    break;
  case 6:
    func_0x000107c61428(unaff_x20 + _DAT_112f0d6d8,auStack_78,0x21,0);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar2);
    func_0x000107c61558(uVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
    *(undefined8 *)(unaff_x20 + lVar2) = 0x8000000000000000;
    func_0x00010206e030(param_1,param_2,param_3,uVar3);
    *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
    func_0x000107c614a8(auStack_78);
    func_0x000102d07954(param_2,param_3,6);
    return;
  case 7:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d720) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d720) = 1;
      lVar2 = _DAT_112f0d6d8;
      func_0x000107c61428(unaff_x20 + _DAT_112f0d6d8,auStack_78,0x20,0);
      uVar6 = *(ulong *)(unaff_x20 + lVar2);
      if (*(long *)(uVar6 + 0x10) == 0) {
        func_0x000107c61434(param_3);
        func_0x000107c614a8(auStack_78);
        uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
        func_0x000107c61174(uVar3);
        func_0x0001063bec54(param_1);
        func_0x000107c61180();
        goto code_r0x000107c61170;
      }
      func_0x000102d0796c(param_2,param_3,7);
      func_0x000107c61434(uVar6);
      func_0x000100029284();
      uVar1 = param_3 & 1;
      param_3 = uVar6;
      if (uVar1 != 0) {
        func_0x000107c614a8(auStack_78);
      }
      goto code_r0x000107c6142c;
    }
    func_0x000107c61434(param_3);
    func_0x000107c61428(unaff_x20 + _DAT_112f0d6d8,auStack_78,0x21,0);
    func_0x00010206439c(param_2,param_3);
    func_0x000107c614a8(auStack_78);
    uVar4 = 7;
    break;
  case 8:
    if ((*(byte *)(unaff_x20 + _DAT_112f0d6f0) & 1) == 0) {
      *(undefined1 *)(unaff_x20 + _DAT_112f0d6f0) = 1;
      func_0x000107c61174(*(undefined8 *)(unaff_x20 + _DAT_112f0d6d0));
      func_0x0001063beda4(param_1);
      func_0x000107c61180();
      uVar4 = 8;
    }
    else {
      uVar4 = 8;
    }
    break;
  case 9:
    if (param_3 == 0 && param_2 == 0) {
      dVar7 = *(double *)(unaff_x20 + _DAT_112f0d6e0);
      if (*(double *)(unaff_x20 + _DAT_112f0d6e0) == 0.0) {
        *(double *)(unaff_x20 + _DAT_112f0d6e0) = param_1;
        dVar7 = param_1;
      }
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
      func_0x000107c61174(uVar3);
      func_0x0001063bed74(dVar7);
    }
    else {
      FUN_102d07674();
      *(undefined1 *)(unaff_x20 + _DAT_112f0d728) = 1;
      uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
      func_0x000107c61174(uVar3);
      func_0x0001063bedd4(param_1);
    }
    func_0x000107c61180();
code_r0x000107c61170:
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar3);
    return;
  }
  if (8 < uVar4) {
    return;
  }
code_r0x000107c6142c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_3);
  return;
}



/* Entry: 102d07674; end: 102d077bb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d07674(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  double dVar6;
  undefined1 auStack_58 [24];
  
  func_0x000107c3e208(*(undefined8 *)(unaff_x20 + _DAT_112f0d748));
  puVar3 = PTR_PTR_1126ca460;
  func_0x000107c610f8();
  func_0x000107c453e4();
  lVar1 = _DAT_112f0d6d0;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112f0d6d0);
  *(undefined **)(unaff_x20 + _DAT_112f0d6d0) = puVar3;
  func_0x000107c61170(uVar5);
  lVar2 = _DAT_112f0d6d8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d6d8,auStack_58,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  *(undefined **)(unaff_x20 + lVar2) = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  func_0x000107c6142c(uVar5);
  *(undefined1 *)(unaff_x20 + _DAT_112f0d6e8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d6f0) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d6f8) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d700) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d708) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d710) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d718) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d720) = 0;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d728) = 0;
  dVar6 = *(double *)(unaff_x20 + _DAT_112f0d6e0);
  if (0.0 < dVar6) {
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    func_0x000107c61174(uVar4);
    uVar5 = uVar4;
    func_0x0001063bed74(dVar6);
    func_0x000107c61180();
    func_0x000107c61170(uVar4);
    func_0x000107c61170(uVar5);
  }
  return;
}



/* Entry: 102d077bc; end: 102d0781b; -[AdWebviewPerformanceMetricsTracker init] */

void FUN_102d077bc(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdWebviewPerformanceTrackerSwift.AdWebviewPerformanceMetricsTracker",0x45,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d077e8);
  (*pcVar1)();
}



/* Entry: 102d0781c; end: 102d078b3; -[AdWebviewPerformanceMetricsTracker .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0781c(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d730));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d738));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d740));
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112f0d748));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d6c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d6c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d6d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0d6d8));
  return;
}



/* Entry: 102d078b4; end: 102d078d3;  */

void FUN_102d078b4(void)

{
  func_0x000107c61168(&PTR_PTR_1128a07c8);
  return;
}



/* Entry: 102d078d4; end: 102d07907;  */

undefined8 FUN_102d078d4(undefined8 param_1)

{
  (*(code *)&DAT_104261cc8)();
  return param_1;
}



/* Entry: 102d07908; end: 102d0790f;  */

void FUN_102d07908(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_38,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102d06de0(uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102d07910; end: 102d07947;  */

void FUN_102d07910(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 102d07948; end: 102d079a3;  */

void FUN_102d07948(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    FUN_102d07060(uVar3,uVar1);
    func_0x000107c61170(lVar2);
  }
  return;
}



/* Entry: 102d079a4; end: 102d079f3;  */

void FUN_102d079a4(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [8];
  
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_1);
  func_0x000107c610f8();
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d079f4; end: 102d07a2f; -[AdWebviewPerformanceLogger initWithBrowserCache:webBrowsingConfigProvider:] */

void FUN_102d079f4(undefined8 param_1)

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



/* Entry: 102d07a30; end: 102d07a33; -[AdWebviewPerformanceLogger beginWithPerformanceMetricsTracker:] */

void FUN_102d07a30(void)

{
  return;
}



/* Entry: 102d07a34; end: 102d07ab3; -[AdWebviewPerformanceLogger init] */

void FUN_102d07a34(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCAdWebviewPerformanceTrackerSwift.AdWebviewPerformanceLogger",0x3d,"init()",
                      6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d07a60);
  (*pcVar1)();
}



/* Entry: 102d07ab4; end: 102d07cb3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d07ab4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_60 [8];
  
  func_0x000107c610f8();
  lVar1 = _DAT_112f0d7a0;
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_102d09c98(PTR___swiftEmptyArrayStorage_11034f1c8,0x112f0d808,&UNK_10db405f8);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  lVar1 = _DAT_112f0d7a8;
  puVar2 = puVar3;
  func_0x0001001830b8();
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined **)(unaff_x20 + _DAT_112f0d7b0) = PTR___swiftEmptySetSingleton_11034f1d8;
  lVar1 = _DAT_112f0d7b8;
  FUN_102d09c98(puVar3,0x112f0d810,&UNK_10db40600);
  *(undefined **)(unaff_x20 + lVar1) = puVar3;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d7c0) = param_1;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d7c8) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112f0d7d0) = param_3;
  func_0x000107c61154(auStack_60,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d07cb4; end: 102d07d0f; -[AdPodManager initWithAdConfigProvider:insertionRuleTracker:multiAdPodMetricsManager:] */

void FUN_102d07cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  func_0x000102d07bb4(param_3,param_4,param_5);
  return;
}



/* Entry: 102d07d10; end: 102d08457;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d07d10(long param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long unaff_x20;
  ulong uVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  uVar18 = *(ulong *)(param_1 + _DAT_11308f098);
  uVar15 = uVar18 >> 0x3e;
  if (uVar15 == 0) {
    uVar19 = *(ulong *)((uVar18 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar19 = uVar18 & 0xffffffffffffff8;
    if ((uVar18 & 0x8000000000000000) != 0) {
      uVar19 = uVar18;
    }
    func_0x000107c60480();
  }
  if (uVar19 == 0) {
    return;
  }
  uVar21 = 0;
  uVar17 = uVar18 & 0xc000000000000001;
  uVar16 = uVar18 & 0xffffffffffffff8;
  bVar4 = true;
  while( true ) {
    while( true ) {
      if (uVar17 == 0) {
        if (*(ulong *)(uVar16 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x102d08418);
          (*pcVar3)();
        }
        uVar5 = *(ulong *)(uVar18 + uVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar21;
        FUN_102d09448(uVar21,uVar18);
      }
      if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d07e08);
        (*pcVar3)();
      }
      if (bVar4) break;
      func_0x000107c61170();
      if (uVar21 + 1 == uVar19) goto LAB_102d07e10;
      bVar4 = false;
      uVar21 = uVar21 + 1;
    }
    iVar2 = *(int *)(uVar5 + _DAT_113815200);
    func_0x000107c61170();
    bVar4 = iVar2 == 7;
    if (uVar21 + 1 == uVar19) break;
    uVar21 = uVar21 + 1;
  }
  if (iVar2 == 7) {
    return;
  }
LAB_102d07e10:
  lVar9 = _DAT_112f0d7b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7b8,auStack_78,0x20,0);
  lVar20 = *(long *)(unaff_x20 + lVar9);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_102d07e7c:
    func_0x000107c614a8(auStack_78);
    puVar7 = PTR__OBJC_CLASS___NSMutableOrderedSet_1126aea00;
    func_0x000107c610f8();
    func_0x000107c453e4();
  }
  else {
    func_0x000107c61434(lVar20);
    lVar6 = param_2;
    uVar19 = param_3;
    func_0x000100029284();
    if ((uVar19 & 1) == 0) {
      func_0x000107c6142c(lVar20);
      goto LAB_102d07e7c;
    }
    puVar7 = *(undefined **)(*(long *)(lVar20 + 0x38) + lVar6 * 8);
    func_0x000107c61174();
    func_0x000107c614a8(auStack_78);
    func_0x000107c6142c(lVar20);
  }
  uVar10 = *(undefined8 *)(param_1 + _DAT_11308f090);
  uVar14 = ((undefined8 *)(param_1 + _DAT_11308f090))[1];
  uVar8 = uVar10;
  func_0x000107c5fadc(uVar10,uVar14);
  puVar13 = puVar7;
  func_0x000107c40404();
  func_0x000107c61170(uVar8);
  if (((ulong)puVar13 & 1) != 0) goto LAB_102d083ec;
  uVar8 = uVar10;
  func_0x000107c5fadc(uVar10,uVar14);
  func_0x000107c3d798(puVar7);
  func_0x000107c61170(uVar8);
  func_0x000107c61428(unaff_x20 + lVar9,auStack_78,0x21,0);
  func_0x000107c61434(param_3);
  puVar13 = puVar7;
  func_0x000107c61174(puVar7);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x000107c61558(uVar8);
  puStack_88 = *(undefined **)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = 0x8000000000000000;
  FUN_102d095f0(puVar13,param_2,param_3,uVar8,0x112f0d810,&UNK_10db40600);
  func_0x000107c6142c(param_3);
  *(undefined **)(unaff_x20 + lVar9) = puStack_88;
  func_0x000107c614a8(auStack_78);
  lVar9 = _DAT_112f0d7a8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7a8,auStack_78,0x21,0);
  func_0x000107c61434(param_3);
  func_0x000107c61434(uVar14);
  uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
  func_0x000107c61558(uVar8);
  puStack_88 = *(undefined **)(unaff_x20 + lVar9);
  *(undefined8 *)(unaff_x20 + lVar9) = 0x8000000000000000;
  func_0x00010018433c(param_2,param_3,uVar10,uVar14,uVar8);
  func_0x000107c6142c(uVar14);
  *(undefined **)(unaff_x20 + lVar9) = puStack_88;
  func_0x000107c614a8(auStack_78);
  if (uVar15 == 0) {
    uVar19 = *(ulong *)(uVar16 + 0x10);
    lVar9 = _DAT_112f0d7a0;
    lVar20 = _DAT_112f0d7b0;
  }
  else {
    uVar19 = uVar16;
    if ((uVar18 & 0x8000000000000000) != 0) {
      uVar19 = uVar18;
    }
    func_0x000107c60480();
    lVar9 = _DAT_112f0d7a0;
    lVar20 = _DAT_112f0d7b0;
  }
  _DAT_112f0d7a0 = lVar9;
  _DAT_112f0d7b0 = lVar20;
  if (uVar19 != 0) {
    if ((long)uVar19 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d08440);
      (*pcVar3)();
    }
    uVar21 = 0;
    do {
      if (uVar17 == 0) {
        uVar5 = *(ulong *)(uVar18 + uVar21 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar5 = uVar21;
        FUN_102d09448(uVar21,uVar18);
      }
      uVar21 = uVar21 + 1;
      puVar1 = (undefined8 *)(uVar5 + _DAT_11308f130);
      uVar10 = *puVar1;
      uVar14 = puVar1[1];
      func_0x000107c61428(unaff_x20 + lVar9,auStack_78,0x21,0);
      lVar6 = param_1;
      func_0x000107c61174(param_1);
      uVar8 = *(undefined8 *)(unaff_x20 + lVar9);
      func_0x000107c61558(uVar8);
      puStack_88 = *(undefined **)(unaff_x20 + lVar9);
      *(undefined8 *)(unaff_x20 + lVar9) = 0x8000000000000000;
      FUN_102d095f0(lVar6,uVar10,uVar14,uVar8,0x112f0d808,&UNK_10db405f8);
      *(undefined **)(unaff_x20 + lVar9) = puStack_88;
      func_0x000107c614a8(auStack_78);
      uVar10 = *puVar1;
      uVar14 = puVar1[1];
      func_0x000107c61428(unaff_x20 + lVar20,auStack_78,0x21,0);
      func_0x000107c61434(uVar14);
      func_0x000100403b00(&puStack_88,uVar10,uVar14);
      func_0x000107c614a8(auStack_78);
      func_0x000107c61170(uVar5);
      func_0x000107c6142c(uStack_80);
    } while (uVar19 != uVar21);
  }
  lVar9 = *(long *)(unaff_x20 + _DAT_112f0d7c8);
  if (lVar9 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar9 != 0) {
      func_0x000107c41ca8();
      func_0x000107c615e8(lVar9);
    }
  }
  if (uVar15 == 0) {
    if (*(long *)(uVar16 + 0x10) == 0) goto LAB_102d08198;
LAB_102d081c0:
    if (uVar17 == 0) {
      if (*(long *)(uVar16 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d08454);
        (*pcVar3)();
      }
      uVar10 = *(undefined8 *)(uVar18 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar10 = 0;
      FUN_102d09448(0,uVar18);
    }
    lVar9 = *(long *)(unaff_x20 + _DAT_112f0d7d0);
    if (lVar9 != 0) {
      func_0x000107c5c734();
      func_0x000107c61180();
      if (lVar9 != 0) {
        if (uVar15 != 0) {
          uVar19 = uVar16;
          if ((uVar18 & 0x8000000000000000) != 0) {
            uVar19 = uVar18;
          }
          func_0x000107c60480();
          if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x102d08458);
            (*pcVar3)();
          }
        }
        func_0x000107c4bcd8(lVar9);
        func_0x000107c615e8(lVar9);
      }
    }
    func_0x000107c61170(uVar10);
    if (uVar15 != 0) goto LAB_102d08264;
LAB_102d081a0:
    uVar19 = *(ulong *)(uVar16 + 0x10);
  }
  else {
    uVar19 = uVar16;
    if ((uVar18 & 0x8000000000000000) != 0) {
      uVar19 = uVar18;
    }
    func_0x000107c60480();
    if (uVar19 != 0) goto LAB_102d081c0;
LAB_102d08198:
    if (uVar15 == 0) goto LAB_102d081a0;
LAB_102d08264:
    uVar19 = uVar16;
    if ((uVar18 & 0x8000000000000000) != 0) {
      uVar19 = uVar18;
    }
    func_0x000107c60480();
  }
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  uVar21 = 0;
  while (uVar19 != uVar21) {
    if (uVar17 == 0) {
      if (*(ulong *)(uVar16 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d08420);
        (*pcVar3)();
      }
      uVar5 = *(ulong *)(uVar18 + uVar21 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      uVar5 = uVar21;
      FUN_102d09448(uVar21,uVar18);
    }
    if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d0841c);
      (*pcVar3)();
    }
    uVar22 = uVar21 + 1;
    puVar1 = (undefined8 *)(uVar5 + _DAT_11308f138);
    func_0x000107c61428(puVar1,auStack_78,0,0);
    uVar10 = *puVar1;
    lVar9 = puVar1[1];
    func_0x000107c61434(lVar9);
    func_0x000107c61170(uVar5);
    uVar21 = uVar21 + 1;
    if (lVar9 != 0) {
      puVar11 = puVar13;
      func_0x000107c61558();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        func_0x0001000d182c(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      }
      uVar21 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        func_0x0001000d182c(puVar13,uVar21 + 1,1,puVar12);
      }
      *(ulong *)(puVar13 + 0x10) = uVar21 + 1;
      *(undefined8 *)(puVar13 + uVar21 * 0x10 + 0x20) = uVar10;
      *(long *)(puVar13 + uVar21 * 0x10 + 0x28) = lVar9;
      uVar21 = uVar22;
    }
  }
  uVar10 = 0x112d38270;
  puStack_88 = puVar13;
  func_0x0001000285a8(0x112d38270,&UNK_10d905a20);
  uVar14 = uVar10;
  func_0x00010011d734();
  uVar8 = 0xe200000000000000;
  func_0x000107c5fa80(0x202c,0xe200000000000000,uVar10,uVar14);
  func_0x000107c6142c(puVar13);
  if (uVar15 != 0) {
    if ((uVar18 & 0x8000000000000000) != 0) {
      uVar16 = uVar18;
    }
    func_0x000107c60480(uVar16);
  }
  func_0x000107c6142c(uVar8);
LAB_102d083ec:
  func_0x000107c61170(puVar7);
  return;
}



/* Entry: 102d08458; end: 102d084cb; -[AdPodManager registerAdPod:sessionId:] */

void FUN_102d08458(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d07d10(param_3,param_4,param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d084cc; end: 102d085cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d084cc(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  long lVar5;
  undefined1 auStack_58 [24];
  
  lVar1 = _DAT_11308f130;
  lVar5 = _DAT_112f0d7a0;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7a0,auStack_58,0x20,0);
  lVar5 = *(long *)(unaff_x20 + lVar5);
  if (*(long *)(lVar5 + 0x10) != 0) {
    lVar2 = *(long *)(param_1 + lVar1);
    uVar4 = ((long *)(param_1 + lVar1))[1];
    func_0x000107c61434(lVar5);
    func_0x000100029284();
    if ((uVar4 & 1) != 0) {
      uVar3 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 8);
      func_0x000107c61174(uVar3);
      func_0x000107c614a8(auStack_58);
      func_0x000107c6142c(lVar5);
      lVar5 = *(long *)(unaff_x20 + _DAT_112f0d7c8);
      if (lVar5 != 0) {
        func_0x000107c5c734();
        func_0x000107c61180();
        if (lVar5 != 0) {
          func_0x000107c41d50();
          func_0x000107c615e8(lVar5);
        }
      }
      func_0x000107c61170(uVar3);
      return;
    }
    func_0x000107c6142c(lVar5);
  }
  func_0x000107c614a8(auStack_58);
  return;
}



/* Entry: 102d085d0; end: 102d0861f; -[AdPodManager didStartPlayingAd:] */

/* WARNING: Possible PIC construction at 0x000102d08608: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0860c) */

void FUN_102d085d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d084cc(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d08620; end: 102d089b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d08620(long param_1,ulong param_2)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined *puVar13;
  long unaff_x20;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong uStack_e8;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  
  FUN_102d09d90();
  if (param_2 >> 0x3e == 0) {
    uVar17 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar17 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar17 = param_2;
    }
    func_0x000107c60480();
  }
  lVar5 = _DAT_112f0d7b0;
  uStack_e8 = param_2 & 0xffffffffffffff8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7b0,auStack_88,0,0);
  puVar13 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar17 != 0) {
    uVar18 = 0;
    do {
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_e8 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102d08970);
          (*pcVar6)();
        }
        uVar8 = *(ulong *)(param_2 + 0x20 + uVar18 * 8);
        func_0x000107c61174();
      }
      else {
        uVar8 = uVar18;
        FUN_102d09448(uVar18,param_2);
      }
      if (SCARRY8(uVar18,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102d0896c);
        (*pcVar6)();
      }
      uVar18 = uVar18 + 1;
      lVar19 = *(long *)(unaff_x20 + lVar5);
      if (*(long *)(lVar19 + 0x10) != 0) {
        uVar2 = *(ulong *)(uVar8 + _DAT_11308f130);
        uVar3 = ((ulong *)(uVar8 + _DAT_11308f130))[1];
        func_0x000107c6068c(auStack_d0,*(undefined8 *)(lVar19 + 0x28));
        func_0x000107c61434(lVar19);
        puVar9 = auStack_d0;
        func_0x000107c5fb58(puVar9,uVar2,uVar3);
        func_0x000107c606a8();
        uVar12 = -1L << ((ulong)*(byte *)(lVar19 + 0x20) & 0x3f);
        uVar16 = (ulong)puVar9 & (uVar12 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar19 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(lVar19 + 0x30) + uVar16 * 0x10);
            uVar10 = *puVar1;
            uVar4 = puVar1[1];
            if ((uVar10 == uVar2 && uVar4 == uVar3) ||
               (func_0x000107c605b8(uVar10,uVar4,uVar2,uVar3,0), (uVar10 & 1) != 0)) {
              func_0x000107c6142c(lVar19);
              puVar15 = puVar13;
              func_0x000107c61558();
              puStack_70 = puVar13;
              if (((ulong)puVar15 & 1) == 0) {
                FUN_102d09b58(0,*(long *)(puVar13 + 0x10) + 1,1);
              }
              uVar2 = *(ulong *)(puStack_70 + 0x10);
              if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
                FUN_102d09b58(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
              }
              *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
              *(ulong *)(puStack_70 + uVar2 * 8 + 0x20) = uVar8;
              puVar13 = puStack_70;
              goto LAB_102d086cc;
            }
            uVar16 = uVar16 + 1 & ~uVar12;
          } while ((*(ulong *)(lVar19 + 0x38 + (uVar16 >> 6) * 8) >> (uVar16 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(lVar19);
      }
      func_0x000107c61170();
LAB_102d086cc:
    } while (uVar18 != uVar17);
  }
  func_0x000107c6142c(param_2);
  if (((long)puVar13 < 0) || (((ulong)puVar13 >> 0x3e & 1) != 0)) {
    puVar15 = puVar13;
    func_0x000107c60480();
  }
  else {
    puVar15 = *(undefined **)(puVar13 + 0x10);
  }
  puVar14 = (undefined *)0x0;
  uVar17 = *(ulong *)(param_1 + _DAT_11308f130);
  uVar18 = ((ulong *)(param_1 + _DAT_11308f130))[1];
  while( true ) {
    if (puVar15 == puVar14) {
      func_0x000107c61574(puVar13);
      func_0x000107c5eac8();
      return;
    }
    if (((ulong)puVar13 & 0xc000000000000001) == 0) {
      if (*(undefined **)(puVar13 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102d08974);
        (*pcVar6)();
      }
      puVar11 = *(undefined **)(puVar13 + (long)puVar14 * 8 + 0x20);
      func_0x000107c61174();
    }
    else {
      puVar11 = puVar14;
      FUN_102d09448(puVar14,puVar13);
    }
    uVar8 = *(ulong *)(puVar11 + _DAT_11308f130);
    uVar2 = *(ulong *)((long)(puVar11 + _DAT_11308f130) + 8);
    if (uVar8 == uVar17 && uVar2 == uVar18) break;
    func_0x000107c605b8(uVar8,uVar2,uVar17,uVar18,0);
    func_0x000107c61170(puVar11);
    if ((uVar8 & 1) != 0) {
      func_0x000107c61574(puVar13);
      goto LAB_102d0893c;
    }
    bVar7 = SCARRY8((long)puVar14,1);
    puVar14 = puVar14 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102d08978);
      (*pcVar6)();
    }
  }
  func_0x000107c61574(puVar13);
  func_0x000107c61170(puVar11);
LAB_102d0893c:
  if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102d089b0);
    (*pcVar6)();
  }
  if (-1 < (long)(puVar14 + 1)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102d089b4);
  (*pcVar6)();
}



/* Entry: 102d089b4; end: 102d08a2b; -[AdPodManager adPositionForAdResponse:adPod:] */

undefined8
FUN_102d089b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d08620(param_3,param_4);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102d08a2c; end: 102d08cdb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d08a2c(ulong param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  ulong uVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  long unaff_x20;
  ulong uVar13;
  ulong uVar14;
  undefined *puVar15;
  long lVar16;
  ulong uStack_e0;
  undefined1 auStack_d0 [72];
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  
  FUN_102d09d90();
  if (param_1 >> 0x3e == 0) {
    uVar11 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar11 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar11 = param_1;
    }
    func_0x000107c60480();
  }
  lVar5 = _DAT_112f0d7b0;
  uStack_e0 = param_1 & 0xffffffffffffff8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7b0,auStack_88,0,0);
  puVar15 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar11 != 0) {
    uVar14 = 0;
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uStack_e0 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102d08ca4);
          (*pcVar6)();
        }
        uVar7 = *(ulong *)(param_1 + 0x20 + uVar14 * 8);
        func_0x000107c61174();
      }
      else {
        uVar7 = uVar14;
        FUN_102d09448(uVar14,param_1);
      }
      if (SCARRY8(uVar14,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x102d08ca0);
        (*pcVar6)();
      }
      uVar14 = uVar14 + 1;
      lVar16 = *(long *)(unaff_x20 + lVar5);
      if (*(long *)(lVar16 + 0x10) != 0) {
        uVar2 = *(ulong *)(uVar7 + _DAT_11308f130);
        uVar3 = ((ulong *)(uVar7 + _DAT_11308f130))[1];
        func_0x000107c6068c(auStack_d0,*(undefined8 *)(lVar16 + 0x28));
        func_0x000107c61434(lVar16);
        puVar8 = auStack_d0;
        func_0x000107c5fb58(puVar8,uVar2,uVar3);
        func_0x000107c606a8();
        uVar10 = -1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
        uVar13 = (ulong)puVar8 & (uVar10 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar16 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
          do {
            puVar1 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar13 * 0x10);
            uVar9 = *puVar1;
            uVar4 = puVar1[1];
            if ((uVar9 == uVar2 && uVar4 == uVar3) ||
               (func_0x000107c605b8(uVar9,uVar4,uVar2,uVar3,0), (uVar9 & 1) != 0)) {
              func_0x000107c6142c(lVar16);
              puVar12 = puVar15;
              func_0x000107c61558();
              puStack_70 = puVar15;
              if (((ulong)puVar12 & 1) == 0) {
                FUN_102d09b58(0,*(long *)(puVar15 + 0x10) + 1,1);
              }
              uVar2 = *(ulong *)(puStack_70 + 0x10);
              if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar2) {
                FUN_102d09b58(1 < *(ulong *)(puStack_70 + 0x18),uVar2 + 1,1);
              }
              *(ulong *)(puStack_70 + 0x10) = uVar2 + 1;
              *(ulong *)(puStack_70 + uVar2 * 8 + 0x20) = uVar7;
              puVar15 = puStack_70;
              goto LAB_102d08ac4;
            }
            uVar13 = uVar13 + 1 & ~uVar10;
          } while ((*(ulong *)(lVar16 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
        }
        func_0x000107c6142c(lVar16);
      }
      func_0x000107c61170();
LAB_102d08ac4:
    } while (uVar14 != uVar11);
  }
  func_0x000107c6142c(param_1);
  if (((long)puVar15 < 0) || (((ulong)puVar15 >> 0x3e & 1) != 0)) {
    puVar12 = puVar15;
    func_0x000107c60480();
    func_0x000107c61574(puVar15);
    if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102d08cdc);
      (*pcVar6)();
    }
  }
  else {
    puVar12 = *(undefined **)(puVar15 + 0x10);
    func_0x000107c61574(puVar15);
  }
  return puVar12;
}



/* Entry: 102d08cdc; end: 102d08d37; -[AdPodManager adPodInsertedAdCount:] */

undefined8 FUN_102d08cdc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d08a2c(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
  return uVar1;
}



/* Entry: 102d08d38; end: 102d092d3;  */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 ******* FUN_102d08d38(undefined8 *******param_1)

{
  long *plVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  undefined8 *******pppppppuVar11;
  undefined8 *******pppppppuVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long unaff_x20;
  long lVar17;
  ulong uVar18;
  undefined *puVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  undefined *puVar23;
  ulong uStack_128;
  undefined8 *******pppppppuStack_110;
  ulong uStack_d8;
  undefined8 *******pppppppuStack_d0;
  undefined *puStack_c8;
  long lStack_c0;
  long lStack_b8;
  undefined8 *******pppppppuStack_b0;
  ulong uStack_a8;
  undefined1 auStack_88 [24];
  undefined *puStack_70;
  
  lVar20 = _DAT_11308f130;
  lVar17 = _DAT_112f0d7a0;
  if (*(int *)((long)param_1 + _DAT_113815200) == 7) {
    return (undefined8 *******)0x0;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7a0,&pppppppuStack_d0,0x20,0);
  lVar17 = *(long *)(unaff_x20 + lVar17);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102d08f30:
    func_0x000107c614a8(&pppppppuStack_d0);
    return (undefined8 *******)0x0;
  }
  lVar9 = *(long *)((long)param_1 + lVar20);
  uVar10 = ((long *)((long)param_1 + lVar20))[1];
  func_0x000107c61434(lVar17);
  func_0x000100029284();
  if ((uVar10 & 1) == 0) {
    func_0x000107c6142c(lVar17);
    goto LAB_102d08f30;
  }
  uVar10 = *(ulong *)(*(long *)(lVar17 + 0x38) + lVar9 * 8);
  func_0x000107c61174();
  func_0x000107c614a8(&pppppppuStack_d0);
  func_0x000107c6142c(lVar17);
  lVar20 = _DAT_11308f090;
  lVar17 = _DAT_112f0d7a8;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d7a8,&pppppppuStack_d0,0x20,0);
  lVar17 = *(long *)(unaff_x20 + lVar17);
  if (*(long *)(lVar17 + 0x10) != 0) {
    plVar1 = (long *)(uVar10 + lVar20);
    lVar20 = *plVar1;
    uVar13 = plVar1[1];
    func_0x000107c61434(lVar17);
    func_0x000100029284();
    if ((uVar13 & 1) != 0) {
      plVar2 = (long *)(*(long *)(lVar17 + 0x38) + lVar20 * 0x10);
      lVar20 = *plVar2;
      uVar13 = plVar2[1];
      func_0x000107c61434(uVar13);
      func_0x000107c614a8(&pppppppuStack_d0);
      func_0x000107c6142c(lVar17);
      FUN_102d08620(param_1,uVar10);
      lVar17 = _DAT_112f0d7b8;
      func_0x000107c61428(unaff_x20 + _DAT_112f0d7b8,&pppppppuStack_d0,0x20,0);
      uVar18 = *(ulong *)(unaff_x20 + lVar17);
      if (*(long *)(uVar18 + 0x10) == 0) {
LAB_102d08f88:
        func_0x000107c6142c(uVar13);
        pppppppuVar12 = &pppppppuStack_d0;
        func_0x000107c614a8();
        func_0x000107c5eac8();
        pppppppuStack_110 = pppppppuVar12;
      }
      else {
        func_0x000107c61434(uVar18);
        uVar22 = uVar13;
        func_0x000100029284();
        if ((uVar22 & 1) == 0) {
          func_0x000107c6142c(uVar13);
          uVar13 = uVar18;
          goto LAB_102d08f88;
        }
        pppppppuVar11 = *(undefined8 ********)(*(long *)(uVar18 + 0x38) + lVar20 * 8);
        func_0x000107c61174();
        func_0x000107c614a8(&pppppppuStack_d0);
        func_0x000107c6142c(uVar13);
        func_0x000107c6142c(uVar18);
        pppppppuVar12 = (undefined8 *******)*plVar1;
        lVar17 = plVar1[1];
        func_0x000107c61434(lVar17);
        func_0x000107c5fadc(pppppppuVar12,lVar17);
        func_0x000107c6142c(lVar17);
        pppppppuStack_110 = pppppppuVar11;
        func_0x000107c45340();
        func_0x000107c61170(pppppppuVar11);
        func_0x000107c61170();
      }
      func_0x000107c5eac8();
      if ((param_1 != pppppppuVar12) && (func_0x000107c5eac8(), pppppppuStack_110 != pppppppuVar12))
      {
        uVar13 = uVar10;
        FUN_102d09d90();
        if (uVar13 >> 0x3e == 0) {
          uStack_128 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uStack_128 = uVar13 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uStack_128 = uVar13;
          }
          func_0x000107c60480();
        }
        func_0x000107c6142c();
        uVar13 = uVar10;
        FUN_102d09d90();
        if (uVar13 >> 0x3e == 0) {
          uVar18 = *(ulong *)((uVar13 & 0xffffffffffffff8) + 0x10);
        }
        else {
          uVar18 = uVar13 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar13) {
            uVar18 = uVar13;
          }
          func_0x000107c60480();
        }
        lVar17 = _DAT_112f0d7b0;
        uStack_d8 = uVar13 & 0xffffffffffffff8;
        func_0x000107c61428(unaff_x20 + _DAT_112f0d7b0,auStack_88,0,0);
        puVar23 = PTR___swiftEmptyArrayStorage_11034f1c8;
        if (uVar18 != 0) {
          uVar22 = 0;
          do {
            if ((uVar13 & 0xc000000000000001) == 0) {
              if (*(ulong *)(uStack_d8 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x102d09274);
                (*pcVar7)();
              }
              uVar14 = *(ulong *)(uVar13 + 0x20 + uVar22 * 8);
              func_0x000107c61174();
            }
            else {
              uVar14 = uVar22;
              FUN_102d09448(uVar22,uVar13);
            }
            bVar8 = SCARRY8(uVar22,1);
            uVar22 = uVar22 + 1;
            if (bVar8) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x102d09270);
              (*pcVar7)();
            }
            lVar20 = *(long *)(unaff_x20 + lVar17);
            if (*(long *)(lVar20 + 0x10) != 0) {
              uVar4 = *(ulong *)(uVar14 + _DAT_11308f130);
              uVar5 = ((ulong *)(uVar14 + _DAT_11308f130))[1];
              func_0x000107c6068c(&pppppppuStack_d0,*(undefined8 *)(lVar20 + 0x28));
              func_0x000107c61434(lVar20);
              pppppppuVar12 = &pppppppuStack_d0;
              func_0x000107c5fb58(pppppppuVar12,uVar4,uVar5);
              func_0x000107c606a8();
              uVar16 = -1L << ((ulong)*(byte *)(lVar20 + 0x20) & 0x3f);
              uVar21 = (ulong)pppppppuVar12 & (uVar16 ^ 0xffffffffffffffff);
              if ((*(ulong *)(lVar20 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0) {
                do {
                  puVar3 = (ulong *)(*(long *)(lVar20 + 0x30) + uVar21 * 0x10);
                  uVar15 = *puVar3;
                  uVar6 = puVar3[1];
                  if ((uVar15 == uVar4 && uVar6 == uVar5) ||
                     (func_0x000107c605b8(uVar15,uVar6,uVar4,uVar5,0), (uVar15 & 1) != 0)) {
                    func_0x000107c6142c(lVar20);
                    puVar19 = puVar23;
                    func_0x000107c61558();
                    puStack_70 = puVar23;
                    if (((ulong)puVar19 & 1) == 0) {
                      FUN_102d09b58(0,*(long *)(puVar23 + 0x10) + 1,1);
                    }
                    uVar4 = *(ulong *)(puStack_70 + 0x10);
                    if (*(ulong *)(puStack_70 + 0x18) >> 1 <= uVar4) {
                      FUN_102d09b58(1 < *(ulong *)(puStack_70 + 0x18),uVar4 + 1,1);
                    }
                    *(ulong *)(puStack_70 + 0x10) = uVar4 + 1;
                    *(ulong *)(puStack_70 + uVar4 * 8 + 0x20) = uVar14;
                    puVar23 = puStack_70;
                    goto joined_r0x000102d091b8;
                  }
                  uVar21 = uVar21 + 1 & ~uVar16;
                } while ((*(ulong *)(lVar20 + 0x38 + (uVar21 >> 6) * 8) >> (uVar21 & 0x3f) & 1) != 0
                        );
              }
              func_0x000107c6142c(lVar20);
            }
            func_0x000107c61170(uVar14);
joined_r0x000102d091b8:
          } while (uVar22 != uVar18);
        }
        func_0x000107c6142c(uVar13);
        if (((long)puVar23 < 0) || (((ulong)puVar23 >> 0x3e & 1) != 0)) {
          puVar19 = puVar23;
          func_0x000107c60480();
          func_0x000107c61574(puVar23);
          if ((long)puVar19 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x102d092d0);
            (*pcVar7)();
          }
        }
        else {
          puVar19 = *(undefined **)(puVar23 + 0x10);
          func_0x000107c61574(puVar23);
        }
        if ((long)(uStack_128 | (ulong)pppppppuStack_110) < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x102d092d4);
          (*pcVar7)();
        }
        lStack_c0 = *plVar1;
        lVar17 = plVar1[1];
        pppppppuStack_b0 = pppppppuStack_110;
        uStack_a8 = uStack_128;
        pppppppuStack_d0 = param_1;
        puStack_c8 = puVar19;
        lStack_b8 = lVar17;
        func_0x000104293538(0);
        func_0x000107c610f8();
        func_0x000107c61434(lVar17);
        pppppppuVar12 = &pppppppuStack_d0;
        func_0x000104292cd0(pppppppuVar12);
        func_0x000107c61170(uVar10);
        return pppppppuVar12;
      }
      goto LAB_102d08f4c;
    }
    func_0x000107c6142c(lVar17);
  }
  func_0x000107c614a8(&pppppppuStack_d0);
LAB_102d08f4c:
  func_0x000107c61170(uVar10);
  return (undefined8 *******)0x0;
}



/* Entry: 102d092d4; end: 102d0932f; -[AdPodManager adPodTrackInfoForAdResponse:] */

void FUN_102d092d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  FUN_102d08d38(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102d09330; end: 102d09363;  */

void FUN_102d09330(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d09364; end: 102d093eb; -[AdPodManager .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d093b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d093d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d093b4) */
/* WARNING: Removing unreachable block (ram,0x000102d093d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d09364(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d7c0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d7c8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112f0d7d0));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(param_1 + _DAT_112f0d7a0));
  return;
}



/* Entry: 102d093ec; end: 102d09447;  */

void FUN_102d093ec(void)

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
    func_0x0001047c0984();
    if (lVar4 != 0) {
      puVar2 = (ulong *)0x112d36e60;
      plVar5 = (long *)&UNK_10d901170;
      goto SUB_1000285a8;
    }
  }
  puVar2 = (ulong *)0x112f0d800;
  plVar5 = (long *)&UNK_10db405f0;
SUB_1000285a8:
  if (*puVar2 == 0 || (*puVar2 & 1) != 0) {
    puVar3 = (undefined *)((long)plVar5 + (long)(int)*plVar5);
    func_0x000107c61518(puVar3,*plVar5 >> 0x20,0,0);
    *puVar2 = (ulong)puVar3;
  }
  return;
}



/* Entry: 102d09448; end: 102d095ef;  */

ulong FUN_102d09448(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0951c);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d09520);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    func_0x0001047c0984(0);
    uVar4 = param_1;
    func_0x000107c615f0();
    func_0x000107c61480();
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
    uVar3 = 0;
    func_0x0001047c0984(0);
    uVar4 = param_1;
    func_0x000107c61480(param_1,uVar3);
    if (uVar4 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar3 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar3,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0x6e6f707365526441,0xee00636a624f6573);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar3 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar3);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d095f0);
  (*pcVar2)();
}



/* Entry: 102d095f0; end: 102d09763;  */

void FUN_102d095f0(undefined8 param_1,ulong param_2,ulong param_3,uint param_4,undefined8 param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  func_0x000100029284();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar8;
  if (SCARRY8(lVar5,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d096e0);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_102d098c4(lVar6,param_4 & 1,param_5,param_6);
    uVar3 = param_2;
    uVar8 = param_3;
    func_0x000100029284();
    if (((uint)uVar4 & 1) != ((uint)uVar8 & 1)) {
      func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d096a4);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_102d09764(param_5,param_6);
    lVar6 = *unaff_x20;
    goto joined_r0x000102d096fc;
  }
  lVar6 = *unaff_x20;
joined_r0x000102d096fc:
  if ((uVar4 & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8);
    *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar7);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  *(undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x102d09764);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)(param_3);
  return;
}



/* Entry: 102d09764; end: 102d098c3;  */

void FUN_102d09764(void)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  
  func_0x0001000285a8();
  lVar11 = *unaff_x20;
  lVar7 = lVar11;
  func_0x000107c6048c();
  if (*(long *)(lVar11 + 0x10) != 0) {
    lVar1 = lVar11 + 0x40;
    uVar8 = (1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar7 != lVar11 || lVar1 + uVar8 * 8 <= lVar7 + 0x40U) {
      func_0x000107c610b8(lVar7 + 0x40U,lVar1,uVar8 << 3);
    }
    lVar13 = 0;
    *(undefined8 *)(lVar7 + 0x10) = *(undefined8 *)(lVar11 + 0x10);
    uVar9 = 1L << ((ulong)*(byte *)(lVar11 + 0x20) & 0x3f);
    uVar8 = 0xffffffffffffffff;
    if ((*(byte *)(lVar11 + 0x20) & 0x3f) < 6) {
      uVar8 = ~(-1L << (uVar9 & 0x3f));
    }
    uVar8 = uVar8 & *(ulong *)(lVar11 + 0x40);
    if (uVar8 == 0) goto LAB_102d09830;
    do {
      uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar8 = uVar8 - 1 & uVar8;
      while( true ) {
        uVar10 = LZCOUNT(uVar10) | lVar13 << 6;
        puVar3 = (undefined8 *)(*(long *)(lVar11 + 0x30) + uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x38) + uVar10 * 8);
        puVar4 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar10 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar10 * 8) = uVar12;
        func_0x000107c61434();
        func_0x000107c61174(uVar12);
        if (uVar8 != 0) break;
LAB_102d09830:
        do {
          lVar2 = lVar13 + 1;
          if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x102d098c4);
            (*pcVar6)();
          }
          if ((long)(uVar9 + 0x3f >> 6) <= lVar2) goto LAB_102d0989c;
          uVar8 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar13 = lVar13 + 1;
        } while (uVar8 == 0);
        uVar10 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar8 = uVar8 - 1 & uVar8;
        lVar13 = lVar2;
      }
    } while( true );
  }
LAB_102d0989c:
  func_0x000107c61574(lVar11);
  *unaff_x20 = lVar7;
  return;
}



/* Entry: 102d098c4; end: 102d09b57;  */

void FUN_102d098c4(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined1 auStack_a8 [72];
  
  lVar17 = *unaff_x20;
  lVar1 = *(long *)(lVar17 + 0x18);
  if (*(long *)(lVar17 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  func_0x0001000285a8(param_3,param_4);
  lVar7 = lVar17;
  func_0x000107c60490(lVar17,lVar1,param_2,param_3);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_102d09b24:
    func_0x000107c61574(lVar17);
    *unaff_x20 = lVar7;
    return;
  }
  puVar16 = (ulong *)(lVar17 + 0x40);
  uVar12 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  lVar1 = lVar7 + 0x40;
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar19 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102d09b54);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar19) {
          if ((param_2 & 1) != 0) {
            uVar15 = 1L << ((ulong)*(byte *)(lVar17 + 0x20) & 0x3f);
            if ((*(byte *)(lVar17 + 0x20) & 0x3f) < 6) {
              *puVar16 = -1L << (uVar15 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar17 + 0x10) = 0;
          }
          goto LAB_102d09b24;
        }
        uVar15 = puVar16[lVar19];
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar19 = lVar10;
    }
    uVar9 = LZCOUNT(uVar9) | lVar19 << 6;
    puVar2 = (undefined8 *)(*(long *)(lVar17 + 0x30) + uVar9 * 0x10);
    uVar3 = *puVar2;
    uVar4 = puVar2[1];
    uVar18 = *(undefined8 *)(*(long *)(lVar17 + 0x38) + uVar9 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61434(uVar4);
      func_0x000107c61174(uVar18);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar7 + 0x28));
    puVar8 = auStack_a8;
    func_0x000107c5fb58(puVar8,uVar3,uVar4);
    func_0x000107c606a8();
    uVar14 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar13 = (ulong)puVar8 & (uVar14 ^ 0xffffffffffffffff);
    uVar11 = uVar13 >> 6;
    uVar9 = -1L << (uVar13 & 0x3f) & (*(ulong *)(lVar1 + uVar11 * 8) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar5 = false;
      uVar9 = 0x3f - uVar14 >> 6;
      do {
        uVar13 = uVar11 + 1;
        if ((uVar13 == uVar9) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x102d09b58);
          (*pcVar6)();
        }
        uVar11 = 0;
        if (uVar13 != uVar9) {
          uVar11 = uVar13;
        }
        bVar5 = (bool)(uVar13 == uVar9 | bVar5);
        uVar13 = *(ulong *)(lVar1 + uVar11 * 8);
      } while (uVar13 == 0xffffffffffffffff);
      uVar13 = ~uVar13;
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar13 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar11) = 1L << (uVar9 & 0x3f) | *(ulong *)(lVar1 + uVar11);
    puVar2 = (undefined8 *)(*(long *)(lVar7 + 0x30) + uVar9 * 0x10);
    *puVar2 = uVar3;
    puVar2[1] = uVar4;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar9 * 8) = uVar18;
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    lVar10 = lVar19;
  } while( true );
}



/* Entry: 102d09b58; end: 102d09b73;  */

void FUN_102d09b58(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102d09b74();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102d09b74; end: 102d09c97;  */

undefined * FUN_102d09b74(undefined *param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d09c98);
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
    FUN_102d093ec();
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
    func_0x0001047c0984(0);
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



/* Entry: 102d09c98; end: 102d09d8f;  */

undefined * FUN_102d09c98(long param_1,undefined8 param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  
  puVar8 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  if (puVar8 != (undefined *)0x0) {
    func_0x0001000285a8(param_2,param_3);
    puVar5 = puVar8;
    func_0x000107c60498();
    func_0x000107c6157c();
    puVar10 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar2 = puVar10[-2];
      uVar3 = puVar10[-1];
      uVar9 = *puVar10;
      func_0x000107c61434(uVar3);
      func_0x000107c61174();
      uVar6 = uVar2;
      uVar7 = uVar3;
      func_0x000100029284();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d09d8c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x102d09d90);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      puVar8 = puVar8 + -1;
      puVar10 = puVar10 + 3;
    } while (puVar8 != (undefined *)0x0);
    func_0x000107c61574(puVar5);
  }
  return puVar5;
}



/* Entry: 102d09d90; end: 102d09f17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102d09d90(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  
  uVar5 = *(ulong *)(param_1 + _DAT_11308f098);
  uVar8 = uVar5 & 0xffffffffffffff8;
  if (uVar5 >> 0x3e == 0) {
    uVar6 = *(ulong *)(uVar8 + 0x10);
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    uVar6 = uVar8;
    if (0x7fffffffffffffff < uVar5) {
      uVar6 = uVar5;
    }
    func_0x000107c60480();
    puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  PTR___swiftEmptyArrayStorage_11034f1c8 = puVar1;
  if (uVar6 != 0) {
    uVar7 = 0;
    do {
      while( true ) {
        if ((uVar5 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x102d09ed8);
            (*pcVar2)();
          }
          uVar3 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
          func_0x000107c61174();
        }
        else {
          uVar3 = uVar7;
          FUN_102d09448(uVar7,uVar5);
        }
        if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d09ed4);
          (*pcVar2)();
        }
        uVar9 = uVar7 + 1;
        if (*(int *)(uVar3 + _DAT_113815200) == 7) break;
        puVar4 = puVar1;
        func_0x000107c61558();
        if (((ulong)puVar4 & 1) == 0) {
          FUN_102d09b58(0,*(long *)(puVar1 + 0x10) + 1,1);
        }
        uVar7 = *(ulong *)(puVar1 + 0x10);
        if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar7) {
          FUN_102d09b58(1 < *(ulong *)(puVar1 + 0x18),uVar7 + 1,1);
        }
        *(ulong *)(puVar1 + 0x10) = uVar7 + 1;
        *(ulong *)(puVar1 + uVar7 * 8 + 0x20) = uVar3;
        uVar7 = uVar9;
        if (uVar9 == uVar6) {
          return puVar1;
        }
      }
      func_0x000107c61170();
      uVar7 = uVar7 + 1;
    } while (uVar9 != uVar6);
  }
  return puVar1;
}



/* Entry: 102d09f18; end: 102d09f37;  */

void FUN_102d09f18(void)

{
  func_0x000107c61168(&PTR_PTR_1128a09c8);
  return;
}



/* Entry: 102d09f38; end: 102d09f7f; -[SCAdOperaUIContainer customPresentingViewController] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d09f38(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0d818;
  func_0x000107c61428(param_1 + _DAT_112f0d818,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 102d09f80; end: 102d09fd7; -[SCAdOperaUIContainer setCustomPresentingViewController:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d09f80(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d818;
  func_0x000107c61428(param_1 + _DAT_112f0d818,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 102d09fd8; end: 102d0a01b; -[SCAdOperaUIContainer presentAnimated] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_102d09fd8(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f0d820;
  func_0x000107c61428(param_1 + _DAT_112f0d820,auStack_38,0,0);
  return *(undefined1 *)(param_1 + lVar1);
}



/* Entry: 102d0a01c; end: 102d0a06b; -[SCAdOperaUIContainer setPresentAnimated:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0a01c(long param_1,undefined8 param_2,undefined1 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f0d820;
  func_0x000107c61428(param_1 + _DAT_112f0d820,auStack_48,1,0);
  *(undefined1 *)(param_1 + lVar1) = param_3;
  return;
}



/* Entry: 102d0a06c; end: 102d0a12f; -[SCAdOperaUIContainer init] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0a06c(long param_1)

{
  code *pcVar1;
  
  func_0x000107c61614(param_1 + _DAT_112f0d828,0);
  func_0x000107c61614(param_1 + _DAT_112f0d830,0);
  *(undefined1 *)(param_1 + _DAT_112f0d838) = 0;
  *(undefined1 *)(param_1 + _DAT_112f0d840) = 1;
  func_0x000107c61614(param_1 + _DAT_112f0d818,0);
  *(undefined1 *)(param_1 + _DAT_112f0d820) = 1;
  func_0x000107c60450("Fatal error",0xb,2,0xd000000000000022,0x800000010f109d70,
                      "AdOperaUIContainer/AdOperaUIContainer.swift",0x2b,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0a130);
  (*pcVar1)();
}



/* Entry: 102d0a130; end: 102d0a2d3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_102d0a130(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined1 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_70 [8];
  
  func_0x000107c610f8();
  func_0x000107c61614(unaff_x20 + _DAT_112f0d828,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f0d830,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f0d838) = 0;
  lVar2 = _DAT_112f0d840;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d840) = 1;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d818,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f0d820) = 1;
  *(undefined1 *)(unaff_x20 + lVar2) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0d848);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x0001000285a8(0x112dd07d8,&UNK_10db40610);
  func_0x000107c6157c(param_2);
  uVar3 = param_3;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d850) = uVar3;
  func_0x0001000285a8(0x112dced30,&UNK_10d990b60);
  uVar3 = param_4;
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d858) = uVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0d860);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0d868);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  puVar4 = auStack_70;
  func_0x000107c61154(puVar4,PTR_s_init_1125d9248);
  func_0x000107c61574(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  return puVar4;
}



/* Entry: 102d0a2d4; end: 102d0a42f; -[SCAdOperaUIContainer initWithOperaControllingFactoryBlock:adCrashLogger:adConfigProvider:didPresentBlock:didDismissBlock:shouldHandleModalPresentation:] */

code * FUN_102d0a2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,long param_6,long param_7,undefined1 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  func_0x000107c60bc4();
  puVar2 = &UNK_1105c2278;
  func_0x000107c613fc(&UNK_1105c2278,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  if (param_6 == 0) {
    puVar4 = (undefined *)0x0;
    uVar1 = 0;
  }
  else {
    puVar4 = &UNK_1105c22c8;
    func_0x000107c613fc(&UNK_1105c22c8,0x18,7);
    *(long *)(puVar4 + 0x10) = param_6;
    uVar1 = 0x102d0b3a4;
  }
  if (param_7 == 0) {
    puVar6 = (undefined *)0x0;
    uVar5 = 0;
  }
  else {
    puVar6 = &UNK_1105c22a0;
    func_0x000107c613fc(&UNK_1105c22a0,0x18,7);
    *(long *)(puVar6 + 0x10) = param_7;
    uVar5 = 0x102d0b3a0;
  }
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_5);
  pcVar3 = FUN_102d0b374;
  FUN_102d0afdc(FUN_102d0b374,puVar2,param_4,param_5,uVar1,puVar4,uVar5,puVar6,param_8);
  func_0x000107c61574(puVar2);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  return pcVar3;
}



/* Entry: 102d0a430; end: 102d0a463;  */

void FUN_102d0a430(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 102d0a464; end: 102d0a507; -[SCAdOperaUIContainer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x000102d0a4dc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0a4e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0a464(long param_1)

{
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0d848 + 8));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0d850));
  func_0x000107c61574(*(undefined8 *)(param_1 + _DAT_112f0d858));
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f0d860),
                      ((undefined8 *)(param_1 + _DAT_112f0d860))[1]);
  func_0x00010058d43c(*(undefined8 *)(param_1 + _DAT_112f0d868),
                      ((undefined8 *)(param_1 + _DAT_112f0d868))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc05f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectWeakDestroy_11034f580)(param_1 + _DAT_112f0d828);
  return;
}



/* Entry: 102d0a508; end: 102d0a9d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0a508(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lVar9;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined *puStack_98;
  undefined1 auStack_90 [24];
  long alStack_78 [3];
  
  ppuVar7 = &puStack_c0;
  lVar5 = unaff_x20;
  func_0x000107c614f0();
  func_0x000107c5677c(param_1);
  lVar1 = unaff_x20 + _DAT_112f0d830;
  func_0x000107c61604(lVar1,param_1);
  (**(code **)(unaff_x20 + _DAT_112f0d848))();
  if (lVar1 == 0) {
    func_0x0001000d224c(alStack_78);
    if (alStack_78[0] == 0) {
      return;
    }
    func_0x000102458e14(0);
    uVar8 = 0xb;
    func_0x000103dec308(0xb);
    puStack_c0 = (undefined *)0x0;
    uStack_b8 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_b8);
    puStack_c0 = (undefined *)0x5b;
    uStack_b8 = 0xe100000000000000;
    func_0x000107c614e4(lVar5);
    func_0x000107c5fb18(auStack_90,lVar5);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar5);
    func_0x000107c5fb78(0xd000000000000021,0x800000010f109da0);
    uVar2 = uStack_b8;
    puVar4 = puStack_c0;
    func_0x000107c5fadc(puStack_c0,uStack_b8);
    func_0x000107c6142c(uVar2);
    lVar5 = -0x2fffffffffffffe9;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f109dd0);
    func_0x000107c3e1fc(alStack_78[0]);
    func_0x000107c615e8(alStack_78[0]);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar4);
    goto LAB_102d0a9a4;
  }
  *(undefined1 *)(unaff_x20 + _DAT_112f0d838) = 0;
  func_0x0001000d224c(&puStack_c0);
  if (puStack_c0 != (undefined *)0x0) {
    uVar2 = 0xd000000000000023;
    uVar8 = 0x800000010f109df0;
    func_0x000107c5fadc(0xd000000000000023,0x800000010f109df0);
    puVar4 = puStack_c0;
    func_0x000107c4dfc0();
    func_0x000107c615e8(puStack_c0);
    func_0x000107c61170(uVar2);
    if ((int)puVar4 != 0) {
      lVar5 = lVar1;
      func_0x000107c5df08();
      func_0x000107c61180();
      if (lVar5 != 0) {
        lVar9 = unaff_x20;
        func_0x000107c61174();
        lVar3 = lVar9;
        func_0x000107c417f0();
        func_0x000107c61180();
        if (lVar3 == 0) {
          func_0x000107c5faec();
          func_0x000107c5fadc();
          func_0x000107c61170(lVar9);
          func_0x000107c6142c(uVar8);
        }
        else {
          func_0x000107c61170(lVar9);
        }
        func_0x000107c4e484(lVar5);
        func_0x000107c615e8(lVar5);
        func_0x000107c61170(lVar3);
      }
    }
  }
  lVar5 = lVar1;
  func_0x000107c5df08();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c4e1cc();
    func_0x000107c615e8(lVar5);
  }
  lVar5 = _DAT_112f0d818;
  func_0x000107c61428(unaff_x20 + _DAT_112f0d818,alStack_78,0,0);
  lVar5 = unaff_x20 + lVar5;
  func_0x000107c61618();
  if (lVar5 == 0) {
    lVar5 = lVar1;
    func_0x000107c5d1b8();
    func_0x000107c61180();
    if (lVar5 == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar5;
      func_0x000107c5d1b4();
      func_0x000107c61180();
      func_0x000107c615e8(lVar5);
    }
    lVar3 = _DAT_112f0d828;
    func_0x000107c61604(unaff_x20 + _DAT_112f0d828,lVar9);
    func_0x000107c61170(lVar9);
    lVar9 = unaff_x20 + lVar3;
    func_0x000107c61618();
    if (lVar9 != 0) {
      lVar5 = lVar9;
      func_0x000107c4f078();
      func_0x000107c61180();
      func_0x000107c61170(lVar9);
      if (lVar5 != 0) goto LAB_102d0a898;
    }
    lVar5 = unaff_x20 + lVar3;
    func_0x000107c61618(lVar5);
  }
  else {
    lVar9 = lVar5;
    func_0x000107c4f078();
    func_0x000107c61180();
    lVar3 = _DAT_112f0d828;
    if (lVar9 != 0) {
      func_0x000107c61170(lVar5);
      lVar5 = lVar9;
      lVar3 = _DAT_112f0d828;
    }
  }
LAB_102d0a898:
  func_0x000107c61604(unaff_x20 + lVar3,lVar5);
  func_0x000107c61170(lVar5);
  lVar5 = unaff_x20 + _DAT_112f0d828;
  func_0x000107c61618();
  if (lVar5 == 0) {
    func_0x000107c615e8(lVar1);
    return;
  }
  func_0x000107c61428(unaff_x20 + _DAT_112f0d820,auStack_90,0,0);
  puVar4 = &UNK_1105c2160;
  func_0x000107c613fc(&UNK_1105c2160,0x18,7);
  func_0x000107c61614(puVar4 + 0x10);
  puVar6 = &UNK_1105c2188;
  func_0x000107c613fc(&UNK_1105c2188,0x30,7);
  *(undefined8 *)(puVar6 + 0x10) = param_2;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(long *)(puVar6 + 0x28) = lVar1;
  pcStack_a0 = FUN_102d0b164;
  puStack_c0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_b8 = 0x42000000;
  puStack_b0 = &UNK_1000f6b44;
  puStack_a8 = &UNK_1105c21a0;
  puStack_98 = puVar6;
  func_0x000107c60bc4(&puStack_c0);
  puVar4 = puStack_98;
  func_0x000100b64c10(param_2,param_3);
  func_0x000107c615f0(lVar1);
  func_0x000107c61574(puVar4);
  func_0x000107c4f018(lVar5);
  func_0x000107c615e8(lVar1);
  func_0x000107c60bd0(ppuVar7);
LAB_102d0a9a4:
  func_0x000107c61170(lVar5);
  return;
}



/* Entry: 102d0a9d8; end: 102d0aa2f; -[SCAdOperaUIContainer attachUI:] */

/* WARNING: Possible PIC construction at 0x000102d0aa18: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0aa1c) */

void FUN_102d0a9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d0a508(param_3,0,0);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d0aa30; end: 102d0aadb; -[SCAdOperaUIContainer attachUI:completion:] */

/* WARNING: Possible PIC construction at 0x000102d0aac0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0aac4) */

void FUN_102d0aa30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  if (param_4 == 0) {
    puVar1 = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    puVar1 = &UNK_1105c2250;
    func_0x000107c613fc(&UNK_1105c2250,0x18,7);
    *(long *)(puVar1 + 0x10) = param_4;
    uVar2 = 0x102d0b39c;
  }
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_102d0a508(param_3,uVar2,puVar1);
  func_0x00010058d43c(uVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 102d0aadc; end: 102d0af4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0aadc(code *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  undefined **ppuVar11;
  long unaff_x20;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined1 auStack_60 [8];
  long lStack_58;
  
  ppuVar11 = &puStack_90;
  lVar1 = unaff_x20;
  func_0x000107c614f0();
  lVar2 = lVar1;
  (**(code **)(unaff_x20 + _DAT_112f0d848))();
  lVar10 = _DAT_112f0d838;
  if (lVar2 == 0) {
    func_0x0001000d224c(&lStack_58);
    if (lStack_58 == 0) {
      return;
    }
    func_0x000102458e14(0);
    uVar8 = 0xb;
    func_0x000103dec308(0xb);
    puStack_90 = (undefined *)0x0;
    uStack_88 = 0xe000000000000000;
    func_0x000107c602fc(0x24);
    func_0x000107c6142c(uStack_88);
    puStack_90 = (undefined *)0x5b;
    uStack_88 = 0xe100000000000000;
    func_0x000107c614e4(lVar1);
    func_0x000107c5fb18(auStack_60,lVar1);
    func_0x000107c5fb78();
    func_0x000107c6142c(lVar1);
    func_0x000107c5fb78(0xd000000000000021,0x800000010f109da0);
    uVar3 = uStack_88;
    puVar9 = puStack_90;
    func_0x000107c5fadc(puStack_90,uStack_88);
    func_0x000107c6142c(uVar3);
    lVar10 = -0x2fffffffffffffe9;
    func_0x000107c5fadc(0xd000000000000017,0x800000010f109dd0);
    func_0x000107c3e1fc(lStack_58);
    func_0x000107c615e8(lStack_58);
    func_0x000107c61170(uVar8);
    func_0x000107c61170(puVar9);
LAB_102d0adac:
    func_0x000107c61170(lVar10);
    return;
  }
  if ((*(byte *)(unaff_x20 + _DAT_112f0d838) & 1) == 0) {
    lVar1 = lVar2;
    func_0x000107c5df08();
    func_0x000107c61180();
    if (lVar1 != 0) {
      func_0x000107c4e1d0();
      func_0x000107c615e8(lVar1);
    }
    func_0x0001000d224c(&puStack_90);
    puVar9 = puStack_90;
    if (puStack_90 != (undefined *)0x0) {
      uVar3 = 0xd000000000000023;
      func_0x000107c5fadc(0xd000000000000023,0x800000010f109df0);
      puVar4 = puVar9;
      func_0x000107c4dfc0();
      func_0x000107c615e8(puVar9);
      func_0x000107c61170(uVar3);
      if ((int)puVar4 != 0) {
        lVar1 = lVar2;
        func_0x000107c5df08();
        func_0x000107c61180();
        if (lVar1 != 0) {
          func_0x000107c50714();
          func_0x000107c615e8(lVar1);
        }
      }
    }
    *(undefined1 *)(unaff_x20 + lVar10) = 1;
  }
  lVar10 = _DAT_112f0d830;
  lVar1 = unaff_x20 + _DAT_112f0d830;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar5 = lVar1;
    func_0x000107c4f090();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
    if (lVar5 != 0) {
      func_0x000107c61170(lVar5);
      uVar6 = unaff_x20 + lVar10;
      func_0x000107c61618();
      if (uVar6 != 0) {
        uVar7 = uVar6;
        func_0x000107c49aa0();
        func_0x000107c61170(uVar6);
        if ((uVar7 & 1) == 0) {
          lVar1 = lVar2;
          func_0x000107c5df08();
          func_0x000107c61180();
          if (lVar1 != 0) {
            func_0x000107c4e1d0();
            func_0x000107c615e8(lVar1);
          }
          func_0x0001000d224c(&puStack_90);
          if (puStack_90 != (undefined *)0x0) {
            uVar3 = 0xd000000000000023;
            func_0x000107c5fadc(0xd000000000000023,0x800000010f109df0);
            puVar9 = puStack_90;
            func_0x000107c4dfc0();
            func_0x000107c615e8(puStack_90);
            func_0x000107c61170(uVar3);
            if ((int)puVar9 != 0) {
              lVar1 = lVar2;
              func_0x000107c5df08();
              func_0x000107c61180();
              if (lVar1 != 0) {
                func_0x000107c50714();
                func_0x000107c615e8(lVar1);
              }
            }
          }
          lVar10 = unaff_x20 + lVar10;
          func_0x000107c61618();
          if (lVar10 != 0) {
            puVar9 = &UNK_1105c2160;
            func_0x000107c613fc(&UNK_1105c2160,0x18,7);
            func_0x000107c61614(puVar9 + 0x10);
            puVar4 = &UNK_1105c21d8;
            func_0x000107c613fc(&UNK_1105c21d8,0x30,7);
            *(undefined **)(puVar4 + 0x10) = puVar9;
            *(code **)(puVar4 + 0x18) = param_1;
            *(undefined8 *)(puVar4 + 0x20) = param_2;
            *(long *)(puVar4 + 0x28) = lVar2;
            pcStack_70 = FUN_102d0b284;
            puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
            uStack_88 = 0x42000000;
            puStack_80 = &UNK_1000f6b44;
            puStack_78 = &UNK_1105c21f0;
            puStack_68 = puVar4;
            func_0x000107c60bc4(&puStack_90);
            puVar9 = puStack_68;
            func_0x000100b64c10(param_1,param_2);
            func_0x000107c615f0(lVar2);
            func_0x000107c61574(puVar9);
            func_0x000107c420a8(lVar10);
            func_0x000107c615e8(lVar2);
            func_0x000107c60bd0(ppuVar11);
            goto LAB_102d0adac;
          }
          goto LAB_102d0ac90;
        }
      }
    }
  }
  if (*(char *)(unaff_x20 + _DAT_112f0d840) == '\x01') {
    lVar10 = lVar2;
    func_0x000107c4d054();
    func_0x000107c61180();
    if (lVar10 != 0) {
      func_0x000107c4d04c();
      func_0x000107c615e8(lVar10);
    }
  }
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
LAB_102d0ac90:
  func_0x000107c615e8(lVar2);
  return;
}



/* Entry: 102d0af50; end: 102d0afdb; -[SCAdOperaUIContainer detachUI:] */

void FUN_102d0af50(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  code *pcVar2;
  
  func_0x000107c60bc4();
  if (param_3 == 0) {
    pcVar2 = (code *)0x0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &UNK_1105c2228;
    func_0x000107c613fc(&UNK_1105c2228,0x18,7);
    *(long *)(puVar1 + 0x10) = param_3;
    pcVar2 = FUN_102d0b368;
  }
  func_0x000107c61174(param_1);
  FUN_102d0aadc(pcVar2,puVar1);
  func_0x00010058d43c(pcVar2,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102d0afdc; end: 102d0b163;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0afdc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined1 param_9)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f0d828,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f0d830,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f0d838) = 0;
  lVar2 = _DAT_112f0d840;
  *(undefined1 *)(unaff_x20 + _DAT_112f0d840) = 1;
  func_0x000107c61614(unaff_x20 + _DAT_112f0d818,0);
  *(undefined1 *)(unaff_x20 + _DAT_112f0d820) = 1;
  *(undefined1 *)(unaff_x20 + lVar2) = param_9;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0d848);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  func_0x0001000285a8(0x112dd07d8,&UNK_10db40610);
  func_0x000107c6157c(param_2);
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d850) = param_3;
  func_0x0001000285a8(0x112dced30,&UNK_10d990b60);
  func_0x0001000bda74();
  *(undefined8 *)(unaff_x20 + _DAT_112f0d858) = param_4;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0d860);
  *puVar1 = param_5;
  puVar1[1] = param_6;
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f0d868);
  *puVar1 = param_7;
  puVar1[1] = param_8;
  func_0x000107c61154(&stack0xffffffffffffff90,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102d0b164; end: 102d0b267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0b164(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_48,0,0);
  lVar3 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar3 != 0) {
    if (*(char *)(lVar3 + _DAT_112f0d840) == '\x01') {
      func_0x000107c4d054();
      func_0x000107c61180();
      if (lVar4 != 0) {
        func_0x000107c4d058(lVar4);
        func_0x000107c615e8(lVar4);
      }
    }
    func_0x000107c61170();
  }
  func_0x000107c61428(lVar5 + 0x10,auStack_60,0,0);
  lVar5 = lVar5 + 0x10;
  func_0x000107c61618();
  if (lVar5 != 0) {
    pcVar1 = *(code **)(lVar5 + _DAT_112f0d860);
    uVar2 = ((undefined8 *)(lVar5 + _DAT_112f0d860))[1];
    func_0x000100b64c10(pcVar1,uVar2);
    func_0x000107c61170(lVar5);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
      func_0x00010058d43c(pcVar1,uVar2);
    }
  }
  return;
}



/* Entry: 102d0b268; end: 102d0b283;  */

void FUN_102d0b268(long param_1,long param_2)

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



/* Entry: 102d0b284; end: 102d0b347;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102d0b284(void)

{
  code *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  pcVar2 = *(code **)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar4 + 0x10,auStack_58,0,0);
  lVar4 = lVar4 + 0x10;
  func_0x000107c61618();
  if (lVar4 != 0) {
    pcVar1 = *(code **)(lVar4 + _DAT_112f0d868);
    uVar3 = ((undefined8 *)(lVar4 + _DAT_112f0d868))[1];
    func_0x000100b64c10(pcVar1,uVar3);
    func_0x000107c61170(lVar4);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)();
      func_0x00010058d43c(pcVar1,uVar3);
    }
  }
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  func_0x000107c4d054();
  func_0x000107c61180();
  if (lVar5 != 0) {
    func_0x000107c4d04c();
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 102d0b348; end: 102d0b367;  */

void FUN_102d0b348(void)

{
  func_0x000107c61168(&PTR_PTR_1128a0ab8);
  return;
}



/* Entry: 102d0b368; end: 102d0b373;  */

void FUN_102d0b368(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000102d0b370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
  return;
}



/* Entry: 102d0b374; end: 102d0b393;  */

void FUN_102d0b374(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf41c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleasedReturnValue_11034d2f0)();
  return;
}



/* Entry: 102d0b394; end: 102d0b3a7;  */

void FUN_102d0b394(long param_1,long param_2)

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



/* Entry: 102d0b3a8; end: 102d0b3db; -[SCLongformShowOperaDataModel isEligibleForDynamicInsertion] */

uint FUN_102d0b3a8(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d0b3dc();
  func_0x000107c61170(param_1);
  return (uint)uVar1 & 1;
}



/* Entry: 102d0b3dc; end: 102d0b51f;  */

bool FUN_102d0b3dc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong unaff_x20;
  ulong uVar6;
  ulong uVar7;
  bool bVar8;
  ulong uVar9;
  
  func_0x000107c5b538();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    bVar8 = false;
  }
  else {
    uVar2 = 0;
    FUN_102d0c9b4(0,0x112f0d898,&PTR_PTR_1126c9a80);
    uVar3 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar2);
    func_0x000107c61170(unaff_x20);
    uVar9 = uVar3 & 0xffffffffffffff8;
    if (uVar3 >> 0x3e == 0) {
      uVar6 = *(ulong *)(uVar9 + 0x10);
    }
    else {
      uVar6 = uVar9;
      if (0x7fffffffffffffff < uVar3) {
        uVar6 = uVar3;
      }
      func_0x000107c60480();
    }
    uVar7 = 0;
    do {
      bVar8 = uVar6 != uVar7;
      if (uVar6 == uVar7) break;
      if ((uVar3 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar9 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0b50c);
          (*pcVar1)();
        }
        uVar4 = *(ulong *)(uVar3 + uVar7 * 8 + 0x20);
        func_0x000107c61174();
      }
      else {
        uVar4 = uVar7;
        FUN_102d0c9f4(uVar7,uVar3,&PTR_PTR_1126c9a80,0x112f0d898);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0b4d8);
        (*pcVar1)();
      }
      uVar5 = uVar4;
      func_0x000107c449f4();
      func_0x000107c61170(uVar4);
      uVar7 = uVar7 + 1;
    } while ((int)uVar5 == 0);
    func_0x000107c6142c(uVar3);
  }
  return bVar8;
}



/* Entry: 102d0b520; end: 102d0b55b; -[SCLongformShowOperaDataModel durationInSeconds] */

undefined8 FUN_102d0b520(undefined8 param_1,undefined8 param_2)

{
  func_0x000107c61174();
  FUN_102d0b55c();
  func_0x000107c61170(param_2);
  return param_1;
}



/* Entry: 102d0b55c; end: 102d0b797;  */

double FUN_102d0b55c(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  double dStack_78;
  
  dStack_78 = 0.0;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (unaff_x20 == 0) {
    dStack_78 = 0.0;
  }
  else {
    uVar3 = 0;
    FUN_102d0c9b4(0,0x112f0d898,&PTR_PTR_1126c9a80);
    uVar4 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar3);
    func_0x000107c61170(unaff_x20);
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar11;
      if (0x7fffffffffffffff < uVar4) {
        uVar9 = uVar4;
      }
      func_0x000107c60480();
    }
    uVar10 = 0;
    while (uVar9 != uVar10) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0b780);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar10;
        FUN_102d0c9f4(uVar10,uVar4,&PTR_PTR_1126c9a80,0x112f0d898);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0b77c);
        (*pcVar2)();
      }
      puVar6 = &UNK_1105c2398;
      func_0x000107c613fc(&UNK_1105c2398,0x18,7);
      *(double **)(puVar6 + 0x10) = &dStack_78;
      puVar7 = &UNK_1105c23c0;
      func_0x000107c613fc(&UNK_1105c23c0,0x20,7);
      *(code **)(puVar7 + 0x10) = FUN_102d0c958;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      pcStack_88 = FUN_102d0c960;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102d0b824;
      puStack_90 = &UNK_1105c23d8;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar1 = puStack_80;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c4c698(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar6);
      puVar6 = puVar7;
      func_0x000107c61544(puVar7,"",0x4c,0x16,0x28,1);
      func_0x000107c61574(puVar7);
      uVar10 = uVar10 + 1;
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0b784);
        (*pcVar2)();
      }
    }
    func_0x000107c6142c(uVar4);
  }
  return dStack_78 / 1000.0;
}



/* Entry: 102d0b798; end: 102d0b803;  */

/* WARNING: Possible PIC construction at 0x000102d0b7ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0b7f0) */

void FUN_102d0b798(double param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
    func_0x000107c61174(in_x4);
    func_0x000107c42380();
    if (param_1 != 0.0) {
      func_0x000107c42380(in_x4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x4);
    return;
  }
  return;
}



/* Entry: 102d0b804; end: 102d0b823;  */

void FUN_102d0b804(void)

{
  code *in_x5;
  
  (*in_x5)();
  return;
}



/* Entry: 102d0b824; end: 102d0b8d3;  */

/* WARNING: Possible PIC construction at 0x000102d0b8b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0b8b8) */

void FUN_102d0b824(long param_1,long param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_2 == 0) {
    lVar4 = 0;
    lVar2 = 0;
  }
  else {
    lVar4 = param_2;
    func_0x000107c5faec(param_2);
    lVar2 = param_2;
    param_2 = lVar4;
  }
  if (param_3 == 0) {
    param_3 = 0;
    param_2 = 0;
  }
  else {
    func_0x000107c5faec(param_3);
  }
  uVar3 = param_4;
  func_0x000107c61174(param_4);
  (*pcVar1)(lVar2,lVar4,param_3,param_2,param_4);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 102d0b8d4; end: 102d0b8ef; -[SCLongformShowOperaDataModel adIntervalsWithOptionalAds] */

void FUN_102d0b8d4(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d0b8f0();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_102d0c9b4(0,0x112f0d8a0,&PTR_PTR_1126ca548);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d0b8f0; end: 102d0bb1f;  */

undefined * FUN_102d0b8f0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar3 = 0;
    FUN_102d0c9b4(0,0x112f0d898,&PTR_PTR_1126c9a80);
    uVar4 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar3);
    func_0x000107c61170(unaff_x20);
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar11;
      if (0x7fffffffffffffff < uVar4) {
        uVar9 = uVar4;
      }
      func_0x000107c60480();
    }
    uVar10 = 0;
    while (uVar9 != uVar10) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0bb08);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar10;
        FUN_102d0c9f4(uVar10,uVar4,&PTR_PTR_1126c9a80,0x112f0d898);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0bb04);
        (*pcVar2)();
      }
      puVar6 = &UNK_1105c2410;
      func_0x000107c613fc(&UNK_1105c2410,0x18,7);
      *(undefined ***)(puVar6 + 0x10) = &puStack_78;
      puVar7 = &UNK_1105c2438;
      func_0x000107c613fc(&UNK_1105c2438,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x102d0c99c;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      pcStack_88 = FUN_102d0cbb0;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102d0b824;
      puStack_90 = &UNK_1105c2450;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar1 = puStack_80;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c4c698(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar6);
      puVar6 = puVar7;
      func_0x000107c61544(puVar7,"",0x4c,0x24,0x28,1);
      func_0x000107c61574(puVar7);
      uVar10 = uVar10 + 1;
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0bb0c);
        (*pcVar2)();
      }
    }
    func_0x000107c6142c(uVar4);
    puVar6 = puStack_78;
  }
  return puVar6;
}



/* Entry: 102d0bb20; end: 102d0bc17;  */

/* WARNING: Possible PIC construction at 0x000102d0bb88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000102d0bbc4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0bb8c) */
/* WARNING: Removing unreachable block (ram,0x000102d0bbd0) */
/* WARNING: Removing unreachable block (ram,0x000102d0bb98) */
/* WARNING: Removing unreachable block (ram,0x000102d0bbc8) */
/* WARNING: Removing unreachable block (ram,0x000102d0bbd8) */

void FUN_102d0bb20(void)

{
  long lVar1;
  long in_x4;
  
  if (in_x4 != 0) {
    func_0x000107c61174(in_x4);
    lVar1 = in_x4;
    func_0x000107c3d310();
    func_0x000107c61180();
    func_0x000107c4dfec(in_x4);
    func_0x000107c61180();
    func_0x000107aebf78(lVar1,in_x4);
    func_0x000107c61180();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar1);
    return;
  }
  return;
}



/* Entry: 102d0bc18; end: 102d0bd33;  */

void FUN_102d0bc18(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  
  if (param_1 >> 0x3e == 0) {
    uVar4 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar4 = param_1;
    }
    func_0x000107c60480();
  }
  uVar3 = *unaff_x20;
  if (uVar3 >> 0x3e == 0) {
    uVar2 = *(ulong *)((uVar3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar2 = uVar3 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar3) {
      uVar2 = uVar3;
    }
    func_0x000107c60480();
  }
  if (!SCARRY8(uVar2,uVar4)) {
    FUN_102d0c3fc(uVar2 + uVar4,1,param_2,param_3,param_4,param_5);
    uVar3 = *unaff_x20;
    uVar2 = uVar3 & 0xffffffffffffff8;
    func_0x000102d0c7e8(uVar2 + *(long *)(uVar2 + 0x10) * 8 + 0x20,
                        (*(ulong *)(uVar2 + 0x18) >> 1) - *(long *)(uVar2 + 0x10),param_1,param_2,
                        param_3);
    func_0x000107c6142c();
    if ((long)param_1 < (long)uVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0bd30);
      (*pcVar1)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar2 + 0x10),param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0bd34);
        (*pcVar1)();
      }
      *(ulong *)(uVar2 + 0x10) = *(long *)(uVar2 + 0x10) + param_1;
    }
    *unaff_x20 = uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102d0bd2c);
  (*pcVar1)();
}



/* Entry: 102d0bd34; end: 102d0bd4f; -[SCLongformShowOperaDataModel adIntervalsWithoutOptionalAds] */

void FUN_102d0bd34(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d0bd50();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_102d0c9b4(0,0x112f0d8a0,&PTR_PTR_1126ca548);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d0bd50; end: 102d0bf7f;  */

undefined * FUN_102d0bd50(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar3 = 0;
    FUN_102d0c9b4(0,0x112f0d898,&PTR_PTR_1126c9a80);
    uVar4 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar3);
    func_0x000107c61170(unaff_x20);
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar11;
      if (0x7fffffffffffffff < uVar4) {
        uVar9 = uVar4;
      }
      func_0x000107c60480();
    }
    uVar10 = 0;
    while (uVar9 != uVar10) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0bf68);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar10;
        FUN_102d0c9f4(uVar10,uVar4,&PTR_PTR_1126c9a80,0x112f0d898);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0bf64);
        (*pcVar2)();
      }
      puVar6 = &UNK_1105c2488;
      func_0x000107c613fc(&UNK_1105c2488,0x18,7);
      *(undefined ***)(puVar6 + 0x10) = &puStack_78;
      puVar7 = &UNK_1105c24b0;
      func_0x000107c613fc(&UNK_1105c24b0,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x102d0c9a4;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      uStack_88 = 0x102d0cbb4;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102d0b824;
      puStack_90 = &UNK_1105c24c8;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar1 = puStack_80;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c4c698(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar6);
      puVar6 = puVar7;
      func_0x000107c61544(puVar7,"",0x4c,0x34,0x28,1);
      func_0x000107c61574(puVar7);
      uVar10 = uVar10 + 1;
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0bf6c);
        (*pcVar2)();
      }
    }
    func_0x000107c6142c(uVar4);
    puVar6 = puStack_78;
  }
  return puVar6;
}



/* Entry: 102d0bf80; end: 102d0c023;  */

void FUN_102d0bf80(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *in_x4;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (in_x4 != (undefined *)0x0) {
    func_0x000107c3d310();
    func_0x000107c61180();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (in_x4 != (undefined *)0x0) {
      uVar1 = 0;
      FUN_102d0c9b4(0,0x112f0d8a0,&PTR_PTR_1126ca548);
      puVar2 = in_x4;
      func_0x000107c5fc54(in_x4,uVar1);
      func_0x000107c61170(in_x4);
    }
  }
  FUN_102d0bc18(puVar2,0x112f0d8a0,&PTR_PTR_1126ca548,0x112f0d8b0,&UNK_10db40640);
  return;
}



/* Entry: 102d0c024; end: 102d0c03f; -[SCLongformShowOperaDataModel snapIntervals] */

void FUN_102d0c024(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  FUN_102d0c0b0();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_102d0c9b4(0,0x112e0fd98,&PTR_PTR_1126cc728);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d0c040; end: 102d0c0af;  */

void FUN_102d0c040(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61174();
  uVar1 = param_1;
  (*param_3)();
  func_0x000107c61170(param_1);
  uVar2 = 0;
  FUN_102d0c9b4(0,param_4,param_5);
  uVar3 = uVar1;
  func_0x000107c5fc48(uVar1,uVar2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 102d0c0b0; end: 102d0c2df;  */

undefined * FUN_102d0c0b0(void)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  ulong unaff_x20;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  code *pcStack_98;
  undefined *puStack_90;
  undefined8 uStack_88;
  undefined *puStack_80;
  undefined *puStack_78;
  
  puVar6 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puStack_78 = PTR___swiftEmptyArrayStorage_11034f1c8;
  func_0x000107c5b538();
  func_0x000107c61180();
  if (unaff_x20 != 0) {
    uVar3 = 0;
    FUN_102d0c9b4(0,0x112f0d898,&PTR_PTR_1126c9a80);
    uVar4 = unaff_x20;
    func_0x000107c5fc54(unaff_x20,uVar3);
    func_0x000107c61170(unaff_x20);
    uVar11 = uVar4 & 0xffffffffffffff8;
    if (uVar4 >> 0x3e == 0) {
      uVar9 = *(ulong *)(uVar11 + 0x10);
    }
    else {
      uVar9 = uVar11;
      if (0x7fffffffffffffff < uVar4) {
        uVar9 = uVar4;
      }
      func_0x000107c60480();
    }
    uVar10 = 0;
    while (uVar9 != uVar10) {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0c2c8);
          (*pcVar2)();
        }
        uVar5 = *(ulong *)(uVar4 + uVar10 * 8 + 0x20);
        func_0x000107c61174(uVar5);
      }
      else {
        uVar5 = uVar10;
        FUN_102d0c9f4(uVar10,uVar4,&PTR_PTR_1126c9a80,0x112f0d898);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0c2c4);
        (*pcVar2)();
      }
      puVar6 = &UNK_1105c2500;
      func_0x000107c613fc(&UNK_1105c2500,0x18,7);
      *(undefined ***)(puVar6 + 0x10) = &puStack_78;
      puVar7 = &UNK_1105c2528;
      func_0x000107c613fc(&UNK_1105c2528,0x20,7);
      *(undefined8 *)(puVar7 + 0x10) = 0x102d0c9ac;
      *(undefined **)(puVar7 + 0x18) = puVar6;
      uStack_88 = 0x102d0cbb8;
      puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_a0 = 0x42000000;
      pcStack_98 = FUN_102d0b824;
      puStack_90 = &UNK_1105c2540;
      ppuVar8 = &puStack_a8;
      puStack_80 = puVar7;
      func_0x000107c60bc4(ppuVar8);
      puVar1 = puStack_80;
      func_0x000107c6157c(puVar7);
      func_0x000107c61574(puVar1);
      func_0x000107c4c698(uVar5);
      func_0x000107c61170(uVar5);
      func_0x000107c60bd0(ppuVar8);
      func_0x000107c61574(puVar6);
      puVar6 = puVar7;
      func_0x000107c61544(puVar7,"",0x4c,0x3f,0x28,1);
      func_0x000107c61574(puVar7);
      uVar10 = uVar10 + 1;
      if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0c2cc);
        (*pcVar2)();
      }
    }
    func_0x000107c6142c(uVar4);
    puVar6 = puStack_78;
  }
  return puVar6;
}



/* Entry: 102d0c2e0; end: 102d0c3fb;  */

void FUN_102d0c2e0(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *in_x4;
  
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (in_x4 != (undefined *)0x0) {
    func_0x000107c3f7f4();
    func_0x000107c61180();
    puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (in_x4 != (undefined *)0x0) {
      uVar1 = 0;
      FUN_102d0c9b4(0,0x112e0fd98,&PTR_PTR_1126cc728);
      puVar2 = in_x4;
      func_0x000107c5fc54(in_x4,uVar1);
      func_0x000107c61170(in_x4);
    }
  }
  FUN_102d0bc18(puVar2,0x112e0fd98,&PTR_PTR_1126cc728,0x112f0d8a8,&UNK_10db40638);
  return;
}



/* Entry: 102d0c3fc; end: 102d0c63b;  */

void FUN_102d0c3fc(long param_1)

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
  func_0x000102d0c4dc();
  *unaff_x20 = uVar1;
  return;
}



/* Entry: 102d0c63c; end: 102d0c6cb;  */

undefined *
FUN_102d0c63c(long param_1,long param_2,undefined *param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (param_2 != 0) {
    func_0x000102d0c384(param_3,param_4,param_5,param_6);
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



/* Entry: 102d0c6cc; end: 102d0c957;  */

long FUN_102d0c6cc(long param_1,long param_2,long param_3,ulong param_4,undefined8 param_5,
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x102d0c7e4);
      (*pcVar3)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x102d0c7e8);
        (*pcVar3)();
      }
      uVar4 = 0;
      FUN_102d0c9b4(0,param_5,param_6);
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
      FUN_102d0c9b4(0,param_5,param_6);
      func_0x000107c6140c(param_3,(param_4 & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                          param_2 - param_1,uVar4);
      func_0x000107c6142c(param_4);
      return param_3 + (param_2 - param_1) * 8;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x102d0c7e0);
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



/* Entry: 102d0c958; end: 102d0c95f;  */

/* WARNING: Possible PIC construction at 0x000102d0b7ec: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102d0b7f0) */

void FUN_102d0c958(double param_1)

{
  long in_x4;
  
  if (in_x4 != 0) {
    func_0x000107c61174(in_x4);
    func_0x000107c42380();
    if (param_1 != 0.0) {
      func_0x000107c42380(in_x4);
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(in_x4);
    return;
  }
  return;
}



/* Entry: 102d0c960; end: 102d0c97f;  */

void FUN_102d0c960(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 102d0c980; end: 102d0c9b3;  */

void FUN_102d0c980(long param_1,long param_2)

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



/* Entry: 102d0c9b4; end: 102d0c9f3;  */

void FUN_102d0c9b4(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102d0c9f4; end: 102d0cbaf;  */

ulong FUN_102d0c9f4(ulong param_1,ulong param_2,undefined8 *param_3,undefined8 param_4)

{
  char *pcVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0cad8);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0cadc);
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
  FUN_102d0c9b4(0,param_4,param_3);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x102d0cbb0);
  (*pcVar2)();
}



/* Entry: 102d0cbb0; end: 102d0cbd3;  */

void FUN_102d0cbb0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}


