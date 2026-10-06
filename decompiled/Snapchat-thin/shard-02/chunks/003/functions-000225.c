/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101bd1ee4; end: 101bd1f1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_101bd1ee4(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  long lVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined1 auVar7 [16];
  undefined1 auStack_90 [16];
  long lStack_80;
  undefined1 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined8 uStack_58;
  
  *(undefined1 *)(unaff_x20 + 0xa8) = 1;
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  func_0x000107c615e8(uVar1);
  lVar5 = *(long *)(unaff_x20 + 0xa0);
  func_0x000107c6157c(lVar5);
  puVar6 = PTR___sytN_11034f1b0;
  func_0x000100075034(FUN_101bd1da0,0,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574();
  func_0x00010095a408();
  uVar1 = *(undefined8 *)(lVar5 + _DAT_112e07da0);
  func_0x000107c6157c(uVar1);
  func_0x000100075034(auStack_90,&UNK_10095acac,0,PTR___sSbN_11034dd40);
  func_0x000107c61574(uVar1);
  func_0x000107c61170(lVar5);
  if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
    func_0x000101bd09d8();
    FUN_101bd250c();
    func_0x000107c61170(lVar5);
    *(undefined1 *)(unaff_x20 + 0xa9) = 0;
  }
  lVar5 = *(long *)(unaff_x20 + 0x90);
  iVar4 = (int)*(undefined8 *)(lVar5 + _DAT_112e07d70);
  func_0x000107c61174();
  uVar1 = 0xd000000000000027;
  func_0x000107c5fadc(0xd000000000000027,0x800000010f002950);
  func_0x000107c3ebc0();
  func_0x000107c61170(lVar5);
  func_0x000107c61170(uVar1);
  lVar5 = *(long *)(unaff_x20 + 0x90);
  if (iVar4 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + _DAT_112e07d98);
    func_0x000107c61174();
    func_0x000107c6157c(uVar1);
    func_0x000100075034(auStack_90,&UNK_10095acec,0,PTR___sSiN_11034deb0);
    func_0x000107c61574(uVar1);
    puVar2 = &UNK_110452ff0;
    func_0x000107c613fc(&UNK_110452ff0,0x18,7);
    *(long *)(puVar2 + 0x10) = lVar5;
    uStack_78 = 3;
    puStack_70 = &UNK_10d9dc790;
    pcStack_60 = FUN_101bce054;
    uStack_58 = 0;
    lStack_80 = lVar5;
    puStack_68 = puVar2;
    func_0x000107c61174(lVar5);
    func_0x000100087bd4(&SUB_10095ae54,auStack_90,puVar6 + 8);
    func_0x000107c61170(lVar5);
    func_0x000107c61574(puVar2);
    pcVar3 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &UNK_110453018;
    func_0x000107c613fc(&UNK_110453018,0x18,7);
    *(long *)(puVar6 + 0x10) = lVar5;
    func_0x000107c61174(lVar5);
    pcVar3 = FUN_101bd1e38;
  }
  auVar7._8_8_ = puVar6;
  auVar7._0_8_ = pcVar3;
  return auVar7;
}



/* Entry: 101bd1f1c; end: 101bd1f67;  */

undefined8 * FUN_101bd1f1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101bd1f68; end: 101bd1fa3;  */

undefined8 * FUN_101bd1f68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  return param_1;
}



/* Entry: 101bd1fa4; end: 101bd2053;  */

int FUN_101bd1fa4(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Entry: 101bd2054; end: 101bd2073;  */

void FUN_101bd2054(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101bd2074; end: 101bd20fb;  */

void FUN_101bd2074(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bd20c0;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcdb88,0,0);
  return;
}



/* Entry: 101bd20fc; end: 101bd211f;  */

void FUN_101bd20fc(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (param_1,*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 101bd2120; end: 101bd215b;  */

void FUN_101bd2120(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = 1;
  return;
}



/* Entry: 101bd215c; end: 101bd21bf;  */

void FUN_101bd215c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101bd2500;
  plVar3[0xe] = lVar1;
  plVar3[0xf] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd1840,0,0);
  return;
}



/* Entry: 101bd21c0; end: 101bd21c7;  */

void FUN_101bd21c0(long param_1)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined8 unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  
  if (param_1 != 0) {
    return;
  }
  ppuVar2 = &puStack_60;
  pcVar1 = "begin()";
  func_0x0001000c10c0("begin()");
  func_0x000107c61180();
  pcStack_40 = FUN_101bd2214;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  puStack_50 = &UNK_1000f6b44;
  puStack_48 = &UNK_110453318;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c6157c();
  func_0x000107c61574(unaff_x20);
  func_0x000107c4e524(pcVar1);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(pcVar1);
  return;
}



/* Entry: 101bd21c8; end: 101bd2213;  */

void FUN_101bd21c8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bd24f4;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcdb88,0,0);
  return;
}



/* Entry: 101bd2214; end: 101bd221b;  */

void FUN_101bd2214(void)

{
  long lVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (((*(byte *)(lVar1 + 0xa8) & 1) == 0) && ((*(byte *)(lVar1 + 0xa9) & 1) == 0)) {
      pcVar2 = "startIndexingWhenSourcesReady()";
      func_0x0001000c10c0();
      func_0x000107c61180();
      puVar3 = &UNK_110453288;
      func_0x000107c613fc(&UNK_110453288,0x18,7);
      func_0x000107c61644(puVar3 + 0x10,lVar1);
      puVar4 = &UNK_110453350;
      func_0x000107c613fc(&UNK_110453350,0x20,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(char **)(puVar4 + 0x18) = pcVar2;
      func_0x000107c615f0(pcVar2);
      uVar5 = 0xc;
      func_0x0001001ca524(0xc,0,0x28,0,0,0,&UNK_10d9dc938,puVar4,PTR___sytN_11034f1b0 + 8);
      func_0x000107c615e8(pcVar2);
      func_0x000107c61574(puVar4);
      func_0x000107c61574(uVar5);
    }
    func_0x000107c61574();
  }
  return;
}



/* Entry: 101bd221c; end: 101bd227f;  */

void FUN_101bd221c(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_101bd2280;
  plVar3[0xe] = lVar1;
  plVar3[0xf] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd1840,0,0);
  return;
}



/* Entry: 101bd2280; end: 101bd22ff;  */

void FUN_101bd2280(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd22b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd2300; end: 101bd230f;  */

void FUN_101bd2300(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    lVar3 = *(long *)(lVar2 + 0x20);
    func_0x000107c44574();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd1b78);
      (*pcVar1)();
    }
    lVar4 = lVar3;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
      func_0x000107c61574(lVar2);
    }
    else {
      lVar3 = lVar4;
      func_0x000107c44578();
      func_0x000107c61180();
      func_0x000107c615e8(lVar4);
      if (lVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd1b7c);
        (*pcVar1)();
      }
      puVar5 = &UNK_110453288;
      func_0x000107c613fc(&UNK_110453288,0x18,7);
      func_0x000107c61644(puVar5 + 0x10,lVar2);
      uStack_58 = 0x101bd2308;
      puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
      uStack_70 = 0x42000000;
      puStack_68 = &UNK_1011b0640;
      puStack_60 = &UNK_1104533b8;
      ppuVar6 = &puStack_78;
      puStack_50 = puVar5;
      func_0x000107c60bc4(ppuVar6);
      func_0x000107c61574(puStack_50);
      func_0x000107c5dc64(lVar3);
      func_0x000107c61574(lVar2);
      func_0x000107c60bd0(ppuVar6);
      func_0x000107c61170(lVar3);
    }
  }
  return;
}



/* Entry: 101bd2310; end: 101bd2387;  */

void FUN_101bd2310(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  lVar4 = *(long *)(unaff_x20 + 0x28);
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bd2504;
  plVar5[0x14] = lVar2;
  plVar5[0x15] = lVar4;
  plVar5[0x12] = lVar1;
  plVar5[0x13] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd0b4,0,0);
  return;
}



/* Entry: 101bd2388; end: 101bd238f;  */

