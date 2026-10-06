/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 100fff9b8; end: 100fff9fb;  */

void FUN_100fff9b8(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000100fff9f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Entry: 100fff9fc; end: 100fffa6b;  */

void FUN_100fff9fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uStack_28;
  
  if (puRam0000000112d540b0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0x112d540b8;
  func_0x00010002969c(0x112d540b8,&UNK_10d92c380);
  uVar2 = uVar1;
  FUN_100fffa6c();
  puVar3 = PTR___sxSgSQsSQRzlMc_11034f190;
  uStack_28 = uVar2;
  func_0x000107c61520(PTR___sxSgSQsSQRzlMc_11034f190,uVar1,&uStack_28);
  puRam0000000112d540b0 = puVar3;
  return;
}



/* Entry: 100fffa6c; end: 100fffaab;  */

void FUN_100fffa6c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d540c0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db5fb60;
  func_0x000107c61520(&UNK_10db5fb60,&UNK_1105e1978);
  puRam0000000112d540c0 = puVar1;
  return;
}



/* Entry: 100fffaac; end: 10100007f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_100fffaac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long alStack_110 [2];
  long alStack_100 [4];
  long lStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *puStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 auStack_90 [3];
  undefined8 uStack_78;
  undefined **ppuStack_70;
  
  uVar2 = 0;
  FUN_100fda79c();
  ppuStack_70 = &PTR_DAT_110373a18;
  lVar3 = 0;
  auStack_90[0] = param_4;
  uStack_78 = uVar2;
  FUN_100fdd780();
  func_0x000107c613fc();
  lVar6 = _DAT_112d52c08;
  puVar8 = PTR___swiftEmptyArrayStorage_11034f1c8;
  puVar4 = PTR___swiftEmptyArrayStorage_11034f1c8;
  FUN_100ff339c();
  puStack_c0 = puVar4;
  func_0x0001000285a8(0x112d54128,&UNK_10d91ad88);
  func_0x000107c613fc();
  ppuVar5 = &puStack_c0;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar6) = ppuVar5;
  lVar6 = _DAT_112d52c10;
  puVar4 = puVar8;
  FUN_100ff33b0();
  puStack_c0 = puVar4;
  func_0x0001000285a8(0x112d54130,&UNK_10d91ad90);
  func_0x000107c613fc();
  ppuVar5 = &puStack_c0;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar6) = ppuVar5;
  lVar6 = _DAT_112d52c18;
  uStack_9f = 0;
  uStack_a0 = 0;
  uStack_b8 = 0;
  puStack_c0 = (undefined *)0x0;
  uStack_a8 = 0;
  uStack_a7 = 0;
  uStack_b0 = 0;
  func_0x0001000285a8(0x112d54138,&UNK_10d91ad98);
  func_0x000107c613fc();
  ppuVar5 = &puStack_c0;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar6) = ppuVar5;
  lVar6 = _DAT_112d52c20;
  puStack_c0 = (undefined *)0x0;
  func_0x0001000285a8(0x112d54140,&UNK_10d91ada0);
  func_0x000107c613fc();
  ppuVar5 = &puStack_c0;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar6) = ppuVar5;
  lVar6 = _DAT_112d52c28;
  puVar4 = puVar8;
  FUN_100ff34b4();
  puStack_c0 = puVar4;
  func_0x0001000285a8(0x112d54148,&UNK_10d91ada8);
  func_0x000107c613fc();
  ppuVar5 = &puStack_c0;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar6) = ppuVar5;
  lVar6 = _DAT_112d52c30;
  puStack_c0 = puVar8;
  func_0x0001000285a8(0x112d54150,&UNK_10d91adb0);
  func_0x000107c613fc();
  ppuVar5 = &puStack_c0;
  func_0x00010006c248();
  *(undefined ***)(lVar3 + lVar6) = ppuVar5;
  puVar11 = (undefined8 *)(lVar3 + _DAT_112d52c38);
  *puVar11 = 0;
  puVar11[1] = 0;
  lVar7 = _DAT_112d52c40;
  lVar6 = 0x112d52cd8;
  func_0x0001000285a8(0x112d52cd8,&UNK_10d9195e8);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar3 + lVar7,1,1,lVar6);
  lVar7 = _DAT_112d52c48;
  lVar6 = 0x112d52ce8;
  func_0x0001000285a8(0x112d52ce8,&UNK_10d9195f0);
  (**(code **)(*(long *)(lVar6 + -8) + 0x38))(lVar3 + lVar7,1,1,lVar6);
  *(undefined8 *)(lVar3 + _DAT_112d52c60) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d52c68) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d52c70) = 0;
  *(undefined8 *)(lVar3 + _DAT_112d52c78) = 0;
  lVar7 = _DAT_112d52be8;
  lVar6 = 0x112d52e20;
  func_0x0001000285a8(0x112d52e20,&UNK_10d9196f0);
  alStack_100[3] = *(long *)(lVar6 + -8);
  lStack_e0 = lVar6;
  uStack_c8 = param_1;
  (**(code **)(alStack_100[3] + 0x10))(lVar3 + lVar7,param_1);
  lVar7 = _DAT_112d52bf0;
  lVar6 = 0x112d52e28;
  func_0x0001000285a8(0x112d52e28,&UNK_10d91ace0);
  alStack_100[1] = *(long *)(lVar6 + -8);
  alStack_100[2] = lVar6;
  uStack_d0 = param_2;
  (**(code **)(alStack_100[1] + 0x10))(lVar3 + lVar7,param_2);
  *(undefined8 *)(lVar3 + 0x10) = param_3;
  uStack_d8 = param_3;
  FUN_10100047c(auStack_90,lVar3 + _DAT_112d52bf8);
  puVar11 = (undefined8 *)(lVar3 + _DAT_112d52c00);
  *puVar11 = param_5;
  *(undefined1 *)(puVar11 + 1) = param_6;
  lVar6 = 0x112d52e48;
  func_0x0001000285a8(0x112d52e48,&UNK_10d919718);
  lVar14 = *(long *)(lVar6 + -8);
  alStack_100[0] = lVar6;
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = (long)alStack_100 - extraout_x8;
  lVar6 = 0x112d52e40;
  func_0x0001000285a8(0x112d52e40,&UNK_10d919710);
  lVar15 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar13 - extraout_x8_00;
  lVar7 = 0x112d54158;
  func_0x0001000285a8(0x112d54158,&UNK_10d91adc0);
  lVar12 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)(lVar10 - extraout_x8_01);
  *puVar11 = 1;
  (**(code **)(lVar12 + 0x68))
            (puVar11,*(undefined4 *)
                      PTR___sScS12ContinuationV15BufferingPolicyO15bufferingNewestyADyx__GSicAFmlFWC_11034fd18
             ,lVar7);
  iVar1 = 2;
  func_0x000100029b9c(2,0x11,0,0);
  if (iVar1 == 0) {
    func_0x000107c6157c(uStack_d8);
    FUN_100ffc470(lVar13,lVar10,puVar11);
  }
  else {
    uVar2 = 0;
    FUN_100fdda24(0);
    func_0x000107c6157c(uStack_d8);
    func_0x000107c5fd10(lVar13,lVar10,uVar2,puVar11,uVar2);
  }
  (**(code **)(lVar12 + 8))(puVar11,lVar7);
  (**(code **)(lVar15 + 0x10))(lVar3 + _DAT_112d52c50,lVar10,lVar6);
  lVar7 = alStack_100[0];
  (**(code **)(lVar14 + 0x10))(lVar3 + _DAT_112d52c58,lVar13,alStack_100[0]);
  puVar8 = &UNK_110375b98;
  func_0x000107c613fc(&UNK_110375b98,0x18,7);
  func_0x000107c61644(puVar8 + 0x10,lVar3);
  puVar11[-2] = PTR___sytN_11034f1b0 + 8;
  uVar2 = 0x41;
  func_0x000100859150(0x41,0,0x48,3,0,0,&UNK_10d91adc8,puVar8);
  func_0x000107c61574(puVar8);
  uVar9 = *(undefined8 *)(lVar3 + _DAT_112d52c78);
  *(undefined8 *)(lVar3 + _DAT_112d52c78) = uVar2;
  func_0x000107c61574(uVar9);
  FUN_100fdd1f0();
  (**(code **)(alStack_100[1] + 8))(uStack_d0,alStack_100[2]);
  (**(code **)(alStack_100[3] + 8))(uStack_c8,lStack_e0);
  (**(code **)(lVar15 + 8))(lVar10,lVar6);
  (**(code **)(lVar14 + 8))(lVar13,lVar7);
  func_0x0001000834e4(auStack_90);
  return lVar3;
}



/* Entry: 101000080; end: 1010000db;  */

