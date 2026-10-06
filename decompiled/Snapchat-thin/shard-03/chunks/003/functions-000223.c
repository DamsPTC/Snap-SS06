/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10274f94c; end: 10274f99f;  */

void FUN_10274f94c(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  undefined1 auStack_50 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uStack_30 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_38 = *(undefined8 *)(unaff_x20 + 0x18);
  uStack_40 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_10274faec(0);
  pcVar2 = FUN_10274fae0;
  func_0x00010488bc98(FUN_10274fae0,auStack_50,uVar1);
  *param_1 = pcVar2;
  return;
}



/* Entry: 10274f9a0; end: 10274f9af;  */

undefined1  [16] FUN_10274f9a0(void)

{
  return ZEXT816(0x110543de8);
}



/* Entry: 10274f9b0; end: 10274fadf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274f9b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined **ppuVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  func_0x000100083b20(&lStack_48);
  uVar4 = *(undefined8 *)(lStack_48 + _DAT_112ff82c0);
  func_0x000107c615f0(uVar4);
  func_0x000107c61170(lStack_48);
  puVar1 = &UNK_110543e08;
  func_0x000107c613fc(&UNK_110543e08,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  pcStack_58 = FUN_10274fc74;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100f0f800;
  puStack_60 = &UNK_110543e20;
  ppuVar2 = &puStack_78;
  puStack_50 = puVar1;
  func_0x000107c60bc4(ppuVar2);
  puVar1 = puStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c61574(puVar1);
  pcVar3 = "provide(landingPageContextLazy:landingPageViewModelLazy:scopedValdiRuntimeServices:)";
  func_0x0001000c10c0(
                     "provide(landingPageContextLazy:landingPageViewModelLazy:scopedValdiRuntimeServices:)"
                     );
  func_0x000107c61180();
  func_0x000107c44288(uVar4);
  func_0x000107c615e8(pcVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c615e8(uVar4);
  return;
}



/* Entry: 10274fae0; end: 10274faeb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274fae0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined *puStack_50;
  long lStack_48;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000100083b20(&lStack_48,param_1,*(undefined8 *)(unaff_x20 + 0x10));
  uVar6 = *(undefined8 *)(lStack_48 + _DAT_112ff82c0);
  func_0x000107c615f0(uVar6);
  func_0x000107c61170(lStack_48);
  puVar2 = &UNK_110543e08;
  func_0x000107c613fc(&UNK_110543e08,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar1;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  pcStack_58 = FUN_10274fc74;
  puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x42000000;
  puStack_68 = &UNK_100f0f800;
  puStack_60 = &UNK_110543e20;
  ppuVar3 = &puStack_78;
  puStack_50 = puVar2;
  func_0x000107c60bc4(ppuVar3);
  puVar2 = puStack_50;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar5);
  func_0x000107c61574(puVar2);
  pcVar4 = "provide(landingPageContextLazy:landingPageViewModelLazy:scopedValdiRuntimeServices:)";
  func_0x0001000c10c0(
                     "provide(landingPageContextLazy:landingPageViewModelLazy:scopedValdiRuntimeServices:)"
                     );
  func_0x000107c61180();
  func_0x000107c44288(uVar6);
  func_0x000107c615e8(pcVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c615e8(uVar6);
  return;
}



/* Entry: 10274faec; end: 10274fb2f;  */

void FUN_10274faec(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbf30 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126aae58;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebbf30 = puVar1;
  return;
}



/* Entry: 10274fb30; end: 10274fc3f;  */

void FUN_10274fb30(long param_1)

{
  undefined *puVar1;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    FUN_10274fc9c();
    puVar1 = &UNK_110543e58;
    func_0x000107c613f8(&UNK_110543e58,param_1,0,0);
    uStack_48 = 1;
    puStack_50 = puVar1;
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar1);
  }
  else {
    func_0x000107c615f0();
    func_0x000100083b20(&puStack_50);
    func_0x000100083b20(&uStack_58);
    puVar1 = PTR_PTR_1126aae58;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(puStack_50);
    func_0x000107c61170(uStack_58);
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10274fc40; end: 10274fc73;  */

void FUN_10274fc40(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 10274fc74; end: 10274fc9b;  */

void FUN_10274fc74(long param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uStack_58;
  undefined *puStack_50;
  undefined1 uStack_48;
  
  if (param_1 == 0) {
    FUN_10274fc9c(0,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  *(undefined8 *)(unaff_x20 + 0x20));
    puVar1 = &UNK_110543e58;
    func_0x000107c613f8(&UNK_110543e58,param_1,0,0);
    uStack_48 = 1;
    puStack_50 = puVar1;
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c614ac(puVar1);
  }
  else {
    func_0x000107c615f0();
    func_0x000100083b20(&puStack_50);
    func_0x000100083b20(&uStack_58);
    puVar1 = PTR_PTR_1126aae58;
    func_0x000107c610f8();
    func_0x000107c49520();
    func_0x000107c61170(puStack_50);
    func_0x000107c61170(uStack_58);
    uStack_48 = 0;
    puStack_50 = puVar1;
    func_0x000107c61174(puVar1);
    func_0x00010488e5d4(&puStack_50);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(puVar1);
    func_0x000107c61170(puVar1);
  }
  return;
}



/* Entry: 10274fc9c; end: 10274fcdb;  */

void FUN_10274fc9c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbf38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dad546c;
  func_0x000107c61520(&UNK_10dad546c,&UNK_110543e58);
  puRam0000000112ebbf38 = puVar1;
  return;
}



/* Entry: 10274fcdc; end: 10274fceb;  */

undefined1  [16] FUN_10274fcdc(void)

{
  return ZEXT816(0x110543e58);
}



/* Entry: 10274fcec; end: 10274fd27;  */

void FUN_10274fcec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010274fd24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10274fd28; end: 10274ff63;  */

void FUN_10274fd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebbf40,&UNK_10dad54b0);
  puVar1 = &UNK_110543ea0;
  func_0x000107c613fc(&UNK_110543ea0,0xe0,7);
  *(undefined8 *)(puVar1 + 0x10) = param_8;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_6;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_7;
  *(undefined8 *)(puVar1 + 0x40) = param_2;
  *(undefined8 *)(puVar1 + 0x48) = param_14;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_13;
  *(undefined8 *)(puVar1 + 0x70) = param_23;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  *(undefined8 *)(puVar1 + 0x80) = param_18;
  *(undefined8 *)(puVar1 + 0x88) = param_20;
  *(undefined8 *)(puVar1 + 0x90) = param_22;
  *(undefined8 *)(puVar1 + 0x98) = param_21;
  *(undefined8 *)(puVar1 + 0xa0) = param_24;
  *(undefined8 *)(puVar1 + 0xa8) = param_16;
  *(undefined8 *)(puVar1 + 0xb0) = param_26;
  *(undefined8 *)(puVar1 + 0xb8) = param_19;
  *(undefined8 *)(puVar1 + 0xc0) = param_17;
  *(undefined8 *)(puVar1 + 200) = param_25;
  *(undefined8 *)(puVar1 + 0xd0) = param_5;
  *(undefined8 *)(puVar1 + 0xd8) = param_12;
  func_0x000107c6157c();
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_23);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_18);
  func_0x000107c6157c(param_20);
  func_0x000107c6157c(param_22);
  func_0x000107c6157c(param_21);
  func_0x000107c6157c(param_24);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_26);
  func_0x000107c6157c(param_19);
  func_0x000107c6157c(param_17);
  func_0x000107c6157c(param_25);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_12);
  func_0x0001000823a8(FUN_10275110c,puVar1);
  return;
}



/* Entry: 10274ff64; end: 10275110b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10274ff64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16,
                  undefined8 param_17,undefined8 param_18,undefined8 param_19,undefined8 param_20,
                  undefined8 param_21,undefined8 param_22,undefined8 param_23,undefined8 param_24,
                  undefined8 param_25,undefined8 param_26,undefined8 param_27)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar14;
  long extraout_x12;
  code *pcVar15;
  undefined8 auStack_1e0 [7];
  undefined1 auStack_1a8 [8];
  undefined1 auStack_1a0 [8];
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
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
  long lStack_100;
  long lStack_f8;
  long lStack_f0;
  undefined1 *puStack_e8;
  undefined8 uStack_e0;
  undefined8 *puStack_d8;
  undefined *puStack_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined *puStack_b8;
  undefined *puStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined *puStack_98;
  code *pcStack_90;
  code *pcStack_88;
  
  lVar3 = 0x112d3ae80;
  uStack_198 = param_4;
  uStack_190 = param_5;
  uStack_188 = param_8;
  uStack_178 = param_9;
  puStack_d8 = param_1;
  puStack_d0 = (undefined *)param_6;
  func_0x0001000285a8(0x112d3ae80,&UNK_10d912fe0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = 0x112d36580;
  puStack_e8 = auStack_1a0 + -extraout_x8;
  func_0x0001000285a8(0x112d36580,&UNK_10d9016d0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = (long)(auStack_1a0 + -extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  lStack_f0 = lVar14;
  (*(code *)PTR____chkstk_darwin_11034bd40)();
  lVar14 = lVar14 - extraout_x12;
  lVar3 = 0;
  lStack_100 = lVar14;
  func_0x000104638d5c();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar4 = PTR_PTR_1126aae60;
  lStack_f8 = lVar14;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000100083b20(&puStack_b0);
  puVar13 = puStack_b0;
  puVar5 = puStack_b0;
  func_0x000107c3cfe0();
  func_0x000107c61180();
  func_0x000107c61170(puVar13);
  puVar6 = puVar5;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar13 = PTR___NSConcreteStackBlock_11034bd00;
  if (puVar6 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebbf88,&UNK_10dad5528);
    puVar5 = &UNK_110544280;
    func_0x000107c613fc(&UNK_110544280,0x18,7);
    *(undefined **)(puVar5 + 0x10) = puVar6;
    func_0x000107c615f0(puVar6);
    pcVar7 = (code *)0x1027517a0;
    func_0x0001000823a8(0x1027517a0,puVar5);
    puVar5 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_90 = (code *)0x102751794;
    puStack_b0 = puVar13;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101016bdc;
    puStack_98 = &UNK_110544298;
    ppuVar8 = &puStack_b0;
    pcStack_88 = pcVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c46b38(puVar5);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_88);
    func_0x000107c52188(puVar4);
    func_0x000107c615e8(puVar6);
    func_0x000107c61170(puVar5);
  }
  uStack_e0 = param_27;
  uStack_128 = param_22;
  uStack_130 = param_21;
  uStack_138 = param_20;
  uStack_140 = param_18;
  uStack_148 = param_17;
  uStack_158 = param_14;
  uStack_160 = param_13;
  func_0x000100083b20(&puStack_b0);
  puVar5 = puStack_b0;
  puVar6 = puStack_b0;
  func_0x000107c3dae4();
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  if (puVar5 != (undefined *)0x0) {
    func_0x0001000285a8(0x112ebbf80,&UNK_10dad5520);
    puVar6 = &UNK_110544230;
    func_0x000107c613fc(&UNK_110544230,0x18,7);
    *(undefined **)(puVar6 + 0x10) = puVar5;
    func_0x000107c615f0(puVar5);
    pcVar7 = FUN_102751594;
    func_0x0001000823a8(FUN_102751594,puVar6);
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_90 = (code *)0x102751790;
    puStack_b0 = puVar13;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101016bdc;
    puStack_98 = &UNK_110544248;
    ppuVar8 = &puStack_b0;
    pcStack_88 = pcVar7;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_88);
    func_0x000107c52604(puVar4);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar6);
  }
  uStack_110 = param_25;
  uStack_108 = param_26;
  uStack_118 = param_24;
  uStack_120 = param_23;
  uStack_150 = param_19;
  uStack_168 = param_16;
  uStack_170 = param_15;
  uStack_180 = param_12;
  uVar9 = 0;
  FUN_1027511b8(0);
  pcVar7 = FUN_102751170;
  func_0x00010072927c(FUN_102751170,0,uVar9);
  func_0x000100083b20(&puStack_b0);
  func_0x000107c61574(pcVar7);
  puVar5 = puStack_b0;
  func_0x000107c525c4(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  puVar5 = puStack_b0;
  func_0x000107c52b84(puVar4);
  func_0x000107c615e8(puVar5);
  puVar5 = &UNK_110543ee8;
  func_0x000107c613fc(&UNK_110543ee8,0x18,7);
  func_0x000100083b20(&puStack_b0);
  puVar6 = puStack_b0;
  func_0x000107c61170(uStack_a8);
  func_0x000107c615e8(puStack_a0);
  func_0x000107c615e8(puStack_98);
  func_0x000107c61614(puVar5 + 0x10,puVar6);
  func_0x000107c61170(puVar6);
  uVar9 = 0x112ebbf50;
  func_0x0001000285a8(0x112ebbf50,&UNK_10dad54f0);
  pcVar7 = FUN_102751284;
  func_0x00010072927c(FUN_102751284,puVar5,uVar9);
  func_0x000107c61574(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751758;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543f00;
  ppuVar8 = &puStack_b0;
  pcStack_88 = pcVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c53088(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751788;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543f28;
  ppuVar8 = &puStack_b0;
  pcStack_88 = (code *)param_7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(param_7);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c53094(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uVar9 = uStack_188;
  pcStack_90 = (code *)0x10275175c;
  pcStack_88 = (code *)uStack_188;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543f50;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c53aa8(puVar4);
  func_0x000107c61170(puVar5);
  uVar9 = 0x112ebbf58;
  func_0x0001000285a8(0x112ebbf58,&UNK_10dad54f8);
  uVar10 = 0x10275128c;
  func_0x00010072927c(0x10275128c,0,uVar9);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751760;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543f78;
  ppuVar8 = &puStack_b0;
  pcStack_88 = (code *)uVar10;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c53b74(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  puVar6 = puStack_98;
  uVar9 = uStack_a8;
  puVar5 = puStack_b0;
  func_0x000107c615e8(puStack_a0);
  func_0x000107c61170(uVar9);
  func_0x000107c61170(puVar5);
  puVar5 = puVar6;
  func_0x000107c41408(puVar6);
  func_0x000107c61180();
  func_0x000107c615e8(puVar6);
  func_0x000107c53e8c(puVar4);
  func_0x000107c615e8(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751764;
  pcStack_88 = (code *)param_10;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543fa0;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(param_10);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c54108(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  puVar5 = puStack_b0;
  puStack_b8 = PTR_DAT_11269f0a8;
  puVar6 = puStack_b0;
  func_0x000107c61494(puStack_b0,1,&puStack_b8);
  if (puVar6 == (undefined *)0x0) {
    func_0x000107c615e8(puVar5);
  }
  else {
    func_0x0001000285a8(0x112ebbf78,&UNK_10dad5518);
    puVar11 = &UNK_1105441e0;
    func_0x000107c613fc(&UNK_1105441e0,0x18,7);
    *(undefined **)(puVar11 + 0x10) = puVar6;
    func_0x000107c615f0(puVar5);
    uVar9 = 0x102751588;
    func_0x0001000823a8(0x102751588,puVar11);
    puVar6 = PTR_PTR_1126b1678;
    func_0x000107c610f8(PTR_PTR_1126b1678);
    pcStack_90 = (code *)0x10275178c;
    puStack_b0 = puVar13;
    uStack_a8 = 0x42000000;
    puStack_a0 = &UNK_101016bdc;
    puStack_98 = &UNK_1105441f8;
    ppuVar8 = &puStack_b0;
    pcStack_88 = (code *)uVar9;
    func_0x000107c60bc4(ppuVar8);
    func_0x000107c46b38(puVar6);
    func_0x000107c60bd0(ppuVar8);
    func_0x000107c61574(pcStack_88);
    func_0x000107c55378(puVar4);
    func_0x000107c615e8(puVar5);
    func_0x000107c61170(puVar6);
  }
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751768;
  pcStack_88 = (code *)param_11;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543fc8;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(param_11);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c54484(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uVar9 = uStack_180;
  pcStack_90 = (code *)0x10275176c;
  pcStack_88 = (code *)uStack_180;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110543ff0;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c55230(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  puVar5 = puStack_b0;
  func_0x000107c5653c(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  puVar5 = puStack_b0;
  func_0x000107c565dc(puVar4);
  func_0x000107c615e8(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uVar9 = uStack_170;
  pcStack_90 = (code *)0x102751770;
  pcStack_88 = (code *)uStack_170;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110544018;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c5661c(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uVar9 = uStack_168;
  pcStack_90 = (code *)0x102751774;
  pcStack_88 = (code *)uStack_168;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110544040;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c57010(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  func_0x000107c61170(puStack_b0);
  uVar9 = uStack_a8;
  func_0x000107c615e8(puStack_a0);
  func_0x000107c615e8(puStack_98);
  func_0x000107c55f6c(puVar4);
  func_0x000107c61170(uVar9);
  uVar9 = 0x112ebbf60;
  func_0x0001000285a8(0x112ebbf60,&UNK_10dad5500);
  uVar10 = 0x102751298;
  func_0x00010072927c(0x102751298,0,uVar9);
  func_0x000100083b20(&puStack_b0);
  func_0x000107c61574(uVar10);
  puVar5 = puStack_b0;
  func_0x000107c58d2c(puVar4);
  func_0x000107c615e8(puVar5);
  uVar9 = 0x112ebbf68;
  func_0x0001000285a8(0x112ebbf68,&UNK_10dad5508);
  pcVar7 = FUN_1027512a4;
  func_0x00010072927c(FUN_1027512a4,0,uVar9);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751778;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110544068;
  ppuVar8 = &puStack_b0;
  pcStack_88 = pcVar7;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c58f84(puVar4);
  func_0x000107c61170(puVar5);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  uVar9 = uStack_150;
  pcStack_90 = (code *)0x10275177c;
  pcStack_88 = (code *)uStack_150;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110544090;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c58ed4(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&puStack_b0);
  puVar5 = puStack_b0;
  func_0x000107c596d8(puVar4);
  func_0x000107c61170(puVar5);
  uVar9 = 0x112ebbf70;
  func_0x0001000285a8(0x112ebbf70,&UNK_10dad5510);
  pcVar7 = FUN_1027512ec;
  func_0x00010072927c(FUN_1027512ec,0,uVar9);
  puVar5 = PTR_PTR_1126b1678;
  func_0x000107c610f8(PTR_PTR_1126b1678);
  pcStack_90 = (code *)0x102751780;
  puStack_b0 = puVar13;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_1105440b8;
  ppuVar8 = &puStack_b0;
  pcStack_88 = pcVar7;
  func_0x000107c60bc4();
  func_0x000107c46b38(puVar5);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c598d8(puVar4);
  func_0x000107c61170(puVar5);
  func_0x000100083b20(&lStack_c0);
  func_0x00010092450c(lStack_c0 + _DAT_112ffbfa0,&puStack_b0);
  func_0x000107c61170(lStack_c0);
  pcVar7 = pcStack_90;
  func_0x0001000a8868(&puStack_b0,puStack_98);
  lVar12 = 0;
  func_0x000107c5ede0();
  lVar3 = lStack_100;
  pcVar15 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
  (*pcVar15)(lStack_100,1,1,lVar12);
  lVar1 = lStack_f0;
  (*pcVar15)(lStack_f0,1,1,lVar12);
  lVar12 = 0;
  func_0x0001046305a8();
  puVar2 = puStack_e8;
  (**(code **)(*(long *)(lVar12 + -8) + 0x38))(puStack_e8,1,1,lVar12);
  *(undefined1 *)(lVar14 + -8) = 0;
  *(undefined8 *)(lVar14 + -0x10) = 0;
  *(undefined8 *)(lVar14 + -0x18) = 0;
  *(undefined8 *)(lVar14 + -0x20) = 0;
  *(undefined8 *)(lVar14 + -0x28) = 0;
  *(undefined8 *)(lVar14 + -0x30) = 0;
  *(undefined8 *)(lVar14 + -0x38) = 0;
  *(undefined1 **)(lVar14 + -0x40) = puVar2;
  lVar14 = lStack_f8;
  func_0x000104638e24(lStack_f8,0xb,lVar3,0,lVar1,0,0,0,0);
  func_0x000104652fec(0);
  func_0x000107c610f8();
  func_0x000104651d90(lVar14);
  lVar3 = lVar14;
  (**(code **)((long)pcVar7 + 8))();
  func_0x000107c61170(lVar14);
  func_0x000107c5a6a4(puVar4);
  func_0x000107c615e8(lVar3);
  func_0x0001000834e4(&puStack_b0);
  puVar13 = PTR_PTR_1126b1678;
  func_0x000107c610f8();
  uVar9 = uStack_120;
  puVar5 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_90 = (code *)0x102751784;
  pcStack_88 = (code *)uStack_120;
  puStack_b0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_1105440e0;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar13);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c57578(puVar4);
  func_0x000107c61170(puVar13);
  puVar13 = PTR_PTR_1126b1678;
  func_0x000107c610f8();
  uVar9 = uStack_118;
  pcStack_90 = FUN_102751544;
  pcStack_88 = (code *)uStack_118;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_101016bdc;
  puStack_98 = &UNK_110544108;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  func_0x000107c6157c(uVar9);
  func_0x000107c46b38(puVar13);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c61574(pcStack_88);
  func_0x000107c56a78(puVar4);
  func_0x000107c61170(puVar13);
  uVar9 = uStack_110;
  pcStack_90 = (code *)0x102751568;
  pcStack_88 = (code *)uStack_110;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110544130;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4();
  pcVar7 = pcStack_88;
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(pcVar7);
  func_0x000107c56fcc(puVar4);
  func_0x000107c60bd0(ppuVar8);
  uVar9 = uStack_108;
  pcStack_90 = (code *)0x10275179c;
  pcStack_88 = (code *)uStack_108;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_110544158;
  ppuVar8 = &puStack_b0;
  func_0x000107c60bc4(ppuVar8);
  pcVar7 = pcStack_88;
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(pcVar7);
  func_0x000107c56fd8(puVar4);
  func_0x000107c60bd0(ppuVar8);
  func_0x000100083b20(&puStack_b0);
  uVar9 = uStack_a8;
  uStack_c8 = uStack_a8;
  puStack_d0 = puStack_b0;
  puVar13 = &UNK_110544190;
  func_0x000107c613fc(&UNK_110544190,0x20,7);
  *(undefined8 *)(puVar13 + 0x18) = uStack_c8;
  *(undefined **)(puVar13 + 0x10) = puStack_d0;
  pcStack_90 = FUN_102751580;
  puStack_b0 = puVar5;
  uStack_a8 = 0x42000000;
  puStack_a0 = &UNK_1000f6b44;
  puStack_98 = &UNK_1105441a8;
  ppuVar8 = &puStack_b0;
  pcStack_88 = (code *)puVar13;
  func_0x000107c60bc4();
  pcVar7 = pcStack_88;
  func_0x000107c6157c(uVar9);
  func_0x000107c61574(pcVar7);
  func_0x000107c56c64(puVar4);
  func_0x000107c61574(uVar9);
  func_0x000107c60bd0(ppuVar8);
  *puStack_d8 = puVar4;
  return;
}



/* Entry: 10275110c; end: 10275115f;  */