void FUN_101bd2388(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  ulong *puVar3;
  ulong uVar4;
  char *pcVar5;
  undefined **ppuVar6;
  undefined8 unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  ulong uStack_48;
  
  if (*(long *)(param_1 + 0x10) != 0) {
    func_0x000107c61434();
    uVar4 = 0;
    lVar1 = -0x2fffffffffffffec;
    func_0x000100029284(0xd000000000000014);
    if ((uVar4 & 1) == 0) {
      func_0x000107c6142c(param_1);
    }
    else {
      func_0x0001000bb420(*(long *)(param_1 + 0x38) + lVar1 * 0x20,&puStack_78);
      func_0x000107c6142c(param_1);
      uVar2 = 0;
      FUN_101bd2390(0,0x112d38c88,&PTR__OBJC_CLASS___NSNumber_1126ae570);
      puVar3 = &uStack_48;
      func_0x000107c6147c(puVar3,&puStack_78,PTR___sypN_11034f1a8 + 8,uVar2,6);
      if (((ulong)puVar3 & 1) != 0) {
        uVar4 = uStack_48;
        func_0x000107c3ebcc();
        if ((uVar4 & 1) == 0) {
          pcVar5 = "observeShareIntentsSetting()";
          func_0x0001000c10c0("observeShareIntentsSetting()");
          func_0x000107c61180();
          pcStack_58 = FUN_101bd23d0;
          puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
          uStack_70 = 0x42000000;
          puStack_68 = &UNK_1000f6b44;
          puStack_60 = &UNK_110453430;
          ppuVar6 = &puStack_78;
          func_0x000107c60bc4(ppuVar6);
          func_0x000107c6157c();
          func_0x000107c61574(unaff_x20);
          func_0x000107c4e524(pcVar5);
          func_0x000107c60bd0(ppuVar6);
          func_0x000107c61170(uStack_48);
          func_0x000107c615e8(pcVar5);
        }
        else {
          func_0x000107c61170(uStack_48);
        }
      }
    }
  }
  return;
}



/* Entry: 101bd2390; end: 101bd23cf;  */

void FUN_101bd2390(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 101bd23d0; end: 101bd23d7;  */

void FUN_101bd23d0(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_101bd167c();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101bd23d8; end: 101bd246f;  */

void FUN_101bd23d8(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x60;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101bd24f8;
  plVar1[7] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcdb88,0,0);
  return;
}



/* Entry: 101bd2470; end: 101bd24b3;  */

void FUN_101bd2470(long param_1,long param_2)

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



/* Entry: 101bd24b4; end: 101bd24ef;  */

void FUN_101bd24b4(void)

{
  func_0x00010095ae54();
  return;
}



/* Entry: 101bd24f0; end: 101bd250b;  */

void FUN_101bd24f0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd20f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd250c; end: 101bd258f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd250c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + _DAT_112e07fd0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e07fe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c4ff64();
    func_0x000107c615e8(lVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bf86d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_msgSend_11034d288)
            (*(undefined8 *)(unaff_x20 + _DAT_112e08000),PTR_s_disposeAll_1125bf508);
  return;
}



/* Entry: 101bd2590; end: 101bd26cf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd2590(void)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined *puStack_60;
  undefined8 uStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  code *pcStack_40;
  undefined *puStack_38;
  
  ppuVar3 = &puStack_60;
  lVar1 = *(long *)(unaff_x20 + _DAT_112e07fd0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar1);
  }
  lVar1 = *(long *)(unaff_x20 + _DAT_112e07fe0);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c3d740();
    func_0x000107c615e8(lVar1);
  }
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112e07fe8);
  puVar2 = &UNK_1104534d8;
  func_0x000107c613fc(&UNK_1104534d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  pcStack_40 = FUN_101bd5174;
  puStack_60 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_58 = 0x42000000;
  pcStack_50 = FUN_101bd293c;
  puStack_48 = &UNK_110453720;
  puStack_38 = puVar2;
  func_0x000107c60bc4(&puStack_60);
  func_0x000107c61574(puStack_38);
  func_0x000107c5c320(uVar4);
  func_0x000107c61180();
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c3e924(uVar4);
  func_0x000107c61170(uVar4);
  return;
}



/* Entry: 101bd26d0; end: 101bd272b;  */

void FUN_101bd26d0(undefined8 param_1,long param_2)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 != 0) {
    FUN_101bd272c(param_1);
    func_0x000107c61170(param_2);
  }
  return;
}



/* Entry: 101bd272c; end: 101bd293b;  */

void FUN_101bd272c(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined *puVar8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined *puStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  ppuVar4 = &puStack_a0;
  ppuVar7 = &puStack_a0;
  puVar5 = &UNK_1104534d8;
  puVar2 = puVar5;
  func_0x000107c613fc(&UNK_1104534d8,0x18,7);
  func_0x000107c61614(puVar2 + 0x10);
  puVar3 = &UNK_110453758;
  func_0x000107c613fc(&UNK_110453758,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_101bd517c;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  puVar8 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_101bd51ac;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_110453770;
  puStack_78 = puVar3;
  func_0x000107c60bc4(&puStack_a0);
  puVar6 = puStack_78;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar6);
  func_0x000107c613fc(&UNK_1104534d8,0x18,7);
  func_0x000107c61614(puVar5 + 0x10);
  puVar6 = &UNK_1104537a8;
  func_0x000107c613fc(&UNK_1104537a8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_101bd51cc;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcStack_80 = (code *)0x101bd5574;
  puStack_a0 = puVar8;
  uStack_98 = 0x42000000;
  puStack_90 = &UNK_100eb5728;
  puStack_88 = &UNK_1104537c0;
  puStack_78 = puVar6;
  func_0x000107c60bc4(&puStack_a0);
  puVar8 = puStack_78;
  func_0x000107c6157c(puVar6);
  func_0x000107c61574(puVar8);
  func_0x000107c4c634(param_1);
  func_0x000107c60bd0(ppuVar7);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar2);
  puVar8 = puVar3;
  func_0x000107c61544(puVar3,"",0x65,0x54,0x21,1);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(puVar3);
  if (((ulong)puVar8 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd2938);
    (*pcVar1)();
  }
  puVar5 = puVar6;
  func_0x000107c61544(puVar6,"",0x65,0x56,0x13,1);
  func_0x000107c61574(puVar6);
  if (((ulong)puVar5 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd293c);
  (*pcVar1)();
}



/* Entry: 101bd293c; end: 101bd2987;  */

void FUN_101bd293c(long param_1,undefined8 param_2)

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



/* Entry: 101bd2988; end: 101bd2ae3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd2988(ulong param_1,ulong param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 auStack_90 [16];
  ulong uStack_80;
  ulong uStack_78;
  char cStack_69;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_4 + 0x10,auStack_68,0,0);
  param_4 = param_4 + 0x10;
  func_0x000107c61618();
  if (param_4 != 0) {
    uVar1 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = param_2 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar2 = *(undefined8 *)(param_4 + _DAT_112e08010);
      uStack_80 = param_1;
      uStack_78 = param_2;
      func_0x000107c61434(param_2);
      func_0x000107c6157c(uVar2);
      func_0x000100075034(&cStack_69,param_5,auStack_90,PTR___sSbN_11034dd40);
      func_0x000107c61574(uVar2);
      if (cStack_69 == '\x01') {
        func_0x000107c613fc(param_6,0x28,7);
        *(long *)(param_6 + 0x10) = param_4;
        *(ulong *)(param_6 + 0x18) = param_1;
        *(ulong *)(param_6 + 0x20) = param_2;
        func_0x000107c61174(param_4);
        uVar2 = 0xc;
        func_0x0001001ca524(0xc,0,0x28,0,0,0,param_7,param_6,PTR___sytN_11034f1b0 + 8);
        func_0x000107c61574(param_6);
        func_0x000107c61574(uVar2);
      }
      else {
        func_0x000107c6142c(param_2);
      }
    }
    func_0x000107c61170();
  }
  return;
}



/* Entry: 101bd2ae4; end: 101bd2b9f;  */

void FUN_101bd2ae4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xf0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xf8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = param_2;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x100) = uVar1;
  lVar2 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x108) = uVar1;
  lVar2 = 0;
  FUN_101bcbb4c();
  *(long *)(unaff_x22 + 0x110) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x118) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x120) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd2ba0,0,0);
  return;
}



/* Entry: 101bd2ba0; end: 101bd2c07;  */

void FUN_101bd2ba0(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xd0;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bd2c08;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_101bd318c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bd2c08; end: 101bd2c47;  */

void FUN_101bd2c08(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd2c48,0,0);
  return;
}