void FUN_101000080(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar2 = *(long *)(unaff_x20 + 0x30);
  func_0x0001000a8868(unaff_x20 + 0x10,uVar1);
  (**(code **)(*(long *)(lVar2 + 0x28) + 8))(param_1,param_2,uVar1);
  return;
}



/* Entry: 1010000dc; end: 1010000e3;  */

/* WARNING: Possible PIC construction at 0x000100fea21c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000100fea220) */

void FUN_1010000dc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  func_0x000107c602fc(0x1b,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                      *(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(0xe000000000000000);
  return;
}



/* Entry: 1010000e4; end: 10100026f;  */

/* WARNING: Type propagation algorithm not settling */

long FUN_1010000e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x12;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 auStack_d0 [4];
  long lStack_b0;
  undefined **ppuStack_a8;
  undefined8 *apuStack_a0 [3];
  undefined8 uStack_88;
  undefined **ppuStack_80;
  undefined8 auStack_78 [3];
  long lStack_60;
  undefined **ppuStack_58;
  
  uVar4 = *param_4;
  lVar1 = 0;
  func_0x000100fdc718();
  ppuStack_58 = &PTR_DAT_110374048;
  ppuStack_80 = &PTR_DAT_1103739b0;
  lVar2 = 0;
  apuStack_a0[0] = param_4;
  uStack_88 = uVar4;
  auStack_78[0] = param_1;
  lStack_60 = lVar1;
  FUN_100ff8534();
  func_0x000107c613fc();
  func_0x0001000c6518(auStack_78,lVar1);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = (undefined8 *)((long)auStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (**(code **)(extraout_x12 + 0x10))(puVar3);
  auStack_d0[1] = *puVar3;
  ppuStack_a8 = &PTR_DAT_110374048;
  *(undefined8 *)(lVar2 + 0x40) = 0;
  lStack_b0 = lVar1;
  func_0x000107c61614(lVar2 + 0x38,0);
  *(undefined8 *)(lVar2 + 0x70) = 0;
  func_0x000107c61614(lVar2 + 0x78,0);
  *(undefined8 *)(lVar2 + 0x80) = 0;
  *(undefined8 *)(lVar2 + 0x88) = 0;
  *(undefined8 *)(lVar2 + 0x90) = 0;
  FUN_10100047c(auStack_d0 + 1,lVar2 + 0x10);
  *(undefined ***)(lVar2 + 0x40) = &PTR_DAT_110374910;
  func_0x000107c61604(lVar2 + 0x38,param_3);
  FUN_10100047c(apuStack_a0,lVar2 + 0x48);
  FUN_100ff8348(param_2);
  lVar1 = 0x112d53868;
  func_0x0001000285a8(0x112d53868,&UNK_10d91a190);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_2,lVar1);
  func_0x0001000834e4(apuStack_a0);
  func_0x0001000834e4(auStack_d0 + 1);
  func_0x0001000834e4(auStack_78);
  return lVar2;
}



/* Entry: 101000270; end: 101000277;  */

uint FUN_101000270(void)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61618();
  if (lVar1 == 0) {
    uVar3 = 0;
  }
  else {
    lVar4 = *(long *)(unaff_x20 + 0x18);
    lVar2 = lVar1;
    func_0x000107c614f0();
    uVar3 = (uint)lVar2;
    (**(code **)(lVar4 + 8))();
    func_0x000107c615e8(lVar1);
    uVar3 = uVar3 ^ 1;
  }
  return uVar3 & 1;
}



/* Entry: 101000278; end: 1010002e7;  */

void FUN_101000278(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ffd130(param_1,*(undefined8 *)(unaff_x20 + 0x10),0x112d54108,&UNK_10d91ad58,0x112d52f50,
                &UNK_10d919830);
  return;
}



/* Entry: 1010002e8; end: 101000397;  */

void FUN_1010002e8(void)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x22;
  ulong uVar4;
  
  lVar2 = 0x112d53808;
  func_0x0001000285a8(0x112d53808,&UNK_10d91a100);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  uVar4 = uVar3 + 0x10 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar2 + -8) + 0x40);
  uVar3 = lVar2 + uVar3 + uVar4 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(unaff_x20 + (lVar2 + uVar3 + 7 & 0xffffffffffffff8));
  plVar1 = (long *)0x120;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101000398;
  plVar1[7] = unaff_x20 + uVar3;
  plVar1[8] = lVar2;
  plVar1[6] = unaff_x20 + uVar4;
  lVar2 = 0x112d53cc8;
  func_0x0001000285a8(0x112d53cc8,&UNK_10d91a890);
  plVar1[9] = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  func_0x000107c615b8();
  plVar1[10] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ff5180,0,0);
  return;
}



/* Entry: 101000398; end: 10100047b;  */

void FUN_101000398(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x0001010003d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 10100047c; end: 1010004bf;  */

long FUN_10100047c(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1010004c0; end: 101000513;  */

void FUN_1010004c0(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101000514;
  plVar1[10] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100fddee8,0,0);
  return;
}



/* Entry: 101000514; end: 101000587;  */

void FUN_101000514(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010100054c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101000588; end: 10100060f;  */

undefined8 FUN_101000588(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 101000610; end: 10100062f;  */

void FUN_101000610(void)

{
  func_0x000100ffa500();
  return;
}



/* Entry: 101000630; end: 101000637;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101000630(void)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long lVar3;
  long unaff_x20;
  undefined8 uStack_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  lVar1 = 0x112d373d8;
  func_0x0001000285a8(0x112d373d8,&UNK_10d9014c0);
  (*(code *)PTR____chkstk_darwin_11034bd40)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = (long)&uStack_60 - extraout_x8;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001000d224c(&uStack_60);
    func_0x000107c614f0(uStack_60);
    (**(code **)(lStack_58 + 0x88))();
    func_0x000107c615e8(uStack_60);
    func_0x000107c5eea0(lVar3);
    lVar2 = 0;
    func_0x000107c5eea4();
    (**(code **)(*(long *)(lVar2 + -8) + 0x38))(lVar3,0,1,lVar2);
    lVar2 = _DAT_112d52a00;
    func_0x000107c61428(lVar1 + _DAT_112d52a00,&uStack_60,0x21,0);
    func_0x000100ed9cbc(lVar3,lVar1 + lVar2);
    func_0x000107c614a8(&uStack_60);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 101000638; end: 10100068b;  */

void FUN_101000638(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x190;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101000748;
  plVar1[0x2a] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_100ffa708,0,0);
  return;
}



/* Entry: 10100068c; end: 101000707;  */

undefined8 FUN_10100068c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 101000708; end: 10100072f;  */

void FUN_101000708(void)

{
  FUN_100c9fba8();
  return;
}



/* Entry: 101000730; end: 10100074b;  */

void FUN_101000730(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(code **)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Entry: 10100074c; end: 1010008e3;  */

undefined1  [16] FUN_10100074c(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffde;
  func_0x000107c5fadc(0xd000000000000022,0x800000010ef1f340);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1f370);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101000818);
  (*pcVar1)();
}



/* Entry: 1010008e4; end: 1010008f7;  */

undefined1  [16] FUN_1010008e4(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x75635f6b63697571;
  func_0x000107c5fadc(0x75635f6b63697571,0xee0079616b6f5f74);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1f370);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101000c30);
  (*pcVar1)();
}



/* Entry: 1010008f8; end: 101000b57;  */

undefined1  [16] FUN_1010008f8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffe2;
  func_0x000107c5fadc(0xd00000000000001e,0x800000010ef1f4d0);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1f370);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010009c4);
  (*pcVar1)();
}



/* Entry: 101000b58; end: 101000b6b;  */

undefined1  [16] FUN_101000b58(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x75635f6b63697571;
  func_0x000107c5fadc(0x75635f6b63697571,0xee00746978655f74);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1f370);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101000c30);
  (*pcVar1)();
}