void FUN_10275110c(void)

{
  long unaff_x20;
  
  FUN_10274ff64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8),
                *(undefined8 *)(unaff_x20 + 0xc0),*(undefined8 *)(unaff_x20 + 200),
                *(undefined8 *)(unaff_x20 + 0xd0),*(undefined8 *)(unaff_x20 + 0xd8));
  return;
}



/* Entry: 102751160; end: 10275116f;  */

undefined1  [16] FUN_102751160(void)

{
  return ZEXT816(0x110543ec8);
}



/* Entry: 102751170; end: 1027511b7;  */

void FUN_102751170(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1027511b8; end: 1027511fb;  */

void FUN_1027511b8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112ebbf48 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_PTR_1126a8bc8;
  func_0x000107c61168();
  func_0x000107c614ec();
  puRam0000000112ebbf48 = puVar1;
  return;
}



/* Entry: 1027511fc; end: 102751283;  */

void FUN_1027511fc(long *param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61618();
  lVar2 = param_3;
  (**(code **)(lVar1 + 8))();
  func_0x000107c61170(param_3);
  *param_1 = lVar2;
  return;
}



/* Entry: 102751284; end: 1027512a3;  */

void FUN_102751284(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,*(undefined8 *)(param_2 + 0x18));
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar2 = unaff_x20 + 0x10;
  func_0x000107c61618();
  lVar3 = lVar2;
  (**(code **)(lVar1 + 8))();
  func_0x000107c61170(lVar2);
  *param_1 = lVar3;
  return;
}



/* Entry: 1027512a4; end: 1027512eb;  */

void FUN_1027512a4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar1 + 8))(uVar2,lVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 1027512ec; end: 1027512f7;  */

void FUN_1027512ec(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uStack_38;
  
  puVar1 = &UNK_10dad5550;
  func_0x000107c614e0(&UNK_10dad5550);
  uVar2 = *param_2;
  uStack_38 = uVar2;
  func_0x000107c61174();
  func_0x000107c614bc(param_1,&uStack_38,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1027512f8; end: 102751483;  */

void FUN_1027512f8(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_38;
  
  func_0x000107c614e0(param_3);
  uVar1 = *param_2;
  uStack_38 = uVar1;
  func_0x000107c61174();
  func_0x000107c614bc(param_1,&uStack_38,param_3);
  func_0x000107c61574(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 102751484; end: 1027514ef;  */

void FUN_102751484(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x20) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027514f0,uVar1,uVar2);
  return;
}



/* Entry: 1027514f0; end: 102751527;  */

void FUN_1027514f0(void)

{
  code *pcVar1;
  long unaff_x22;
  
  pcVar1 = *(code **)(unaff_x22 + 0x10);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  (*pcVar1)();
                    /* WARNING: Could not recover jumptable at 0x000102751524. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102751528; end: 102751543;  */

void FUN_102751528(long param_1,long param_2)

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



/* Entry: 102751544; end: 10275157f;  */

undefined8 FUN_102751544(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  return uStack_18;
}



/* Entry: 102751580; end: 102751593;  */

/* WARNING: Possible PIC construction at 0x000102751468: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010275146c) */

void FUN_102751580(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &UNK_1105442d0;
  func_0x000107c613fc(&UNK_1105442d0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  puVar4 = &UNK_1105442f8;
  func_0x000107c613fc(&UNK_1105442f8,0x20,7);
  *(undefined **)(puVar4 + 0x10) = &UNK_10dad5538;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  func_0x000107c6157c(uVar2);
  func_0x0001001ca524(0x40,0,0x48,4,0,0,&UNK_10dad5548,puVar4,PTR___sytN_11034f1b0 + 8);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar4);
  return;
}



/* Entry: 102751594; end: 1027515c3;  */

void FUN_102751594(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c4c1dc();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027515c4; end: 102751613;  */

void FUN_1027515c4(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102751614;
  plVar3[2] = lVar2;
  plVar3[3] = lVar1;
  lVar1 = 0;
  func_0x000107c5fcec();
  lVar2 = lVar1;
  func_0x000107c5fce8();
  plVar3[4] = lVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(lVar1,lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027514f0,lVar1,lVar2);
  return;
}



/* Entry: 102751614; end: 10275164f;  */

void FUN_102751614(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010275164c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102751650; end: 1027516bf;  */

void FUN_102751650(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x102751798;
  (*(code *)&UNK_100f7cc44)(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Entry: 1027516c0; end: 1027517a3;  */

void FUN_1027516c0(long param_1,long param_2)

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



/* Entry: 1027517a4; end: 102751813;  */

void FUN_1027517a4(void)

{
  func_0x0001000285a8(0x112ebbf90,&UNK_10dad5610);
  func_0x0001000823a8(0x1027517e4,0);
  return;
}



/* Entry: 102751814; end: 102751823;  */

undefined1  [16] FUN_102751814(void)

{
  return ZEXT816(0x110544340);
}



/* Entry: 102751824; end: 10275186f;  */

void FUN_102751824(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebbf98,&UNK_10dad5650);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102751870,param_1);
  return;
}



/* Entry: 102751870; end: 10275188f;  */

void FUN_102751870(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &UNK_110544460;
  param_1[4] = &PTR_DAT_110544420;
  *param_1 = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 102751890; end: 10275190b;  */

code * FUN_102751890(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long unaff_x22;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  code *pcStack_170;
  code *pcStack_98;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  lVar18 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  *(ulong *)(unaff_x22 + 0x88) = uVar4;
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x90) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10275190c;
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5[0x15] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE_00 = FUN_1027525c0;
  }
  else {
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = plVar5[0x15];
    if (uVar4 >> 0x3e == 0) {
      uVar26 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar26 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar26 = uVar4;
      }
      func_0x000107c60480();
    }
    puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar26 != 0) {
      uVar21 = 0;
      lVar19 = plVar5[0x15];
      puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e68);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          uVar6 = *(ulong *)(lVar19 + 0x20 + uVar21 * 8);
          func_0x000107c615f0();
        }
        else {
          uVar6 = uVar21;
          FUN_102739830(uVar21,plVar5[0x15]);
        }
        if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e64);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        uVar21 = uVar21 + 1;
        uVar33 = uVar6;
        func_0x000107c442dc();
        func_0x000107c61180();
        uVar11 = 0x112ebbff8;
        func_0x0001000285a8(0x112ebbff8,&UNK_10dad5758);
        uVar7 = uVar33;
        func_0x000107c5fc54(uVar33,uVar11);
        func_0x000107c61170(uVar33);
        if (uVar7 >> 0x3e == 0) {
          uVar33 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          if (uVar33 != 0) goto LAB_1027526e4;
LAB_10275288c:
          func_0x000107c615e8(uVar6);
          func_0x000107c6142c(uVar7);
          puVar30 = puVar29;
        }
        else {
          uVar33 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar33 = uVar7;
          }
          func_0x000107c60480();
          if (uVar33 == 0) goto LAB_10275288c;
LAB_1027526e4:
          FUN_102752244(0,uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e74);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
          uVar24 = 0;
          do {
            uVar16 = uVar7;
            if ((uVar7 & 0xc000000000000001) == 0) {
              uVar22 = *(ulong *)(uVar7 + uVar24 * 8 + 0x20);
              func_0x000107c615f0(uVar22);
            }
            else {
              uVar22 = uVar24;
              FUN_1027523b8();
            }
            uVar8 = uVar6;
            func_0x000107c44fcc();
            func_0x000107c61180();
            uVar9 = uVar8;
            func_0x000107c44fcc();
            func_0x000107c61180();
            func_0x000107c615e8(uVar8);
            uVar8 = uVar9;
            func_0x000107c5faec();
            func_0x000107c61170(uVar9);
            uVar9 = uVar22;
            func_0x000107c442e0();
            func_0x000107c61180();
            uVar10 = uVar9;
            func_0x000103edf20c();
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(uVar22);
            uVar22 = *(ulong *)(puVar29 + 0x10);
            if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar22) {
              FUN_102752244(1 < *(ulong *)(puVar29 + 0x18),uVar22 + 1,1);
            }
            uVar24 = uVar24 + 1;
            *(ulong *)(puVar29 + 0x10) = uVar22 + 1;
            *(ulong *)(puVar29 + uVar22 * 0x18 + 0x20) = uVar8;
            *(ulong *)(puVar29 + uVar22 * 0x18 + 0x28) = uVar16;
            *(ulong *)(puVar29 + uVar22 * 0x18 + 0x30) = uVar10;
          } while (uVar33 != uVar24);
          func_0x000107c615e8(uVar6);
          func_0x000107c6142c(uVar7);
          puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        uVar6 = *(ulong *)(puVar29 + 0x10);
        lVar25 = *(long *)(puVar27 + 0x10);
        if (SCARRY8(lVar25,uVar6)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e6c);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        puVar28 = puVar27;
        func_0x000107c61558();
        if (((int)puVar28 == 0) ||
           (uVar33 = *(ulong *)(puVar27 + 0x18) >> 1, (long)uVar33 < (long)(lVar25 + uVar6))) {
          FUN_102752268();
          uVar33 = *(ulong *)(puVar28 + 0x18) >> 1;
          puVar27 = puVar28;
          if (*(long *)(puVar29 + 0x10) != 0) goto LAB_102752908;
LAB_102752640:
          func_0x000107c6142c(puVar29);
          puVar28 = puVar27;
          if (uVar6 != 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e70);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
        }
        else {
          puVar28 = puVar27;
          if (*(long *)(puVar29 + 0x10) == 0) goto LAB_102752640;
LAB_102752908:
          lVar25 = *(long *)(puVar28 + 0x10);
          if (uVar33 - lVar25 < uVar6) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e78);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          uVar11 = 0x112ebc000;
          func_0x0001000285a8(0x112ebc000,&UNK_10dad5768);
          func_0x000107c6140c(puVar28 + lVar25 * 0x18 + 0x20,puVar29 + 0x20,uVar6,uVar11);
          func_0x000107c6142c(puVar29);
          if (uVar6 != 0) {
            if (SCARRY8(*(long *)(puVar28 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e7c);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            *(ulong *)(puVar28 + 0x10) = *(long *)(puVar28 + 0x10) + uVar6;
          }
        }
        puVar27 = puVar28;
        puVar29 = puVar30;
      } while (uVar21 != uVar26);
    }
    plVar5[0x16] = (long)puVar28;
    lVar19 = *(long *)(puVar28 + 0x10);
    plVar5[0x17] = lVar19;
    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar19 != 0) {
      plVar5[0x18] = 0;
      plVar5[0x19] = (long)puVar27;
      puVar27 = PTR___sypN_11034f1a8;
      if (*(long *)(puVar28 + 0x10) != 0) {
        uVar4 = 0;
        do {
          plVar5[0x1a] = *(long *)(puVar28 + uVar4 * 0x18 + 0x20);
          plVar5[0x1b] = *(long *)(puVar28 + uVar4 * 0x18 + 0x28);
          lVar19 = *(long *)(puVar28 + uVar4 * 0x18 + 0x30);
          plVar5[0x1c] = lVar19;
          func_0x000107c61434();
          func_0x000107c6157c(lVar19);
          func_0x000104888eec(plVar5 + 0x10);
          cVar2 = (char)plVar5[0x11];
          if (cVar2 == -1) {
            plVar5[7] = (long)(plVar5 + 0xe);
            plVar5[2] = (long)plVar5;
            plVar5[3] = (long)FUN_102752e98;
            plVar13 = plVar5 + 2;
            func_0x000107c61448(plVar13,0);
            puVar28 = &UNK_110544508;
            func_0x000107c613fc(&UNK_110544508,0x18,7);
            *(long **)(puVar28 + 0x10) = plVar13;
            func_0x00010075a04c(0,1,FUN_1027536f8,puVar28);
            func_0x000107c61574(puVar28);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) goto LAB_102752e94;
            goto LAB_107c61444;
          }
          lVar19 = plVar5[0x10];
          if (cVar2 == '\x01') {
            plVar5[0x12] = lVar19;
            iVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if (iVar3 != 0) {
              uVar11 = 0x112d393f0;
              func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
              func_0x000107c61658(plVar5 + 0x12,uVar11,PTR___ss5ErrorWS_11034ee10);
            }
            lVar19 = plVar5[0x1c];
            lVar25 = plVar5[0x19];
            lVar20 = plVar5[0x16];
            func_0x000107c6142c(plVar5[0x1b]);
            func_0x000107c61574(lVar19);
            func_0x000107c6142c(lVar20);
            func_0x000107c6142c(lVar25);
LAB_102752e20:
            UNRECOVERED_JUMPTABLE_00 = (code *)plVar5[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000102752e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)();
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_102752e94;
          }
          lVar25 = 0;
          func_0x000107c5ed50();
          lVar20 = *(long *)(lVar25 + -8);
          uVar4 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x000107c600f4(uVar4);
          func_0x000107c5ed4c(plVar5 + 10);
          pcStack_98 = (code *)plVar5[0x19];
          if (plVar5[0xd] != 0) {
            uVar11 = 0;
            FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
            do {
              plVar13 = plVar5 + 0x13;
              plVar14 = plVar5 + 10;
              func_0x000107c6147c(plVar13,plVar14,puVar27 + 8,uVar11,6);
              if (((ulong)plVar13 & 1) != 0) {
                lVar23 = plVar5[0x13];
                func_0x000107c61434(plVar5[0x1b]);
                lVar32 = lVar23;
                func_0x000107c3eea8(lVar23);
                func_0x000107c61180();
                lVar12 = lVar32;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar32);
                puVar28 = PTR_PTR_1126b25c0;
                func_0x000107c610f8();
                lVar32 = lVar12;
                func_0x000107c5ee20(lVar12,plVar14);
                plVar5[0x14] = 0;
                func_0x000107c4636c();
                func_0x000107c61170(lVar32);
                lVar32 = plVar5[0x14];
                if (puVar28 == (undefined *)0x0) {
                  lVar1 = plVar5[0x1b];
                  lVar15 = plVar5[0x1c];
                  lVar31 = plVar5[0x16];
                  func_0x000107c61174();
                  func_0x000107c5ed30();
                  func_0x000107c61170(lVar32);
                  func_0x000107c61654();
                  func_0x000107c6142c(lVar31);
                  func_0x00010006c090(lVar12,plVar14);
                  func_0x000107c61170(lVar23);
                  func_0x000101dc7a08(lVar19,cVar2);
                  func_0x000107c61430(lVar1,2);
                  func_0x000107c61574(lVar15);
                  (**(code **)(lVar20 + 8))(uVar4,lVar25);
                  func_0x000107c6142c(pcStack_98);
                  func_0x000107c615c0(uVar4);
                  goto LAB_102752e20;
                }
                func_0x000107c61174();
                func_0x00010006c090(lVar12,plVar14);
                UNRECOVERED_JUMPTABLE_00 = pcStack_98;
                func_0x000107c61558();
                if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
                  UNRECOVERED_JUMPTABLE_00 = pcStack_98 + 0x10;
                  pcStack_98 = (code *)0x0;
                  FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE_00 + 1,1);
                }
                uVar26 = *(ulong *)(pcStack_98 + 0x10);
                if (*(ulong *)(pcStack_98 + 0x18) >> 1 <= uVar26) {
                  pcStack_98 = (code *)(ulong)(1 < *(ulong *)(pcStack_98 + 0x18));
                  FUN_102752128(pcStack_98,uVar26 + 1,1);
                }
                lVar32 = plVar5[0x1a];
                lVar12 = plVar5[0x1b];
                *(ulong *)(pcStack_98 + 0x10) = uVar26 + 1;
                *(long *)(pcStack_98 + uVar26 * 0x18 + 0x20) = lVar32;
                *(long *)(pcStack_98 + uVar26 * 0x18 + 0x28) = lVar12;
                *(undefined **)(pcStack_98 + uVar26 * 0x18 + 0x30) = puVar28;
                func_0x000107c61170(lVar23);
              }
              func_0x000107c5ed4c(plVar5 + 10);
            } while (plVar5[0xd] != 0);
          }
          lVar32 = plVar5[0x1b];
          lVar23 = plVar5[0x1c];
          lVar12 = plVar5[0x17];
          lVar1 = plVar5[0x18];
          (**(code **)(lVar20 + 8))(uVar4,lVar25);
          func_0x000101dc7a08(lVar19,cVar2);
          func_0x000107c6142c(lVar32);
          func_0x000107c61574(lVar23);
          func_0x000107c615c0(uVar4);
          if (lVar1 + 1 == lVar12) {
            puVar28 = (undefined *)plVar5[0x16];
            goto LAB_102752d38;
          }
          uVar4 = plVar5[0x18] + 1;
          plVar5[0x18] = uVar4;
          plVar5[0x19] = (long)pcStack_98;
          puVar28 = (undefined *)plVar5[0x16];
        } while (uVar4 < *(ulong *)(puVar28 + 0x10));
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752c20);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    pcStack_98 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102752d38:
    func_0x000107c6142c(puVar28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000102752d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar5[1])(pcStack_98);
      return pcStack_98;
    }