/* Entry: 101bd2c48; end: 101bd2d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd2c48(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  long unaff_x22;
  undefined8 uVar11;
  long lVar12;
  
  lVar10 = *(long *)(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x128) = lVar10;
  if (lVar10 != 0) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x100);
    lVar12 = *(long *)(unaff_x22 + 0xe8);
    puVar1 = (undefined1 *)(lVar12 + _DAT_112e07ff0);
    uVar2 = *(undefined8 *)(puVar1 + 8);
    lVar3 = *(long *)(puVar1 + 0x10);
    uVar11 = *(undefined8 *)(puVar1 + 0x18);
    uVar4 = *puVar1;
    func_0x000107c5eea0(uVar8);
    lVar6 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar6 + -8) + 0x38))(uVar8,0,1,lVar6);
    lVar9 = *(long *)(lVar12 + _DAT_112e08008);
    plVar7 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x130) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_101bd2d64;
    lVar6 = *(long *)(unaff_x22 + 0x100);
    lVar12 = *(long *)(unaff_x22 + 0x108);
    plVar7[0xd] = lVar9;
    plVar7[0xe] = lVar3;
    plVar7[0xb] = lVar10;
    plVar7[0xc] = lVar6;
    plVar7[10] = lVar12;
    lVar10 = 0x112d36580;
    func_0x0001000285a8(0x112d36580,&UNK_10d9016d0,lVar6,lVar9,uVar4,uVar2,lVar3,uVar11);
    uVar5 = *(long *)(*(long *)(lVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar7[0xf] = uVar5;
    lVar10 = 0;
    func_0x000107c5ede0();
    plVar7[0x10] = lVar10;
    lVar10 = *(long *)(lVar10 + -8);
    plVar7[0x11] = lVar10;
    uVar5 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
    func_0x000107c615b8();
    plVar7[0x12] = uVar5;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101bc7cf4,0,0);
    return;
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar8);
  func_0x000107c615c0(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101bd2d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd2d64; end: 101bd2dc7;  */

void FUN_101bd2d64(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x100);
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x130));
  FUN_101bd52bc(uVar1,0x112d373d8,&UNK_10d9014c0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd2dc8,0,0);
  return;
}



/* Entry: 101bd2dc8; end: 101bd2ebb;  */

void FUN_101bd2dc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar1 = uVar2;
  (**(code **)(*(long *)(unaff_x22 + 0x118) + 0x30))(uVar2,1,*(undefined8 *)(unaff_x22 + 0x110));
  if ((int)uVar1 == 1) {
    func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0x128));
    FUN_101bd52bc(uVar2,0x112e07bb0,&UNK_10d9dc3e0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x100);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c615c0(uVar2);
    func_0x000107c615c0(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000101bd2e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  func_0x000101bc88a8(uVar2,*(undefined8 *)(unaff_x22 + 0x120));
  *(long *)(unaff_x22 + 0x78) = unaff_x22 + 0xd8;
  *(long *)(unaff_x22 + 0x50) = unaff_x22;
  *(code **)(unaff_x22 + 0x58) = FUN_101bd2ebc;
  func_0x000107c61448(unaff_x22 + 0x50,0);
  FUN_101bd318c();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x50);
  return;
}



/* Entry: 101bd2ebc; end: 101bd2efb;  */

void FUN_101bd2ebc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd2efc,0,0);
  return;
}



/* Entry: 101bd2efc; end: 101bd318b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd2efc(void)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  
  uVar8 = *(ulong *)(unaff_x22 + 0xd8);
  if (uVar8 == 0) {
    uVar8 = *(ulong *)(unaff_x22 + 0x128);
    func_0x000101bd0618(*(undefined8 *)(unaff_x22 + 0x120));
  }
  else {
    uVar3 = uVar8;
    func_0x000100bf119c();
    if ((uVar3 & 1) != 0) {
      lVar1 = *(long *)(unaff_x22 + 0x118);
      uVar3 = *(ulong *)(unaff_x22 + 0x120);
      lVar11 = *(long *)(*(long *)(unaff_x22 + 0xe8) + _DAT_112e07fc0);
      lVar4 = 0x112e07be0;
      func_0x0001000285a8(0x112e07be0,&UNK_10d9dc360);
      uVar7 = (ulong)*(byte *)(lVar1 + 0x50);
      func_0x000107c613fc();
      *(undefined8 *)(lVar4 + 0x18) = 2;
      *(undefined8 *)(lVar4 + 0x10) = 1;
      FUN_101bd05d4(uVar3,lVar4 + (uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)));
      (**(code **)(lVar11 + _DAT_112e07d78))();
      if ((uVar3 & 1) == 0) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
        func_0x000107c61170(uVar8);
        func_0x000107c61574(lVar4);
        func_0x000107c61170(uVar2);
        func_0x000101bd0618(uVar9);
      }
      else {
        uVar9 = *(undefined8 *)(lVar11 + _DAT_112e07da0);
        func_0x000107c6157c(uVar9);
        func_0x0001000c74f0(unaff_x22 + 0x138);
        func_0x000107c61574(uVar9);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x120);
        uVar2 = *(undefined8 *)(unaff_x22 + 0x128);
        if ((*(byte *)(unaff_x22 + 0x138) & 1) == 0) {
          uVar10 = *(undefined8 *)(lVar11 + _DAT_112e07d98);
          func_0x000107c6157c(uVar10);
          func_0x0001000c74f0(unaff_x22 + 0xe0);
          func_0x000107c61574(uVar10);
          uVar10 = *(undefined8 *)(unaff_x22 + 0xe0);
          puVar5 = &UNK_1104538e8;
          func_0x000107c613fc(&UNK_1104538e8,0x29,7);
          *(undefined8 *)(puVar5 + 0x10) = uVar10;
          *(long *)(puVar5 + 0x18) = lVar11;
          *(long *)(puVar5 + 0x20) = lVar4;
          puVar5[0x28] = 0;
          puVar6 = &UNK_110453910;
          func_0x000107c613fc(&UNK_110453910,0x28,7);
          puVar6[0x10] = 0;
          *(code **)(puVar6 + 0x18) = FUN_101bcd3b4;
          *(undefined8 *)(puVar6 + 0x20) = 0;
          *(long *)(unaff_x22 + 0xa0) = lVar11;
          *(undefined1 *)(unaff_x22 + 0xa8) = 0;
          *(undefined **)(unaff_x22 + 0xb0) = &UNK_10d9dc9f0;
          *(undefined **)(unaff_x22 + 0xb8) = puVar5;
          *(code **)(unaff_x22 + 0xc0) = FUN_101bd55dc;
          *(undefined **)(unaff_x22 + 200) = puVar6;
          func_0x000107c61174(lVar11);
          func_0x000107c6157c(lVar4);
          func_0x000100087bd4(0x101bd55c8,unaff_x22 + 0x90,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61170(uVar2);
          func_0x000107c61170(uVar8);
          func_0x000107c61574(puVar6);
          func_0x000107c61574(puVar5);
          func_0x000107c61574(lVar4);
        }
        else {
          func_0x000107c61170(uVar8);
          func_0x000107c61574(lVar4);
          func_0x000107c61170(uVar2);
        }
        func_0x000101bd0618(uVar9);
      }
      goto LAB_101bd3020;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
    func_0x000101bd0618(*(undefined8 *)(unaff_x22 + 0x120));
    func_0x000107c61170(uVar9);
  }
  func_0x000107c61170(uVar8);
LAB_101bd3020:
  uVar9 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x108);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x120));
  func_0x000107c615c0(uVar2);
  func_0x000107c615c0(uVar9);
                    /* WARNING: Could not recover jumptable at 0x000101bd305c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd318c; end: 101bd32d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd318c(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar4 = &puStack_70;
  lVar1 = *(long *)(param_2 + _DAT_112e07fc8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    uVar2 = 0;
    func_0x0001010415e8(0);
    func_0x000100bcb214();
    puVar3 = &UNK_110453938;
    func_0x000107c613fc(&UNK_110453938,0x18,7);
    *(long *)(puVar3 + 0x10) = param_1;
    pcStack_50 = FUN_101bd54f0;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101043a98;
    puStack_58 = &UNK_110453950;
    puStack_48 = puVar3;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    func_0x000107c5b49c(lVar1);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_3);
    func_0x000107c61170(uVar2);
    return;
  }
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_1);
  return;
}



/* Entry: 101bd32d8; end: 101bd3393;  */