/* Entry: 101000b6c; end: 1010011c3;  */

undefined1  [16] FUN_101000b6c(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x75635f6b63697571;
  func_0x000107c5fadc(0x75635f6b63697571,param_1);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010ef1f370);
  uVar4 = 0;
  func_0x000107c5fe40(0);
  lVar5 = lVar2;
  uVar6 = uVar3;
  func_0x0001000f6108(lVar2,uVar3,uVar4);
  func_0x000107c61180();
  func_0x000107c61170(lVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  if (lVar5 != 0) {
    lVar2 = lVar5;
    func_0x000107c5faec(lVar5);
    func_0x000107c61170(lVar5);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar2;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101000c30);
  (*pcVar1)();
}



/* Entry: 1010011c4; end: 1010011d3;  */

void FUN_1010011c4(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1010011d4; end: 1010011f3;  */

void FUN_1010011d4(void)

{
  func_0x000107c61168(&PTR_PTR_112d541b0);
  return;
}



/* Entry: 1010011f4; end: 1010012db;  */

void FUN_1010011f4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1010011d4();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000013;
  func_0x000107c5fadc(0xd000000000000013,0x800000010ef1f530);
  puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
  func_0x000107c61168();
  func_0x000107c450d0();
  func_0x000107c61180();
  func_0x000107c61170(puVar1);
  func_0x000107c61170(uVar2);
  if (puVar3 == (undefined *)0x0) {
    puVar1 = PTR__OBJC_CLASS___CIImage_1126b3128;
    func_0x000107c61168(PTR__OBJC_CLASS___CIImage_1126b3128);
    func_0x000107c4253c();
    func_0x000107c61180();
    puVar3 = PTR__OBJC_CLASS___UIImage_1126aea68;
    func_0x000107c610f8();
    func_0x000107c45b00();
    func_0x000107c61170(puVar1);
  }
  puRam00000001137ff120 = puVar3;
  return;
}



/* Entry: 1010012dc; end: 1010012e7; -[SCQuickCutViewIntegrationEntryPoint beginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010012dc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54210;
  func_0x000107c61428(param_1 + _DAT_112d54210,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010012e8; end: 1010012f3; -[SCQuickCutViewIntegrationEntryPoint setBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010012e8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54210;
  func_0x000107c61428(param_1 + _DAT_112d54210,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010012f4; end: 1010012ff; -[SCQuickCutViewIntegrationEntryPoint systemScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010012f4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54218;
  func_0x000107c61428(param_1 + _DAT_112d54218,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001300; end: 10100130b; -[SCQuickCutViewIntegrationEntryPoint setSystemScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001300(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54218;
  func_0x000107c61428(param_1 + _DAT_112d54218,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100130c; end: 101001317; -[SCQuickCutViewIntegrationEntryPoint lensMediaDownloaderServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100130c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54220;
  func_0x000107c61428(param_1 + _DAT_112d54220,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001318; end: 101001323; -[SCQuickCutViewIntegrationEntryPoint setLensMediaDownloaderServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001318(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54220;
  func_0x000107c61428(param_1 + _DAT_112d54220,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101001324; end: 10100132f; -[SCQuickCutViewIntegrationEntryPoint musicFetcherServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001324(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54228;
  func_0x000107c61428(param_1 + _DAT_112d54228,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001330; end: 10100133b; -[SCQuickCutViewIntegrationEntryPoint setMusicFetcherServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001330(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54228;
  func_0x000107c61428(param_1 + _DAT_112d54228,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100133c; end: 101001347; -[SCQuickCutViewIntegrationEntryPoint ngsmePlaybackServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100133c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54230;
  func_0x000107c61428(param_1 + _DAT_112d54230,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001348; end: 101001353; -[SCQuickCutViewIntegrationEntryPoint setNgsmePlaybackServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001348(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54230;
  func_0x000107c61428(param_1 + _DAT_112d54230,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101001354; end: 10100135f; -[SCQuickCutViewIntegrationEntryPoint snapRendererServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001354(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54238;
  func_0x000107c61428(param_1 + _DAT_112d54238,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001360; end: 10100136b; -[SCQuickCutViewIntegrationEntryPoint setSnapRendererServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001360(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54238;
  func_0x000107c61428(param_1 + _DAT_112d54238,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100136c; end: 101001377; -[SCQuickCutViewIntegrationEntryPoint snapDocMediaClaimingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100136c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54240;
  func_0x000107c61428(param_1 + _DAT_112d54240,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001378; end: 101001383; -[SCQuickCutViewIntegrationEntryPoint setSnapDocMediaClaimingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001378(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54240;
  func_0x000107c61428(param_1 + _DAT_112d54240,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101001384; end: 10100138f; -[SCQuickCutViewIntegrationEntryPoint snapDocFactoryServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001384(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54248;
  func_0x000107c61428(param_1 + _DAT_112d54248,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001390; end: 10100139b; -[SCQuickCutViewIntegrationEntryPoint setSnapDocFactoryServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001390(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54248;
  func_0x000107c61428(param_1 + _DAT_112d54248,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100139c; end: 1010013a7; -[SCQuickCutViewIntegrationEntryPoint asyncQueueServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100139c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54250;
  func_0x000107c61428(param_1 + _DAT_112d54250,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010013a8; end: 1010013b3; -[SCQuickCutViewIntegrationEntryPoint setAsyncQueueServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013a8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54250;
  func_0x000107c61428(param_1 + _DAT_112d54250,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010013b4; end: 1010013bf; -[SCQuickCutViewIntegrationEntryPoint quickCutLoggingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013b4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54258;
  func_0x000107c61428(param_1 + _DAT_112d54258,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010013c0; end: 1010013cb; -[SCQuickCutViewIntegrationEntryPoint setQuickCutLoggingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54258;
  func_0x000107c61428(param_1 + _DAT_112d54258,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010013cc; end: 1010013d7; -[SCQuickCutViewIntegrationEntryPoint memoriesExperimentServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013cc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54260;
  func_0x000107c61428(param_1 + _DAT_112d54260,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010013d8; end: 1010013e3; -[SCQuickCutViewIntegrationEntryPoint setMemoriesExperimentServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54260;
  func_0x000107c61428(param_1 + _DAT_112d54260,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010013e4; end: 1010013ef; -[SCQuickCutViewIntegrationEntryPoint lensConfigurationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54268;
  func_0x000107c61428(param_1 + _DAT_112d54268,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 1010013f0; end: 1010013fb; -[SCQuickCutViewIntegrationEntryPoint setLensConfigurationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013f0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54268;
  func_0x000107c61428(param_1 + _DAT_112d54268,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010013fc; end: 101001407; -[SCQuickCutViewIntegrationEntryPoint lensPerformerServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010013fc(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54270;
  func_0x000107c61428(param_1 + _DAT_112d54270,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001408; end: 101001413; -[SCQuickCutViewIntegrationEntryPoint setLensPerformerServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001408(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54270;
  func_0x000107c61428(param_1 + _DAT_112d54270,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101001414; end: 10100141f; -[SCQuickCutViewIntegrationEntryPoint audioSessionServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001414(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54278;
  func_0x000107c61428(param_1 + _DAT_112d54278,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001420; end: 10100142b; -[SCQuickCutViewIntegrationEntryPoint setAudioSessionServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001420(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54278;
  func_0x000107c61428(param_1 + _DAT_112d54278,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100142c; end: 101001437; -[SCQuickCutViewIntegrationEntryPoint notificationServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100142c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54280;
  func_0x000107c61428(param_1 + _DAT_112d54280,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001438; end: 101001443; -[SCQuickCutViewIntegrationEntryPoint setNotificationServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001438(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54280;
  func_0x000107c61428(param_1 + _DAT_112d54280,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101001444; end: 10100144f; -[SCQuickCutViewIntegrationEntryPoint mixerNamespaceServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001444(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54288;
  func_0x000107c61428(param_1 + _DAT_112d54288,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001450; end: 10100145b; -[SCQuickCutViewIntegrationEntryPoint setMixerNamespaceServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001450(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54288;
  func_0x000107c61428(param_1 + _DAT_112d54288,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100145c; end: 101001467; -[SCQuickCutViewIntegrationEntryPoint lensMetadataRetrievingServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100145c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54290;
  func_0x000107c61428(param_1 + _DAT_112d54290,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001468; end: 101001473; -[SCQuickCutViewIntegrationEntryPoint setLensMetadataRetrievingServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001468(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54290;
  func_0x000107c61428(param_1 + _DAT_112d54290,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 101001474; end: 10100147f; -[SCQuickCutViewIntegrationEntryPoint memoriesQuickCutPreferencesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001474(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d54298;
  func_0x000107c61428(param_1 + _DAT_112d54298,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001480; end: 10100148b; -[SCQuickCutViewIntegrationEntryPoint setMemoriesQuickCutPreferencesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001480(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d54298;
  func_0x000107c61428(param_1 + _DAT_112d54298,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100148c; end: 101001497; -[SCQuickCutViewIntegrationEntryPoint snapDocEditorServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100148c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d542a0;
  func_0x000107c61428(param_1 + _DAT_112d542a0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 101001498; end: 1010014db;  */