LAB_102752e94:
    func_0x000107c60e78();
    plVar5 = (long *)*plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar19 = plVar5[0xe];
      cVar2 = (char)plVar5[0xf];
      if (cVar2 != '\x01') {
        plVar13 = plVar5 + 10;
        UNRECOVERED_JUMPTABLE_00 = (code *)0x0;
        func_0x000107c5ed50();
        lVar25 = *(long *)(UNRECOVERED_JUMPTABLE_00 + -8);
        lVar20 = *(long *)(lVar25 + 0x40);
        do {
          puVar28 = PTR___sypN_11034f1a8;
          uVar4 = lVar20 + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar4);
          func_0x000107c600f4(uVar4);
          func_0x000107c5ed4c(plVar13);
          pcStack_170 = (code *)plVar5[0x19];
          if (plVar5[0xd] != 0) {
            uVar11 = 0;
            FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
            do {
              while( true ) {
                plVar14 = plVar5 + 0x13;
                plVar17 = plVar13;
                func_0x000107c6147c(plVar14,plVar13,puVar28 + 8,uVar11,6);
                if (((ulong)plVar14 & 1) != 0) break;
                func_0x000107c5ed4c(plVar13);
                if (plVar5[0xd] == 0) goto LAB_102753140;
              }
              lVar23 = plVar5[0x13];
              func_0x000107c61434(plVar5[0x1b]);
              lVar32 = lVar23;
              func_0x000107c3eea8(lVar23);
              func_0x000107c61180();
              lVar12 = lVar32;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar32);
              puVar28 = PTR_PTR_1126b25c0;
              func_0x000107c610f8();
              lVar32 = lVar12;
              func_0x000107c5ee20(lVar12,plVar17);
              plVar5[0x14] = 0;
              func_0x000107c4636c();
              func_0x000107c61170(lVar32);
              lVar32 = plVar5[0x14];
              if (puVar28 == (undefined *)0x0) {
                lVar20 = plVar5[0x1b];
                lVar1 = plVar5[0x1c];
                lVar31 = plVar5[0x16];
                lVar15 = lVar32;
                func_0x000107c61174(lVar32);
                func_0x000107c5ed30(lVar32);
                func_0x000107c61170(lVar15);
                func_0x000107c61654();
                func_0x000107c6142c(lVar31);
                func_0x00010006c090(lVar12,plVar17);
                func_0x000107c61170(lVar23);
                func_0x000101dc7a08(lVar19,cVar2);
                func_0x000107c61430(lVar20,2);
                func_0x000107c61574(lVar1);
                (**(code **)(lVar25 + 8))(uVar4);
                func_0x000107c6142c(pcStack_170);
                func_0x000107c615c0(uVar4);
                goto LAB_102753268;
              }
              func_0x000107c61174(lVar32);
              func_0x00010006c090(lVar12,plVar17);
              UNRECOVERED_JUMPTABLE = pcStack_170;
              func_0x000107c61558();
              if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                UNRECOVERED_JUMPTABLE = pcStack_170 + 0x10;
                pcStack_170 = (code *)0x0;
                FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE + 1,1);
              }
              uVar26 = *(ulong *)(pcStack_170 + 0x10);
              if (*(ulong *)(pcStack_170 + 0x18) >> 1 <= uVar26) {
                UNRECOVERED_JUMPTABLE = (code *)(ulong)(1 < *(ulong *)(pcStack_170 + 0x18));
                FUN_102752128(UNRECOVERED_JUMPTABLE,uVar26 + 1,1,pcStack_170);
                pcStack_170 = UNRECOVERED_JUMPTABLE;
              }
              lVar32 = plVar5[0x1a];
              lVar12 = plVar5[0x1b];
              *(ulong *)(pcStack_170 + 0x10) = uVar26 + 1;
              *(long *)(pcStack_170 + uVar26 * 0x18 + 0x20) = lVar32;
              *(long *)(pcStack_170 + uVar26 * 0x18 + 0x28) = lVar12;
              *(undefined **)(pcStack_170 + uVar26 * 0x18 + 0x30) = puVar28;
              func_0x000107c61170(lVar23);
              func_0x000107c5ed4c(plVar13);
              puVar28 = PTR___sypN_11034f1a8;
            } while (plVar5[0xd] != 0);
          }
LAB_102753140:
          lVar32 = plVar5[0x1b];
          lVar23 = plVar5[0x1c];
          lVar12 = plVar5[0x17];
          lVar1 = plVar5[0x18];
          (**(code **)(lVar25 + 8))(uVar4,UNRECOVERED_JUMPTABLE_00);
          func_0x000101dc7a08(lVar19,cVar2);
          func_0x000107c6142c(lVar32);
          func_0x000107c61574(lVar23);
          func_0x000107c615c0(uVar4);
          if (lVar1 + 1 == lVar12) {
            UNRECOVERED_JUMPTABLE = (code *)plVar5[0x16];
            func_0x000107c6142c();
            UNRECOVERED_JUMPTABLE_00 = (code *)plVar5[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x0001027532f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)(pcStack_170);
              return pcStack_170;
            }
            goto LAB_102753420;
          }
          uVar4 = plVar5[0x18] + 1;
          plVar5[0x18] = uVar4;
          plVar5[0x19] = (long)pcStack_170;
          if (*(ulong *)(plVar5[0x16] + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102753420);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          lVar19 = plVar5[0x16] + uVar4 * 0x18;
          plVar5[0x1a] = *(long *)(lVar19 + 0x20);
          plVar5[0x1b] = *(long *)(lVar19 + 0x28);
          lVar19 = *(long *)(lVar19 + 0x30);
          plVar5[0x1c] = lVar19;
          func_0x000107c61434();
          func_0x000107c6157c(lVar19);
          func_0x000104888eec(plVar5 + 0x10);
          cVar2 = (char)plVar5[0x11];
          if (cVar2 == -1) {
            plVar5[7] = (long)(plVar5 + 0xe);
            plVar5[2] = (long)plVar5;
            plVar5[3] = (long)FUN_102752e98;
            plVar13 = plVar5 + 2;
            func_0x000107c61448(plVar13,0);
            UNRECOVERED_JUMPTABLE = (code *)&UNK_110544508;
            func_0x000107c613fc(&UNK_110544508,0x18,7);
            *(long **)(UNRECOVERED_JUMPTABLE + 0x10) = plVar13;
            UNRECOVERED_JUMPTABLE_00 = (code *)0x1;
            func_0x00010075a04c(0,1,FUN_1027536f8,UNRECOVERED_JUMPTABLE);
            func_0x000107c61574();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
LAB_107c61444:
              UNRECOVERED_JUMPTABLE_00 = (code *)(plVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_102753420;
          }
          lVar19 = plVar5[0x10];
        } while (cVar2 != '\x01');
      }
      plVar5[0x12] = lVar19;
      iVar3 = 2;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x12;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(plVar5 + 0x12,UNRECOVERED_JUMPTABLE_00,PTR___ss5ErrorWS_11034ee10);
      }
      lVar19 = plVar5[0x1c];
      lVar25 = plVar5[0x19];
      lVar20 = plVar5[0x16];
      func_0x000107c6142c(plVar5[0x1b]);
      func_0x000107c61574(lVar19);
      func_0x000107c6142c(lVar20);
      func_0x000107c6142c(lVar25);
LAB_102753268:
      UNRECOVERED_JUMPTABLE = (code *)plVar5[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x0001027532a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
LAB_102753420:
      func_0x000107c60e78();
      uVar34 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8);
      uVar11 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
      uVar36 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
      uVar35 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x20) =
           *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8) = uVar34;
      *(undefined8 *)UNRECOVERED_JUMPTABLE_00 = uVar11;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18) = uVar36;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = uVar35;
      return UNRECOVERED_JUMPTABLE_00;
    }
    UNRECOVERED_JUMPTABLE_00 = FUN_102752f04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 10275190c; end: 10275197b;  */

void FUN_10275190c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x98) = param_1;
  *(long *)(lVar1 + 0xa0) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x90));
  if (unaff_x20 != 0) {
    func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000102751958. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10275197c,0,0);
  return;
}



/* Entry: 10275197c; end: 102751b5b;  */

void FUN_10275197c(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long unaff_x22;
  long lVar11;
  long lStack_10;
  
  lVar9 = *(long *)(*(long *)(unaff_x22 + 0x98) + 0x10);
  *(long *)(unaff_x22 + 0xa8) = lVar9;
  if (lVar9 == 0) {
    func_0x000107c6142c();
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000102751a20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(PTR___swiftEmptyArrayStorage_11034f1c8);
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0xa0);
  *(undefined8 *)(unaff_x22 + 0xb0) = 8;
  *(undefined1 *)(unaff_x22 + 0xd0) = 0;
  func_0x000107c5fd64();
  if (lVar9 != 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x0001027519ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar10 = *(ulong *)(unaff_x22 + 0xa8);
  if (-1 < (long)uVar10) {
    if (7 < uVar10) {
      uVar10 = 8;
    }
    lVar11 = *(long *)(unaff_x22 + 0x98);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    *(long *)(unaff_x22 + 0x60) = lVar11;
    *(long *)(unaff_x22 + 0x68) = lVar11 + 0x20;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(ulong *)(unaff_x22 + 0x78) = uVar10 << 1 | 1;
    lVar9 = 0;
    func_0x000107c5fd0c();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(uVar2,1,1,lVar9);
    func_0x000107c61434(lVar11);
    func_0x000100083b20(unaff_x22 + 0x10);
    FUN_102753424(unaff_x22 + 0x10,unaff_x22 + 0x38);
    puVar6 = &UNK_110544408;
    func_0x000107c613fc(&UNK_110544408,0x38,7);
    *(undefined **)(unaff_x22 + 0xb8) = puVar6;
    FUN_102753424(unaff_x22 + 0x38,puVar6 + 0x10);
    plVar7 = (long *)0xe0;
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0xc0) = plVar7;
    lVar9 = 0x112ebbfa0;
    func_0x0001000285a8(0x112ebbfa0,&UNK_10dad5680);
    lVar11 = lVar9;
    func_0x0001027534e4();
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_102751b5c;
    puVar4 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
    puVar3 = PTR___ss5NeverON_11034ee88;
    lVar8 = *(long *)(unaff_x22 + 0x88);
    puVar1 = PTR___sytN_11034f1b0 + 8;
    plVar7[0x16] = unaff_x22 + 0x60;
    plVar7[0x17] = lStack_10;
    plVar7[0x14] = lVar11;
    plVar7[0x15] = (long)puVar4;
    plVar7[0x12] = (long)puVar1;
    plVar7[0x13] = (long)puVar3;
    plVar7[0x10] = (long)puVar6;
    plVar7[0x11] = lVar9;
    plVar7[0xe] = lVar8;
    plVar7[0xf] = (long)&UNK_10dad5678;
    lVar9 = *(long *)(puVar3 + -8);
    plVar7[0x18] = lVar9;
    uVar10 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    plVar7[0x19] = uVar10;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x102751b5c);
  (*pcVar5)();
}



/* Entry: 102751b5c; end: 102751bef;  */

/* WARNING: Possible PIC construction at 0x000102751bc0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000102751bc4) */
/* WARNING: Removing unreachable block (ram,0x000107c615e0) */
/* WARNING: Removing unreachable block (ram,0x00010bdc0560) */

void FUN_102751b5c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0xb8);
    func_0x000107c6142c(param_1);
  }
  else {
    uVar1 = *(undefined8 *)(lVar2 + 0xb8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar1);
  return;
}



/* Entry: 102751bf0; end: 102751ebf;  */

void FUN_102751bf0(void)

{
  ulong uVar1;
  undefined *puVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long unaff_x22;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long lStack_10;
  
  bVar3 = *(byte *)(unaff_x22 + 0xd0);
  lVar8 = *(long *)(unaff_x22 + 0xa8);
  lVar12 = *(long *)(unaff_x22 + 0xb0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
  puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (((bVar3 & 1) != 0) || (lVar8 <= lVar12)) {
    lVar12 = *(long *)(unaff_x22 + 0x98);
    lVar8 = *(long *)(lVar12 + 0x10);
    if (lVar8 == 0) {
      func_0x000107c6142c(lVar12);
      puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
    }
    else {
      func_0x0001027394f0(0,lVar8,0);
      puVar13 = (undefined8 *)(lVar12 + 0x30);
      uVar11 = *(ulong *)(puVar9 + 0x10);
      do {
        uVar7 = *puVar13;
        uVar1 = uVar11 + 1;
        uVar16 = *(ulong *)(puVar9 + 0x18);
        func_0x000107c61174();
        if (uVar16 >> 1 <= uVar11) {
          func_0x0001027394f0(1 < uVar16,uVar1,1);
        }
        *(ulong *)(puVar9 + 0x10) = uVar1;
        *(undefined8 *)(puVar9 + uVar11 * 8 + 0x20) = uVar7;
        lVar8 = lVar8 + -1;
        puVar13 = puVar13 + 3;
        uVar11 = uVar1;
      } while (lVar8 != 0);
      func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
    }
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000102751d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(puVar9);
    return;
  }
  lVar12 = *(long *)(unaff_x22 + 200);
  lVar15 = *(long *)(unaff_x22 + 0xb0);
  lVar8 = lVar15 + 8;
  *(long *)(unaff_x22 + 0xb0) = lVar8;
  *(bool *)(unaff_x22 + 0xd0) = SCARRY8(lVar15,8);
  func_0x000107c5fd64();
  if (lVar12 != 0) {
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x98));
    func_0x000107c615c0(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x000102751c7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  if (lVar15 < 0x7ffffffffffffff8) {
    lVar12 = *(long *)(unaff_x22 + 0xa8);
    if (lVar8 <= *(long *)(unaff_x22 + 0xa8)) {
      lVar12 = lVar8;
    }
    if (lVar15 <= lVar12) {
      if (-1 < lVar15) {
        lVar14 = *(long *)(unaff_x22 + 0x98);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x88);
        *(long *)(unaff_x22 + 0x60) = lVar14;
        *(long *)(unaff_x22 + 0x68) = lVar14 + 0x20;
        *(long *)(unaff_x22 + 0x70) = lVar15;
        *(ulong *)(unaff_x22 + 0x78) = lVar12 << 1 | 1;
        lVar8 = 0;
        func_0x000107c5fd0c();
        (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar7,1,1,lVar8);
        func_0x000107c61434(lVar14);
        func_0x000100083b20(unaff_x22 + 0x10);
        FUN_102753424(unaff_x22 + 0x10,unaff_x22 + 0x38);
        puVar9 = &UNK_110544408;
        func_0x000107c613fc(&UNK_110544408,0x38,7);
        *(undefined **)(unaff_x22 + 0xb8) = puVar9;
        FUN_102753424(unaff_x22 + 0x38,puVar9 + 0x10);
        plVar10 = (long *)0xe0;
        func_0x000107c615b8();
        *(long **)(unaff_x22 + 0xc0) = plVar10;
        lVar8 = 0x112ebbfa0;
        func_0x0001000285a8(0x112ebbfa0,&UNK_10dad5680);
        lVar12 = lVar8;
        func_0x0001027534e4();
        *plVar10 = unaff_x22;
        plVar10[1] = (long)FUN_102751b5c;
        puVar5 = PTR___ss5NeverOs5ErrorsWP_11034ee90;
        puVar4 = PTR___ss5NeverON_11034ee88;
        lVar15 = *(long *)(unaff_x22 + 0x88);
        puVar2 = PTR___sytN_11034f1b0 + 8;
        plVar10[0x16] = unaff_x22 + 0x60;
        plVar10[0x17] = lStack_10;
        plVar10[0x14] = lVar12;
        plVar10[0x15] = (long)puVar5;
        plVar10[0x12] = (long)puVar2;
        plVar10[0x13] = (long)puVar4;
        plVar10[0x10] = (long)puVar9;
        plVar10[0x11] = lVar8;
        plVar10[0xe] = lVar15;
        plVar10[0xf] = (long)&UNK_10dad5678;
        lVar8 = *(long *)(puVar4 + -8);
        plVar10[0x18] = lVar8;
        uVar11 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        plVar10[0x19] = uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)PTR__swift_task_switch_110350130)(&UNK_10488ea3c,0,0);
        return;
      }
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x102751ec0);
      (*pcVar6)();
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x102751ebc);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x102751eb8);
  (*pcVar6)();
}



/* Entry: 102751ec0; end: 102751f13;  */

code * FUN_102751ec0(long param_1)

{
  long lVar1;
  char cVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  code *UNRECOVERED_JUMPTABLE;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  long *unaff_x20;
  long lVar22;
  long lVar23;
  ulong uVar24;
  long lVar25;
  long unaff_x22;
  ulong uVar26;
  undefined *puVar27;
  undefined *puVar28;
  undefined *puVar29;
  undefined *puVar30;
  long lVar31;
  long lVar32;
  ulong uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  code *pcStack_170;
  code *pcStack_98;
  
  lVar22 = *unaff_x20;
  plVar6 = (long *)0xe0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_102751f14;
  plVar6[0x10] = lVar22;
  lVar22 = 0x112d453c8;
  func_0x0001000285a8(0x112d453c8,&UNK_10d90ac60);
  uVar4 = *(long *)(*(long *)(lVar22 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar6[0x11] = uVar4;
  plVar5 = (long *)0xf0;
  func_0x000107c615b8();
  plVar6[0x12] = (long)plVar5;
  *plVar5 = (long)plVar6;
  plVar5[1] = (long)FUN_10275190c;
  lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
  plVar5[0x15] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
    UNRECOVERED_JUMPTABLE_00 = FUN_1027525c0;
  }
  else {
    func_0x000107c60e78();
    lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar4 = plVar5[0x15];
    if (uVar4 >> 0x3e == 0) {
      uVar26 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar26 = uVar4 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar4) {
        uVar26 = uVar4;
      }
      func_0x000107c60480();
    }
    puVar28 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar26 != 0) {
      uVar20 = 0;
      lVar18 = plVar5[0x15];
      puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar29 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar4 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e68);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          uVar7 = *(ulong *)(lVar18 + 0x20 + uVar20 * 8);
          func_0x000107c615f0();
        }
        else {
          uVar7 = uVar20;
          FUN_102739830(uVar20,plVar5[0x15]);
        }
        if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e64);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        uVar20 = uVar20 + 1;
        uVar33 = uVar7;
        func_0x000107c442dc();
        func_0x000107c61180();
        uVar12 = 0x112ebbff8;
        func_0x0001000285a8(0x112ebbff8,&UNK_10dad5758);
        uVar8 = uVar33;
        func_0x000107c5fc54(uVar33,uVar12);
        func_0x000107c61170(uVar33);
        if (uVar8 >> 0x3e == 0) {
          uVar33 = *(ulong *)((uVar8 & 0xffffffffffffff8) + 0x10);
          if (uVar33 != 0) goto LAB_1027526e4;
LAB_10275288c:
          func_0x000107c615e8(uVar7);
          func_0x000107c6142c(uVar8);
          puVar30 = puVar29;
        }
        else {
          uVar33 = uVar8 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar8) {
            uVar33 = uVar8;
          }
          func_0x000107c60480();
          if (uVar33 == 0) goto LAB_10275288c;