void FUN_101bd32d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  lVar2 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xb8) = uVar1;
  lVar2 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  uVar1 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xc0) = uVar1;
  lVar2 = 0;
  FUN_101bcbb4c();
  *(long *)(unaff_x22 + 200) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0xd8) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd3394,0,0);
  return;
}



/* Entry: 101bd3394; end: 101bd33fb;  */

void FUN_101bd3394(void)

{
  long unaff_x22;
  
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_101bd33fc;
  func_0x000107c61448(unaff_x22 + 0x10,0);
  FUN_101bd37c4();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
  return;
}



/* Entry: 101bd33fc; end: 101bd343b;  */

void FUN_101bd33fc(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd343c,0,0);
  return;
}



/* Entry: 101bd343c; end: 101bd37c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd343c(undefined8 param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  
  lVar13 = *(long *)(unaff_x22 + 0x90);
  if (lVar13 != 0) {
    lVar6 = *(long *)(*(long *)(unaff_x22 + 0xa0) + _DAT_112e07fd8);
    func_0x000107c5c734();
    func_0x000107c61180();
    if (lVar6 == 0) {
      func_0x000107c615e8(lVar13);
    }
    else {
      uVar15 = *(undefined8 *)(unaff_x22 + 200);
      lVar3 = *(long *)(unaff_x22 + 0xd0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xb8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
      lVar14 = *(long *)(unaff_x22 + 0xa0);
      lVar7 = lVar6;
      func_0x000107c42138();
      func_0x000107c61180();
      func_0x000107c615e8(lVar6);
      lVar6 = lVar7;
      func_0x000107c5faec(lVar7);
      func_0x000107c61170(lVar7);
      puVar1 = (undefined1 *)(lVar14 + _DAT_112e07ff8);
      uVar2 = *(undefined8 *)(puVar1 + 8);
      uVar4 = *(undefined8 *)(puVar1 + 0x10);
      uVar17 = *(undefined8 *)(puVar1 + 0x18);
      uVar5 = *puVar1;
      func_0x000107c5eea0(uVar16);
      lVar7 = 0;
      func_0x000107c5eea4();
      (**(code **)(*(long *)(lVar7 + -8) + 0x38))(uVar16,0,1,lVar7);
      FUN_101bca098(uVar8,lVar13,lVar6,param_2,uVar16,uVar5,uVar2,uVar4,uVar17);
      func_0x000107c6142c(param_2);
      FUN_101bd52bc(uVar16,0x112d373d8,&UNK_10d9014c0);
      (**(code **)(lVar3 + 0x30))(uVar8,1,uVar15);
      if ((int)uVar8 == 1) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0xc0);
        func_0x000107c615e8(lVar13);
        FUN_101bd52bc(uVar15,0x112e07bb0,&UNK_10d9dc3e0);
      }
      else {
        lVar3 = *(long *)(unaff_x22 + 0xd0);
        uVar9 = *(ulong *)(unaff_x22 + 0xd8);
        lVar6 = *(long *)(unaff_x22 + 0xa0);
        func_0x000101bc88a8(*(undefined8 *)(unaff_x22 + 0xc0),uVar9);
        lVar7 = *(long *)(lVar6 + _DAT_112e07fc0);
        lVar6 = 0x112e07be0;
        func_0x0001000285a8(0x112e07be0,&UNK_10d9dc360);
        uVar12 = (ulong)*(byte *)(lVar3 + 0x50);
        func_0x000107c613fc();
        *(undefined8 *)(lVar6 + 0x18) = 2;
        *(undefined8 *)(lVar6 + 0x10) = 1;
        FUN_101bd05d4(uVar9,lVar6 + (uVar12 + 0x20 & (uVar12 ^ 0xffffffffffffffff)));
        (**(code **)(lVar7 + _DAT_112e07d78))();
        if ((uVar9 & 1) == 0) {
          uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
          func_0x000107c615e8(lVar13);
          func_0x000107c61574(lVar6);
        }
        else {
          uVar15 = *(undefined8 *)(lVar7 + _DAT_112e07da0);
          func_0x000107c6157c(uVar15);
          func_0x0001000c74f0(unaff_x22 + 0xe0);
          func_0x000107c61574(uVar15);
          uVar15 = *(undefined8 *)(unaff_x22 + 0xd8);
          if ((*(byte *)(unaff_x22 + 0xe0) & 1) == 0) {
            uVar16 = *(undefined8 *)(lVar7 + _DAT_112e07d98);
            func_0x000107c6157c(uVar16);
            func_0x0001000c74f0(unaff_x22 + 0x98);
            func_0x000107c61574(uVar16);
            uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
            puVar10 = &UNK_110453820;
            func_0x000107c613fc(&UNK_110453820,0x29,7);
            *(undefined8 *)(puVar10 + 0x10) = uVar16;
            *(long *)(puVar10 + 0x18) = lVar7;
            *(long *)(puVar10 + 0x20) = lVar6;
            puVar10[0x28] = 1;
            puVar11 = &UNK_110453848;
            func_0x000107c613fc(&UNK_110453848,0x28,7);
            puVar11[0x10] = 1;
            *(code **)(puVar11 + 0x18) = FUN_101bcd3b4;
            *(undefined8 *)(puVar11 + 0x20) = 0;
            *(long *)(unaff_x22 + 0x60) = lVar7;
            *(undefined1 *)(unaff_x22 + 0x68) = 0;
            *(undefined **)(unaff_x22 + 0x70) = &UNK_10d9dc9c8;
            *(undefined **)(unaff_x22 + 0x78) = puVar10;
            *(code **)(unaff_x22 + 0x80) = FUN_101bd5364;
            *(undefined **)(unaff_x22 + 0x88) = puVar11;
            func_0x000107c61174(lVar7);
            func_0x000107c6157c(lVar6);
            func_0x000100087bd4(0x101bd55b4,unaff_x22 + 0x50,PTR___sytN_11034f1b0 + 8);
            func_0x000107c615e8(lVar13);
            func_0x000107c61574(puVar11);
            func_0x000107c61574(puVar10);
          }
          else {
            func_0x000107c615e8(lVar13);
          }
          func_0x000107c61574(lVar6);
        }
        func_0x000101bd0618(uVar15);
      }
    }
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
  func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c615c0(uVar16);
  func_0x000107c615c0(uVar15);
                    /* WARNING: Could not recover jumptable at 0x000101bd37c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101bd37c4; end: 101bd390f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd37c4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 uVar4;
  undefined *puStack_70;
  undefined8 uStack_68;
  undefined *puStack_60;
  undefined *puStack_58;
  code *pcStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  lVar1 = *(long *)(param_2 + _DAT_112e07fd8);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar1 != 0) {
    func_0x000107c5fadc(param_3,param_4);
    puVar2 = &UNK_110453870;
    func_0x000107c613fc(&UNK_110453870,0x18,7);
    *(long *)(puVar2 + 0x10) = param_1;
    pcStack_50 = FUN_101bd5370;
    puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_68 = 0x42000000;
    puStack_60 = &UNK_101306b38;
    puStack_58 = &UNK_110453888;
    puStack_48 = puVar2;
    func_0x000107c60bc4(&puStack_70);
    func_0x000107c61574(puStack_48);
    uVar4 = 0;
    func_0x0001010415e8(0);
    func_0x000100bcb214();
    func_0x000107c440a8(lVar1);
    func_0x000107c61170(uVar4);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(param_3);
    return;
  }
  **(undefined8 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(param_1);
  return;
}



/* Entry: 101bd3910; end: 101bd3b6b;  */