void FUN_101001498(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 1010014dc; end: 1010014e7; -[SCQuickCutViewIntegrationEntryPoint setSnapDocEditorServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010014dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d542a0;
  func_0x000107c61428(param_1 + _DAT_112d542a0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 1010014e8; end: 10100153b;  */

void FUN_1010014e8(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10100153c; end: 101001583; -[SCQuickCutViewIntegrationEntryPoint musicPillScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100153c(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d542a8;
  func_0x000107c61428(param_1 + _DAT_112d542a8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 101001584; end: 10100158f; -[SCQuickCutViewIntegrationEntryPoint setMusicPillScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001584(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d542a8;
  func_0x000107c61428(param_1 + _DAT_112d542a8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101001590; end: 1010015d7; -[SCQuickCutViewIntegrationEntryPoint musicPickerScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001590(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d542b0;
  func_0x000107c61428(param_1 + _DAT_112d542b0,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 1010015d8; end: 1010015e3; -[SCQuickCutViewIntegrationEntryPoint setMusicPickerScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010015d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d542b0;
  func_0x000107c61428(param_1 + _DAT_112d542b0,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 1010015e4; end: 10100162b; -[SCQuickCutViewIntegrationEntryPoint musicEditorScopeExposer] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1010015e4(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112d542b8;
  func_0x000107c61428(param_1 + _DAT_112d542b8,auStack_38,0,0);
  func_0x000107c6117c(*(undefined8 *)(param_1 + lVar1));
  return;
}



/* Entry: 10100162c; end: 101001637; -[SCQuickCutViewIntegrationEntryPoint setMusicEditorScopeExposer:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10100162c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112d542b8;
  func_0x000107c61428(param_1 + _DAT_112d542b8,auStack_48,1,0);
  uVar2 = *(undefined8 *)(param_1 + lVar1);
  *(undefined8 *)(param_1 + lVar1) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar2);
  return;
}



/* Entry: 101001638; end: 101001697;  */

void FUN_101001638(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *param_4;
  func_0x000107c61428(param_1 + lVar2,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_1 + lVar2);
  *(undefined8 *)(param_1 + lVar2) = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61170(uVar1);
  return;
}



/* Entry: 101001698; end: 101002d97;  */

/* WARNING: Possible PIC construction at 0x000101001cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101001e0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101001e50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002340: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010023f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002404: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100241c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002430: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002444: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100245c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002474: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100248c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010024a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010024bc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010024d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010024ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002ca8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002cb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002cc8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002cd8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002ce8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002d00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002d18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002d30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002d48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002d60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002be0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002bf0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c20: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c68: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002c98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b40: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b70: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b88: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002ba0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002bb8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002bd0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002aa4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002ab4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002ac4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002adc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002af4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002b0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010029dc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010029ec: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010029fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a0c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a1c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a30: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a48: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002a60: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002948: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002958: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002968: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002978: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002988: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100299c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010029b4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010029cc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010028c8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010028d8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010028e8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010028f8: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002908: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002920: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002938: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100284c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100285c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100286c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100287c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010100288c: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010028a4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010027d4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010027e4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010027f4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002804: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002814: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002828: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002770: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002780: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002790: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010027a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010027b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010027c4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002720: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002730: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002740: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002750: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002760: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010026d0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010026e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010026f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002700: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002680: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002690: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010026a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010026b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002640: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002650: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002660: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002670: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002610: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002620: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002630: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010025e0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010025f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010025b0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010025c0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002590: Changing call to branch */
/* WARNING: Possible PIC construction at 0x0001010025a0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101002580: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001010025a4) */
/* WARNING: Removing unreachable block (ram,0x000101002594) */
/* WARNING: Removing unreachable block (ram,0x0001010025c4) */
/* WARNING: Removing unreachable block (ram,0x0001010025b4) */
/* WARNING: Removing unreachable block (ram,0x0001010025f4) */
/* WARNING: Removing unreachable block (ram,0x0001010025e4) */
/* WARNING: Removing unreachable block (ram,0x000101002634) */
/* WARNING: Removing unreachable block (ram,0x000101002624) */
/* WARNING: Removing unreachable block (ram,0x000101002614) */
/* WARNING: Removing unreachable block (ram,0x000101002674) */
/* WARNING: Removing unreachable block (ram,0x000101002664) */
/* WARNING: Removing unreachable block (ram,0x000101002654) */
/* WARNING: Removing unreachable block (ram,0x000101002644) */
/* WARNING: Removing unreachable block (ram,0x0001010026b4) */
/* WARNING: Removing unreachable block (ram,0x0001010026a4) */
/* WARNING: Removing unreachable block (ram,0x000101002694) */
/* WARNING: Removing unreachable block (ram,0x000101002684) */
/* WARNING: Removing unreachable block (ram,0x000101002704) */
/* WARNING: Removing unreachable block (ram,0x0001010026f4) */
/* WARNING: Removing unreachable block (ram,0x0001010026e4) */
/* WARNING: Removing unreachable block (ram,0x0001010026d4) */
/* WARNING: Removing unreachable block (ram,0x000101002764) */
/* WARNING: Removing unreachable block (ram,0x000101002754) */
/* WARNING: Removing unreachable block (ram,0x000101002744) */
/* WARNING: Removing unreachable block (ram,0x000101002734) */
/* WARNING: Removing unreachable block (ram,0x000101002724) */
/* WARNING: Removing unreachable block (ram,0x0001010027c8) */
/* WARNING: Removing unreachable block (ram,0x0001010027b4) */
/* WARNING: Removing unreachable block (ram,0x0001010027a4) */
/* WARNING: Removing unreachable block (ram,0x000101002794) */
/* WARNING: Removing unreachable block (ram,0x000101002784) */
/* WARNING: Removing unreachable block (ram,0x000101002774) */
/* WARNING: Removing unreachable block (ram,0x00010100282c) */
/* WARNING: Removing unreachable block (ram,0x000101002818) */
/* WARNING: Removing unreachable block (ram,0x000101002808) */
/* WARNING: Removing unreachable block (ram,0x0001010027f8) */
/* WARNING: Removing unreachable block (ram,0x0001010027e8) */
/* WARNING: Removing unreachable block (ram,0x0001010027d8) */
/* WARNING: Removing unreachable block (ram,0x0001010028a8) */
/* WARNING: Removing unreachable block (ram,0x000101002890) */
/* WARNING: Removing unreachable block (ram,0x000101002880) */
/* WARNING: Removing unreachable block (ram,0x000101002870) */
/* WARNING: Removing unreachable block (ram,0x000101002860) */
/* WARNING: Removing unreachable block (ram,0x000101002850) */
/* WARNING: Removing unreachable block (ram,0x00010100293c) */
/* WARNING: Removing unreachable block (ram,0x000101002924) */
/* WARNING: Removing unreachable block (ram,0x00010100290c) */
/* WARNING: Removing unreachable block (ram,0x0001010028fc) */
/* WARNING: Removing unreachable block (ram,0x0001010028ec) */
/* WARNING: Removing unreachable block (ram,0x0001010028dc) */
/* WARNING: Removing unreachable block (ram,0x0001010028cc) */
/* WARNING: Removing unreachable block (ram,0x0001010029d0) */
/* WARNING: Removing unreachable block (ram,0x0001010029b8) */
/* WARNING: Removing unreachable block (ram,0x0001010029a0) */
/* WARNING: Removing unreachable block (ram,0x00010100298c) */
/* WARNING: Removing unreachable block (ram,0x00010100297c) */
/* WARNING: Removing unreachable block (ram,0x00010100296c) */
/* WARNING: Removing unreachable block (ram,0x00010100295c) */
/* WARNING: Removing unreachable block (ram,0x00010100294c) */
/* WARNING: Removing unreachable block (ram,0x000101002a64) */
/* WARNING: Removing unreachable block (ram,0x000101002a4c) */
/* WARNING: Removing unreachable block (ram,0x000101002a34) */
/* WARNING: Removing unreachable block (ram,0x000101002a20) */
/* WARNING: Removing unreachable block (ram,0x000101002a10) */
/* WARNING: Removing unreachable block (ram,0x000101002a00) */
/* WARNING: Removing unreachable block (ram,0x0001010029f0) */
/* WARNING: Removing unreachable block (ram,0x0001010029e0) */
/* WARNING: Removing unreachable block (ram,0x000101002b10) */
/* WARNING: Removing unreachable block (ram,0x000101002af8) */
/* WARNING: Removing unreachable block (ram,0x000101002ae0) */
/* WARNING: Removing unreachable block (ram,0x000101002ac8) */
/* WARNING: Removing unreachable block (ram,0x000101002ab8) */
/* WARNING: Removing unreachable block (ram,0x000101002aa8) */
/* WARNING: Removing unreachable block (ram,0x000101002a98) */
/* WARNING: Removing unreachable block (ram,0x000101002a88) */
/* WARNING: Removing unreachable block (ram,0x000101002bd4) */
/* WARNING: Removing unreachable block (ram,0x000101002bbc) */
/* WARNING: Removing unreachable block (ram,0x000101002ba4) */
/* WARNING: Removing unreachable block (ram,0x000101002b8c) */
/* WARNING: Removing unreachable block (ram,0x000101002b74) */
/* WARNING: Removing unreachable block (ram,0x000101002b64) */
/* WARNING: Removing unreachable block (ram,0x000101002b54) */
/* WARNING: Removing unreachable block (ram,0x000101002b44) */
/* WARNING: Removing unreachable block (ram,0x000101002b34) */
/* WARNING: Removing unreachable block (ram,0x000101002c9c) */
/* WARNING: Removing unreachable block (ram,0x000101002c84) */
/* WARNING: Removing unreachable block (ram,0x000101002c6c) */
/* WARNING: Removing unreachable block (ram,0x000101002c54) */
/* WARNING: Removing unreachable block (ram,0x000101002c3c) */
/* WARNING: Removing unreachable block (ram,0x000101002c24) */
/* WARNING: Removing unreachable block (ram,0x000101002c14) */
/* WARNING: Removing unreachable block (ram,0x000101002c04) */
/* WARNING: Removing unreachable block (ram,0x000101002bf4) */
/* WARNING: Removing unreachable block (ram,0x000101002be4) */
/* WARNING: Removing unreachable block (ram,0x000101002d64) */
/* WARNING: Removing unreachable block (ram,0x000101002d74) */
/* WARNING: Removing unreachable block (ram,0x000101002d4c) */
/* WARNING: Removing unreachable block (ram,0x000101002d34) */
/* WARNING: Removing unreachable block (ram,0x000101002d1c) */
/* WARNING: Removing unreachable block (ram,0x000101002d04) */
/* WARNING: Removing unreachable block (ram,0x000101002cec) */
/* WARNING: Removing unreachable block (ram,0x000101002cdc) */
/* WARNING: Removing unreachable block (ram,0x000101002ccc) */
/* WARNING: Removing unreachable block (ram,0x000101002cbc) */
/* WARNING: Removing unreachable block (ram,0x000101002cac) */
/* WARNING: Removing unreachable block (ram,0x0001010024f0) */
/* WARNING: Removing unreachable block (ram,0x0001010024d8) */
/* WARNING: Removing unreachable block (ram,0x0001010024c0) */
/* WARNING: Removing unreachable block (ram,0x0001010024a8) */
/* WARNING: Removing unreachable block (ram,0x000101002490) */
/* WARNING: Removing unreachable block (ram,0x000101002478) */
/* WARNING: Removing unreachable block (ram,0x000101002460) */
/* WARNING: Removing unreachable block (ram,0x000101002448) */
/* WARNING: Removing unreachable block (ram,0x000101002434) */
/* WARNING: Removing unreachable block (ram,0x000101002420) */
/* WARNING: Removing unreachable block (ram,0x000101002408) */
/* WARNING: Removing unreachable block (ram,0x0001010023f4) */
/* WARNING: Removing unreachable block (ram,0x000101002344) */
/* WARNING: Removing unreachable block (ram,0x000101001e54) */
/* WARNING: Removing unreachable block (ram,0x000101001e10) */
/* WARNING: Removing unreachable block (ram,0x000101001cbc) */
/* WARNING: Removing unreachable block (ram,0x000101002584) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101001698(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long unaff_x20;
  undefined8 uVar14;
  undefined1 auStack_90 [24];
  undefined8 uStack_78;
  undefined8 uStack_70;
  
  lVar6 = unaff_x20;
  func_0x000107c3e794();
  func_0x000107c61180();
  if (lVar6 != 0) {
    lVar11 = unaff_x20;
    func_0x000107c5c634();
    func_0x000107c61180();
    if (lVar11 != 0) {
      lVar1 = unaff_x20;
      func_0x000107c4b25c();
      func_0x000107c61180();
      if (lVar1 == 0) {
        func_0x000107c61170(lVar6);
        lVar6 = lVar11;
      }
      else {
        lVar1 = unaff_x20;
        func_0x000107c4d224();
        func_0x000107c61180();
        if (lVar1 == 0) {
          func_0x000107c61170(lVar6);
          lVar6 = lVar11;
        }
        else {
          lVar1 = unaff_x20;
          func_0x000107c4d6ac();
          func_0x000107c61180();
          if (lVar1 != 0) {
            lVar1 = unaff_x20;
            func_0x000107c5b3b8();
            func_0x000107c61180();
            if (lVar1 != 0) {
              lVar2 = unaff_x20;
              func_0x000107c5b1dc();
              func_0x000107c61180();
              if (lVar2 == 0) {
                func_0x000107c61170(lVar6);
                lVar6 = lVar11;
              }
              else {
                lVar2 = unaff_x20;
                func_0x000107c5b1cc();
                func_0x000107c61180();
                if (lVar2 == 0) {
                  func_0x000107c61170(lVar6);
                  lVar6 = lVar11;
                }
                else {
                  lVar12 = unaff_x20;
                  func_0x000107c3e274();
                  func_0x000107c61180();
                  if (lVar12 != 0) {
                    lVar12 = unaff_x20;
                    func_0x000107c4f820();
                    func_0x000107c61180();
                    if (lVar12 != 0) {
                      lVar3 = unaff_x20;
                      func_0x000107c4cb8c();
                      func_0x000107c61180();
                      if (lVar3 == 0) {
                        func_0x000107c61170(lVar6);
                        lVar6 = lVar11;
                      }
                      else {
                        lVar4 = unaff_x20;
                        func_0x000107c4afbc();
                        func_0x000107c61180();
                        if (lVar4 == 0) {
                          func_0x000107c61170(lVar6);
                          lVar6 = lVar11;
                        }
                        else {
                          lVar4 = unaff_x20;
                          func_0x000107c4b2f4();
                          func_0x000107c61180();
                          if (lVar4 != 0) {
                            lVar5 = unaff_x20;
                            func_0x000107c4d260();
                            func_0x000107c61180();
                            if (lVar5 != 0) {
                              lVar5 = unaff_x20;
                              func_0x000107c4d238();
                              func_0x000107c61180();
                              if (lVar5 == 0) {
                                func_0x000107c61170(lVar6);
                                lVar6 = lVar11;
                              }
                              else {
                                lVar5 = unaff_x20;
                                func_0x000107c4d210();
                                func_0x000107c61180();
                                if (lVar5 == 0) {
                                  func_0x000107c61170(lVar6);
                                  lVar6 = lVar11;
                                }
                                else {
                                  lVar5 = unaff_x20;
                                  func_0x000107c3e3f8();
                                  func_0x000107c61180();
                                  if (lVar5 != 0) {
                                    lVar5 = unaff_x20;
                                    func_0x000107c4d840();
                                    func_0x000107c61180();
                                    if (lVar5 != 0) {
                                      lVar5 = unaff_x20;
                                      func_0x000107c4cfc0();
                                      func_0x000107c61180();
                                      if (lVar5 == 0) {
                                        func_0x000107c61170(lVar6);
                                        lVar6 = lVar11;
                                      }
                                      else {
                                        lVar5 = unaff_x20;
                                        func_0x000107c4b280();
                                        func_0x000107c61180();
                                        if (lVar5 == 0) {
                                          func_0x000107c61170(lVar6);
                                          lVar6 = lVar11;
                                        }
                                        else {
                                          lVar11 = unaff_x20;
                                          func_0x000107c4cc4c();
                                          func_0x000107c61180();
                                          if (lVar11 != 0) {
                                            func_0x000107c5b1bc();
                                            func_0x000107c61180();
                                            if (unaff_x20 != 0) {
                                              lVar6 = 0;
                                              func_0x000100ff337c();
                                              func_0x000107c613fc();
                                              *(undefined8 *)(lVar6 + 0x18) = 0;
                                              func_0x0001000d224c(auStack_90);
                                              puVar7 = auStack_90;
                                              func_0x000101003d40(puVar7,uStack_78);
                                              uVar8 = 2;
                                              func_0x000100774b74(2,8,0,uStack_78,uStack_70,puVar7);
                                              FUN_101003d84(auStack_90);
                                              puVar9 = &UNK_110375c18;
                                              func_0x000107c613fc(&UNK_110375c18,0x18,7);
                                              *(long *)(puVar9 + 0x10) = lVar4;
                                              func_0x0001000285a8(0x112d53a70,&UNK_10d91a680);
                                              func_0x000107c613fc();
                                              func_0x000107c61174();
                                              pcVar10 = FUN_101002d98;
                                              func_0x0001000bdd8c(FUN_101002d98,puVar9);
                                              uVar14 = *(undefined8 *)(lVar12 + _DAT_112faccc0);
                                              lVar11 = 0;
                                              FUN_100fda79c();
                                              func_0x000107c613fc();
                                              func_0x000107c6157c(uVar14);
                                              func_0x000107c6157c(pcVar10);
                                              puVar9 = PTR___swiftEmptyArrayStorage_11034f1c8;
                                              func_0x000100bcbf04();
                                              *(undefined **)(lVar11 + 0x20) = puVar9;
                                              lVar6 = _DAT_112d529f0;
                                              lVar12 = 0;
                                              func_0x000107c5eea4();
                                              pcVar13 = *(code **)(*(long *)(lVar12 + -8) + 0x38);
                                              (*pcVar13)(lVar11 + lVar6,1,1,lVar12);
                                              (*pcVar13)(lVar11 + _DAT_112d529f8,1,1,lVar12);
                                              (*pcVar13)(lVar11 + _DAT_112d52a00,1,1,lVar12);
                                              *(undefined8 *)(lVar11 + 0x10) = uVar14;
                                              *(code **)(lVar11 + 0x18) = pcVar10;
                                              uVar14 = *(undefined8 *)(lVar3 + _DAT_1130806b8);
                                              puVar9 = &UNK_110375c40;
                                              func_0x000107c613fc(&UNK_110375c40,0x38,7);
                                              *(long *)(puVar9 + 0x10) = lVar2;
                                              *(long *)(puVar9 + 0x18) = unaff_x20;
                                              *(undefined8 *)(puVar9 + 0x20) = uVar8;
                                              *(undefined8 *)(puVar9 + 0x28) = uVar14;
                                              *(long *)(puVar9 + 0x30) = lVar11;
                                              func_0x0001000285a8(0x112d53a78,&UNK_10d91a688);
                                              func_0x000107c613fc();
                                              func_0x000107c61580(uVar14,2);
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c6157c(lVar11);
                                              func_0x0001000bdd8c(0x101003d20,puVar9);
                                              func_0x0001000285a8(0x112d51708,&UNK_10d918530);
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c61174();
                                              func_0x000107c4cca8();
                                              func_0x000107c61180();
                                              func_0x0001000bda74();
                                              lVar6 = lVar1;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(lVar6);
    return;
  }
  return;
}



/* Entry: 101002d98; end: 101002d9f;  */

void FUN_101002d98(undefined8 *param_1)

{
  char *pcVar1;
  char *pcVar2;
  long unaff_x20;
  
  pcVar2 = *(char **)(unaff_x20 + 0x10);
  func_0x000107c4b2ec();
  func_0x000107c61180();
  pcVar1 = pcVar2;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(pcVar2);
  if (pcVar1 == (char *)0x0) {
    pcVar2 = 
    "init(beginIn:systemScope:lensMediaDownloaderServices:musicFetcherServices:ngsmePlaybackServices:snapRendererServices:snapDocMediaClaimingServices:snapDocFactoryServices:asyncQueueServices:quickCutLoggingServices:memoriesExperimentServices:lensConfigurationServices:lensPerformerServices:musicPillScopeExposer:musicPickerScopeExposer:musicEditorScopeExposer:audioSessionServices:notificationServices:mixerNamespaceServices:lensMetadataRetrievingServices:memoriesQuickCutPreferencesServices:snapDocEditorServices:)"
    ;
    func_0x0001000c10c0();
    func_0x000107c61180();
  }
  else {
    pcVar2 = pcVar1;
    func_0x000107c51f40();
    func_0x000107c61180();
    func_0x000107c615e8(pcVar1);
  }
  *param_1 = pcVar2;
  return;
}



/* Entry: 101002da0; end: 101002dc7; -[SCQuickCutViewIntegrationEntryPoint begin] */

void FUN_101002da0(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_101001698();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 101002dc8; end: 101002e7b; -[SCQuickCutViewIntegrationEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101002dc8(long param_1)

{
  long lVar1;
  long lVar2;
  undefined1 *puVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lStack_50;
  long lStack_48;
  
  plVar4 = &lStack_50;
  lVar1 = param_1;
  func_0x000107c614f0();
  puVar5 = *(undefined1 **)(param_1 + _DAT_112d542c0);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    func_0x000100ff2ea4();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_101002e5c;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_101002e5c:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 101002e7c; end: 1010038ab;  */

void FUN_101002e7c(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = 0;
  if ((param_2 == 0x6e496e69676562 && param_3 == -0x1900000000000000) ||
     (func_0x000107c605b8(0x6e496e69676562,0xe700000000000000,param_2,param_3,0), (uVar2 & 1) != 0))
  {
    func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
    func_0x000107c605b0();
    func_0x000107c52c38();
  }
  else {
    uVar2 = 0x63536d6574737973;
    if (((param_2 == 0x63536d6574737973) && (param_3 == -0x14ffffffff9a8f91)) ||
       (func_0x000107c605b8(0x63536d6574737973,0xeb0000000065706f,param_2,param_3,0),
       (uVar2 & 1) != 0)) {
      func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
      func_0x000107c605b0();
      func_0x000107c59b6c();
    }
    else {
      uVar2 = 0xd00000000000001b;
      if (((param_2 == -0x2fffffffffffffe5) && (param_3 == -0x7ffffffef10e0ab0)) ||
         (func_0x000107c605b8(0xd00000000000001b,0x800000010ef1f550,param_2,param_3,0),
         (uVar2 & 1) != 0)) {
        func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c55db8();
      }
      else {
        if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e0a90)) {
          uVar2 = 0;
          func_0x000107c605b8(0xd000000000000014,0x800000010ef1f570,param_2,param_3,0);
          if ((uVar2 & 1) == 0) {
            uVar2 = 0xd000000000000015;
            if (((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffef10e0a70)) ||
               (func_0x000107c605b8(0xd000000000000015,0x800000010ef1f590,param_2,param_3,0),
               (uVar2 & 1) != 0)) {
              func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
              func_0x000107c605b0();
              func_0x000107c56aac();
              goto LAB_101002f0c;
            }
            if ((param_2 != -0x2fffffffffffffec) || (param_3 != -0x7ffffffef10e2130)) {
              uVar2 = 0;
              func_0x000107c605b8(0xd000000000000014,0x800000010ef1ded0,param_2,param_3,0);
              if ((uVar2 & 1) == 0) {
                uVar2 = 0;
                if (((param_2 == -0x2fffffffffffffe4) && (param_3 == -0x7ffffffef10e2150)) ||
                   (func_0x000107c605b8(0xd00000000000001c,0x800000010ef1deb0,param_2,param_3,0),
                   (uVar2 & 1) != 0)) {
                  func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                  func_0x000107c605b0();
                  func_0x000107c5936c();
                }
                else {
                  uVar2 = 0;
                  if (((param_2 == -0x2fffffffffffffea) && (param_3 == -0x7ffffffef10e0a50)) ||
                     (func_0x000107c605b8(0xd000000000000016,0x800000010ef1f5b0,param_2,param_3,0),
                     (uVar2 & 1) != 0)) {
                    func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                    func_0x000107c605b0();
                    func_0x000107c59360();
                  }
                  else {
                    uVar2 = 0;
                    if (((param_2 == -0x2fffffffffffffee) && (param_3 == -0x7ffffffef10ed650)) ||
                       (func_0x000107c605b8(0xd000000000000012,0x800000010ef129b0,param_2,param_3,0)
                       , (uVar2 & 1) != 0)) {
                      func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                      func_0x000107c605b0();
                      func_0x000107c52954();
                    }
                    else {
                      uVar2 = 0xd000000000000017;
                      if (((param_2 == -0x2fffffffffffffe9) && (param_3 == -0x7ffffffef10e2110)) ||
                         (func_0x000107c605b8(0xd000000000000017,0x800000010ef1def0,param_2,param_3,
                                              0), (uVar2 & 1) != 0)) {
                        func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                        func_0x000107c605b0();
                        func_0x000107c57ac8();
                      }
                      else {
                        uVar2 = 0;
                        if (((param_2 == -0x2fffffffffffffe6) && (param_3 == -0x7ffffffef10e20c0))
                           || (func_0x000107c605b8(0xd00000000000001a,0x800000010ef1df40,param_2,
                                                   param_3,0), (uVar2 & 1) != 0)) {
                          func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                          func_0x000107c605b0();
                          func_0x000107c56550();
                        }
                        else {
                          uVar2 = 0xd000000000000019;
                          if (((param_2 == -0x2fffffffffffffe7) && (param_3 == -0x7ffffffef10e0a30))
                             || (func_0x000107c605b8(0xd000000000000019,0x800000010ef1f5d0,param_2,
                                                     param_3,0), (uVar2 & 1) != 0)) {
                            func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c55cbc();
                          }
                          else {
                            if ((param_2 != -0x2fffffffffffffeb) || (param_3 != -0x7ffffffef10e0a10)
                               ) {
                              uVar2 = 0xd000000000000015;
                              func_0x000107c605b8(0xd000000000000015,0x800000010ef1f5f0,param_2,
                                                  param_3,0);
                              if ((uVar2 & 1) == 0) {
                                if ((param_2 != -0x2fffffffffffffec) ||
                                   (param_3 != -0x7ffffffef10e5200)) {
                                  uVar2 = 0;
                                  func_0x000107c605b8(0xd000000000000014,0x800000010ef1ae00,param_2,
                                                      param_3,0);
                                  if ((uVar2 & 1) == 0) {
                                    if ((param_2 != -0x2fffffffffffffec) ||
                                       (param_3 != -0x7ffffffef10eec60)) {
                                      uVar2 = 0;
                                      func_0x000107c605b8(0xd000000000000014,0x800000010ef113a0,
                                                          param_2,param_3,0);
                                      if ((uVar2 & 1) == 0) {
                                        if ((param_2 != -0x2fffffffffffffea) ||
                                           (param_3 != -0x7ffffffef10e09f0)) {
                                          uVar2 = 0;
                                          func_0x000107c605b8(0xd000000000000016,0x800000010ef1f610,
                                                              param_2,param_3,0);
                                          if ((uVar2 & 1) == 0) {
                                            uVar2 = 0;
                                            if (((param_2 == -0x2fffffffffffffe2) &&
                                                (param_3 == -0x7ffffffef10e09d0)) ||
                                               (func_0x000107c605b8(0xd00000000000001e,
                                                                    0x800000010ef1f630,param_2,
                                                                    param_3,0), (uVar2 & 1) != 0)) {
                                              func_0x000101003d40(param_1,*(undefined8 *)
                                                                           (param_1 + 0x18));
                                              func_0x000107c605b0();
                                              func_0x000107c55dc0();
                                            }
                                            else {
                                              uVar2 = 0xd000000000000023;
                                              if (((param_2 == -0x2fffffffffffffdd) &&
                                                  (param_3 == -0x7ffffffef10e1f70)) ||
                                                 (func_0x000107c605b8(0xd000000000000023,
                                                                      0x800000010ef1e090,param_2,
                                                                      param_3,0), (uVar2 & 1) != 0))
                                              {
                                                func_0x000101003d40(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                func_0x000107c605b0();
                                                func_0x000107c565ac();
                                              }
                                              else {
                                                if ((param_2 != -0x2fffffffffffffeb) ||
                                                   (param_3 != -0x7ffffffef10e2010)) {
                                                  uVar2 = 0xd000000000000015;
                                                  func_0x000107c605b8(0xd000000000000015,
                                                                      0x800000010ef1dff0,param_2,
                                                                      param_3,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    if ((param_2 != -0x2fffffffffffffeb) ||
                                                       (param_3 != -0x7ffffffef10e09b0)) {
                                                      uVar2 = 0xd000000000000015;
                                                      func_0x000107c605b8(0xd000000000000015,
                                                                          0x800000010ef1f650,param_2
                                                                          ,param_3,0);
                                                      if ((uVar2 & 1) == 0) {
                                                        if ((param_2 != -0x2fffffffffffffe9) ||
                                                           (param_3 != -0x7ffffffef10e0990)) {
                                                          uVar2 = 0xd000000000000017;
                                                          func_0x000107c605b8(0xd000000000000017,
                                                                              0x800000010ef1f670,
                                                                              param_2,param_3,0);
                                                          if ((uVar2 & 1) == 0) {
                                                            if ((param_2 != -0x2fffffffffffffe9) ||
                                                               (param_3 != -0x7ffffffef10e0970)) {
                                                              uVar2 = 0xd000000000000017;
                                                              func_0x000107c605b8(0xd000000000000017
                                                                                  ,
                                                  0x800000010ef1f690,param_2,param_3,0);
                                                  if ((uVar2 & 1) == 0) {
                                                    func_0x000107c602fc(0x15);
                                                    func_0x000107c6142c(0xe000000000000000);
                                                    func_0x000107c5fb78(param_2,param_3);
                                                    func_0x000107c60450("Fatal error",0xb,2,
                                                                        0xd000000000000013,
                                                                        0x800000010ef0fc20,
                                                                                                                                                
                                                  "QuickCutViewIntegration/SCQuickCutViewIntegrationEntryPoint.swift"
                                                  ,0x41,2,0x8d,0);
                    /* WARNING: Does not return */
                                                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1010038ac)
                                                  ;
                                                  (*pcVar1)();
                                                  }
                                                  }
                                                  func_0x000101003d40(param_1,*(undefined8 *)
                                                                               (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c56830();
                                                  goto LAB_101002f0c;
                                                  }
                                                  }
                                                  func_0x000101003d40(param_1,*(undefined8 *)
                                                                               (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c5684c();
                                                  goto LAB_101002f0c;
                                                  }
                                                  }
                                                  func_0x000101003d40(param_1,*(undefined8 *)
                                                                               (param_1 + 0x18));
                                                  func_0x000107c605b0();
                                                  func_0x000107c56858();
                                                  goto LAB_101002f0c;
                                                  }
                                                }
                                                func_0x000101003d40(param_1,*(undefined8 *)
                                                                             (param_1 + 0x18));
                                                func_0x000107c605b0();
                                                func_0x000107c5935c();
                                              }
                                            }
                                            goto LAB_101002f0c;
                                          }
                                        }
                                        func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18))
                                        ;
                                        func_0x000107c605b0();
                                        func_0x000107c56724();
                                        goto LAB_101002f0c;
                                      }
                                    }
                                    func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                                    func_0x000107c605b0();
                                    func_0x000107c56b34();
                                    goto LAB_101002f0c;
                                  }
                                }
                                func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                                func_0x000107c605b0();
                                func_0x000107c52a10();
                                goto LAB_101002f0c;
                              }
                            }
                            func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
                            func_0x000107c605b0();
                            func_0x000107c55df4();
                          }
                        }
                      }
                    }
                  }
                }
                goto LAB_101002f0c;
              }
            }
            func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
            func_0x000107c605b0();
            func_0x000107c59454();
            goto LAB_101002f0c;
          }
        }
        func_0x000101003d40(param_1,*(undefined8 *)(param_1 + 0x18));
        func_0x000107c605b0();
        func_0x000107c5683c();
      }
    }
  }
LAB_101002f0c:
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_1);
  return;
}



/* Entry: 1010038ac; end: 101003957; -[SCQuickCutViewIntegrationEntryPoint setValue:forIvarName:] */

void FUN_1010038ac(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  FUN_101002e7c(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  FUN_101003d84(auStack_50);
  return;
}



/* Entry: 101003958; end: 101003b43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101003958(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112d54210,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54218,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54220,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54228,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54230,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54238,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54240,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54248,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54250,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54258,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54260,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54268,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54270,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54278,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54280,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54288,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54290,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d54298,0);
  func_0x000107c61614(unaff_x20 + _DAT_112d542a0,0);
  *(undefined8 *)(unaff_x20 + _DAT_112d542a8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d542b0) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d542b8) = 0;
  *(undefined8 *)(unaff_x20 + _DAT_112d542c0) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101003b44; end: 101003b63; -[SCQuickCutViewIntegrationEntryPoint init] */

void FUN_101003b44(void)

{
  FUN_101003958();
  return;
}



/* Entry: 101003b64; end: 101003b97;  */

void FUN_101003b64(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 101003b98; end: 101003d1f; -[SCQuickCutViewIntegrationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101003b98(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112d54210);
  func_0x000107c61610(param_1 + _DAT_112d54218);
  func_0x000107c61610(param_1 + _DAT_112d54220);
  func_0x000107c61610(param_1 + _DAT_112d54228);
  func_0x000107c61610(param_1 + _DAT_112d54230);
  func_0x000107c61610(param_1 + _DAT_112d54238);
  func_0x000107c61610(param_1 + _DAT_112d54240);
  func_0x000107c61610(param_1 + _DAT_112d54248);
  func_0x000107c61610(param_1 + _DAT_112d54250);
  func_0x000107c61610(param_1 + _DAT_112d54258);
  func_0x000107c61610(param_1 + _DAT_112d54260);
  func_0x000107c61610(param_1 + _DAT_112d54268);
  func_0x000107c61610(param_1 + _DAT_112d54270);
  func_0x000107c61610(param_1 + _DAT_112d54278);
  func_0x000107c61610(param_1 + _DAT_112d54280);
  func_0x000107c61610(param_1 + _DAT_112d54288);
  func_0x000107c61610(param_1 + _DAT_112d54290);
  func_0x000107c61610(param_1 + _DAT_112d54298);
  func_0x000107c61610(param_1 + _DAT_112d542a0);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d542a8));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d542b0));
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112d542b8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d542c0));
  return;
}



/* Entry: 101003d20; end: 101003d63;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101003d20(long *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined1 auStack_78 [40];
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x30);
  func_0x0001000d224c(auStack_78);
  func_0x000107c42d48();
  func_0x000107c61180();
  lVar3 = 0;
  func_0x000100ff1898();
  lVar4 = lVar3;
  func_0x000107c613fc();
  func_0x000107c61580(uVar1,2);
  func_0x000107c6157c(uVar7);
  func_0x000107c61174();
  func_0x000107c61474(lVar4);
  *(undefined8 *)(lVar4 + 0xd8) = 0;
  *(undefined8 *)(lVar4 + 0xe0) = 0;
  FUN_100c9f95c(auStack_78,lVar4 + 0x70);
  *(undefined8 *)(lVar4 + 0x98) = uVar2;
  *(undefined8 *)(lVar4 + 0xa0) = uVar5;
  *(code **)(lVar4 + 0xb8) = FUN_100ff3698;
  *(undefined8 *)(lVar4 + 0xc0) = uVar1;
  *(undefined8 *)(lVar4 + 200) = 0x100ff36a0;
  *(undefined8 *)(lVar4 + 0xd0) = uVar1;
  puVar6 = &UNK_110375630;
  func_0x000107c613fc(&UNK_110375630,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = 0x100ff36a8;
  *(undefined8 *)(puVar6 + 0x18) = uVar7;
  *(undefined8 *)(lVar4 + 0xa8) = 0x100ff36b0;
  *(undefined **)(lVar4 + 0xb0) = puVar6;
  param_1[3] = lVar3;
  param_1[4] = (long)&PTR_DAT_110375400;
  *param_1 = lVar4;
  return;
}



/* Entry: 101003d64; end: 101003d83;  */

void FUN_101003d64(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7300);
  return;
}



/* Entry: 101003d84; end: 101003da3;  */

void FUN_101003d84(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101003d98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 101003da4; end: 101003e3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101003da4(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112d542f0) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 101003e3c; end: 101003e9b; -[QuickCutMusicFetcherServices init] */

void FUN_101003e3c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("QuickCutMusicFetcherServices.QuickCutMusicFetcherServices",0x39,"init()",6,0)
  ;
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x101003e68);
  (*pcVar1)();
}



/* Entry: 101003e9c; end: 101003eab; -[QuickCutMusicFetcherServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101003e9c(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112d542f0));
  return;
}



/* Entry: 101003eac; end: 101003ecb;  */

void FUN_101003eac(void)

{
  func_0x000107c61168(&PTR_PTR_1127a7468);
  return;
}



/* Entry: 101003ecc; end: 101003edf;  */

bool FUN_101003ecc(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101003ee0; end: 1010040e7;  */

void FUN_101003ee0(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  uVar5 = 0x800000010ef1e850;
  uVar3 = 0xd000000000000011;
  if (cVar2 != '\x01') {
    uVar5 = 0xe700000000000000;
    uVar3 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0xeb0000000064656c;
  uVar4 = 0x6961466863746566;
  if (cVar2 != '\0') {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  func_0x000107c5fb58(auStack_68,uVar4,uVar1);
  func_0x000107c6142c(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 1010040e8; end: 101004173;  */

void FUN_1010040e8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  
  uVar4 = 0x800000010ef1e850;
  uVar2 = 0xd000000000000011;
  if (*unaff_x20 != '\x01') {
    uVar4 = 0xe700000000000000;
    uVar2 = 0x6e776f6e6b6e75;
  }
  uVar1 = 0xeb0000000064656c;
  uVar3 = 0x6961466863746566;
  if (*unaff_x20 != '\0') {
    uVar1 = uVar4;
    uVar3 = uVar2;
  }
  *param_1 = uVar3;
  param_1[1] = uVar1;
  return;
}



/* Entry: 101004174; end: 1010041d7;  */

ulong FUN_101004174(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  uVar1 = 0x112d3cde0;
  func_0x0001000285a8(0x112d3cde0,&DAT_10d9056a0);
  func_0x000107c61538();
  func_0x000107c604c4();
  func_0x000107c6142c(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Entry: 1010041d8; end: 1010041db;  */

void FUN_1010041d8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ae80;
  func_0x000107c61520(&UNK_10d91ae80,&UNK_110375da8);
  puRam0000000112d54320 = puVar1;
  return;
}



/* Entry: 1010041dc; end: 10100421b;  */

void FUN_1010041dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112d54320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d91ae80;
  func_0x000107c61520(&UNK_10d91ae80,&UNK_110375da8);
  puRam0000000112d54320 = puVar1;
  return;
}



/* Entry: 10100421c; end: 10100445b;  */

int FUN_10100421c(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 2) {
      iVar2 = 4;
    }
    if (param_2 + 2 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_101004298;
        goto LAB_10100427c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_10100427c:
      return ((uint)*param_1 | uVar1 << 8) - 2;
    }
  }
LAB_101004298:
  iVar2 = *param_1 - 3;
  if (*param_1 < 3) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}