LAB_1027526e4:
          FUN_102752244(0,uVar33 & ((long)uVar33 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e74);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
          uVar24 = 0;
          do {
            uVar16 = uVar8;
            if ((uVar8 & 0xc000000000000001) == 0) {
              uVar21 = *(ulong *)(uVar8 + uVar24 * 8 + 0x20);
              func_0x000107c615f0(uVar21);
            }
            else {
              uVar21 = uVar24;
              FUN_1027523b8();
            }
            uVar9 = uVar7;
            func_0x000107c44fcc();
            func_0x000107c61180();
            uVar10 = uVar9;
            func_0x000107c44fcc();
            func_0x000107c61180();
            func_0x000107c615e8(uVar9);
            uVar9 = uVar10;
            func_0x000107c5faec();
            func_0x000107c61170(uVar10);
            uVar10 = uVar21;
            func_0x000107c442e0();
            func_0x000107c61180();
            uVar11 = uVar10;
            func_0x000103edf20c();
            func_0x000107c61170(uVar10);
            func_0x000107c615e8(uVar21);
            uVar21 = *(ulong *)(puVar29 + 0x10);
            if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar21) {
              FUN_102752244(1 < *(ulong *)(puVar29 + 0x18),uVar21 + 1,1);
            }
            uVar24 = uVar24 + 1;
            *(ulong *)(puVar29 + 0x10) = uVar21 + 1;
            *(ulong *)(puVar29 + uVar21 * 0x18 + 0x20) = uVar9;
            *(ulong *)(puVar29 + uVar21 * 0x18 + 0x28) = uVar16;
            *(ulong *)(puVar29 + uVar21 * 0x18 + 0x30) = uVar11;
          } while (uVar33 != uVar24);
          func_0x000107c615e8(uVar7);
          func_0x000107c6142c(uVar8);
          puVar30 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        uVar7 = *(ulong *)(puVar29 + 0x10);
        lVar25 = *(long *)(puVar27 + 0x10);
        if (SCARRY8(lVar25,uVar7)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e6c);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        puVar28 = puVar27;
        func_0x000107c61558();
        if (((int)puVar28 == 0) ||
           (uVar33 = *(ulong *)(puVar27 + 0x18) >> 1, (long)uVar33 < (long)(lVar25 + uVar7))) {
          FUN_102752268();
          uVar33 = *(ulong *)(puVar28 + 0x18) >> 1;
          puVar27 = puVar28;
          if (*(long *)(puVar29 + 0x10) != 0) goto LAB_102752908;
LAB_102752640:
          func_0x000107c6142c(puVar29);
          puVar28 = puVar27;
          if (uVar7 != 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e70);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
        }
        else {
          puVar28 = puVar27;
          if (*(long *)(puVar29 + 0x10) == 0) goto LAB_102752640;
LAB_102752908:
          lVar25 = *(long *)(puVar28 + 0x10);
          if (uVar33 - lVar25 < uVar7) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e78);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          uVar12 = 0x112ebc000;
          func_0x0001000285a8(0x112ebc000,&UNK_10dad5768);
          func_0x000107c6140c(puVar28 + lVar25 * 0x18 + 0x20,puVar29 + 0x20,uVar7,uVar12);
          func_0x000107c6142c(puVar29);
          if (uVar7 != 0) {
            if (SCARRY8(*(long *)(puVar28 + 0x10),uVar7)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e7c);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            *(ulong *)(puVar28 + 0x10) = *(long *)(puVar28 + 0x10) + uVar7;
          }
        }
        puVar27 = puVar28;
        puVar29 = puVar30;
      } while (uVar20 != uVar26);
    }
    plVar5[0x16] = (long)puVar28;
    lVar18 = *(long *)(puVar28 + 0x10);
    plVar5[0x17] = lVar18;
    puVar27 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar18 != 0) {
      plVar5[0x18] = 0;
      plVar5[0x19] = (long)puVar27;
      puVar27 = PTR___sypN_11034f1a8;
      if (*(long *)(puVar28 + 0x10) != 0) {
        uVar4 = 0;
        do {
          plVar5[0x1a] = *(long *)(puVar28 + uVar4 * 0x18 + 0x20);
          plVar5[0x1b] = *(long *)(puVar28 + uVar4 * 0x18 + 0x28);
          lVar18 = *(long *)(puVar28 + uVar4 * 0x18 + 0x30);
          plVar5[0x1c] = lVar18;
          func_0x000107c61434();
          func_0x000107c6157c(lVar18);
          func_0x000104888eec(plVar5 + 0x10);
          cVar2 = (char)plVar5[0x11];
          if (cVar2 == -1) {
            plVar5[7] = (long)(plVar5 + 0xe);
            plVar5[2] = (long)plVar5;
            plVar5[3] = (long)FUN_102752e98;
            plVar6 = plVar5 + 2;
            func_0x000107c61448(plVar6,0);
            puVar28 = &UNK_110544508;
            func_0x000107c613fc(&UNK_110544508,0x18,7);
            *(long **)(puVar28 + 0x10) = plVar6;
            func_0x00010075a04c(0,1,FUN_1027536f8,puVar28);
            func_0x000107c61574(puVar28);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar22) goto LAB_102752e94;
            goto LAB_107c61444;
          }
          lVar18 = plVar5[0x10];
          if (cVar2 == '\x01') {
            plVar5[0x12] = lVar18;
            iVar3 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if (iVar3 != 0) {
              uVar12 = 0x112d393f0;
              func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
              func_0x000107c61658(plVar5 + 0x12,uVar12,PTR___ss5ErrorWS_11034ee10);
            }
            lVar18 = plVar5[0x1c];
            lVar25 = plVar5[0x19];
            lVar19 = plVar5[0x16];
            func_0x000107c6142c(plVar5[0x1b]);
            func_0x000107c61574(lVar18);
            func_0x000107c6142c(lVar19);
            func_0x000107c6142c(lVar25);
LAB_102752e20:
            UNRECOVERED_JUMPTABLE_00 = (code *)plVar5[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x000102752e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)();
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_102752e94;
          }
          lVar25 = 0;
          func_0x000107c5ed50();
          lVar19 = *(long *)(lVar25 + -8);
          uVar4 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x000107c600f4(uVar4);
          func_0x000107c5ed4c(plVar5 + 10);
          pcStack_98 = (code *)plVar5[0x19];
          if (plVar5[0xd] != 0) {
            uVar12 = 0;
            FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
            do {
              plVar6 = plVar5 + 0x13;
              plVar14 = plVar5 + 10;
              func_0x000107c6147c(plVar6,plVar14,puVar27 + 8,uVar12,6);
              if (((ulong)plVar6 & 1) != 0) {
                lVar23 = plVar5[0x13];
                func_0x000107c61434(plVar5[0x1b]);
                lVar32 = lVar23;
                func_0x000107c3eea8(lVar23);
                func_0x000107c61180();
                lVar13 = lVar32;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar32);
                puVar28 = PTR_PTR_1126b25c0;
                func_0x000107c610f8();
                lVar32 = lVar13;
                func_0x000107c5ee20(lVar13,plVar14);
                plVar5[0x14] = 0;
                func_0x000107c4636c();
                func_0x000107c61170(lVar32);
                lVar32 = plVar5[0x14];
                if (puVar28 == (undefined *)0x0) {
                  lVar1 = plVar5[0x1b];
                  lVar15 = plVar5[0x1c];
                  lVar31 = plVar5[0x16];
                  func_0x000107c61174();
                  func_0x000107c5ed30();
                  func_0x000107c61170(lVar32);
                  func_0x000107c61654();
                  func_0x000107c6142c(lVar31);
                  func_0x00010006c090(lVar13,plVar14);
                  func_0x000107c61170(lVar23);
                  func_0x000101dc7a08(lVar18,cVar2);
                  func_0x000107c61430(lVar1,2);
                  func_0x000107c61574(lVar15);
                  (**(code **)(lVar19 + 8))(uVar4,lVar25);
                  func_0x000107c6142c(pcStack_98);
                  func_0x000107c615c0(uVar4);
                  goto LAB_102752e20;
                }
                func_0x000107c61174();
                func_0x00010006c090(lVar13,plVar14);
                UNRECOVERED_JUMPTABLE_00 = pcStack_98;
                func_0x000107c61558();
                if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
                  UNRECOVERED_JUMPTABLE_00 = pcStack_98 + 0x10;
                  pcStack_98 = (code *)0x0;
                  FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE_00 + 1,1);
                }
                uVar26 = *(ulong *)(pcStack_98 + 0x10);
                if (*(ulong *)(pcStack_98 + 0x18) >> 1 <= uVar26) {
                  pcStack_98 = (code *)(ulong)(1 < *(ulong *)(pcStack_98 + 0x18));
                  FUN_102752128(pcStack_98,uVar26 + 1,1);
                }
                lVar32 = plVar5[0x1a];
                lVar13 = plVar5[0x1b];
                *(ulong *)(pcStack_98 + 0x10) = uVar26 + 1;
                *(long *)(pcStack_98 + uVar26 * 0x18 + 0x20) = lVar32;
                *(long *)(pcStack_98 + uVar26 * 0x18 + 0x28) = lVar13;
                *(undefined **)(pcStack_98 + uVar26 * 0x18 + 0x30) = puVar28;
                func_0x000107c61170(lVar23);
              }
              func_0x000107c5ed4c(plVar5 + 10);
            } while (plVar5[0xd] != 0);
          }
          lVar32 = plVar5[0x1b];
          lVar23 = plVar5[0x1c];
          lVar13 = plVar5[0x17];
          lVar1 = plVar5[0x18];
          (**(code **)(lVar19 + 8))(uVar4,lVar25);
          func_0x000101dc7a08(lVar18,cVar2);
          func_0x000107c6142c(lVar32);
          func_0x000107c61574(lVar23);
          func_0x000107c615c0(uVar4);
          if (lVar1 + 1 == lVar13) {
            puVar28 = (undefined *)plVar5[0x16];
            goto LAB_102752d38;
          }
          uVar4 = plVar5[0x18] + 1;
          plVar5[0x18] = uVar4;
          plVar5[0x19] = (long)pcStack_98;
          puVar28 = (undefined *)plVar5[0x16];
        } while (uVar4 < *(ulong *)(puVar28 + 0x10));
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752c20);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    pcStack_98 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102752d38:
    func_0x000107c6142c(puVar28);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x000102752d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)plVar5[1])(pcStack_98);
      return pcStack_98;
    }
LAB_102752e94:
    func_0x000107c60e78();
    plVar5 = (long *)*plVar5;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar22 = *(long *)PTR____stack_chk_guard_11034bdc0;
      lVar18 = plVar5[0xe];
      cVar2 = (char)plVar5[0xf];
      if (cVar2 != '\x01') {
        plVar6 = plVar5 + 10;
        UNRECOVERED_JUMPTABLE_00 = (code *)0x0;
        func_0x000107c5ed50();
        lVar25 = *(long *)(UNRECOVERED_JUMPTABLE_00 + -8);
        lVar19 = *(long *)(lVar25 + 0x40);
        do {
          puVar28 = PTR___sypN_11034f1a8;
          uVar4 = lVar19 + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar4);
          func_0x000107c600f4(uVar4);
          func_0x000107c5ed4c(plVar6);
          pcStack_170 = (code *)plVar5[0x19];
          if (plVar5[0xd] != 0) {
            uVar12 = 0;
            FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
            do {
              while( true ) {
                plVar14 = plVar5 + 0x13;
                plVar17 = plVar6;
                func_0x000107c6147c(plVar14,plVar6,puVar28 + 8,uVar12,6);
                if (((ulong)plVar14 & 1) != 0) break;
                func_0x000107c5ed4c(plVar6);
                if (plVar5[0xd] == 0) goto LAB_102753140;
              }
              lVar23 = plVar5[0x13];
              func_0x000107c61434(plVar5[0x1b]);
              lVar32 = lVar23;
              func_0x000107c3eea8(lVar23);
              func_0x000107c61180();
              lVar13 = lVar32;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar32);
              puVar28 = PTR_PTR_1126b25c0;
              func_0x000107c610f8();
              lVar32 = lVar13;
              func_0x000107c5ee20(lVar13,plVar17);
              plVar5[0x14] = 0;
              func_0x000107c4636c();
              func_0x000107c61170(lVar32);
              lVar32 = plVar5[0x14];
              if (puVar28 == (undefined *)0x0) {
                lVar19 = plVar5[0x1b];
                lVar1 = plVar5[0x1c];
                lVar31 = plVar5[0x16];
                lVar15 = lVar32;
                func_0x000107c61174(lVar32);
                func_0x000107c5ed30(lVar32);
                func_0x000107c61170(lVar15);
                func_0x000107c61654();
                func_0x000107c6142c(lVar31);
                func_0x00010006c090(lVar13,plVar17);
                func_0x000107c61170(lVar23);
                func_0x000101dc7a08(lVar18,cVar2);
                func_0x000107c61430(lVar19,2);
                func_0x000107c61574(lVar1);
                (**(code **)(lVar25 + 8))(uVar4);
                func_0x000107c6142c(pcStack_170);
                func_0x000107c615c0(uVar4);
                goto LAB_102753268;
              }
              func_0x000107c61174(lVar32);
              func_0x00010006c090(lVar13,plVar17);
              UNRECOVERED_JUMPTABLE = pcStack_170;
              func_0x000107c61558();
              if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                UNRECOVERED_JUMPTABLE = pcStack_170 + 0x10;
                pcStack_170 = (code *)0x0;
                FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE + 1,1);
              }
              uVar26 = *(ulong *)(pcStack_170 + 0x10);
              if (*(ulong *)(pcStack_170 + 0x18) >> 1 <= uVar26) {
                UNRECOVERED_JUMPTABLE = (code *)(ulong)(1 < *(ulong *)(pcStack_170 + 0x18));
                FUN_102752128(UNRECOVERED_JUMPTABLE,uVar26 + 1,1,pcStack_170);
                pcStack_170 = UNRECOVERED_JUMPTABLE;
              }
              lVar32 = plVar5[0x1a];
              lVar13 = plVar5[0x1b];
              *(ulong *)(pcStack_170 + 0x10) = uVar26 + 1;
              *(long *)(pcStack_170 + uVar26 * 0x18 + 0x20) = lVar32;
              *(long *)(pcStack_170 + uVar26 * 0x18 + 0x28) = lVar13;
              *(undefined **)(pcStack_170 + uVar26 * 0x18 + 0x30) = puVar28;
              func_0x000107c61170(lVar23);
              func_0x000107c5ed4c(plVar6);
              puVar28 = PTR___sypN_11034f1a8;
            } while (plVar5[0xd] != 0);
          }
LAB_102753140:
          lVar32 = plVar5[0x1b];
          lVar23 = plVar5[0x1c];
          lVar13 = plVar5[0x17];
          lVar1 = plVar5[0x18];
          (**(code **)(lVar25 + 8))(uVar4,UNRECOVERED_JUMPTABLE_00);
          func_0x000101dc7a08(lVar18,cVar2);
          func_0x000107c6142c(lVar32);
          func_0x000107c61574(lVar23);
          func_0x000107c615c0(uVar4);
          if (lVar1 + 1 == lVar13) {
            UNRECOVERED_JUMPTABLE = (code *)plVar5[0x16];
            func_0x000107c6142c();
            UNRECOVERED_JUMPTABLE_00 = (code *)plVar5[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x0001027532f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)(pcStack_170);
              return pcStack_170;
            }
            goto LAB_102753420;
          }
          uVar4 = plVar5[0x18] + 1;
          plVar5[0x18] = uVar4;
          plVar5[0x19] = (long)pcStack_170;
          if (*(ulong *)(plVar5[0x16] + 0x10) <= uVar4) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102753420);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          lVar18 = plVar5[0x16] + uVar4 * 0x18;
          plVar5[0x1a] = *(long *)(lVar18 + 0x20);
          plVar5[0x1b] = *(long *)(lVar18 + 0x28);
          lVar18 = *(long *)(lVar18 + 0x30);
          plVar5[0x1c] = lVar18;
          func_0x000107c61434();
          func_0x000107c6157c(lVar18);
          func_0x000104888eec(plVar5 + 0x10);
          cVar2 = (char)plVar5[0x11];
          if (cVar2 == -1) {
            plVar5[7] = (long)(plVar5 + 0xe);
            plVar5[2] = (long)plVar5;
            plVar5[3] = (long)FUN_102752e98;
            plVar6 = plVar5 + 2;
            func_0x000107c61448(plVar6,0);
            UNRECOVERED_JUMPTABLE = (code *)&UNK_110544508;
            func_0x000107c613fc(&UNK_110544508,0x18,7);
            *(long **)(UNRECOVERED_JUMPTABLE + 0x10) = plVar6;
            UNRECOVERED_JUMPTABLE_00 = (code *)0x1;
            func_0x00010075a04c(0,1,FUN_1027536f8,UNRECOVERED_JUMPTABLE);
            func_0x000107c61574();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
LAB_107c61444:
              UNRECOVERED_JUMPTABLE_00 = (code *)(plVar5 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_102753420;
          }
          lVar18 = plVar5[0x10];
        } while (cVar2 != '\x01');
      }
      plVar5[0x12] = lVar18;
      iVar3 = 2;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x12;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar3 != 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(plVar5 + 0x12,UNRECOVERED_JUMPTABLE_00,PTR___ss5ErrorWS_11034ee10);
      }
      lVar18 = plVar5[0x1c];
      lVar25 = plVar5[0x19];
      lVar19 = plVar5[0x16];
      func_0x000107c6142c(plVar5[0x1b]);
      func_0x000107c61574(lVar18);
      func_0x000107c6142c(lVar19);
      func_0x000107c6142c(lVar25);
LAB_102753268:
      UNRECOVERED_JUMPTABLE = (code *)plVar5[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar22) {
                    /* WARNING: Could not recover jumptable at 0x0001027532a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
LAB_102753420:
      func_0x000107c60e78();
      uVar34 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8);
      uVar12 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
      uVar36 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
      uVar35 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x20) =
           *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8) = uVar34;
      *(undefined8 *)UNRECOVERED_JUMPTABLE_00 = uVar12;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18) = uVar36;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = uVar35;
      return UNRECOVERED_JUMPTABLE_00;
    }
    UNRECOVERED_JUMPTABLE_00 = FUN_102752f04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 102751f14; end: 102751f5b;  */

void FUN_102751f14(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000102751f58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102751f5c; end: 102751f7f;  */

void FUN_102751f5c(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  uVar1 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x28) = param_2[2];
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102751f80,0,0);
  return;
}



/* Entry: 102751f80; end: 102752087;  */