void FUN_101bd3910(undefined1 *param_1,double param_2,long *param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined1 uVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lStack_90;
  ulong uStack_88;
  undefined1 *puStack_80;
  
  lVar1 = 0x112d373d8;
  puStack_80 = param_1;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&lStack_90 - extraout_x8;
  lVar1 = 0;
  func_0x000107c5eea4();
  lVar7 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar7 + 0x40));
  lVar4 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar8 = lVar4 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar6 = lVar8 - extraout_x12_00;
  lVar10 = *param_3;
  if (*(long *)(lVar10 + 0x10) != 0) {
    func_0x000107c61434(lVar10);
    lStack_90 = param_4;
    uStack_88 = param_5;
    func_0x000100029284(param_4);
    if ((param_5 & 1) == 0) {
      func_0x000107c6142c(lVar10);
    }
    else {
      (**(code **)(lVar7 + 0x10))
                (lVar8,*(long *)(lVar10 + 0x38) + *(long *)(lVar7 + 0x48) * param_4,lVar1);
      func_0x000107c6142c(lVar10);
      (**(code **)(lVar7 + 0x20))(lVar6,lVar8,lVar1);
      func_0x000107c5eea0(lVar4);
      func_0x000107c5ee68(lVar6);
      pcVar5 = *(code **)(lVar7 + 8);
      (*pcVar5)(lVar4,lVar1);
      (*pcVar5)(lVar6,lVar1);
      if (param_2 < 60.0) {
        uVar3 = 0;
        goto LAB_101bd3b40;
      }
    }
    param_4 = lStack_90;
    param_5 = uStack_88;
    if (0x1ff < *(ulong *)(lVar10 + 0x10)) {
      lVar4 = *param_3;
      func_0x000107c61558(lVar4);
      lVar6 = *param_3;
      uVar2 = 0x112e08040;
      func_0x0001000285a8(0x112e08040,&UNK_10d9dc9d0);
      func_0x000107c60408(lVar4,uVar2);
      *param_3 = lVar6;
      param_5 = uStack_88;
    }
  }
  func_0x000107c61434(param_5);
  func_0x000107c5eea0(lVar9);
  uVar3 = 1;
  (**(code **)(lVar7 + 0x38))(lVar9,0,1,lVar1);
  func_0x000100fd88c8(lVar9,param_4,param_5);
LAB_101bd3b40:
  *puStack_80 = uVar3;
  return;
}



/* Entry: 101bd3b6c; end: 101bd3db3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd3b6c(ulong param_1,ulong param_2,code *param_3,long param_4,undefined8 param_5,
                  undefined8 param_6)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  long lStack_90;
  undefined1 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  code *pcStack_70;
  undefined8 uStack_68;
  
  lVar2 = 0x112d36580;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_b0 + -extraout_x8;
  lVar2 = 0;
  func_0x000107c5ede0();
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar9 + 0x40));
  lVar6 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if (param_2 != 0) {
    uVar5 = param_1 & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar5 = param_2 >> 0x38 & 0xf;
    }
    if (uVar5 != 0) {
      (*param_3)(puVar7,param_1);
      puVar3 = puVar7;
      (**(code **)(lVar9 + 0x30))(puVar7,1,lVar2);
      if ((int)puVar3 == 1) {
        FUN_101bd52bc(puVar7,0x112d36580,&UNK_10d9016d0);
      }
      else {
        (**(code **)(lVar9 + 0x20))(lVar6,puVar7,lVar2);
        lVar8 = *(long *)(unaff_x20 + _DAT_112e07fc0);
        lVar4 = 0x112d55580;
        func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
        bVar1 = *(byte *)(lVar9 + 0x50);
        func_0x000107c613fc();
        *(undefined8 *)(lVar4 + 0x18) = 2;
        *(undefined8 *)(lVar4 + 0x10) = 1;
        uVar5 = lVar4 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
        (**(code **)(lVar9 + 0x10))(uVar5,lVar6,lVar2);
        (**(code **)(lVar8 + _DAT_112e07d78))();
        if ((uVar5 & 1) != 0) {
          func_0x000107c613fc(param_4,0x20,7);
          *(long *)(param_4 + 0x10) = lVar4;
          *(long *)(param_4 + 0x18) = lVar8;
          uStack_88 = 0;
          pcStack_70 = FUN_101bcdb6c;
          uStack_68 = 0;
          lStack_90 = lVar8;
          uStack_80 = param_5;
          lStack_78 = param_4;
          func_0x000107c6157c(lVar4);
          func_0x000107c61174(lVar8);
          func_0x000100087bd4(param_6,auStack_a0,PTR___sytN_11034f1b0 + 8);
          func_0x000107c61574(lVar4);
          lVar4 = param_4;
        }
        func_0x000107c61574(lVar4);
        (**(code **)(lVar9 + 8))(lVar6,lVar2);
      }
    }
  }
  return;
}



/* Entry: 101bd3db4; end: 101bd3e13; -[_TtC31SCMessagingSystemSearchIndexing27SystemSearchIndexMaintainer init] */

void FUN_101bd3db4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCMessagingSystemSearchIndexing.SystemSearchIndexMaintainer",0x3b,"init()",6,
                      0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101bd3de0);
  (*pcVar1)();
}



/* Entry: 101bd3e14; end: 101bd3f0b; -[_TtC31SCMessagingSystemSearchIndexing27SystemSearchIndexMaintainer .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd3e14(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e07fc0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e07fc8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e07fd0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e07fd8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e07fe0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e07fe8));
  lVar1 = param_1 + _DAT_112e07ff0;
  uVar3 = *(undefined8 *)(lVar1 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x10);
  func_0x000107c61170(*(undefined8 *)(lVar1 + 0x18));
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  uVar3 = *(undefined8 *)(param_1 + _DAT_112e07ff8 + 8);
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112e07ff8 + 0x18));
  func_0x000107c61170(uVar3);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e08000));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112e08008));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112e08010));
  return;
}



/* Entry: 101bd3f0c; end: 101bd3f2b;  */

void FUN_101bd3f0c(void)

{
  func_0x000107c61168(&PTR_PTR_1127fc6b8);
  return;
}



/* Entry: 101bd3f2c; end: 101bd3f2f; -[_TtC31SCMessagingSystemSearchIndexing27SystemSearchIndexMaintainer didStartSnapchattersUpdateDataRequest:] */

void FUN_101bd3f2c(void)

{
  return;
}



/* Entry: 101bd3f30; end: 101bd3ff7;  */

void FUN_101bd3f30(long param_1)

{
  undefined1 *puVar1;
  long lVar2;
  long in_stack_00000008;
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_48;
  func_0x000107c61428(in_stack_00000008 + 0x10,puVar1,0,0);
  in_stack_00000008 = in_stack_00000008 + 0x10;
  func_0x000107c61618();
  if (in_stack_00000008 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
      puVar1 = (undefined1 *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    FUN_101bd3b6c(lVar2,puVar1,FUN_101bc5688,&UNK_110453708,&UNK_10d9dc9a8,0x101bd55a0);
    func_0x000107c61170(in_stack_00000008);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 101bd3ff8; end: 101bd4113;  */

/* WARNING: Possible PIC construction at 0x000101bd40e4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd40e8) */

void FUN_101bd3ff8(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_4 == 0) {
    param_4 = 0;
    uVar5 = 0;
    uVar4 = param_2;
  }
  else {
    uVar5 = param_2;
    func_0x000107c5faec(param_4);
    uVar4 = uVar5;
  }
  if (param_5 == 0) {
    param_5 = 0;
    uVar2 = 0;
  }
  else {
    func_0x000107c5faec(param_5);
    uVar2 = uVar4;
  }
  if (param_7 == 0) {
    param_7 = 0;
    uVar4 = 0;
  }
  else {
    func_0x000107c5faec(param_7);
  }
  func_0x000107c61174(param_2);
  uVar3 = param_6;
  func_0x000107c61174(param_6);
  (*pcVar1)(param_2,param_3,param_4,uVar5,param_5,uVar2,param_6,param_7,uVar4);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar4);
  return;
}



/* Entry: 101bd4114; end: 101bd41db;  */

void FUN_101bd4114(long param_1)

{
  long in_x4;
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  puVar1 = auStack_48;
  func_0x000107c61428(in_x4 + 0x10,puVar1,0,0);
  in_x4 = in_x4 + 0x10;
  func_0x000107c61618();
  if (in_x4 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar2 = 0;
      puVar1 = (undefined1 *)0x0;
    }
    else {
      lVar2 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    FUN_101bd3b6c(lVar2,puVar1,FUN_101bc5688,&UNK_110453708,&UNK_10d9dc9a8,0x101bd55a0);
    func_0x000107c61170(in_x4);
    func_0x000107c6142c(puVar1);
  }
  return;
}



/* Entry: 101bd41dc; end: 101bd4277;  */

void FUN_101bd41dc(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  if (param_4 == 0) {
    param_4 = 0;
    uVar3 = 0;
  }
  else {
    uVar3 = param_2;
    func_0x000107c5faec(param_4);
  }
  func_0x000107c61174(param_2);
  uVar2 = param_3;
  func_0x000107c61174(param_3);
  (*pcVar1)(param_2,param_3,param_4,uVar3);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar3);
  return;
}