void FUN_102751f80(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  int *piVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  uVar5 = 0x112d38280;
  func_0x0001000285a8(0x112d38280,&UNK_10d901fc0);
  func_0x000107c61538();
  puVar6 = PTR_PTR_1126b1060;
  func_0x000107c610f8();
  func_0x000107c5fc48(uVar5,PTR___sSSN_11034da80);
  func_0x000107c47d08();
  *(undefined **)(unaff_x22 + 0x30) = puVar6;
  func_0x000107c61170(uVar5);
  piVar8 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar8;
  plVar7 = (long *)(ulong)(uint)piVar8[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_102752088;
                    /* WARNING: Could not recover jumptable at 0x000102752084. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))
            (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x18),uVar9,0,puVar6,
             uVar2,lVar3);
  return;
}



/* Entry: 102752088; end: 1027520f3;  */

void FUN_102752088(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x30);
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x40) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  func_0x000107c61170(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_1027520f4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001027520f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Entry: 1027520f4; end: 102752127;  */

void FUN_1027520f4(void)

{
  long unaff_x22;
  
  func_0x000107c614ac(*(undefined8 *)(unaff_x22 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000102752124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102752128; end: 102752243;  */

undefined * FUN_102752128(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x102752244);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar5 != 0) {
    puVar3 = (undefined *)0x112ebc008;
    func_0x0001000285a8(0x112ebc008,&UNK_10dad5778);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_1105444e0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c6142c(param_4);
  return puVar3;
}



/* Entry: 102752244; end: 102752267;  */

void FUN_102752244(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_102752268();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 102752268; end: 1027523b7;  */

undefined *
FUN_102752268(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1027523b8);
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
    puVar3 = (undefined *)0x112ebc010;
    func_0x0001000285a8(0x112ebc010,&UNK_10dad5780);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112ebc000;
    func_0x0001000285a8(0x112ebc000,&UNK_10dad5768);
    func_0x000107c6140c(puVar4,puVar1,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x18 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar7 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Entry: 1027523b8; end: 10275255b;  */

ulong FUN_1027523b8(ulong param_1,ulong param_2)

{
  char *pcVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  if (param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102752490);
      (*pcVar2)();
    }
    if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x102752494);
      (*pcVar2)();
    }
    param_1 = *(ulong *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    uVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c61494();
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
    uVar3 = param_1;
    func_0x000107c61494();
    if (uVar3 != 0) {
      return param_1;
    }
    func_0x000107c602fc(0x55);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    uVar4 = 0xd000000000000046;
  }
  func_0x000107c5fb78(uVar4,(ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  func_0x000107c5fb78(0xd000000000000016,0x800000010f0b9c10);
  func_0x000107c5fb78(0x756f662074756220,0xeb0000000020646e);
  func_0x000107c614f0(param_1);
  uVar4 = 0;
  func_0x000107c60714();
  func_0x000107c5fb78();
  func_0x000107c6142c(uVar4);
  func_0x000107c60454("Fatal error",0xb,2,0,0xe000000000000000,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10275255c);
  (*pcVar2)();
}



/* Entry: 10275255c; end: 1027525bf;  */

code * FUN_10275255c(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  long *unaff_x22;
  ulong uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  undefined8 uVar38;
  code *pcStack_170;
  code *pcStack_98;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  unaff_x22[0x15] = param_1;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
    UNRECOVERED_JUMPTABLE_00 = FUN_1027525c0;
  }
  else {
    func_0x000107c60e78();
    lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
    uVar24 = unaff_x22[0x15];
    if (uVar24 >> 0x3e == 0) {
      uVar30 = *(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar30 = uVar24 & 0xffffffffffffff8;
      if (0x7fffffffffffffff < uVar24) {
        uVar30 = uVar24;
      }
      func_0x000107c60480();
    }
    puVar32 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (uVar30 != 0) {
      uVar22 = 0;
      lVar19 = unaff_x22[0x15];
      puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
      puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
      do {
        if ((uVar24 & 0xc000000000000001) == 0) {
          if (*(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e68);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          uVar6 = *(ulong *)(lVar19 + 0x20 + uVar22 * 8);
          func_0x000107c615f0();
        }
        else {
          uVar6 = uVar22;
          FUN_102739830(uVar22,unaff_x22[0x15]);
        }
        if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e64);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        uVar22 = uVar22 + 1;
        uVar36 = uVar6;
        func_0x000107c442dc();
        func_0x000107c61180();
        uVar11 = 0x112ebbff8;
        func_0x0001000285a8(0x112ebbff8,&UNK_10dad5758);
        uVar7 = uVar36;
        func_0x000107c5fc54(uVar36,uVar11);
        func_0x000107c61170(uVar36);
        if (uVar7 >> 0x3e == 0) {
          uVar36 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
          if (uVar36 != 0) goto LAB_1027526e4;
LAB_10275288c:
          func_0x000107c615e8(uVar6);
          func_0x000107c6142c(uVar7);
          puVar34 = puVar33;
        }
        else {
          uVar36 = uVar7 & 0xffffffffffffff8;
          if (0x7fffffffffffffff < uVar7) {
            uVar36 = uVar7;
          }
          func_0x000107c60480();
          if (uVar36 == 0) goto LAB_10275288c;
LAB_1027526e4:
          FUN_102752244(0,uVar36 & ((long)uVar36 >> 0x3f ^ 0xffffffffffffffffU),0);
          if ((long)uVar36 < 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e74);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
          uVar27 = 0;
          do {
            uVar16 = uVar7;
            if ((uVar7 & 0xc000000000000001) == 0) {
              uVar23 = *(ulong *)(uVar7 + uVar27 * 8 + 0x20);
              func_0x000107c615f0(uVar23);
            }
            else {
              uVar23 = uVar27;
              FUN_1027523b8();
            }
            uVar8 = uVar6;
            func_0x000107c44fcc();
            func_0x000107c61180();
            uVar9 = uVar8;
            func_0x000107c44fcc();
            func_0x000107c61180();
            func_0x000107c615e8(uVar8);
            uVar8 = uVar9;
            func_0x000107c5faec();
            func_0x000107c61170(uVar9);
            uVar9 = uVar23;
            func_0x000107c442e0();
            func_0x000107c61180();
            uVar10 = uVar9;
            func_0x000103edf20c();
            func_0x000107c61170(uVar9);
            func_0x000107c615e8(uVar23);
            uVar23 = *(ulong *)(puVar33 + 0x10);
            if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar23) {
              FUN_102752244(1 < *(ulong *)(puVar33 + 0x18),uVar23 + 1,1);
            }
            uVar27 = uVar27 + 1;
            *(ulong *)(puVar33 + 0x10) = uVar23 + 1;
            *(ulong *)(puVar33 + uVar23 * 0x18 + 0x20) = uVar8;
            *(ulong *)(puVar33 + uVar23 * 0x18 + 0x28) = uVar16;
            *(ulong *)(puVar33 + uVar23 * 0x18 + 0x30) = uVar10;
          } while (uVar36 != uVar27);
          func_0x000107c615e8(uVar6);
          func_0x000107c6142c(uVar7);
          puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
        }
        uVar6 = *(ulong *)(puVar33 + 0x10);
        lVar28 = *(long *)(puVar31 + 0x10);
        if (SCARRY8(lVar28,uVar6)) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e6c);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        puVar32 = puVar31;
        func_0x000107c61558();
        if (((int)puVar32 == 0) ||
           (uVar36 = *(ulong *)(puVar31 + 0x18) >> 1, (long)uVar36 < (long)(lVar28 + uVar6))) {
          FUN_102752268();
          uVar36 = *(ulong *)(puVar32 + 0x18) >> 1;
          puVar31 = puVar32;
          if (*(long *)(puVar33 + 0x10) != 0) goto LAB_102752908;
LAB_102752640:
          func_0x000107c6142c(puVar33);
          puVar32 = puVar31;
          if (uVar6 != 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e70);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
        }
        else {
          puVar32 = puVar31;
          if (*(long *)(puVar33 + 0x10) == 0) goto LAB_102752640;
LAB_102752908:
          lVar28 = *(long *)(puVar32 + 0x10);
          if (uVar36 - lVar28 < uVar6) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e78);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          uVar11 = 0x112ebc000;
          func_0x0001000285a8(0x112ebc000,&UNK_10dad5768);
          func_0x000107c6140c(puVar32 + lVar28 * 0x18 + 0x20,puVar33 + 0x20,uVar6,uVar11);
          func_0x000107c6142c(puVar33);
          if (uVar6 != 0) {
            if (SCARRY8(*(long *)(puVar32 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
              UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e7c);
              (*UNRECOVERED_JUMPTABLE_00)();
            }
            *(ulong *)(puVar32 + 0x10) = *(long *)(puVar32 + 0x10) + uVar6;
          }
        }
        puVar31 = puVar32;
        puVar33 = puVar34;
      } while (uVar22 != uVar30);
    }
    unaff_x22[0x16] = (long)puVar32;
    lVar19 = *(long *)(puVar32 + 0x10);
    unaff_x22[0x17] = lVar19;
    puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
    if (lVar19 != 0) {
      unaff_x22[0x18] = 0;
      unaff_x22[0x19] = (long)puVar31;
      puVar31 = PTR___sypN_11034f1a8;
      if (*(long *)(puVar32 + 0x10) != 0) {
        uVar24 = 0;
        do {
          unaff_x22[0x1a] = *(long *)(puVar32 + uVar24 * 0x18 + 0x20);
          unaff_x22[0x1b] = *(long *)(puVar32 + uVar24 * 0x18 + 0x28);
          lVar19 = *(long *)(puVar32 + uVar24 * 0x18 + 0x30);
          unaff_x22[0x1c] = lVar19;
          func_0x000107c61434();
          func_0x000107c6157c(lVar19);
          func_0x000104888eec(unaff_x22 + 0x10);
          cVar4 = (char)unaff_x22[0x11];
          if (cVar4 == -1) {
            unaff_x22[7] = (long)(unaff_x22 + 0xe);
            unaff_x22[2] = (long)unaff_x22;
            unaff_x22[3] = (long)FUN_102752e98;
            plVar13 = unaff_x22 + 2;
            func_0x000107c61448(plVar13,0);
            puVar32 = &UNK_110544508;
            func_0x000107c613fc(&UNK_110544508,0x18,7);
            *(long **)(puVar32 + 0x10) = plVar13;
            func_0x00010075a04c(0,1,FUN_1027536f8,puVar32);
            func_0x000107c61574(puVar32);
            if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) goto LAB_102752e94;
            goto LAB_107c61444;
          }
          lVar19 = unaff_x22[0x10];
          if (cVar4 == '\x01') {
            unaff_x22[0x12] = lVar19;
            iVar5 = 2;
            func_0x000100029b9c(2,0x12,0,0);
            if (iVar5 != 0) {
              uVar11 = 0x112d393f0;
              func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
              func_0x000107c61658(unaff_x22 + 0x12,uVar11,PTR___ss5ErrorWS_11034ee10);
            }
            lVar19 = unaff_x22[0x1c];
            lVar28 = unaff_x22[0x19];
            lVar20 = unaff_x22[0x16];
            func_0x000107c6142c(unaff_x22[0x1b]);
            func_0x000107c61574(lVar19);
            func_0x000107c6142c(lVar20);
            func_0x000107c6142c(lVar28);
LAB_102752e20:
            UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000102752e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)();
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_102752e94;
          }
          lVar28 = 0;
          func_0x000107c5ed50();
          lVar20 = *(long *)(lVar28 + -8);
          uVar24 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8();
          func_0x000107c600f4(uVar24);
          func_0x000107c5ed4c(unaff_x22 + 10);
          pcStack_98 = (code *)unaff_x22[0x19];
          if (unaff_x22[0xd] != 0) {
            uVar11 = 0;
            FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
            do {
              plVar13 = unaff_x22 + 0x13;
              plVar17 = unaff_x22 + 10;
              func_0x000107c6147c(plVar13,plVar17,puVar31 + 8,uVar11,6);
              if (((ulong)plVar13 & 1) != 0) {
                lVar25 = unaff_x22[0x13];
                func_0x000107c61434(unaff_x22[0x1b]);
                lVar21 = lVar25;
                func_0x000107c3eea8(lVar25);
                func_0x000107c61180();
                lVar12 = lVar21;
                func_0x000107c5ee30();
                func_0x000107c61170(lVar21);
                puVar32 = PTR_PTR_1126b25c0;
                func_0x000107c610f8();
                lVar21 = lVar12;
                func_0x000107c5ee20(lVar12,plVar17);
                unaff_x22[0x14] = 0;
                func_0x000107c4636c();
                func_0x000107c61170(lVar21);
                lVar21 = unaff_x22[0x14];
                if (puVar32 == (undefined *)0x0) {
                  lVar1 = unaff_x22[0x1b];
                  lVar2 = unaff_x22[0x1c];
                  lVar37 = unaff_x22[0x16];
                  func_0x000107c61174();
                  func_0x000107c5ed30();
                  func_0x000107c61170(lVar21);
                  func_0x000107c61654();
                  func_0x000107c6142c(lVar37);
                  func_0x00010006c090(lVar12,plVar17);
                  func_0x000107c61170(lVar25);
                  func_0x000101dc7a08(lVar19,cVar4);
                  func_0x000107c61430(lVar1,2);
                  func_0x000107c61574(lVar2);
                  (**(code **)(lVar20 + 8))(uVar24,lVar28);
                  func_0x000107c6142c(pcStack_98);
                  func_0x000107c615c0(uVar24);
                  goto LAB_102752e20;
                }
                func_0x000107c61174();
                func_0x00010006c090(lVar12,plVar17);
                UNRECOVERED_JUMPTABLE_00 = pcStack_98;
                func_0x000107c61558();
                if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
                  UNRECOVERED_JUMPTABLE_00 = pcStack_98 + 0x10;
                  pcStack_98 = (code *)0x0;
                  FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE_00 + 1,1);
                }
                uVar30 = *(ulong *)(pcStack_98 + 0x10);
                if (*(ulong *)(pcStack_98 + 0x18) >> 1 <= uVar30) {
                  pcStack_98 = (code *)(ulong)(1 < *(ulong *)(pcStack_98 + 0x18));
                  FUN_102752128(pcStack_98,uVar30 + 1,1);
                }
                lVar21 = unaff_x22[0x1a];
                lVar12 = unaff_x22[0x1b];
                *(ulong *)(pcStack_98 + 0x10) = uVar30 + 1;
                *(long *)(pcStack_98 + uVar30 * 0x18 + 0x20) = lVar21;
                *(long *)(pcStack_98 + uVar30 * 0x18 + 0x28) = lVar12;
                *(undefined **)(pcStack_98 + uVar30 * 0x18 + 0x30) = puVar32;
                func_0x000107c61170(lVar25);
              }
              func_0x000107c5ed4c(unaff_x22 + 10);
            } while (unaff_x22[0xd] != 0);
          }
          lVar21 = unaff_x22[0x1b];
          lVar25 = unaff_x22[0x1c];
          lVar12 = unaff_x22[0x17];
          lVar1 = unaff_x22[0x18];
          (**(code **)(lVar20 + 8))(uVar24,lVar28);
          func_0x000101dc7a08(lVar19,cVar4);
          func_0x000107c6142c(lVar21);
          func_0x000107c61574(lVar25);
          func_0x000107c615c0(uVar24);
          if (lVar1 + 1 == lVar12) {
            puVar32 = (undefined *)unaff_x22[0x16];
            goto LAB_102752d38;
          }
          uVar24 = unaff_x22[0x18] + 1;
          unaff_x22[0x18] = uVar24;
          unaff_x22[0x19] = (long)pcStack_98;
          puVar32 = (undefined *)unaff_x22[0x16];
        } while (uVar24 < *(ulong *)(puVar32 + 0x10));
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752c20);
      (*UNRECOVERED_JUMPTABLE_00)();
    }
    pcStack_98 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102752d38:
    func_0x000107c6142c(puVar32);
    if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000102752d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)unaff_x22[1])(pcStack_98);
      return pcStack_98;
    }
LAB_102752e94:
    func_0x000107c60e78();
    unaff_x22 = (long *)*unaff_x22;
    if (*(long *)PTR____stack_chk_guard_11034bdc0 != *(long *)PTR____stack_chk_guard_11034bdc0) {
      func_0x000107c60e78();
      lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
      uVar11 = unaff_x22[0xe];
      cVar4 = *(char *)(unaff_x22 + 0xf);
      if (cVar4 != '\x01') {
        lVar20 = (long)(unaff_x22 + 10);
        UNRECOVERED_JUMPTABLE_00 = (code *)0x0;
        func_0x000107c5ed50();
        lVar19 = *(long *)(UNRECOVERED_JUMPTABLE_00 + -8);
        lVar28 = *(long *)(lVar19 + 0x40);
        do {
          puVar32 = PTR___sypN_11034f1a8;
          uVar24 = lVar28 + 0xfU & 0xfffffffffffffff0;
          func_0x000107c615b8(uVar24);
          func_0x000107c600f4(uVar24);
          func_0x000107c5ed4c(lVar20);
          pcStack_170 = (code *)unaff_x22[0x19];
          if (unaff_x22[0xd] != 0) {
            uVar14 = 0;
            FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
            do {
              while( true ) {
                uVar30 = (ulong)(unaff_x22 + 0x13);
                lVar21 = lVar20;
                func_0x000107c6147c(uVar30,lVar20,puVar32 + 8,uVar14,6);
                if ((uVar30 & 1) != 0) break;
                func_0x000107c5ed4c(lVar20);
                if (unaff_x22[0xd] == 0) goto LAB_102753140;
              }
              uVar26 = unaff_x22[0x13];
              func_0x000107c61434(unaff_x22[0x1b]);
              uVar29 = uVar26;
              func_0x000107c3eea8(uVar26);
              func_0x000107c61180();
              uVar38 = uVar29;
              func_0x000107c5ee30();
              func_0x000107c61170(uVar29);
              puVar32 = PTR_PTR_1126b25c0;
              func_0x000107c610f8();
              uVar29 = uVar38;
              func_0x000107c5ee20(uVar38,lVar21);
              unaff_x22[0x14] = 0;
              func_0x000107c4636c();
              func_0x000107c61170(uVar29);
              uVar29 = unaff_x22[0x14];
              if (puVar32 == (undefined *)0x0) {
                uVar14 = unaff_x22[0x1b];
                uVar3 = unaff_x22[0x1c];
                uVar35 = unaff_x22[0x16];
                uVar15 = uVar29;
                func_0x000107c61174(uVar29);
                func_0x000107c5ed30(uVar29);
                func_0x000107c61170(uVar15);
                func_0x000107c61654();
                func_0x000107c6142c(uVar35);
                func_0x00010006c090(uVar38,lVar21);
                func_0x000107c61170(uVar26);
                func_0x000101dc7a08(uVar11,cVar4);
                func_0x000107c61430(uVar14,2);
                func_0x000107c61574(uVar3);
                (**(code **)(lVar19 + 8))(uVar24);
                func_0x000107c6142c(pcStack_170);
                func_0x000107c615c0(uVar24);
                goto LAB_102753268;
              }
              func_0x000107c61174(uVar29);
              func_0x00010006c090(uVar38,lVar21);
              UNRECOVERED_JUMPTABLE = pcStack_170;
              func_0x000107c61558();
              if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
                UNRECOVERED_JUMPTABLE = pcStack_170 + 0x10;
                pcStack_170 = (code *)0x0;
                FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE + 1,1);
              }
              uVar30 = *(ulong *)(pcStack_170 + 0x10);
              if (*(ulong *)(pcStack_170 + 0x18) >> 1 <= uVar30) {
                UNRECOVERED_JUMPTABLE = (code *)(ulong)(1 < *(ulong *)(pcStack_170 + 0x18));
                FUN_102752128(UNRECOVERED_JUMPTABLE,uVar30 + 1,1,pcStack_170);
                pcStack_170 = UNRECOVERED_JUMPTABLE;
              }
              uVar29 = unaff_x22[0x1a];
              uVar38 = unaff_x22[0x1b];
              *(ulong *)(pcStack_170 + 0x10) = uVar30 + 1;
              *(undefined8 *)(pcStack_170 + uVar30 * 0x18 + 0x20) = uVar29;
              *(undefined8 *)(pcStack_170 + uVar30 * 0x18 + 0x28) = uVar38;
              *(undefined **)(pcStack_170 + uVar30 * 0x18 + 0x30) = puVar32;
              func_0x000107c61170(uVar26);
              func_0x000107c5ed4c(lVar20);
              puVar32 = PTR___sypN_11034f1a8;
            } while (unaff_x22[0xd] != 0);
          }
LAB_102753140:
          uVar14 = unaff_x22[0x1b];
          uVar29 = unaff_x22[0x1c];
          lVar21 = unaff_x22[0x17];
          lVar12 = unaff_x22[0x18];
          (**(code **)(lVar19 + 8))(uVar24,UNRECOVERED_JUMPTABLE_00);
          func_0x000101dc7a08(uVar11,cVar4);
          func_0x000107c6142c(uVar14);
          func_0x000107c61574(uVar29);
          func_0x000107c615c0(uVar24);
          if (lVar12 + 1 == lVar21) {
            UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x16];
            func_0x000107c6142c();
            UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x0001027532f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*UNRECOVERED_JUMPTABLE_00)(pcStack_170);
              return pcStack_170;
            }
            goto LAB_102753420;
          }
          uVar24 = unaff_x22[0x18] + 1;
          unaff_x22[0x18] = uVar24;
          unaff_x22[0x19] = (long)pcStack_170;
          if (*(ulong *)(unaff_x22[0x16] + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102753420);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          lVar21 = unaff_x22[0x16] + uVar24 * 0x18;
          unaff_x22[0x1a] = *(undefined8 *)(lVar21 + 0x20);
          unaff_x22[0x1b] = *(undefined8 *)(lVar21 + 0x28);
          uVar11 = *(undefined8 *)(lVar21 + 0x30);
          unaff_x22[0x1c] = uVar11;
          func_0x000107c61434();
          func_0x000107c6157c(uVar11);
          func_0x000104888eec(unaff_x22 + 0x10);
          cVar4 = *(char *)(unaff_x22 + 0x11);
          if (cVar4 == -1) {
            unaff_x22[7] = (long)(unaff_x22 + 0xe);
            unaff_x22[2] = (long)unaff_x22;
            unaff_x22[3] = (long)FUN_102752e98;
            lVar19 = (long)(unaff_x22 + 2);
            func_0x000107c61448(lVar19,0);
            UNRECOVERED_JUMPTABLE = (code *)&UNK_110544508;
            func_0x000107c613fc(&UNK_110544508,0x18,7);
            *(long *)(UNRECOVERED_JUMPTABLE + 0x10) = lVar19;
            UNRECOVERED_JUMPTABLE_00 = (code *)0x1;
            func_0x00010075a04c(0,1,FUN_1027536f8,UNRECOVERED_JUMPTABLE);
            func_0x000107c61574();
            if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
LAB_107c61444:
              UNRECOVERED_JUMPTABLE_00 = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_00);
              return UNRECOVERED_JUMPTABLE_00;
            }
            goto LAB_102753420;
          }
          uVar11 = unaff_x22[0x10];
        } while (cVar4 != '\x01');
      }
      unaff_x22[0x12] = uVar11;
      iVar5 = 2;
      UNRECOVERED_JUMPTABLE_00 = (code *)0x12;
      func_0x000100029b9c(2,0x12,0,0);
      if (iVar5 != 0) {
        UNRECOVERED_JUMPTABLE_00 = (code *)0x112d393f0;
        func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
        func_0x000107c61658(unaff_x22 + 0x12,UNRECOVERED_JUMPTABLE_00,PTR___ss5ErrorWS_11034ee10);
      }
      uVar11 = unaff_x22[0x1c];
      uVar14 = unaff_x22[0x19];
      uVar29 = unaff_x22[0x16];
      func_0x000107c6142c(unaff_x22[0x1b]);
      func_0x000107c61574(uVar11);
      func_0x000107c6142c(uVar29);
      func_0x000107c6142c(uVar14);
LAB_102753268:
      UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
      if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x0001027532a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)();
        return UNRECOVERED_JUMPTABLE;
      }
LAB_102753420:
      func_0x000107c60e78();
      uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8);
      uVar11 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
      uVar38 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
      uVar29 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x20) =
           *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8) = uVar14;
      *(undefined8 *)UNRECOVERED_JUMPTABLE_00 = uVar11;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18) = uVar38;
      *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = uVar29;
      return UNRECOVERED_JUMPTABLE_00;
    }
    UNRECOVERED_JUMPTABLE_00 = FUN_102752f04;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(UNRECOVERED_JUMPTABLE_00,0,0);
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 1027525c0; end: 102752e97;  */

code * FUN_1027525c0(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  char cVar4;
  code *UNRECOVERED_JUMPTABLE_00;
  int iVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long *plVar13;
  undefined8 uVar14;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  undefined8 uVar29;
  long *unaff_x22;
  ulong uVar30;
  undefined *puVar31;
  undefined *puVar32;
  undefined *puVar33;
  undefined *puVar34;
  undefined8 uVar35;
  ulong uVar36;
  long lVar37;
  undefined8 uVar38;
  code *pcStack_150;
  code *pcStack_78;
  
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar24 = unaff_x22[0x15];
  if (uVar24 >> 0x3e == 0) {
    uVar30 = *(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar30 = uVar24 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar24) {
      uVar30 = uVar24;
    }
    func_0x000107c60480();
  }
  puVar32 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (uVar30 != 0) {
    uVar22 = 0;
    lVar19 = unaff_x22[0x15];
    puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
    puVar33 = PTR___swiftEmptyArrayStorage_11034f1c8;
    do {
      if ((uVar24 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar24 & 0xffffffffffffff8) + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e68);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        uVar6 = *(ulong *)(lVar19 + 0x20 + uVar22 * 8);
        func_0x000107c615f0();
      }
      else {
        uVar6 = uVar22;
        FUN_102739830(uVar22,unaff_x22[0x15]);
      }
      if (SCARRY8(uVar22,1)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e64);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      uVar22 = uVar22 + 1;
      uVar36 = uVar6;
      func_0x000107c442dc();
      func_0x000107c61180();
      uVar11 = 0x112ebbff8;
      func_0x0001000285a8(0x112ebbff8,&UNK_10dad5758);
      uVar7 = uVar36;
      func_0x000107c5fc54(uVar36,uVar11);
      func_0x000107c61170(uVar36);
      if (uVar7 >> 0x3e == 0) {
        uVar36 = *(ulong *)((uVar7 & 0xffffffffffffff8) + 0x10);
        if (uVar36 != 0) goto LAB_1027526e4;
LAB_10275288c:
        func_0x000107c615e8(uVar6);
        func_0x000107c6142c(uVar7);
        puVar34 = puVar33;
      }
      else {
        uVar36 = uVar7 & 0xffffffffffffff8;
        if (0x7fffffffffffffff < uVar7) {
          uVar36 = uVar7;
        }
        func_0x000107c60480();
        if (uVar36 == 0) goto LAB_10275288c;
LAB_1027526e4:
        FUN_102752244(0,uVar36 & ((long)uVar36 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar36 < 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e74);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        func_0x0001000285a8(0x112d55e78,&UNK_10d91cd60);
        uVar27 = 0;
        do {
          uVar16 = uVar7;
          if ((uVar7 & 0xc000000000000001) == 0) {
            uVar23 = *(ulong *)(uVar7 + uVar27 * 8 + 0x20);
            func_0x000107c615f0(uVar23);
          }
          else {
            uVar23 = uVar27;
            FUN_1027523b8();
          }
          uVar8 = uVar6;
          func_0x000107c44fcc();
          func_0x000107c61180();
          uVar9 = uVar8;
          func_0x000107c44fcc();
          func_0x000107c61180();
          func_0x000107c615e8(uVar8);
          uVar8 = uVar9;
          func_0x000107c5faec();
          func_0x000107c61170(uVar9);
          uVar9 = uVar23;
          func_0x000107c442e0();
          func_0x000107c61180();
          uVar10 = uVar9;
          func_0x000103edf20c();
          func_0x000107c61170(uVar9);
          func_0x000107c615e8(uVar23);
          uVar23 = *(ulong *)(puVar33 + 0x10);
          if (*(ulong *)(puVar33 + 0x18) >> 1 <= uVar23) {
            FUN_102752244(1 < *(ulong *)(puVar33 + 0x18),uVar23 + 1,1);
          }
          uVar27 = uVar27 + 1;
          *(ulong *)(puVar33 + 0x10) = uVar23 + 1;
          *(ulong *)(puVar33 + uVar23 * 0x18 + 0x20) = uVar8;
          *(ulong *)(puVar33 + uVar23 * 0x18 + 0x28) = uVar16;
          *(ulong *)(puVar33 + uVar23 * 0x18 + 0x30) = uVar10;
        } while (uVar36 != uVar27);
        func_0x000107c615e8(uVar6);
        func_0x000107c6142c(uVar7);
        puVar34 = PTR___swiftEmptyArrayStorage_11034f1c8;
      }
      uVar6 = *(ulong *)(puVar33 + 0x10);
      lVar28 = *(long *)(puVar31 + 0x10);
      if (SCARRY8(lVar28,uVar6)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e6c);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      puVar32 = puVar31;
      func_0x000107c61558();
      if (((int)puVar32 == 0) ||
         (uVar36 = *(ulong *)(puVar31 + 0x18) >> 1, (long)uVar36 < (long)(lVar28 + uVar6))) {
        FUN_102752268();
        uVar36 = *(ulong *)(puVar32 + 0x18) >> 1;
        puVar31 = puVar32;
        if (*(long *)(puVar33 + 0x10) != 0) goto LAB_102752908;
LAB_102752640:
        func_0x000107c6142c(puVar33);
        puVar32 = puVar31;
        if (uVar6 != 0) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e70);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
      }
      else {
        puVar32 = puVar31;
        if (*(long *)(puVar33 + 0x10) == 0) goto LAB_102752640;
LAB_102752908:
        lVar28 = *(long *)(puVar32 + 0x10);
        if (uVar36 - lVar28 < uVar6) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e78);
          (*UNRECOVERED_JUMPTABLE_00)();
        }
        uVar11 = 0x112ebc000;
        func_0x0001000285a8(0x112ebc000,&UNK_10dad5768);
        func_0x000107c6140c(puVar32 + lVar28 * 0x18 + 0x20,puVar33 + 0x20,uVar6,uVar11);
        func_0x000107c6142c(puVar33);
        if (uVar6 != 0) {
          if (SCARRY8(*(long *)(puVar32 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752e7c);
            (*UNRECOVERED_JUMPTABLE_00)();
          }
          *(ulong *)(puVar32 + 0x10) = *(long *)(puVar32 + 0x10) + uVar6;
        }
      }
      puVar31 = puVar32;
      puVar33 = puVar34;
    } while (uVar22 != uVar30);
  }
  unaff_x22[0x16] = (long)puVar32;
  lVar19 = *(long *)(puVar32 + 0x10);
  unaff_x22[0x17] = lVar19;
  puVar31 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (lVar19 != 0) {
    unaff_x22[0x18] = 0;
    unaff_x22[0x19] = (long)puVar31;
    puVar31 = PTR___sypN_11034f1a8;
    if (*(long *)(puVar32 + 0x10) != 0) {
      uVar24 = 0;
      do {
        unaff_x22[0x1a] = *(long *)(puVar32 + uVar24 * 0x18 + 0x20);
        unaff_x22[0x1b] = *(long *)(puVar32 + uVar24 * 0x18 + 0x28);
        lVar19 = *(long *)(puVar32 + uVar24 * 0x18 + 0x30);
        unaff_x22[0x1c] = lVar19;
        func_0x000107c61434();
        func_0x000107c6157c(lVar19);
        func_0x000104888eec(unaff_x22 + 0x10);
        cVar4 = (char)unaff_x22[0x11];
        if (cVar4 == -1) {
          unaff_x22[7] = (long)(unaff_x22 + 0xe);
          unaff_x22[2] = (long)unaff_x22;
          unaff_x22[3] = (long)FUN_102752e98;
          plVar13 = unaff_x22 + 2;
          func_0x000107c61448(plVar13,0);
          puVar32 = &UNK_110544508;
          func_0x000107c613fc(&UNK_110544508,0x18,7);
          *(long **)(puVar32 + 0x10) = plVar13;
          func_0x00010075a04c(0,1,FUN_1027536f8,puVar32);
          func_0x000107c61574(puVar32);
          if (*(long *)PTR____stack_chk_guard_11034bdc0 != lVar18) goto LAB_102752e94;
          goto LAB_107c61444;
        }
        lVar19 = unaff_x22[0x10];
        if (cVar4 == '\x01') {
          unaff_x22[0x12] = lVar19;
          iVar5 = 2;
          func_0x000100029b9c(2,0x12,0,0);
          if (iVar5 != 0) {
            uVar11 = 0x112d393f0;
            func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
            func_0x000107c61658(unaff_x22 + 0x12,uVar11,PTR___ss5ErrorWS_11034ee10);
          }
          lVar19 = unaff_x22[0x1c];
          lVar28 = unaff_x22[0x19];
          lVar20 = unaff_x22[0x16];
          func_0x000107c6142c(unaff_x22[0x1b]);
          func_0x000107c61574(lVar19);
          func_0x000107c6142c(lVar20);
          func_0x000107c6142c(lVar28);
LAB_102752e20:
          UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
          if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000102752e5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*UNRECOVERED_JUMPTABLE_00)();
            return UNRECOVERED_JUMPTABLE_00;
          }
          goto LAB_102752e94;
        }
        lVar28 = 0;
        func_0x000107c5ed50();
        lVar20 = *(long *)(lVar28 + -8);
        uVar24 = *(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0;
        func_0x000107c615b8();
        func_0x000107c600f4(uVar24);
        func_0x000107c5ed4c(unaff_x22 + 10);
        pcStack_78 = (code *)unaff_x22[0x19];
        if (unaff_x22[0xd] != 0) {
          uVar11 = 0;
          FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
          do {
            plVar13 = unaff_x22 + 0x13;
            plVar17 = unaff_x22 + 10;
            func_0x000107c6147c(plVar13,plVar17,puVar31 + 8,uVar11,6);
            if (((ulong)plVar13 & 1) != 0) {
              lVar25 = unaff_x22[0x13];
              func_0x000107c61434(unaff_x22[0x1b]);
              lVar21 = lVar25;
              func_0x000107c3eea8(lVar25);
              func_0x000107c61180();
              lVar12 = lVar21;
              func_0x000107c5ee30();
              func_0x000107c61170(lVar21);
              puVar32 = PTR_PTR_1126b25c0;
              func_0x000107c610f8();
              lVar21 = lVar12;
              func_0x000107c5ee20(lVar12,plVar17);
              unaff_x22[0x14] = 0;
              func_0x000107c4636c();
              func_0x000107c61170(lVar21);
              lVar21 = unaff_x22[0x14];
              if (puVar32 == (undefined *)0x0) {
                lVar1 = unaff_x22[0x1b];
                lVar2 = unaff_x22[0x1c];
                lVar37 = unaff_x22[0x16];
                func_0x000107c61174();
                func_0x000107c5ed30();
                func_0x000107c61170(lVar21);
                func_0x000107c61654();
                func_0x000107c6142c(lVar37);
                func_0x00010006c090(lVar12,plVar17);
                func_0x000107c61170(lVar25);
                func_0x000101dc7a08(lVar19,cVar4);
                func_0x000107c61430(lVar1,2);
                func_0x000107c61574(lVar2);
                (**(code **)(lVar20 + 8))(uVar24,lVar28);
                func_0x000107c6142c(pcStack_78);
                func_0x000107c615c0(uVar24);
                goto LAB_102752e20;
              }
              func_0x000107c61174();
              func_0x00010006c090(lVar12,plVar17);
              UNRECOVERED_JUMPTABLE_00 = pcStack_78;
              func_0x000107c61558();
              if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
                UNRECOVERED_JUMPTABLE_00 = pcStack_78 + 0x10;
                pcStack_78 = (code *)0x0;
                FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE_00 + 1,1);
              }
              uVar30 = *(ulong *)(pcStack_78 + 0x10);
              if (*(ulong *)(pcStack_78 + 0x18) >> 1 <= uVar30) {
                pcStack_78 = (code *)(ulong)(1 < *(ulong *)(pcStack_78 + 0x18));
                FUN_102752128(pcStack_78,uVar30 + 1,1);
              }
              lVar21 = unaff_x22[0x1a];
              lVar12 = unaff_x22[0x1b];
              *(ulong *)(pcStack_78 + 0x10) = uVar30 + 1;
              *(long *)(pcStack_78 + uVar30 * 0x18 + 0x20) = lVar21;
              *(long *)(pcStack_78 + uVar30 * 0x18 + 0x28) = lVar12;
              *(undefined **)(pcStack_78 + uVar30 * 0x18 + 0x30) = puVar32;
              func_0x000107c61170(lVar25);
            }
            func_0x000107c5ed4c(unaff_x22 + 10);
          } while (unaff_x22[0xd] != 0);
        }
        lVar21 = unaff_x22[0x1b];
        lVar25 = unaff_x22[0x1c];
        lVar12 = unaff_x22[0x17];
        lVar1 = unaff_x22[0x18];
        (**(code **)(lVar20 + 8))(uVar24,lVar28);
        func_0x000101dc7a08(lVar19,cVar4);
        func_0x000107c6142c(lVar21);
        func_0x000107c61574(lVar25);
        func_0x000107c615c0(uVar24);
        if (lVar1 + 1 == lVar12) {
          puVar32 = (undefined *)unaff_x22[0x16];
          goto LAB_102752d38;
        }
        uVar24 = unaff_x22[0x18] + 1;
        unaff_x22[0x18] = uVar24;
        unaff_x22[0x19] = (long)pcStack_78;
        puVar32 = (undefined *)unaff_x22[0x16];
      } while (uVar24 < *(ulong *)(puVar32 + 0x10));
    }
                    /* WARNING: Does not return */
    UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102752c20);
    (*UNRECOVERED_JUMPTABLE_00)();
  }
  pcStack_78 = (code *)PTR___swiftEmptyArrayStorage_11034f1c8;
LAB_102752d38:
  func_0x000107c6142c(puVar32);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x000102752d80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)unaff_x22[1])(pcStack_78);
    return pcStack_78;
  }