/* Entry: 101bd4278; end: 101bd42eb; -[_TtC31SCMessagingSystemSearchIndexing27SystemSearchIndexMaintainer didEndSnapchattersUpdateDataRequest:withSuccess:error:] */

/* WARNING: Possible PIC construction at 0x000101bd42cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd42d0) */

void FUN_101bd4278(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_5);
  FUN_101bd4ee0(param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101bd42ec; end: 101bd42ef; -[_TtC31SCMessagingSystemSearchIndexing27SystemSearchIndexMaintainer didUpdateGroupsDataRequest:groupId:] */

void FUN_101bd42ec(void)

{
  return;
}



/* Entry: 101bd42f0; end: 101bd464b;  */

void FUN_101bd42f0(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar9 = &UNK_1104534d8;
  puVar3 = puVar9;
  func_0x000107c613fc(&UNK_1104534d8,0x18,7);
  func_0x000107c61614(puVar3 + 0x10);
  puVar4 = &UNK_110453500;
  func_0x000107c613fc(&UNK_110453500,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_101bd4d7c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = (code *)0x101bd5570;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_1011ac670;
  puStack_88 = &UNK_110453518;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4();
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  puVar6 = puVar9;
  func_0x000107c613fc(&UNK_1104534d8,0x18,7);
  func_0x000107c61614(puVar6 + 0x10);
  puVar7 = &UNK_110453550;
  func_0x000107c613fc(&UNK_110453550,0x20,7);
  *(undefined8 *)(puVar7 + 0x10) = 0x101bd4da0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = FUN_101bd4da8;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_101bd4c50;
  puStack_88 = &UNK_110453568;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4(ppuVar8);
  puVar10 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar10);
  func_0x000107c613fc(&UNK_1104534d8,0x18,7);
  func_0x000107c61614(puVar9 + 0x10);
  puVar10 = &UNK_1104535a0;
  func_0x000107c613fc(&UNK_1104535a0,0x20,7);
  *(code **)(puVar10 + 0x10) = FUN_101bd4dc8;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = FUN_101bd4dd0;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_100de6bdc;
  puStack_88 = &UNK_1104535b8;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar1 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar1);
  pcStack_80 = FUN_101bd4d28;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar13;
  uStack_98 = 0x42000000;
  pcStack_90 = (code *)&UNK_10006eb60;
  puStack_88 = &UNK_1104535e0;
  ppuVar12 = &puStack_a0;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c4c784(param_1);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar13 = puVar4;
  func_0x000107c61544(puVar4,"",0x65,0xef,0x27,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bd4640);
    (*pcVar2)();
  }
  puVar4 = puVar7;
  func_0x000107c61544(puVar7,"",0x65,0xf3,0x15,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bd4644);
    (*pcVar2)();
  }
  puVar9 = puVar10;
  func_0x000107c61544(puVar10,"",0x65,0xf7,0x13,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar9 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x101bd4648);
    (*pcVar2)();
  }
  uVar14 = 0;
  func_0x000107c61544(0,"",0x65,0xf9,0x1b,1);
  if ((uVar14 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x101bd464c);
  (*pcVar2)();
}



/* Entry: 101bd464c; end: 101bd471b;  */

void FUN_101bd464c(long param_1,long param_2)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = param_1;
  func_0x000107c49ffc();
  if ((int)lVar2 != 0) {
    puVar1 = auStack_48;
    func_0x000107c61428(param_2 + 0x10,puVar1,0,0);
    param_2 = param_2 + 0x10;
    func_0x000107c61618();
    if (param_2 != 0) {
      func_0x000107c444fc();
      func_0x000107c61180();
      if (param_1 == 0) {
        lVar2 = 0;
        puVar1 = (undefined1 *)0x0;
      }
      else {
        lVar2 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
      }
      FUN_101bd3b6c(lVar2,puVar1,0x101bc569c,&UNK_110453618,&UNK_10d9dc990,FUN_101bd4e40);
      func_0x000107c61170(param_2);
      func_0x000107c6142c(puVar1);
    }
  }
  return;
}



/* Entry: 101bd471c; end: 101bd4c4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101bd471c(long param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  undefined *puVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  undefined *puVar20;
  undefined1 auStack_140 [8];
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  long lStack_118;
  undefined *puStack_110;
  long lStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined1 *puStack_f0;
  long lStack_e8;
  ulong uStack_e0;
  undefined1 auStack_d0 [16];
  long lStack_c0;
  undefined1 uStack_b8;
  undefined *puStack_b0;
  undefined *puStack_a8;
  code *pcStack_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [32];
  long alStack_70 [2];
  
  lVar19 = 0x112d36580;
  lStack_108 = param_2;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined *)0x0;
  puStack_f0 = auStack_140 + -extraout_x8;
  func_0x000107c5ede0();
  lStack_100 = *(long *)(puVar6 + -8);
  puStack_f8 = puVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lStack_100 + 0x40));
  puVar6 = PTR___sypN_11034f1a8;
  lStack_e8 = (long)(auStack_140 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lVar19 = *(long *)(param_1 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar19 != 0) {
    do {
      param_1 = param_1 + 0x20;
      func_0x0001000bb420(param_1,auStack_d0);
      func_0x000100102924(auStack_d0,auStack_90);
      uVar9 = 0x112d6dfd0;
      func_0x0001000285a8(0x112d6dfd0,&UNK_10db63bd0);
      plVar10 = alStack_70;
      func_0x000107c6147c(plVar10,auStack_90,puVar6 + 8,uVar9,6);
      lVar13 = alStack_70[0];
      if ((((ulong)plVar10 & 1) != 0) && (alStack_70[0] != 0)) {
        puVar8 = puVar11;
        func_0x000107c61550();
        if (((int)puVar8 == 0) ||
           (((long)puVar11 < 0 || (puVar8 = puVar11, ((ulong)puVar11 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar11 >> 0x3e == 0) {
            puVar7 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar7 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar11) {
              puVar7 = puVar11;
            }
            func_0x000107c60480(puVar7);
          }
          puVar8 = (undefined *)0x0;
          func_0x000101bcad64(0,puVar7 + 1,1,puVar11);
        }
        uVar17 = (ulong)puVar8 & 0xffffffffffffff8;
        uVar18 = *(ulong *)(uVar17 + 0x10);
        puVar11 = puVar8;
        if (*(ulong *)(uVar17 + 0x18) >> 1 <= uVar18) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(uVar17 + 0x18));
          func_0x000101bcad64(puVar11,uVar18 + 1,1,puVar8);
          uVar17 = (ulong)puVar11 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar17 + 0x10) = uVar18 + 1;
        *(long *)(uVar17 + uVar18 * 8 + 0x20) = lVar13;
      }
      lVar19 = lVar19 + -1;
    } while (lVar19 != 0);
  }
  if ((ulong)puVar11 >> 0x3e == 0) {
    puVar6 = *(undefined **)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
    lVar19 = lStack_108;
  }
  else {
    puVar6 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar11) {
      puVar6 = puVar11;
    }
    func_0x000107c60480();
    lVar19 = lStack_108;
  }
  lStack_108 = lVar19;
  if (puVar6 != (undefined *)0x0) {
    if ((long)puVar6 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x101bd4c50);
      (*pcVar5)();
    }
    uVar18 = (ulong)puVar11 & 0xc000000000000001;
    puVar7 = auStack_90;
    func_0x000107c61428(lVar19 + 0x10,puVar7,0,0);
    puVar8 = (undefined *)0x0;
    uStack_120 = 0;
    uStack_128 = 2;
    uStack_130 = 1;
    puStack_110 = puVar6;
    uStack_e0 = uVar18;
    do {
      if (uVar18 == 0) {
        puVar20 = *(undefined **)(puVar11 + (long)puVar8 * 8 + 0x20);
        func_0x000107c615f0(puVar20);
        puVar16 = puVar7;
      }
      else {
        puVar20 = puVar8;
        puVar16 = puVar11;
        FUN_101bcb3d0();
      }
      puVar12 = puVar20;
      func_0x000107c49ffc();
      puVar7 = puVar16;
      if (((ulong)puVar12 & 1) == 0) {
LAB_101bd4944:
        func_0x000107c615e8(puVar20);
      }
      else {
        lVar13 = lVar19 + 0x10;
        func_0x000107c61618();
        puVar7 = puVar16;
        if (lVar13 == 0) goto LAB_101bd4944;
        puVar12 = puVar20;
        func_0x000107c444fc();
        func_0x000107c61180();
        if (puVar12 == (undefined *)0x0) {
          func_0x000107c615e8(puVar20);
          func_0x000107c61170(lVar13);
          puVar7 = puVar16;
        }
        else {
          puVar14 = puVar12;
          func_0x000107c5faec();
          puVar7 = puVar16;
          func_0x000107c61170(puVar12);
          puVar3 = puStack_f0;
          uVar18 = (ulong)puVar14 & 0xffffffffffff;
          if (((ulong)puVar16 & 0x2000000000000000) != 0) {
            uVar18 = (ulong)puVar16 >> 0x38 & 0xf;
          }
          if (uVar18 == 0) {
            func_0x000107c615e8(puVar20);
            func_0x000107c6142c(puVar16);
            func_0x000107c61170(lVar13);
            uVar18 = uStack_e0;
          }
          else {
            func_0x000101bc569c(puStack_f0,puVar14,puVar16);
            puVar7 = puStack_f8;
            lVar2 = lStack_100;
            puVar15 = puVar3;
            (**(code **)(lStack_100 + 0x30))(puVar3,1,puStack_f8);
            lVar4 = lStack_e8;
            if ((int)puVar15 == 1) {
              func_0x000107c615e8(puVar20);
              func_0x000107c6142c(puVar16);
              func_0x000107c61170(lVar13);
              puVar7 = (undefined *)0x112d36580;
              FUN_101bd52bc(puVar3,0x112d36580,&UNK_10d9016d0);
              uVar18 = uStack_e0;
              puVar6 = puStack_110;
            }
            else {
              (**(code **)(lVar2 + 0x20))(lStack_e8,puVar3,puVar7);
              lStack_118 = *(long *)(lVar13 + _DAT_112e07fc0);
              puVar6 = (undefined *)0x112d55580;
              func_0x0001000285a8(0x112d55580,&UNK_10d91c5e0);
              bVar1 = *(byte *)(lVar2 + 0x50);
              func_0x000107c613fc();
              lVar19 = lStack_118;
              *(undefined8 *)(puVar6 + 0x18) = uStack_128;
              *(undefined8 *)(puVar6 + 0x10) = uStack_130;
              puVar12 = puVar6 + ((ulong)bVar1 + 0x20 & ((ulong)bVar1 ^ 0xffffffffffffffff));
              (**(code **)(lVar2 + 0x10))(puVar12,lVar4,puVar7);
              (**(code **)(lVar19 + _DAT_112e07d78))();
              if (((ulong)puVar12 & 1) == 0) {
                func_0x000107c615e8(puVar20);
                func_0x000107c6142c(puVar16);
              }
              else {
                puVar12 = &UNK_110453640;
                func_0x000107c613fc(&UNK_110453640,0x20,7);
                *(undefined **)(puVar12 + 0x10) = puVar6;
                *(long *)(puVar12 + 0x18) = lVar19;
                lStack_c0 = lVar19;
                uStack_b8 = 0;
                puStack_b0 = &UNK_10d9dc9a0;
                pcStack_a0 = FUN_101bcdb6c;
                uStack_98 = 0;
                puStack_138 = puVar12;
                puStack_a8 = puVar12;
                func_0x000107c6157c(puVar6);
                func_0x000107c61174(lVar19);
                uVar9 = uStack_120;
                func_0x000100087bd4(0x101bd558c,auStack_d0,PTR___sytN_11034f1b0 + 8);
                uStack_120 = uVar9;
                func_0x000107c61574(puVar6);
                func_0x000107c615e8(puVar20);
                func_0x000107c6142c(puVar16);
                puVar6 = puStack_138;
              }
              func_0x000107c61574(puVar6);
              (**(code **)(lVar2 + 8))(lStack_e8);
              func_0x000107c61170(lVar13);
              uVar18 = uStack_e0;
              lVar19 = lStack_108;
              puVar6 = puStack_110;
            }
          }
        }
      }
      puVar8 = puVar8 + 1;
    } while (puVar6 != puVar8);
  }
  func_0x000107c6142c(puVar11);
  return;
}



/* Entry: 101bd4c50; end: 101bd4d27;  */

void FUN_101bd4c50(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c5fc54(param_2,PTR___sypN_11034f1a8 + 8);
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 101bd4d28; end: 101bd4d2b;  */

void FUN_101bd4d28(void)

{
  return;
}



/* Entry: 101bd4d2c; end: 101bd4d7b; -[_TtC31SCMessagingSystemSearchIndexing27SystemSearchIndexMaintainer didGroupsUpdateDataRequest:] */

/* WARNING: Possible PIC construction at 0x000101bd4d64: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000101bd4d68) */

void FUN_101bd4d2c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  FUN_101bd42f0(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_3);
  return;
}



/* Entry: 101bd4d7c; end: 101bd4da7;  */

void FUN_101bd4d7c(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = param_1;
  func_0x000107c49ffc();
  if ((int)lVar1 != 0) {
    puVar2 = auStack_48;
    func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
    lVar1 = unaff_x20 + 0x10;
    func_0x000107c61618();
    if (lVar1 != 0) {
      func_0x000107c444fc();
      func_0x000107c61180();
      if (param_1 == 0) {
        lVar3 = 0;
        puVar2 = (undefined1 *)0x0;
      }
      else {
        lVar3 = param_1;
        func_0x000107c5faec();
        func_0x000107c61170(param_1);
      }
      FUN_101bd3b6c(lVar3,puVar2,0x101bc569c,&UNK_110453618,&UNK_10d9dc990,FUN_101bd4e40);
      func_0x000107c61170(lVar1);
      func_0x000107c6142c(puVar2);
    }
  }
  return;
}



/* Entry: 101bd4da8; end: 101bd4dc7;  */

void FUN_101bd4da8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101bd4dc8; end: 101bd4dcf;  */

void FUN_101bd4dc8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101bd3b6c(param_1,param_2,0x101bc569c,&UNK_110453618,&UNK_10d9dc990,FUN_101bd4e40);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101bd4dd0; end: 101bd4def;  */

void FUN_101bd4dd0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101bd4df0; end: 101bd4e3f;  */

void FUN_101bd4df0(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101bd55e0;
  plVar4[0xd] = lVar1;
  plVar4[9] = lVar2;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar4[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xf] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd790,0,0);
  return;
}



/* Entry: 101bd4e40; end: 101bd4e53;  */

void FUN_101bd4e40(void)

{
  FUN_101bd54cc();
  return;
}



/* Entry: 101bd4e54; end: 101bd4ea3;  */

void FUN_101bd4e54(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bd4ea4;
  plVar4[0xd] = lVar1;
  plVar4[9] = lVar2;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar4[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xf] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd790,0,0);
  return;
}



/* Entry: 101bd4ea4; end: 101bd4edf;  */