LAB_102752e94:
  func_0x000107c60e78();
  unaff_x22 = (long *)*unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    UNRECOVERED_JUMPTABLE_00 = FUN_102752f04;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102752f04,0,0);
    return UNRECOVERED_JUMPTABLE_00;
  }
  func_0x000107c60e78();
  lVar18 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar11 = unaff_x22[0xe];
  cVar4 = *(char *)(unaff_x22 + 0xf);
  if (cVar4 != '\x01') {
    lVar20 = (long)(unaff_x22 + 10);
    UNRECOVERED_JUMPTABLE_00 = (code *)0x0;
    func_0x000107c5ed50();
    lVar19 = *(long *)(UNRECOVERED_JUMPTABLE_00 + -8);
    lVar28 = *(long *)(lVar19 + 0x40);
    do {
      puVar32 = PTR___sypN_11034f1a8;
      uVar24 = lVar28 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar24);
      func_0x000107c600f4(uVar24);
      func_0x000107c5ed4c(lVar20);
      pcStack_150 = (code *)unaff_x22[0x19];
      if (unaff_x22[0xd] != 0) {
        uVar14 = 0;
        FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
        do {
          while( true ) {
            uVar30 = (ulong)(unaff_x22 + 0x13);
            lVar21 = lVar20;
            func_0x000107c6147c(uVar30,lVar20,puVar32 + 8,uVar14,6);
            if ((uVar30 & 1) != 0) break;
            func_0x000107c5ed4c(lVar20);
            if (unaff_x22[0xd] == 0) goto LAB_102753140;
          }
          uVar26 = unaff_x22[0x13];
          func_0x000107c61434(unaff_x22[0x1b]);
          uVar29 = uVar26;
          func_0x000107c3eea8(uVar26);
          func_0x000107c61180();
          uVar38 = uVar29;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar29);
          puVar32 = PTR_PTR_1126b25c0;
          func_0x000107c610f8();
          uVar29 = uVar38;
          func_0x000107c5ee20(uVar38,lVar21);
          unaff_x22[0x14] = 0;
          func_0x000107c4636c();
          func_0x000107c61170(uVar29);
          uVar29 = unaff_x22[0x14];
          if (puVar32 == (undefined *)0x0) {
            uVar14 = unaff_x22[0x1b];
            uVar3 = unaff_x22[0x1c];
            uVar35 = unaff_x22[0x16];
            uVar15 = uVar29;
            func_0x000107c61174(uVar29);
            func_0x000107c5ed30(uVar29);
            func_0x000107c61170(uVar15);
            func_0x000107c61654();
            func_0x000107c6142c(uVar35);
            func_0x00010006c090(uVar38,lVar21);
            func_0x000107c61170(uVar26);
            func_0x000101dc7a08(uVar11,cVar4);
            func_0x000107c61430(uVar14,2);
            func_0x000107c61574(uVar3);
            (**(code **)(lVar19 + 8))(uVar24);
            func_0x000107c6142c(pcStack_150);
            func_0x000107c615c0(uVar24);
            goto LAB_102753268;
          }
          func_0x000107c61174(uVar29);
          func_0x00010006c090(uVar38,lVar21);
          UNRECOVERED_JUMPTABLE = pcStack_150;
          func_0x000107c61558();
          if (((ulong)UNRECOVERED_JUMPTABLE & 1) == 0) {
            UNRECOVERED_JUMPTABLE = pcStack_150 + 0x10;
            pcStack_150 = (code *)0x0;
            FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE + 1,1);
          }
          uVar30 = *(ulong *)(pcStack_150 + 0x10);
          if (*(ulong *)(pcStack_150 + 0x18) >> 1 <= uVar30) {
            UNRECOVERED_JUMPTABLE = (code *)(ulong)(1 < *(ulong *)(pcStack_150 + 0x18));
            FUN_102752128(UNRECOVERED_JUMPTABLE,uVar30 + 1,1,pcStack_150);
            pcStack_150 = UNRECOVERED_JUMPTABLE;
          }
          uVar29 = unaff_x22[0x1a];
          uVar38 = unaff_x22[0x1b];
          *(ulong *)(pcStack_150 + 0x10) = uVar30 + 1;
          *(undefined8 *)(pcStack_150 + uVar30 * 0x18 + 0x20) = uVar29;
          *(undefined8 *)(pcStack_150 + uVar30 * 0x18 + 0x28) = uVar38;
          *(undefined **)(pcStack_150 + uVar30 * 0x18 + 0x30) = puVar32;
          func_0x000107c61170(uVar26);
          func_0x000107c5ed4c(lVar20);
          puVar32 = PTR___sypN_11034f1a8;
        } while (unaff_x22[0xd] != 0);
      }
LAB_102753140:
      uVar14 = unaff_x22[0x1b];
      uVar29 = unaff_x22[0x1c];
      lVar21 = unaff_x22[0x17];
      lVar12 = unaff_x22[0x18];
      (**(code **)(lVar19 + 8))(uVar24,UNRECOVERED_JUMPTABLE_00);
      func_0x000101dc7a08(uVar11,cVar4);
      func_0x000107c6142c(uVar14);
      func_0x000107c61574(uVar29);
      func_0x000107c615c0(uVar24);
      if (lVar12 + 1 == lVar21) {
        UNRECOVERED_JUMPTABLE = (code *)unaff_x22[0x16];
        func_0x000107c6142c();
        UNRECOVERED_JUMPTABLE_00 = (code *)unaff_x22[1];
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x0001027532f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE_00)(pcStack_150);
          return pcStack_150;
        }
        goto LAB_102753420;
      }
      uVar24 = unaff_x22[0x18] + 1;
      unaff_x22[0x18] = uVar24;
      unaff_x22[0x19] = (long)pcStack_150;
      if (*(ulong *)(unaff_x22[0x16] + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE_00 = (code *)SoftwareBreakpoint(1,0x102753420);
        (*UNRECOVERED_JUMPTABLE_00)();
      }
      lVar21 = unaff_x22[0x16] + uVar24 * 0x18;
      unaff_x22[0x1a] = *(undefined8 *)(lVar21 + 0x20);
      unaff_x22[0x1b] = *(undefined8 *)(lVar21 + 0x28);
      uVar11 = *(undefined8 *)(lVar21 + 0x30);
      unaff_x22[0x1c] = uVar11;
      func_0x000107c61434();
      func_0x000107c6157c(uVar11);
      func_0x000104888eec(unaff_x22 + 0x10);
      cVar4 = *(char *)(unaff_x22 + 0x11);
      if (cVar4 == -1) {
        unaff_x22[7] = (long)(unaff_x22 + 0xe);
        unaff_x22[2] = (long)unaff_x22;
        unaff_x22[3] = (long)FUN_102752e98;
        lVar19 = (long)(unaff_x22 + 2);
        func_0x000107c61448(lVar19,0);
        UNRECOVERED_JUMPTABLE = (code *)&UNK_110544508;
        func_0x000107c613fc(&UNK_110544508,0x18,7);
        *(long *)(UNRECOVERED_JUMPTABLE + 0x10) = lVar19;
        UNRECOVERED_JUMPTABLE_00 = (code *)0x1;
        func_0x00010075a04c(0,1,FUN_1027536f8,UNRECOVERED_JUMPTABLE);
        func_0x000107c61574();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
LAB_107c61444:
          UNRECOVERED_JUMPTABLE_00 = (code *)(unaff_x22 + 2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE_00);
          return UNRECOVERED_JUMPTABLE_00;
        }
        goto LAB_102753420;
      }
      uVar11 = unaff_x22[0x10];
    } while (cVar4 != '\x01');
  }
  unaff_x22[0x12] = uVar11;
  iVar5 = 2;
  UNRECOVERED_JUMPTABLE_00 = (code *)0x12;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar5 != 0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(unaff_x22 + 0x12,UNRECOVERED_JUMPTABLE_00,PTR___ss5ErrorWS_11034ee10);
  }
  uVar11 = unaff_x22[0x1c];
  uVar14 = unaff_x22[0x19];
  uVar29 = unaff_x22[0x16];
  func_0x000107c6142c(unaff_x22[0x1b]);
  func_0x000107c61574(uVar11);
  func_0x000107c6142c(uVar29);
  func_0x000107c6142c(uVar14);
LAB_102753268:
  UNRECOVERED_JUMPTABLE = (code *)unaff_x22[1];
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar18) {
                    /* WARNING: Could not recover jumptable at 0x0001027532a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return UNRECOVERED_JUMPTABLE;
  }
LAB_102753420:
  func_0x000107c60e78();
  uVar14 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8);
  uVar11 = *(undefined8 *)UNRECOVERED_JUMPTABLE;
  uVar38 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18);
  uVar29 = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10);
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x20) = *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20);
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8) = uVar14;
  *(undefined8 *)UNRECOVERED_JUMPTABLE_00 = uVar11;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18) = uVar38;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = uVar29;
  return UNRECOVERED_JUMPTABLE_00;
}



/* Entry: 102752e98; end: 102752f03;  */

code * FUN_102752e98(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long *unaff_x22;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  code *pcStack_90;
  
  lVar17 = *unaff_x22;
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == *(long *)PTR____stack_chk_guard_11034bdc0) {
    UNRECOVERED_JUMPTABLE = FUN_102752f04;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_102752f04,0,0);
    return UNRECOVERED_JUMPTABLE;
  }
  func_0x000107c60e78();
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar19 = *(undefined8 *)(lVar17 + 0x70);
  cVar3 = *(char *)(lVar17 + 0x78);
  if (cVar3 != '\x01') {
    lVar15 = lVar17 + 0x50;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    func_0x000107c5ed50();
    lVar11 = *(long *)(UNRECOVERED_JUMPTABLE + -8);
    lVar12 = *(long *)(lVar11 + 0x40);
    do {
      puVar8 = PTR___sypN_11034f1a8;
      uVar5 = lVar12 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar5);
      func_0x000107c600f4(uVar5);
      func_0x000107c5ed4c(lVar15);
      pcStack_90 = *(code **)(lVar17 + 200);
      if (*(long *)(lVar17 + 0x68) != 0) {
        uVar6 = 0;
        FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
        do {
          while( true ) {
            uVar7 = lVar17 + 0x98;
            lVar13 = lVar15;
            func_0x000107c6147c(uVar7,lVar15,puVar8 + 8,uVar6,6);
            if ((uVar7 & 1) != 0) break;
            func_0x000107c5ed4c(lVar15);
            if (*(long *)(lVar17 + 0x68) == 0) goto LAB_102753140;
          }
          uVar14 = *(undefined8 *)(lVar17 + 0x98);
          func_0x000107c61434(*(undefined8 *)(lVar17 + 0xd8));
          uVar16 = uVar14;
          func_0x000107c3eea8(uVar14);
          func_0x000107c61180();
          uVar20 = uVar16;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar16);
          puVar8 = PTR_PTR_1126b25c0;
          func_0x000107c610f8();
          uVar16 = uVar20;
          func_0x000107c5ee20(uVar20,lVar13);
          *(undefined8 *)(lVar17 + 0xa0) = 0;
          func_0x000107c4636c();
          func_0x000107c61170(uVar16);
          uVar16 = *(undefined8 *)(lVar17 + 0xa0);
          if (puVar8 == (undefined *)0x0) {
            uVar6 = *(undefined8 *)(lVar17 + 0xd8);
            uVar2 = *(undefined8 *)(lVar17 + 0xe0);
            uVar18 = *(undefined8 *)(lVar17 + 0xb0);
            uVar9 = uVar16;
            func_0x000107c61174(uVar16);
            func_0x000107c5ed30(uVar16);
            func_0x000107c61170(uVar9);
            func_0x000107c61654();
            func_0x000107c6142c(uVar18);
            func_0x00010006c090(uVar20,lVar13);
            func_0x000107c61170(uVar14);
            func_0x000101dc7a08(uVar19,cVar3);
            func_0x000107c61430(uVar6,2);
            func_0x000107c61574(uVar2);
            (**(code **)(lVar11 + 8))(uVar5);
            func_0x000107c6142c(pcStack_90);
            func_0x000107c615c0(uVar5);
            goto LAB_102753268;
          }
          func_0x000107c61174(uVar16);
          func_0x00010006c090(uVar20,lVar13);
          UNRECOVERED_JUMPTABLE_00 = pcStack_90;
          func_0x000107c61558();
          if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
            UNRECOVERED_JUMPTABLE_00 = pcStack_90 + 0x10;
            pcStack_90 = (code *)0x0;
            FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE_00 + 1,1);
          }
          uVar7 = *(ulong *)(pcStack_90 + 0x10);
          if (*(ulong *)(pcStack_90 + 0x18) >> 1 <= uVar7) {
            UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(1 < *(ulong *)(pcStack_90 + 0x18));
            FUN_102752128(UNRECOVERED_JUMPTABLE_00,uVar7 + 1,1,pcStack_90);
            pcStack_90 = UNRECOVERED_JUMPTABLE_00;
          }
          uVar16 = *(undefined8 *)(lVar17 + 0xd0);
          uVar20 = *(undefined8 *)(lVar17 + 0xd8);
          *(ulong *)(pcStack_90 + 0x10) = uVar7 + 1;
          *(undefined8 *)(pcStack_90 + uVar7 * 0x18 + 0x20) = uVar16;
          *(undefined8 *)(pcStack_90 + uVar7 * 0x18 + 0x28) = uVar20;
          *(undefined **)(pcStack_90 + uVar7 * 0x18 + 0x30) = puVar8;
          func_0x000107c61170(uVar14);
          func_0x000107c5ed4c(lVar15);
          puVar8 = PTR___sypN_11034f1a8;
        } while (*(long *)(lVar17 + 0x68) != 0);
      }
LAB_102753140:
      uVar6 = *(undefined8 *)(lVar17 + 0xd8);
      uVar16 = *(undefined8 *)(lVar17 + 0xe0);
      lVar13 = *(long *)(lVar17 + 0xb8);
      lVar1 = *(long *)(lVar17 + 0xc0);
      (**(code **)(lVar11 + 8))(uVar5,UNRECOVERED_JUMPTABLE);
      func_0x000101dc7a08(uVar19,cVar3);
      func_0x000107c6142c(uVar6);
      func_0x000107c61574(uVar16);
      func_0x000107c615c0(uVar5);
      if (lVar1 + 1 == lVar13) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 0xb0);
        func_0x000107c6142c();
        UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027532f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pcStack_90);
          return pcStack_90;
        }
        goto LAB_102753420;
      }
      uVar5 = *(long *)(lVar17 + 0xc0) + 1;
      *(ulong *)(lVar17 + 0xc0) = uVar5;
      *(code **)(lVar17 + 200) = pcStack_90;
      if (*(ulong *)(*(long *)(lVar17 + 0xb0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x102753420);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar13 = *(long *)(lVar17 + 0xb0) + uVar5 * 0x18;
      *(undefined8 *)(lVar17 + 0xd0) = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(lVar17 + 0xd8) = *(undefined8 *)(lVar13 + 0x28);
      uVar19 = *(undefined8 *)(lVar13 + 0x30);
      *(undefined8 *)(lVar17 + 0xe0) = uVar19;
      func_0x000107c61434();
      func_0x000107c6157c(uVar19);
      func_0x000104888eec(lVar17 + 0x80);
      cVar3 = *(char *)(lVar17 + 0x88);
      if (cVar3 == -1) {
        *(undefined8 **)(lVar17 + 0x38) = (undefined8 *)(lVar17 + 0x70);
        *(long *)(lVar17 + 0x10) = lVar17;
        *(code **)(lVar17 + 0x18) = FUN_102752e98;
        lVar11 = lVar17 + 0x10;
        func_0x000107c61448(lVar11,0);
        UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110544508;
        func_0x000107c613fc(&UNK_110544508,0x18,7);
        *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = lVar11;
        UNRECOVERED_JUMPTABLE = (code *)0x1;
        func_0x00010075a04c(0,1,FUN_1027536f8,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61574();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
          UNRECOVERED_JUMPTABLE = (code *)(lVar17 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        goto LAB_102753420;
      }
      uVar19 = *(undefined8 *)(lVar17 + 0x80);
    } while (cVar3 != '\x01');
  }
  *(undefined8 *)(lVar17 + 0x90) = uVar19;
  iVar4 = 2;
  UNRECOVERED_JUMPTABLE = (code *)0x12;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    UNRECOVERED_JUMPTABLE = (code *)0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(lVar17 + 0x90,UNRECOVERED_JUMPTABLE,PTR___ss5ErrorWS_11034ee10);
  }
  uVar19 = *(undefined8 *)(lVar17 + 0xe0);
  uVar6 = *(undefined8 *)(lVar17 + 200);
  uVar16 = *(undefined8 *)(lVar17 + 0xb0);
  func_0x000107c6142c(*(undefined8 *)(lVar17 + 0xd8));
  func_0x000107c61574(uVar19);
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(uVar6);
LAB_102753268:
  UNRECOVERED_JUMPTABLE_00 = *(code **)(lVar17 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027532a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  }
LAB_102753420:
  func_0x000107c60e78();
  uVar6 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
  uVar19 = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
  uVar20 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18);
  uVar16 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10);
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20) = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x20);
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar6;
  *(undefined8 *)UNRECOVERED_JUMPTABLE = uVar19;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18) = uVar20;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10) = uVar16;
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 102752f04; end: 102753423;  */