void FUN_101bd4ea4(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd4edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd4ee0; end: 101bd507b;  */

void FUN_101bd4ee0(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  if ((param_2 & 1) != 0) {
    puVar5 = &UNK_1104534d8;
    puVar2 = puVar5;
    func_0x000107c613fc(&UNK_1104534d8,0x18,7);
    func_0x000107c61614(puVar2 + 0x10);
    puVar3 = &UNK_110453668;
    func_0x000107c613fc(&UNK_110453668,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101bd507c;
    *(undefined **)(puVar3 + 0x18) = puVar2;
    puVar1 = PTR___NSConcreteStackBlock_11034bd00;
    pcStack_60 = FUN_101bd50a0;
    puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101bd3ff8;
    puStack_68 = &UNK_110453680;
    ppuVar4 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar4);
    func_0x000107c61574(puStack_58);
    func_0x000107c613fc(&UNK_1104534d8,0x18,7);
    func_0x000107c61614(puVar5 + 0x10);
    puVar3 = &UNK_1104536b8;
    func_0x000107c613fc(&UNK_1104536b8,0x20,7);
    *(code **)(puVar3 + 0x10) = FUN_101bd50d0;
    *(undefined **)(puVar3 + 0x18) = puVar5;
    pcStack_60 = FUN_101bd50d8;
    puStack_80 = puVar1;
    uStack_78 = 0x42000000;
    pcStack_70 = FUN_101bd41dc;
    puStack_68 = &UNK_1104536d0;
    ppuVar6 = &puStack_80;
    puStack_58 = puVar3;
    func_0x000107c60bc4(ppuVar6);
    func_0x000107c61574(puStack_58);
    func_0x000107c4c57c(param_1);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c60bd0(ppuVar4);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(puVar2);
  }
  return;
}



/* Entry: 101bd507c; end: 101bd509f;  */

void FUN_101bd507c(void)

{
  FUN_101bd3f30();
  return;
}



/* Entry: 101bd50a0; end: 101bd50cf;  */

void FUN_101bd50a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101bd50d0; end: 101bd50d7;  */

void FUN_101bd50d0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  puVar2 = auStack_48;
  func_0x000107c61428(unaff_x20 + 0x10,puVar2,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    func_0x000107c5d984();
    func_0x000107c61180();
    if (param_1 == 0) {
      lVar3 = 0;
      puVar2 = (undefined1 *)0x0;
    }
    else {
      lVar3 = param_1;
      func_0x000107c5faec();
      func_0x000107c61170(param_1);
    }
    FUN_101bd3b6c(lVar3,puVar2,FUN_101bc5688,&UNK_110453708,&UNK_10d9dc9a8,0x101bd55a0);
    func_0x000107c61170(lVar1);
    func_0x000107c6142c(puVar2);
  }
  return;
}



/* Entry: 101bd50d8; end: 101bd50f7;  */

void FUN_101bd50d8(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101bd50f8; end: 101bd5123;  */

void FUN_101bd50f8(void)

{
  long unaff_x20;
  
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bd5124; end: 101bd5173;  */

void FUN_101bd5124(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101bd55e4;
  plVar4[0xd] = lVar1;
  plVar4[9] = lVar2;
  lVar2 = 0;
  func_0x000107c5ede0();
  plVar4[0xe] = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  plVar4[0xf] = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd790,0,0);
  return;
}



/* Entry: 101bd5174; end: 101bd517b;  */

void FUN_101bd5174(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 != 0) {
    FUN_101bd272c(param_1);
    func_0x000107c61170(lVar1);
  }
  return;
}



/* Entry: 101bd517c; end: 101bd51ab;  */

void FUN_101bd517c(void)

{
  FUN_101bd2988();
  return;
}



/* Entry: 101bd51ac; end: 101bd51cb;  */

void FUN_101bd51ac(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 101bd51cc; end: 101bd5213;  */

void FUN_101bd51cc(void)

{
  FUN_101bd2988();
  return;
}



/* Entry: 101bd5214; end: 101bd527f;  */

void FUN_101bd5214(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101bd5280;
  plVar4[0x15] = lVar1;
  plVar4[0x16] = lVar5;
  plVar4[0x14] = lVar3;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x17] = uVar2;
  lVar3 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x18] = uVar2;
  lVar3 = 0;
  FUN_101bcbb4c();
  plVar4[0x19] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x1a] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x1b] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd3394,0,0);
  return;
}



/* Entry: 101bd5280; end: 101bd52bb;  */

void FUN_101bd5280(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101bd52b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101bd52bc; end: 101bd52fb;  */

undefined8 FUN_101bd52bc(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101bd52fc; end: 101bd5363;  */

void FUN_101bd52fc(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x90;
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bd55e8;
  *(undefined1 *)((long)plVar5 + 0x81) = uVar2;
  plVar5[9] = lVar1;
  plVar5[10] = lVar6;
  plVar5[8] = lVar3;
  lVar3 = 0;
  FUN_101bcbb4c();
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd41c,0,0);
  return;
}



/* Entry: 101bd5364; end: 101bd536f;  */

void FUN_101bd5364(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))
            (param_1,*(undefined1 *)(unaff_x20 + 0x10),*(code **)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101bd5370; end: 101bd539f;  */

void FUN_101bd5370(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
  return;
}



/* Entry: 101bd53a0; end: 101bd53cb;  */

void FUN_101bd53a0(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bd53cc; end: 101bd5437;  */

void FUN_101bd53cc(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(unaff_x20 + 0x20);
  plVar4 = (long *)0x140;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = 0x101bd55f0;
  plVar4[0x1e] = lVar1;
  plVar4[0x1f] = lVar5;
  plVar4[0x1d] = lVar3;
  lVar3 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x20] = uVar2;
  lVar3 = 0x112e07bb0;
  func_0x0001000285a8(0x112e07bb0,&UNK_10d9dc3e0);
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x21] = uVar2;
  lVar3 = 0;
  FUN_101bcbb4c();
  plVar4[0x22] = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  plVar4[0x23] = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar4[0x24] = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bd2ba0,0,0);
  return;
}



/* Entry: 101bd5438; end: 101bd5463;  */

void FUN_101bd5438(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 101bd5464; end: 101bd54cb;  */

void FUN_101bd5464(void)

{
  long lVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  long lVar6;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar6 = *(long *)(unaff_x20 + 0x20);
  plVar5 = (long *)0x90;
  uVar2 = *(undefined1 *)(unaff_x20 + 0x28);
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = 0x101bd55ec;
  *(undefined1 *)((long)plVar5 + 0x81) = uVar2;
  plVar5[9] = lVar1;
  plVar5[10] = lVar6;
  plVar5[8] = lVar3;
  lVar3 = 0;
  FUN_101bcbb4c();
  lVar3 = *(long *)(lVar3 + -8);
  plVar5[0xb] = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar5[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101bcd41c,0,0);
  return;
}



/* Entry: 101bd54cc; end: 101bd54ef;  */

void FUN_101bd54cc(void)

{
  long unaff_x20;
  
  func_0x00010095ad00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Entry: 101bd54f0; end: 101bd551f;  */

void FUN_101bd54f0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  **(undefined8 **)(*(long *)(lVar1 + 0x40) + 0x28) = param_1;
  func_0x000107c61174();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0088. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_throwingResume_110350088)(lVar1);
  return;
}



/* Entry: 101bd5520; end: 101bd5577;  */

void FUN_101bd5520(long param_1,long param_2)

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



/* Entry: 101bd5578; end: 101bd55db;  */

void FUN_101bd5578(void)

{
  func_0x000101bd51fc();
  return;
}



/* Entry: 101bd55dc; end: 101bd55f3;  */

void FUN_101bd55dc(undefined8 param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))
            (param_1,*(undefined1 *)(unaff_x20 + 0x10),*(code **)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Entry: 101bd55f4; end: 101bd566f;  */

void FUN_101bd55f4(void)

{
  undefined **ppuVar1;
  undefined1 *puVar2;
  undefined *puStack_50;
  undefined8 uStack_48;
  undefined *puStack_40;
  undefined *puStack_38;
  code *pcStack_30;
  undefined8 uStack_28;
  
  ppuVar1 = &puStack_50;
  pcStack_30 = FUN_101bd5670;
  uStack_28 = 0;
  puStack_50 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_48 = 0x42000000;
  puStack_40 = &UNK_1000f6b44;
  puStack_38 = &UNK_1104539f8;
  func_0x000107c60bc4();
  puVar2 = (undefined1 *)ppuVar1;
  func_0x000107c60bc4();
  func_0x000107c60bd0(ppuVar1);
  puRam0000000112e08048 = puVar2;
  return;
}



/* Entry: 101bd5670; end: 101bd568f;  */

void FUN_101bd5670(void)

{
  return;
}



/* Entry: 101bd5690; end: 101bd56cb;  */

void FUN_101bd5690(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = param_2;
  FUN_101bd5ea0();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = param_2;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 101bd56cc; end: 101bd56d3;  */

void FUN_101bd56cc(long *param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  FUN_101bd5ea0();
  func_0x000107c613fc();
  *(long *)(lVar1 + 0x10) = unaff_x20;
  *param_1 = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 101bd56d4; end: 101bd5703;  */

void FUN_101bd56d4(undefined8 param_1)

{
  long unaff_x20;
  
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}