code * FUN_102752f04(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined *puVar8;
  code *UNRECOVERED_JUMPTABLE_00;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long unaff_x22;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  code *pcStack_70;
  
  lVar10 = *(long *)PTR____stack_chk_guard_11034bdc0;
  uVar18 = *(undefined8 *)(unaff_x22 + 0x70);
  cVar3 = *(char *)(unaff_x22 + 0x78);
  if (cVar3 != '\x01') {
    lVar15 = unaff_x22 + 0x50;
    UNRECOVERED_JUMPTABLE = (code *)0x0;
    func_0x000107c5ed50();
    lVar11 = *(long *)(UNRECOVERED_JUMPTABLE + -8);
    lVar12 = *(long *)(lVar11 + 0x40);
    do {
      puVar8 = PTR___sypN_11034f1a8;
      uVar5 = lVar12 + 0xfU & 0xfffffffffffffff0;
      func_0x000107c615b8(uVar5);
      func_0x000107c600f4(uVar5);
      func_0x000107c5ed4c(lVar15);
      pcStack_70 = *(code **)(unaff_x22 + 200);
      if (*(long *)(unaff_x22 + 0x68) != 0) {
        uVar6 = 0;
        FUN_102753744(0,0x112d54e00,&PTR_PTR_1126bcf68);
        do {
          while( true ) {
            uVar7 = unaff_x22 + 0x98;
            lVar13 = lVar15;
            func_0x000107c6147c(uVar7,lVar15,puVar8 + 8,uVar6,6);
            if ((uVar7 & 1) != 0) break;
            func_0x000107c5ed4c(lVar15);
            if (*(long *)(unaff_x22 + 0x68) == 0) goto LAB_102753140;
          }
          uVar14 = *(undefined8 *)(unaff_x22 + 0x98);
          func_0x000107c61434(*(undefined8 *)(unaff_x22 + 0xd8));
          uVar16 = uVar14;
          func_0x000107c3eea8(uVar14);
          func_0x000107c61180();
          uVar19 = uVar16;
          func_0x000107c5ee30();
          func_0x000107c61170(uVar16);
          puVar8 = PTR_PTR_1126b25c0;
          func_0x000107c610f8();
          uVar16 = uVar19;
          func_0x000107c5ee20(uVar19,lVar13);
          *(undefined8 *)(unaff_x22 + 0xa0) = 0;
          func_0x000107c4636c();
          func_0x000107c61170(uVar16);
          uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
          if (puVar8 == (undefined *)0x0) {
            uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
            uVar2 = *(undefined8 *)(unaff_x22 + 0xe0);
            uVar17 = *(undefined8 *)(unaff_x22 + 0xb0);
            uVar9 = uVar16;
            func_0x000107c61174(uVar16);
            func_0x000107c5ed30(uVar16);
            func_0x000107c61170(uVar9);
            func_0x000107c61654();
            func_0x000107c6142c(uVar17);
            func_0x00010006c090(uVar19,lVar13);
            func_0x000107c61170(uVar14);
            func_0x000101dc7a08(uVar18,cVar3);
            func_0x000107c61430(uVar6,2);
            func_0x000107c61574(uVar2);
            (**(code **)(lVar11 + 8))(uVar5);
            func_0x000107c6142c(pcStack_70);
            func_0x000107c615c0(uVar5);
            goto LAB_102753268;
          }
          func_0x000107c61174(uVar16);
          func_0x00010006c090(uVar19,lVar13);
          UNRECOVERED_JUMPTABLE_00 = pcStack_70;
          func_0x000107c61558();
          if (((ulong)UNRECOVERED_JUMPTABLE_00 & 1) == 0) {
            UNRECOVERED_JUMPTABLE_00 = pcStack_70 + 0x10;
            pcStack_70 = (code *)0x0;
            FUN_102752128(0,*(long *)UNRECOVERED_JUMPTABLE_00 + 1,1);
          }
          uVar7 = *(ulong *)(pcStack_70 + 0x10);
          if (*(ulong *)(pcStack_70 + 0x18) >> 1 <= uVar7) {
            UNRECOVERED_JUMPTABLE_00 = (code *)(ulong)(1 < *(ulong *)(pcStack_70 + 0x18));
            FUN_102752128(UNRECOVERED_JUMPTABLE_00,uVar7 + 1,1,pcStack_70);
            pcStack_70 = UNRECOVERED_JUMPTABLE_00;
          }
          uVar16 = *(undefined8 *)(unaff_x22 + 0xd0);
          uVar19 = *(undefined8 *)(unaff_x22 + 0xd8);
          *(ulong *)(pcStack_70 + 0x10) = uVar7 + 1;
          *(undefined8 *)(pcStack_70 + uVar7 * 0x18 + 0x20) = uVar16;
          *(undefined8 *)(pcStack_70 + uVar7 * 0x18 + 0x28) = uVar19;
          *(undefined **)(pcStack_70 + uVar7 * 0x18 + 0x30) = puVar8;
          func_0x000107c61170(uVar14);
          func_0x000107c5ed4c(lVar15);
          puVar8 = PTR___sypN_11034f1a8;
        } while (*(long *)(unaff_x22 + 0x68) != 0);
      }
LAB_102753140:
      uVar6 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
      lVar13 = *(long *)(unaff_x22 + 0xb8);
      lVar1 = *(long *)(unaff_x22 + 0xc0);
      (**(code **)(lVar11 + 8))(uVar5,UNRECOVERED_JUMPTABLE);
      func_0x000101dc7a08(uVar18,cVar3);
      func_0x000107c6142c(uVar6);
      func_0x000107c61574(uVar16);
      func_0x000107c615c0(uVar5);
      if (lVar1 + 1 == lVar13) {
        UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 0xb0);
        func_0x000107c6142c();
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027532f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*UNRECOVERED_JUMPTABLE)(pcStack_70);
          return pcStack_70;
        }
        goto LAB_102753420;
      }
      uVar5 = *(long *)(unaff_x22 + 0xc0) + 1;
      *(ulong *)(unaff_x22 + 0xc0) = uVar5;
      *(code **)(unaff_x22 + 200) = pcStack_70;
      if (*(ulong *)(*(long *)(unaff_x22 + 0xb0) + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x102753420);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar13 = *(long *)(unaff_x22 + 0xb0) + uVar5 * 0x18;
      *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(lVar13 + 0x20);
      *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(lVar13 + 0x28);
      uVar18 = *(undefined8 *)(lVar13 + 0x30);
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar18;
      func_0x000107c61434();
      func_0x000107c6157c(uVar18);
      func_0x000104888eec(unaff_x22 + 0x80);
      cVar3 = *(char *)(unaff_x22 + 0x88);
      if (cVar3 == -1) {
        *(undefined8 **)(unaff_x22 + 0x38) = (undefined8 *)(unaff_x22 + 0x70);
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_102752e98;
        lVar11 = unaff_x22 + 0x10;
        func_0x000107c61448(lVar11,0);
        UNRECOVERED_JUMPTABLE_00 = (code *)&UNK_110544508;
        func_0x000107c613fc(&UNK_110544508,0x18,7);
        *(long *)(UNRECOVERED_JUMPTABLE_00 + 0x10) = lVar11;
        UNRECOVERED_JUMPTABLE = (code *)0x1;
        func_0x00010075a04c(0,1,FUN_1027536f8,UNRECOVERED_JUMPTABLE_00);
        func_0x000107c61574();
        if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
          UNRECOVERED_JUMPTABLE = (code *)(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)PTR__swift_continuation_await_110350070)(UNRECOVERED_JUMPTABLE);
          return UNRECOVERED_JUMPTABLE;
        }
        goto LAB_102753420;
      }
      uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
    } while (cVar3 != '\x01');
  }
  *(undefined8 *)(unaff_x22 + 0x90) = uVar18;
  iVar4 = 2;
  UNRECOVERED_JUMPTABLE = (code *)0x12;
  func_0x000100029b9c(2,0x12,0,0);
  if (iVar4 != 0) {
    UNRECOVERED_JUMPTABLE = (code *)0x112d393f0;
    func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
    func_0x000107c61658(unaff_x22 + 0x90,UNRECOVERED_JUMPTABLE,PTR___ss5ErrorWS_11034ee10);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar6 = *(undefined8 *)(unaff_x22 + 200);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0xd8));
  func_0x000107c61574(uVar18);
  func_0x000107c6142c(uVar16);
  func_0x000107c6142c(uVar6);
LAB_102753268:
  UNRECOVERED_JUMPTABLE_00 = *(code **)(unaff_x22 + 8);
  if (*(long *)PTR____stack_chk_guard_11034bdc0 == lVar10) {
                    /* WARNING: Could not recover jumptable at 0x0001027532a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)();
    return UNRECOVERED_JUMPTABLE_00;
  }
LAB_102753420:
  func_0x000107c60e78();
  uVar6 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 8);
  uVar18 = *(undefined8 *)UNRECOVERED_JUMPTABLE_00;
  uVar19 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x18);
  uVar16 = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x10);
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x20) = *(undefined8 *)(UNRECOVERED_JUMPTABLE_00 + 0x20);
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 8) = uVar6;
  *(undefined8 *)UNRECOVERED_JUMPTABLE = uVar18;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x18) = uVar19;
  *(undefined8 *)(UNRECOVERED_JUMPTABLE + 0x10) = uVar16;
  return UNRECOVERED_JUMPTABLE;
}



/* Entry: 102753424; end: 10275343b;  */

undefined8 * FUN_102753424(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  param_2[4] = param_1[4];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  return param_2;
}



/* Entry: 10275343c; end: 1027534a7;  */

void FUN_10275343c(undefined8 param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1027534a8;
  lVar2 = *param_2;
  plVar1[2] = unaff_x20 + 0x10;
  plVar1[3] = lVar2;
  lVar2 = param_2[1];
  plVar1[5] = param_2[2];
  plVar1[4] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102751f80,0,0,param_3);
  return;
}



/* Entry: 1027534a8; end: 102753533;  */

void FUN_1027534a8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001027534e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102753534; end: 102753553;  */

undefined1  [16] FUN_102753534(void)

{
  return ZEXT816(0x110544440);
}



/* Entry: 102753554; end: 1027535b7;  */

void FUN_102753554(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + 0x10));
  return;
}



/* Entry: 1027535b8; end: 10275361b;  */

undefined8 * FUN_1027535b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61434();
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 10275361c; end: 10275365f;  */

undefined8 * FUN_10275361c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  func_0x000107c6142c(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 102753660; end: 1027536f7;  */

int FUN_102753660(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1027536f8; end: 102753743;  */

void FUN_1027536f8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar4 = *param_1;
  uVar1 = *(undefined1 *)(param_1 + 1);
  func_0x000101bb4fe4(uVar4,uVar1);
  puVar2 = *(undefined8 **)(*(long *)(lVar3 + 0x40) + 0x28);
  *puVar2 = uVar4;
  *(undefined1 *)(puVar2 + 1) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc007c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_continuation_resume_110350080)(lVar3);
  return;
}



/* Entry: 102753744; end: 102753783;  */

void FUN_102753744(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 102753784; end: 10275378b;  */

undefined8 * FUN_102753784(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  func_0x000107c61434();
  func_0x000107c61174(uVar1);
  return param_1;
}



/* Entry: 10275378c; end: 1027538eb;  */

void FUN_10275378c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112ebc018,&UNK_10dad5790);
  puVar1 = &UNK_110544530;
  func_0x000107c613fc(&UNK_110544530,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x0001000823a8(FUN_1027538ec,puVar1);
  return;
}



/* Entry: 1027538ec; end: 1027538f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027538ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  code *pcVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x20;
  long lStack_50;
  long lStack_48;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar7 = &lStack_50;
  FUN_1027541fc();
  lVar4 = lVar3;
  func_0x000107c610f8();
  uVar5 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar6 = FUN_1027539b4;
  func_0x00010072927c(FUN_1027539b4,0,uVar5);
  *(code **)(lVar4 + _DAT_112ebc020) = pcVar6;
  *(undefined8 *)(lVar4 + _DAT_112ebc028) = uVar1;
  *(undefined8 *)(lVar4 + _DAT_112ebc030) = uVar8;
  puVar2 = PTR_s_init_1125d9248;
  lStack_50 = lVar4;
  lStack_48 = lVar3;
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar8);
  func_0x000107c61154(&lStack_50,puVar2);
  *param_1 = plVar7;
  return;
}



/* Entry: 1027538f8; end: 1027539b3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_1027538f8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  long unaff_x20;
  undefined1 auStack_50 [8];
  
  puVar3 = auStack_50;
  func_0x000107c610f8();
  uVar1 = 0x112ebbd58;
  func_0x0001000285a8(0x112ebbd58,&UNK_10dad4dd0);
  pcVar2 = FUN_1027539b4;
  func_0x00010072927c(FUN_1027539b4,0,uVar1);
  *(code **)(unaff_x20 + _DAT_112ebc020) = pcVar2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc028) = param_2;
  *(undefined8 *)(unaff_x20 + _DAT_112ebc030) = param_3;
  func_0x000107c61154(auStack_50,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar3;
}



/* Entry: 1027539b4; end: 1027539e3;  */

void FUN_1027539b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  func_0x000107c41408();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 1027539e4; end: 1027539fb;  */

void FUN_1027539e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027539fc,0,0);
  return;
}



/* Entry: 1027539fc; end: 102753a93;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027539fc(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  long unaff_x22;
  
  func_0x000100083b20(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  func_0x0001000a8868(unaff_x22 + 0x10,uVar2);
  piVar5 = *(int **)(lVar3 + 8);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_102753a94;
                    /* WARNING: Could not recover jumptable at 0x000102753a90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(*(undefined8 *)(unaff_x22 + 0x40),uVar2,lVar3);
  return;
}



/* Entry: 102753a94; end: 102753aff;  */

void FUN_102753a94(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x50) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x58) = param_1;
    pcVar1 = FUN_102753b00;
  }
  else {
    pcVar1 = FUN_102753bb8;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 102753b00; end: 102753b6f;  */

void FUN_102753b00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  func_0x0001000834e4(unaff_x22 + 0x10);
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x60) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102753b70,uVar1,uVar2);
  return;
}



/* Entry: 102753b70; end: 102753bb7;  */

void FUN_102753b70(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_102753bf4(uVar1,0);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102753bb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102753bb8; end: 102753bf3;  */

void FUN_102753bb8(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  func_0x0001000834e4(unaff_x22 + 0x10);
  func_0x000107c614ac(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000102753bf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102753bf4; end: 102753dc7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102753bf4(undefined *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 unaff_x20;
  undefined *puVar5;
  long lStack_58;
  
  func_0x000100083b20(&lStack_58);
  lVar1 = lStack_58;
  lVar2 = lStack_58;
  func_0x000107c5194c();
  func_0x000107c61180();
  func_0x000107c61170(lVar1);
  if (lVar2 == 0) {
    puVar5 = PTR_PTR_1126b0320;
    func_0x000107c61168(PTR_PTR_1126b0320);
    func_0x000107c4d044();
    func_0x000107c61180();
    puVar3 = puVar5;
    func_0x000107c5e514();
    func_0x000107c61180();
    func_0x000107c61170(puVar5);
    func_0x000100083b20(&lStack_58);
    lVar1 = lStack_58;
    lVar2 = lStack_58;
    func_0x000107c4d048(lStack_58);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c615e8(lVar1);
    if ((ulong)param_1 >> 0x3e == 0) {
      puVar5 = *(undefined **)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
    }
    else {
      puVar5 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < param_1) {
        puVar5 = param_1;
      }
      func_0x000107c60480();
    }
    uVar4 = 0;
    func_0x0001038e3280(0);
    if (puVar5 == (undefined *)0x0) {
      param_1 = PTR___swiftEmptyArrayStorage_11034f1c8;
      func_0x0001038e2560(PTR___swiftEmptyArrayStorage_11034f1c8,uVar4);
    }
    else {
      func_0x0001038e25e0(param_1);
    }
    func_0x0001038e0838(0);
    func_0x000107c610f8();
    func_0x000107c615f0(lVar2);
    func_0x000107c61174();
    func_0x0001038defd0(param_1,lVar2,unaff_x20,param_2,0,0,0,0);
    func_0x000100083b20(&lStack_58);
    func_0x000107c42c1c(lStack_58);
    func_0x000107c615e8(lVar2);
    func_0x000107c61170(param_1);
    lVar2 = lStack_58;
  }
  func_0x000107c61170(lVar2);
  return;
}



/* Entry: 102753dc8; end: 102753ea7; -[_TtC47MemTwoLandingPageQuickCutLauncherImplementation33MemTwoLandingPageQuickCutLauncher launchCreateVideoWithItems:] */

void FUN_102753dc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0x112ebb488;
  func_0x0001000285a8(0x112ebb488,&UNK_10dad3f20);
  func_0x000107c5fc54(param_3,uVar2);
  puVar1 = &UNK_1105445a0;
  func_0x000107c613fc(&UNK_1105445a0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  func_0x000107c61434(param_3);
  uVar2 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10dad5838,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 102753ea8; end: 102753ebf;  */

void FUN_102753ea8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102753ec0,0,0);
  return;
}



/* Entry: 102753ec0; end: 102753f27;  */

void FUN_102753ec0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = 0;
  func_0x000107c5fcec();
  uVar2 = uVar1;
  func_0x000107c5fce8();
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  func_0x000100eea164();
  func_0x000107c5fca8(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102753f28,uVar1,uVar2);
  return;
}



/* Entry: 102753f28; end: 102753f67;  */

void FUN_102753f28(void)

{
  long unaff_x22;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x18));
  FUN_102753bf4(PTR___swiftEmptyArrayStorage_11034f1c8,2);
                    /* WARNING: Could not recover jumptable at 0x000102753f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 102753f68; end: 1027540e7; -[_TtC47MemTwoLandingPageQuickCutLauncherImplementation33MemTwoLandingPageQuickCutLauncher launchCreateVideoFromBanner] */

void FUN_102753f68(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &UNK_110544578;
  func_0x000107c613fc(&UNK_110544578,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  func_0x000107c61174(param_1);
  func_0x000107c61174();
  uVar2 = 0x41;
  func_0x0001001ca524(0x41,0,0x48,4,0,0,&UNK_10dad5828,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 1027540e8; end: 102754143; -[_TtC47MemTwoLandingPageQuickCutLauncherImplementation33MemTwoLandingPageQuickCutLauncher removeQuickCutScopeWithScope:] */

void FUN_1027540e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  uVar1 = param_3;
  func_0x000102754010(param_3);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 102754144; end: 1027541a3; -[_TtC47MemTwoLandingPageQuickCutLauncherImplementation33MemTwoLandingPageQuickCutLauncher init] */

void FUN_102754144(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MemTwoLandingPageQuickCutLauncherImplementation.MemTwoLandingPageQuickCutLauncher"
                      ,0x51,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x102754170);
  (*pcVar1)();
}



/* Entry: 1027541a4; end: 1027541b3;  */

undefined1  [16] FUN_1027541a4(void)

{
  return ZEXT816(0x110544558);
}



/* Entry: 1027541b4; end: 1027541fb; -[_TtC47MemTwoLandingPageQuickCutLauncherImplementation33MemTwoLandingPageQuickCutLauncher .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x0001027541d0: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001027541d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027541b4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112ebc020));
  return;
}



/* Entry: 1027541fc; end: 10275421b;  */

void FUN_1027541fc(void)

{
  func_0x000107c61168(&PTR_PTR_11285f120);
  return;
}



/* Entry: 10275421c; end: 102754273;  */

void FUN_10275421c(void)

{
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  plVar1 = (long *)0x20;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_102754340;
  plVar1[2] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_102753ec0,0,0);
  return;
}



/* Entry: 102754274; end: 10275429f;  */

void FUN_102754274(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1027542a0; end: 102754303;  */

void FUN_1027542a0(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_102754304;
  plVar3[7] = lVar1;
  plVar3[8] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1027539fc,0,0);
  return;
}



/* Entry: 102754304; end: 10275433f;  */

void FUN_102754304(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010275433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102754340; end: 102754343;  */

void FUN_102754340(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010275433c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 102754344; end: 10275438f;  */

void FUN_102754344(undefined8 param_1)

{
  func_0x0001000285a8(0x112d60b28,&UNK_10d926f10);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_10275441c,param_1);
  return;
}



/* Entry: 102754390; end: 10275441b;  */

void FUN_102754390(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e78410;
  func_0x0001000285a8(0x112e78410,&UNK_10db5b9a0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 10275441c; end: 102754433;  */

void FUN_10275441c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  uVar1 = 0x112e78410;
  func_0x0001000285a8(0x112e78410,&UNK_10db5b9a0);
  func_0x000107c610f8();
  uVar2 = uStack_38;
  func_0x00010017da58(uStack_38,uVar1);
  puVar3 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(uVar2);
  *param_1 = puVar3;
  return;
}



/* Entry: 102754434; end: 10275447f;  */

void FUN_102754434(undefined8 param_1)

{
  func_0x0001000285a8(0x112ebc060,&UNK_10dad5880);
  func_0x000107c6157c(param_1);
  func_0x0001000823a8(FUN_102754480,param_1);
  return;
}



/* Entry: 102754480; end: 1027544e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102754480(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long lStack_40;
  long lStack_38;
  
  plVar3 = &lStack_40;
  FUN_1027548d0();
  lVar2 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar2 + _DAT_112ebc068) = unaff_x20;
  puVar1 = PTR_s_init_1125d9248;
  lStack_40 = lVar2;
  lStack_38 = param_2;
  func_0x000107c6157c();
  func_0x000107c61154(&lStack_40,puVar1);
  *param_1 = plVar3;
  return;
}



/* Entry: 1027544e8; end: 102754533;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1027544e8(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112ebc068) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 102754534; end: 1027546c3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_102754534(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined8 unaff_x20;
  undefined *puStack_48;
  
  func_0x000107c614f0();
  func_0x000100083b20(&puStack_48);
  puVar2 = puStack_48;
  puVar1 = puStack_48;
  func_0x000107c4f9e4();
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  puVar2 = puVar1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x0001000285a8(0x112ebc070,&UNK_10dad5888);
  if (puVar2 == (undefined *)0x0) {
    puVar1 = PTR_PTR_1126aae70;
    func_0x000107c610f8();
    func_0x000107c453e4();
    func_0x000107c59aa8();
    puVar2 = PTR__OBJC_CLASS___NSNumber_1126ae570;
    func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
    func_0x000107c46ecc();
    func_0x000107c54674(puVar1);
    func_0x000107c61170(puVar2);
    ppuVar3 = &puStack_48;
    puStack_48 = puVar1;
    func_0x000104888f7c(ppuVar3);
    func_0x000107c61170(puVar1);
    func_0x000103edf0bc();
  }
  else {
    puVar1 = &UNK_110544668;
    func_0x000107c613fc(&UNK_110544668,0x30,7);
    *(undefined **)(puVar1 + 0x10) = puVar2;
    *(undefined8 *)(puVar1 + 0x18) = param_1;
    *(undefined8 *)(puVar1 + 0x20) = param_2;
    *(undefined8 *)(puVar1 + 0x28) = unaff_x20;
    func_0x000107c615f0(puVar2);
    func_0x000107c61434(param_2);
    ppuVar3 = (undefined **)0x0;
    func_0x0001048897a0(0,1,0,FUN_10275472c,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000103edf0bc();
    func_0x000107c615e8(puVar2);
  }
  func_0x000107c61574(ppuVar3);
  return puVar1;
}



/* Entry: 1027546c4; end: 10275472b; -[_TtC33MemoriesValdiIdentityServicesImpl32MemoriesValdiIdentityServiceImpl reauthWithPassword:] */

void FUN_1027546c4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_102754534(param_3,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}


