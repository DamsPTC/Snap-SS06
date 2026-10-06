/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101995038; end: 10199513f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101995038(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar2 = 0x48;
  func_0x000107c613fc();
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  uVar3 = *(undefined8 *)(param_1 + _DAT_113091ad8);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_5);
  func_0x000107c61174(param_4);
  func_0x000107c5d984();
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x000107c5faec();
  func_0x000107c61170(uVar3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_5);
  *(undefined8 *)(unaff_x20 + 0x38) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  return unaff_x20;
}



/* Entry: 101995140; end: 10199517f;  */

void FUN_101995140(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  FUN_10199e028();
  func_0x000107c613fc();
  uVar2 = 0;
  FUN_10199c988();
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_110420be0;
  *param_1 = uVar2;
  return;
}



/* Entry: 101995180; end: 1019951e7;  */

void FUN_101995180(undefined8 *param_1,code *param_2,undefined8 param_3,code *param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = 0;
  (*param_2)();
  func_0x000107c613fc();
  uVar2 = 0;
  (*param_4)();
  param_1[3] = uVar1;
  param_1[4] = param_5;
  *param_1 = uVar2;
  return;
}



/* Entry: 1019951e8; end: 1019952af;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1019951e8(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    uVar3 = 0;
  }
  else {
    uVar1 = *(undefined8 *)(param_1 + 0x28);
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x30) + _DAT_113083868);
    func_0x000107c61174(uVar2);
    func_0x000107c4ec80(uVar1);
    func_0x000107c61180();
    func_0x00010199c01c(0);
    func_0x000107c613fc();
    uVar3 = uVar2;
    FUN_10199be04(uVar2,uVar1);
    func_0x000107c61574(param_1);
    func_0x000107c61170(uVar2);
  }
  return uVar3;
}



/* Entry: 1019952b0; end: 1019952bf;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1019952b0(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 == 0) {
    uVar4 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(lVar1 + 0x28);
    uVar3 = *(undefined8 *)(*(long *)(lVar1 + 0x30) + _DAT_113083868);
    func_0x000107c61174(uVar3);
    func_0x000107c4ec80(uVar2);
    func_0x000107c61180();
    func_0x00010199c01c(0);
    func_0x000107c613fc();
    uVar4 = uVar3;
    FUN_10199be04(uVar3,uVar2);
    func_0x000107c61574(lVar1);
    func_0x000107c61170(uVar3);
  }
  return uVar4;
}



/* Entry: 1019952c0; end: 10199533b;  */

void FUN_1019952c0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1019a61a4();
  func_0x000107c613fc();
  func_0x000107c61434(param_3);
  FUN_1019a4748(param_2,param_3,0);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_1104216b0;
  *param_1 = param_2;
  return;
}



/* Entry: 10199533c; end: 101995343;  */

void FUN_10199533c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = 0;
  FUN_1019a61a4();
  func_0x000107c613fc();
  func_0x000107c61434(uVar1);
  FUN_1019a4748(uVar3,uVar1,0);
  param_1[3] = uVar2;
  param_1[4] = &PTR_DAT_1104216b0;
  *param_1 = uVar3;
  return;
}



/* Entry: 101995344; end: 1019955e7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_101995344(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *apuStack_110 [3];
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 == 0) {
    lVar2 = 0;
  }
  else {
    lVar2 = *(long *)(param_1 + 0x10);
    func_0x000107c5b4b0();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019955e8);
      (*pcVar1)();
    }
    func_0x0001000d224c(auStack_90);
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + _DAT_113092298);
    lStack_98 = lVar2;
    func_0x000107c615f0(uVar6);
    func_0x0001000d224c(auStack_c0);
    func_0x0001000d224c(auStack_e8);
    puVar3 = &UNK_110420588;
    func_0x000107c613fc(&UNK_110420588,0x18,7);
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    lVar2 = 0;
    FUN_101994684();
    func_0x000107c613fc();
    puStack_f8 = &UNK_110420680;
    ppuStack_f0 = &PTR_DAT_110420608;
    puVar4 = &UNK_1104205b0;
    func_0x000107c613fc(&UNK_1104205b0,0x40,7);
    apuStack_110[0] = puVar4;
    FUN_101995a68(&lStack_98,puVar4 + 0x10);
    puVar4 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c615f0(uVar6);
    func_0x000107c453e4();
    *(undefined **)(lVar2 + 0x10) = puVar4;
    uVar5 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar2 + 0x40) = uVar5;
    puVar4 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar2 + 0xb0) = puVar4;
    *(undefined8 *)(lVar2 + 0xc0) = 0;
    *(undefined8 *)(lVar2 + 0xb8) = 2;
    func_0x000101995aa4(auStack_c0,lVar2 + 0x18);
    func_0x000101995aa4(apuStack_110,lVar2 + 0x48);
    *(undefined8 *)(lVar2 + 0x70) = param_4;
    func_0x000101995aa4(auStack_e8,lVar2 + 0x78);
    *(code **)(lVar2 + 0xa0) = FUN_101995a60;
    *(undefined **)(lVar2 + 0xa8) = puVar3;
    puVar4 = &UNK_1104205d8;
    func_0x000107c613fc(&UNK_1104205d8,0x18,7);
    func_0x000107c61644(puVar4 + 0x10,lVar2);
    func_0x000107c61174(param_4);
    func_0x000107c6157c(puVar3);
    uVar5 = 9;
    func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8220,puVar4,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(uVar5);
    FUN_101991868();
    func_0x000107c615e8(uVar6);
    func_0x000107c61574(puVar3);
    func_0x000107c61574(param_1);
    func_0x0001000834e4(auStack_e8);
    func_0x0001000834e4(auStack_c0);
    FUN_101995b78(&lStack_98);
    func_0x0001000834e4(apuStack_110);
  }
  return lVar2;
}



/* Entry: 1019955e8; end: 1019955f7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_1019955e8(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined *apuStack_110 [3];
  undefined *puStack_f8;
  undefined **ppuStack_f0;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [40];
  long lStack_98;
  undefined1 auStack_90 [40];
  undefined1 auStack_68 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c61428(lVar2 + 0x10,auStack_68,0,0,*(undefined8 *)(unaff_x20 + 0x30));
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x10);
    func_0x000107c5b4b0();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1019955e8);
      (*pcVar1)();
    }
    func_0x0001000d224c(auStack_90);
    uVar8 = *(undefined8 *)(*(long *)(lVar2 + 0x20) + _DAT_113092298);
    lStack_98 = lVar3;
    func_0x000107c615f0(uVar8);
    func_0x0001000d224c(auStack_c0);
    func_0x0001000d224c(auStack_e8);
    puVar4 = &UNK_110420588;
    func_0x000107c613fc(&UNK_110420588,0x18,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar8;
    lVar3 = 0;
    FUN_101994684();
    func_0x000107c613fc();
    puStack_f8 = &UNK_110420680;
    ppuStack_f0 = &PTR_DAT_110420608;
    puVar5 = &UNK_1104205b0;
    func_0x000107c613fc(&UNK_1104205b0,0x40,7);
    apuStack_110[0] = puVar5;
    FUN_101995a68(&lStack_98,puVar5 + 0x10);
    puVar5 = PTR_PTR_1126ae820;
    func_0x000107c610f8();
    func_0x000107c615f0(uVar8);
    func_0x000107c453e4();
    *(undefined **)(lVar3 + 0x10) = puVar5;
    uVar6 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar3 + 0x40) = uVar6;
    puVar5 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
    func_0x000107c610f8();
    func_0x000107c453e4();
    *(undefined **)(lVar3 + 0xb0) = puVar5;
    *(undefined8 *)(lVar3 + 0xc0) = 0;
    *(undefined8 *)(lVar3 + 0xb8) = 2;
    func_0x000101995aa4(auStack_c0,lVar3 + 0x18);
    func_0x000101995aa4(apuStack_110,lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x70) = uVar7;
    func_0x000101995aa4(auStack_e8,lVar3 + 0x78);
    *(code **)(lVar3 + 0xa0) = FUN_101995a60;
    *(undefined **)(lVar3 + 0xa8) = puVar4;
    puVar5 = &UNK_1104205d8;
    func_0x000107c613fc(&UNK_1104205d8,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar3);
    func_0x000107c61174(uVar7);
    func_0x000107c6157c(puVar4);
    uVar7 = 9;
    func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a8220,puVar5,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(puVar5);
    func_0x000107c61574(uVar7);
    FUN_101991868();
    func_0x000107c615e8(uVar8);
    func_0x000107c61574(puVar4);
    func_0x000107c61574(lVar2);
    func_0x0001000834e4(auStack_e8);
    func_0x0001000834e4(auStack_c0);
    FUN_101995b78(&lStack_98);
    func_0x0001000834e4(apuStack_110);
  }
  return lVar3;
}



/* Entry: 1019955f8; end: 1019956a7;  */

undefined1  [16] FUN_1019955f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010efc4f00);
  uVar1 = param_1;
  func_0x000107c3ebd4(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010efc4f40);
  func_0x000107c4980c(param_1);
  func_0x000107c61170(uVar2);
  auVar3._8_8_ = (long)(int)param_1;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Entry: 1019956a8; end: 101995717;  */

long FUN_1019956a8(void)

{
  long lVar1;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  func_0x0001000d224c(auStack_48);
  func_0x0001000d224c(auStack_70);
  lVar1 = 0;
  FUN_1019913dc(0);
  func_0x000107c613fc();
  func_0x000100cc136c(auStack_48,lVar1 + 0x10);
  func_0x000100cc136c(auStack_70,lVar1 + 0x38);
  return lVar1;
}



/* Entry: 101995718; end: 10199571f;  */

long FUN_101995718(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_70 [40];
  undefined1 auStack_48 [40];
  
  func_0x0001000d224c(auStack_48,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18)
                     );
  func_0x0001000d224c(auStack_70);
  lVar1 = 0;
  FUN_1019913dc(0);
  func_0x000107c613fc();
  func_0x000100cc136c(auStack_48,lVar1 + 0x10);
  func_0x000100cc136c(auStack_70,lVar1 + 0x38);
  return lVar1;
}



/* Entry: 101995720; end: 10199578b;  */

void FUN_101995720(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_48 [40];
  
  func_0x0001000d224c(auStack_48);
  lVar1 = 0;
  func_0x000100715cd4();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  func_0x000100cc136c(auStack_48,lVar1 + 0x10);
  *param_1 = lVar1;
  return;
}



/* Entry: 10199578c; end: 101995793;  */

void FUN_10199578c(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_48 [40];
  
  func_0x0001000d224c(auStack_48);
  lVar1 = 0;
  func_0x000100715cd4();
  func_0x000107c613fc();
  puVar2 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(lVar1 + 0x38) = puVar2;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  func_0x000100cc136c(auStack_48,lVar1 + 0x10);
  *param_1 = lVar1;
  return;
}



/* Entry: 101995794; end: 1019957b7;  */

undefined8 FUN_101995794(void)

{
  undefined8 uStack_18;
  
  func_0x0001000d224c(&uStack_18);
  return uStack_18;
}



/* Entry: 1019957b8; end: 1019957ef;  */

void FUN_1019957b8(long param_1)

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



/* Entry: 1019957f0; end: 101995807;  */

void FUN_1019957f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_2;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101995808,0,0);
  return;
}



/* Entry: 101995808; end: 10199592f;  */

void FUN_101995808(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x22;
  undefined8 uVar7;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  func_0x000107c61428(lVar6 + 0x10,unaff_x22 + 0x10,0,0);
  lVar6 = lVar6 + 0x10;
  func_0x000107c61648();
  if (lVar6 != 0) {
    lVar2 = *(long *)(lVar6 + 0x10);
    func_0x000107c452f4();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10199592c);
      (*pcVar1)();
    }
    lVar3 = *(long *)(lVar6 + 0x10);
    func_0x000107c5d3b8();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101995930);
      (*pcVar1)();
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar4 = 0;
    func_0x000101998d54();
    func_0x000107c613fc();
    uVar5 = 0;
    func_0x0001005f60b4();
    func_0x000107c613fc();
    func_0x0001005f60d4();
    *(undefined8 *)(lVar4 + 0x10) = uVar7;
    *(long *)(lVar4 + 0x18) = lVar2;
    *(long *)(lVar4 + 0x20) = lVar3;
    *(undefined8 *)(lVar4 + 0x28) = uVar5;
    func_0x000107c61174(uVar7);
    func_0x000107c61174(lVar2);
    func_0x000107c61174(lVar3);
    FUN_10199869c();
    func_0x000107c61170(lVar3);
    func_0x000107c61170(lVar2);
    uVar5 = *(undefined8 *)(lVar6 + 0x18);
    *(long *)(lVar6 + 0x18) = lVar4;
    func_0x000107c61574(lVar6);
    func_0x000107c61574(uVar5);
  }
                    /* WARNING: Could not recover jumptable at 0x000101995924. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101995930; end: 101995993;  */

void FUN_101995930(void)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = 0x101995bc0;
  plVar3[5] = lVar1;
  plVar3[6] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101995808,0,0);
  return;
}



/* Entry: 101995994; end: 1019959cf;  */

void FUN_101995994(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 1019959d0; end: 101995a5f;  */

void FUN_1019959d0(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c6157c();
  func_0x000107c61170(uVar1);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x30));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  func_0x000107c61574();
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101995a60; end: 101995a67;  */

undefined1  [16] FUN_101995a60(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = 0xd000000000000034;
  func_0x000107c5fadc(0xd000000000000034,0x800000010efc4f00);
  uVar1 = uVar3;
  func_0x000107c3ebd4(uVar3);
  func_0x000107c61170(uVar2);
  uVar2 = 0xd000000000000032;
  func_0x000107c5fadc(0xd000000000000032,0x800000010efc4f40);
  func_0x000107c4980c(uVar3);
  func_0x000107c61170(uVar2);
  auVar4._8_8_ = (long)(int)uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Entry: 101995a68; end: 101995ae7;  */

undefined8 FUN_101995a68(undefined8 param_1,undefined8 param_2)

{
  FUN_101998128(param_2,param_1);
  return param_2;
}



/* Entry: 101995ae8; end: 101995b3b;  */

void FUN_101995ae8(void)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_101995b3c;
  plVar1[5] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101992058,0,0);
  return;
}



/* Entry: 101995b3c; end: 101995b77;  */

void FUN_101995b3c(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x000101995b74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101995b78; end: 101995bab;  */

undefined8 FUN_101995b78(undefined8 param_1)

{
  (*(code *)(undefined *)0x1019980fc)();
  return param_1;
}



/* Entry: 101995bac; end: 101995bd7;  */

void FUN_101995bac(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Entry: 101995bd8; end: 101995dff;  */

undefined * FUN_101995bd8(long param_1)

{
  ulong uVar1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    func_0x0001010673e4(0,lVar9,0);
    uVar1 = param_1 + 0x40;
    uVar10 = uVar1;
    func_0x000107c60268(uVar1,~(-1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)));
    lVar14 = 0;
    do {
      if (uVar10 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101995df0);
        (*pcVar4)();
      }
      uVar8 = uVar10 >> 6;
      uVar12 = 1L << (uVar10 & 0x3f);
      if ((*(ulong *)(uVar1 + uVar8 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101995df4);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x38) + uVar10 * 8);
      uVar11 = *(ulong *)(puVar3 + 0x10);
      uVar6 = *(ulong *)(puVar3 + 0x18);
      func_0x000107c61174();
      if (uVar6 >> 1 <= uVar11) {
        func_0x0001010673e4(1 < uVar6,uVar11 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar11 + 1;
      *(undefined8 *)(puVar3 + uVar11 * 8 + 0x20) = uVar5;
      uVar11 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar11 <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101995df8);
        (*pcVar4)();
      }
      uVar6 = *(ulong *)(uVar1 + uVar8 * 8);
      if ((uVar6 & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101995dfc);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x101995e00);
        (*pcVar4)();
      }
      uVar6 = uVar6 & -2L << (uVar10 & 0x3f);
      if (uVar6 == 0) {
        lVar13 = uVar8 << 6;
        puVar7 = (ulong *)(param_1 + 0x48 + uVar8 * 8);
        do {
          uVar8 = uVar8 + 1;
          if (uVar11 + 0x3f >> 6 <= uVar8) {
            func_0x0001019982d0(uVar10,iVar2,0);
            uVar10 = uVar11;
            goto LAB_101995c80;
          }
          uVar12 = *puVar7;
          lVar13 = lVar13 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar12 == 0);
        func_0x0001019982d0(uVar10,iVar2,0);
        uVar10 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) + lVar13;
      }
      else {
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar10 & 0x7fffffffffffffc0;
      }
LAB_101995c80:
      lVar14 = lVar14 + 1;
    } while (lVar14 != lVar9);
  }
  return puVar3;
}



/* Entry: 101995e00; end: 101995e13;  */

bool FUN_101995e00(char *param_1,char *param_2)

{
  return *param_1 == *param_2;
}



/* Entry: 101995e14; end: 101995ebf;  */

void FUN_101995e14(void)

{
  undefined1 uVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  uVar1 = *unaff_x20;
  func_0x000107c6068c(auStack_68,0);
  func_0x000107c60690(uVar1);
  func_0x000107c606a8();
  return;
}



/* Entry: 101995ec0; end: 101995ee7;  */

void FUN_101995ec0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdb9ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___ss5ErrorPsE7_domainSSvg_11034edf8)();
  return;
}



/* Entry: 101995ee8; end: 101995fbf;  */

void FUN_101995ee8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  lVar6 = *(long *)(unaff_x22 + 0x10);
  lVar7 = lVar6;
  func_0x000107c61434();
  func_0x000100403a6c();
  func_0x000107c6142c(lVar6);
  puVar5 = *(undefined8 **)(lVar7 + 0x10);
  if (puVar5 == (undefined8 *)0x0) {
    func_0x000107c6142c(lVar7);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    puVar2 = puVar5;
    func_0x00010109b448(puVar5,0);
    puVar3 = &uStack_58;
    func_0x00010109b930(puVar3,puVar2 + 4,puVar5,lVar7);
    func_0x00010109bac0(uStack_58,uStack_50,uStack_48,uStack_40,uStack_38);
    if (puVar3 != puVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101995f6c);
      (*pcVar1)();
    }
  }
  *(undefined8 **)(unaff_x22 + 0x20) = puVar2;
  plVar4 = (long *)0xd0;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101995fc0;
  lVar7 = *(long *)(unaff_x22 + 0x18);
  plVar4[0x13] = (long)puVar2;
  plVar4[0x14] = lVar7;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101996150,0,0);
  return;
}



/* Entry: 101995fc0; end: 101996047;  */

void FUN_101995fc0(undefined8 param_1)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x30) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x28));
  if (unaff_x20 != 0) {
    func_0x000107c61574(*(undefined8 *)(lVar2 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010199600c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  plVar1 = (long *)0x1f0;
  func_0x000107c615b8();
  *(long **)(lVar2 + 0x38) = plVar1;
  *plVar1 = lVar3;
  plVar1[1] = (long)FUN_101996048;
  lVar3 = *(long *)(lVar2 + 0x18);
  plVar1[0x3a] = *(long *)(lVar2 + 0x20);
  plVar1[0x3b] = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019963e4,0,0);
  return;
}



/* Entry: 101996048; end: 1019960cf;  */

void FUN_101996048(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x20);
    func_0x000107c6142c(*(undefined8 *)(lVar2 + 0x30));
    func_0x000107c61574(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001019960a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x40) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019960d0,0,0);
  return;
}



/* Entry: 1019960d0; end: 101996137;  */

void FUN_1019960d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  func_0x000107c61574(*(undefined8 *)(unaff_x22 + 0x20));
  uVar1 = uVar2;
  FUN_101996610(uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000101996134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar1);
  return;
}



/* Entry: 101996138; end: 10199614f;  */

void FUN_101996138(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa0) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101996150,0,0);
  return;
}



/* Entry: 101996150; end: 1019962af;  */

void FUN_101996150(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  puVar1 = (undefined1 *)**(undefined8 **)(unaff_x22 + 0xa0);
  func_0x000107c5c734();
  func_0x000107c61180();
  *(undefined1 **)(unaff_x22 + 0xa8) = puVar1;
  if (puVar1 != (undefined1 *)0x0) {
    uVar2 = *(undefined8 *)(unaff_x22 + 0x98);
    func_0x000107c5fc48(uVar2,PTR___sSSN_11034da80);
    *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
    uVar2 = 0;
    FUN_101998394(0,0x112d4ac60,&PTR__OBJC_CLASS___OS_dispatch_queue_1126a5f08);
    func_0x000107c5ffdc();
    *(undefined8 *)(unaff_x22 + 0xb8) = uVar2;
    *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x90;
    *(long *)(unaff_x22 + 0x10) = unaff_x22;
    *(code **)(unaff_x22 + 0x18) = FUN_1019962b0;
    lVar3 = unaff_x22 + 0x10;
    func_0x000107c61448(lVar3,1);
    uVar2 = 0x112dc4478;
    func_0x0001000285a8(0x112dc4478,&UNK_10d9a82c0);
    *(undefined **)(unaff_x22 + 0x50) = PTR___NSConcreteStackBlock_11034bd00;
    *(undefined8 *)(unaff_x22 + 0x88) = uVar2;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x42000000;
    *(code **)(unaff_x22 + 0x60) = FUN_10171b9f8;
    *(undefined **)(unaff_x22 + 0x68) = &UNK_110420698;
    *(long *)(unaff_x22 + 0x70) = lVar3;
    func_0x000107c5b4f8(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0064. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_continuation_await_110350070)(unaff_x22 + 0x10);
    return;
  }
  FUN_101998354();
  func_0x000107c613f8(&UNK_110420740,puVar1,0,0);
  *puVar1 = 0;
  func_0x000107c61654();
                    /* WARNING: Could not recover jumptable at 0x0001019962ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019962b0; end: 101996307;  */

void FUN_1019962b0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0xc0) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_101996308;
  }
  else {
    pcVar1 = FUN_10199636c;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 101996308; end: 10199636b;  */

void FUN_101996308(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa8);
  puVar4 = *(undefined **)(unaff_x22 + 0x90);
  func_0x000107c61170(*(undefined8 *)(unaff_x22 + 0xb8));
  func_0x000107c61170(uVar2);
  func_0x000107c615e8(uVar3);
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  if (puVar4 != (undefined *)0x0) {
    puVar1 = puVar4;
  }
                    /* WARNING: Could not recover jumptable at 0x000101996368. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar1);
  return;
}



/* Entry: 10199636c; end: 1019963cb;  */

void FUN_10199636c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  func_0x000107c61654();
  func_0x000107c615e8(uVar2);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001019963c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019963cc; end: 1019963e3;  */

void FUN_1019963cc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1d8) = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019963e4,0,0);
  return;
}



/* Entry: 1019963e4; end: 101996467;  */

void FUN_1019963e4(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar5 = *(long *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(lVar5 + 0x20);
  lVar3 = *(long *)(lVar5 + 0x28);
  func_0x00010199841c(lVar5 + 8,uVar2);
  piVar6 = *(int **)(lVar3 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x1e0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_101996468;
                    /* WARNING: Could not recover jumptable at 0x000101996464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x1d0),uVar2,lVar3);
  return;
}



/* Entry: 101996468; end: 1019964cf;  */

void FUN_101996468(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar1 + 0x1e8) = param_1;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x1e0));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001019964ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019964d0,0,0);
  return;
}



/* Entry: 1019964d0; end: 10199660f;  */

void FUN_1019964d0(void)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  long unaff_x22;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  lVar4 = *(long *)(unaff_x22 + 0x1e8);
  lVar2 = *(long *)(lVar4 + 0x10);
  if (lVar2 == 0) {
    func_0x000107c6142c(lVar4);
    puVar3 = PTR___swiftEmptyArrayStorage_11034f1c8;
  }
  else {
    func_0x0001010673e4(0,lVar2,0);
    puVar5 = (undefined8 *)(lVar4 + 0x20);
    do {
      uVar6 = *puVar5;
      uVar8 = puVar5[3];
      uVar7 = puVar5[2];
      *(undefined8 *)(unaff_x22 + 0x18) = puVar5[1];
      *(undefined8 *)(unaff_x22 + 0x10) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x28) = uVar8;
      *(undefined8 *)(unaff_x22 + 0x20) = uVar7;
      uVar7 = puVar5[5];
      uVar6 = puVar5[4];
      uVar9 = puVar5[7];
      uVar8 = puVar5[6];
      uVar10 = puVar5[8];
      uVar12 = puVar5[0xb];
      uVar11 = puVar5[10];
      *(undefined8 *)(unaff_x22 + 0x58) = puVar5[9];
      *(undefined8 *)(unaff_x22 + 0x50) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x68) = uVar12;
      *(undefined8 *)(unaff_x22 + 0x60) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x38) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x30) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x48) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x40) = uVar8;
      uVar7 = puVar5[0xd];
      uVar6 = puVar5[0xc];
      uVar9 = puVar5[0xf];
      uVar8 = puVar5[0xe];
      uVar10 = puVar5[0x10];
      uVar12 = puVar5[0x13];
      uVar11 = puVar5[0x12];
      *(undefined8 *)(unaff_x22 + 0x98) = puVar5[0x11];
      *(undefined8 *)(unaff_x22 + 0x90) = uVar10;
      *(undefined8 *)(unaff_x22 + 0xa8) = uVar12;
      *(undefined8 *)(unaff_x22 + 0xa0) = uVar11;
      *(undefined8 *)(unaff_x22 + 0x78) = uVar7;
      *(undefined8 *)(unaff_x22 + 0x70) = uVar6;
      *(undefined8 *)(unaff_x22 + 0x88) = uVar9;
      *(undefined8 *)(unaff_x22 + 0x80) = uVar8;
      uVar7 = puVar5[0x15];
      uVar6 = puVar5[0x14];
      uVar9 = puVar5[0x17];
      uVar8 = puVar5[0x16];
      uVar10 = puVar5[0x18];
      uVar12 = puVar5[0x1b];
      uVar11 = puVar5[0x1a];
      *(undefined8 *)(unaff_x22 + 0xd8) = puVar5[0x19];
      *(undefined8 *)(unaff_x22 + 0xd0) = uVar10;
      *(undefined8 *)(unaff_x22 + 0xe8) = uVar12;
      *(undefined8 *)(unaff_x22 + 0xe0) = uVar11;
      *(undefined8 *)(unaff_x22 + 0xb8) = uVar7;
      *(undefined8 *)(unaff_x22 + 0xb0) = uVar6;
      *(undefined8 *)(unaff_x22 + 200) = uVar9;
      *(undefined8 *)(unaff_x22 + 0xc0) = uVar8;
      lVar4 = unaff_x22 + 0x10;
      FUN_1019982e4(lVar4,unaff_x22 + 0xf0);
      FUN_1019a1158();
      func_0x000101998320(unaff_x22 + 0x10);
      uVar1 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
        func_0x0001010673e4(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
      *(long *)(puVar3 + uVar1 * 8 + 0x20) = lVar4;
      puVar5 = puVar5 + 0x1c;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    func_0x000107c6142c(*(undefined8 *)(unaff_x22 + 0x1e8));
  }
                    /* WARNING: Could not recover jumptable at 0x00010199660c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar3);
  return;
}



/* Entry: 101996610; end: 1019972ab;  */

undefined * FUN_101996610(ulong param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  bool bVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined *puVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  long lVar29;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  ulong uStack_158;
  ulong uStack_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_128;
  ulong uStack_c8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong uStack_98;
  ulong uStack_90;
  
  uVar24 = param_2;
  if (param_1 >> 0x3e == 0) {
    uVar25 = *(ulong *)((param_1 & 0xffffffffffffff8) + 0x10);
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  else {
    uVar25 = param_1 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_1) {
      uVar25 = param_1;
    }
    func_0x000107c60480();
    puVar5 = PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  PTR___swiftEmptyDictionarySingleton_11034f1d0 = puVar5;
  if (uVar25 != 0) {
    lVar29 = 4;
    do {
      uVar26 = lVar29 - 4;
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_1 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10199680c);
          (*pcVar6)();
        }
        uVar8 = *(ulong *)(param_1 + lVar29 * 8);
        func_0x000107c61174();
        uVar23 = uVar24;
      }
      else {
        uVar8 = uVar26;
        uVar23 = param_1;
        func_0x00010103193c();
      }
      uVar1 = lVar29 - 3;
      if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101996804);
        (*pcVar6)();
      }
      uVar24 = uVar8;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar24 == 0) {
LAB_101996670:
        func_0x000107c61170(uVar8);
        uVar24 = uVar23;
      }
      else {
        uVar28 = uVar24;
        func_0x000107c5faec();
        func_0x000107c61170(uVar24);
        func_0x000107c61174();
        puVar7 = puVar5;
        func_0x000107c61558();
        uVar26 = uVar28;
        uVar10 = uVar23;
        func_0x000100029284();
        uVar24 = (ulong)~(uint)uVar10 & 1;
        lVar2 = *(long *)(puVar5 + 0x10) + uVar24;
        if (SCARRY8(*(long *)(puVar5 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101996808);
          (*pcVar6)();
        }
        if (*(long *)(puVar5 + 0x18) < lVar2) {
          func_0x0001011bf22c(lVar2,puVar7);
          uVar26 = uVar28;
          uVar24 = uVar23;
          func_0x000100029284();
          if (((uint)uVar10 & 1) != ((uint)uVar24 & 1)) goto LAB_10199729c;
        }
        else {
          uVar24 = uVar10;
          if (((ulong)puVar7 & 1) == 0) {
            func_0x0001011bf0bc();
          }
        }
        if ((uVar10 & 1) != 0) {
          uVar28 = *(ulong *)(*(long *)(puVar5 + 0x38) + uVar26 * 8);
          *(ulong *)(*(long *)(puVar5 + 0x38) + uVar26 * 8) = uVar8;
          func_0x000107c61170(uVar8);
          func_0x000107c6142c(uVar23);
          uVar8 = uVar28;
          uVar23 = uVar24;
          goto LAB_101996670;
        }
        *(ulong *)(puVar5 + (uVar26 >> 6) * 8 + 0x40) =
             *(ulong *)(puVar5 + (uVar26 >> 6) * 8 + 0x40) | 1L << (uVar26 & 0x3f);
        puVar3 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar26 * 0x10);
        *puVar3 = uVar28;
        puVar3[1] = uVar23;
        *(ulong *)(*(long *)(puVar5 + 0x38) + uVar26 * 8) = uVar8;
        func_0x000107c61170(uVar8);
        if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101996810);
          (*pcVar6)();
        }
        *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      }
      lVar29 = lVar29 + 1;
    } while (uVar1 != uVar25);
  }
  if (param_2 >> 0x3e == 0) {
    uVar25 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar25 = param_2 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < param_2) {
      uVar25 = param_2;
    }
    func_0x000107c60480();
  }
  if (uVar25 != 0) {
    lVar29 = 4;
    do {
      uVar26 = lVar29 - 4;
      if ((param_2 & 0xc000000000000001) == 0) {
        if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar26) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10199723c);
          (*pcVar6)();
        }
        uVar8 = *(ulong *)(param_2 + lVar29 * 8);
        func_0x000107c61174();
        uVar23 = uVar24;
      }
      else {
        uVar8 = uVar26;
        uVar23 = param_2;
        func_0x00010103193c();
      }
      uVar1 = lVar29 - 3;
      if (SCARRY8(uVar26,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x101997234);
        (*pcVar6)();
      }
      uVar24 = uVar8;
      func_0x000107c5d984();
      func_0x000107c61180();
      if (uVar24 == 0) {
        func_0x000107c61170(uVar8);
        uVar24 = uVar23;
      }
      else {
        uVar26 = uVar24;
        func_0x000107c5faec();
        if (*(long *)(puVar5 + 0x10) != 0) {
          func_0x000107c61434(puVar5);
          uVar28 = uVar26;
          uVar10 = uVar23;
          func_0x000100029284();
          if ((uVar10 & 1) != 0) {
            uVar9 = *(ulong *)(*(long *)(puVar5 + 0x38) + uVar28 * 8);
            func_0x000107c61174();
            func_0x000107c6142c(puVar5);
            uVar28 = uVar9;
            func_0x000107c5db08();
            func_0x000107c61180();
            uStack_a8 = uVar10;
            if (uVar28 == 0) {
              uVar28 = uVar8;
              func_0x000107c5db08();
              func_0x000107c61180();
              uStack_a8 = uVar10;
              if (uVar28 != 0) goto LAB_10199693c;
              uStack_148 = 0;
              uStack_a8 = 0;
            }
            else {
LAB_10199693c:
              uStack_148 = uVar28;
              func_0x000107c5faec();
              uVar10 = uStack_a8;
              func_0x000107c61170(uVar28);
            }
            uVar28 = uVar9;
            func_0x000107c42120();
            func_0x000107c61180();
            uStack_98 = uVar10;
            if (uVar28 == 0) {
              uVar28 = uVar8;
              func_0x000107c42120();
              func_0x000107c61180();
              uStack_98 = uVar10;
              if (uVar28 != 0) goto LAB_101996980;
              uStack_150 = 0;
              uStack_98 = 0;
            }
            else {
LAB_101996980:
              uStack_150 = uVar28;
              func_0x000107c5faec();
              uVar10 = uStack_98;
              func_0x000107c61170(uVar28);
            }
            func_0x000107c4a1e8();
            uVar28 = uVar9;
            func_0x000107c43a60();
            func_0x000107c61180();
            if (uVar28 == 0) {
              uVar28 = uVar8;
              func_0x000107c43a60();
              func_0x000107c61180();
              if (uVar28 != 0) goto LAB_1019969cc;
              uStack_90 = 0;
            }
            else {
LAB_1019969cc:
              uVar10 = 0;
              FUN_101998394(0,0x112de0af8,&PTR_PTR_1126ba270);
              uStack_90 = uVar28;
              func_0x000107c5fc54();
              func_0x000107c61170(uVar28);
            }
            uVar28 = uStack_90;
            uVar11 = uVar9;
            func_0x000107c3e9e8();
            func_0x000107c61180();
            if (uVar11 == 0) {
              uVar11 = uVar8;
              func_0x000107c3e9e8();
              func_0x000107c61180();
            }
            uVar12 = uVar9;
            func_0x000107c4252c();
            func_0x000107c61180();
            uVar27 = uVar10;
            if (uVar12 == 0) {
              uVar12 = uVar8;
              func_0x000107c4252c();
              func_0x000107c61180();
              uVar27 = uVar10;
              if (uVar12 != 0) goto LAB_101996a58;
              uStack_158 = 0;
              uVar27 = 0;
            }
            else {
LAB_101996a58:
              uStack_158 = uVar12;
              func_0x000107c5faec();
              uVar10 = uVar27;
              func_0x000107c61170(uVar12);
            }
            func_0x000107c49ac4();
            uVar12 = uVar9;
            func_0x000107c439a8();
            func_0x000107c61180();
            if (uVar12 == 0) {
              uVar12 = uVar8;
              func_0x000107c439a8();
              func_0x000107c61180();
            }
            uVar13 = uVar9;
            func_0x000107c452e8();
            func_0x000107c61180();
            if (uVar13 == 0) {
              uVar13 = uVar8;
              func_0x000107c452e8();
              func_0x000107c61180();
            }
            uVar14 = uVar9;
            func_0x000107c5c3fc();
            func_0x000107c61180();
            if (uVar14 == 0) {
              uVar14 = uVar8;
              func_0x000107c5c3fc();
              func_0x000107c61180();
            }
            uVar15 = uVar9;
            func_0x000107c40328();
            func_0x000107c61180();
            if (uVar15 == 0) {
              uVar15 = uVar8;
              func_0x000107c40328();
              func_0x000107c61180();
            }
            uVar16 = uVar9;
            func_0x000107c5b37c();
            func_0x000107c61180();
            uStack_b0 = uVar10;
            if (uVar16 == 0) {
              uVar16 = uVar8;
              func_0x000107c5b37c();
              func_0x000107c61180();
              uStack_b0 = uVar10;
              if (uVar16 != 0) goto LAB_101996b54;
              uStack_168 = 0;
              uStack_b0 = 0;
            }
            else {
LAB_101996b54:
              uStack_168 = uVar16;
              func_0x000107c5faec();
              uVar10 = uStack_b0;
              func_0x000107c61170(uVar16);
            }
            uVar16 = uVar9;
            func_0x000107c4d2ec();
            func_0x000107c61180();
            uStack_140 = uVar10;
            if (uVar16 == 0) {
              uVar16 = uVar8;
              func_0x000107c4d2ec();
              func_0x000107c61180();
              uStack_140 = uVar10;
              if (uVar16 != 0) goto LAB_101996b94;
              uStack_170 = 0;
              uStack_140 = 0;
            }
            else {
LAB_101996b94:
              uStack_170 = uVar16;
              func_0x000107c5faec();
              uVar10 = uStack_140;
              func_0x000107c61170(uVar16);
            }
            uVar16 = uVar9;
            func_0x000107c4ad90();
            func_0x000107c61180();
            uStack_c8 = uVar10;
            if (uVar16 == 0) {
              uVar16 = uVar8;
              func_0x000107c4ad90();
              func_0x000107c61180();
              uStack_c8 = uVar10;
              if (uVar16 != 0) goto LAB_101996bd4;
              uStack_178 = 0;
              uStack_c8 = 0;
            }
            else {
LAB_101996bd4:
              uStack_178 = uVar16;
              func_0x000107c5faec();
              uVar10 = uStack_c8;
              func_0x000107c61170(uVar16);
            }
            func_0x000107c4ea34();
            uVar16 = uVar9;
            func_0x000107c4ebc8();
            func_0x000107c61180();
            uStack_128 = uVar10;
            if (uVar16 == 0) {
              uVar16 = uVar8;
              func_0x000107c4ebc8();
              func_0x000107c61180();
              uStack_128 = uVar10;
              if (uVar16 != 0) goto LAB_101996c20;
              uStack_180 = 0;
              uStack_128 = 0;
            }
            else {
LAB_101996c20:
              uStack_180 = uVar16;
              func_0x000107c5faec();
              uVar10 = uStack_128;
              func_0x000107c61170(uVar16);
            }
            uVar16 = uVar9;
            func_0x000107c40cdc();
            func_0x000107c61180();
            if (uVar16 == 0) {
              uVar16 = uVar8;
              func_0x000107c40cdc();
              func_0x000107c61180();
            }
            uVar17 = uVar9;
            func_0x000107c3d000();
            func_0x000107c61180();
            if (uVar17 == 0) {
              uVar17 = uVar8;
              func_0x000107c3d000();
              func_0x000107c61180();
            }
            uVar18 = uVar9;
            func_0x000107c4eba8();
            func_0x000107c61180();
            if (uVar18 == 0) {
              uVar18 = uVar8;
              func_0x000107c4eba8();
              func_0x000107c61180();
              if (uVar18 != 0) goto LAB_101996d9c;
              uStack_188 = 0;
              uVar10 = 0;
            }
            else {
LAB_101996d9c:
              uStack_188 = uVar18;
              func_0x000107c5faec();
              func_0x000107c61170(uVar18);
            }
            uVar18 = uVar9;
            func_0x000107c4ea60();
            func_0x000107c61180();
            if (uVar18 == 0) {
              uVar18 = uVar8;
              func_0x000107c4ea60();
              func_0x000107c61180();
            }
            uVar19 = uVar9;
            func_0x000107c51628();
            func_0x000107c61180();
            if (uVar19 == 0) {
              uVar19 = uVar8;
              func_0x000107c51628();
              func_0x000107c61180();
            }
            uVar20 = uVar9;
            func_0x000107c499dc();
            if ((uVar20 & 1) == 0) {
              func_0x000107c499dc();
              if (uStack_a8 != 0) goto LAB_101996e28;
LAB_101996eac:
              uStack_148 = 0;
              if (uStack_98 != 0) goto LAB_101996e48;
LAB_101996eb8:
              uStack_90 = 0;
              if (uVar28 != 0) goto LAB_101996e68;
LAB_101996ec4:
              uStack_98 = 0;
            }
            else {
              if (uStack_a8 == 0) goto LAB_101996eac;
LAB_101996e28:
              func_0x000107c5fadc(uStack_148,uStack_a8);
              func_0x000107c6142c(uStack_a8);
              if (uStack_98 == 0) goto LAB_101996eb8;
LAB_101996e48:
              func_0x000107c5fadc(uStack_150,uStack_98);
              func_0x000107c6142c(uStack_98);
              bVar4 = uStack_90 == 0;
              uStack_90 = uStack_150;
              if (bVar4) goto LAB_101996ec4;
LAB_101996e68:
              uVar21 = 0;
              FUN_101998394(0,0x112de0af8,&PTR_PTR_1126ba270);
              uStack_98 = uVar28;
              func_0x000107c5fc48(uVar28,uVar21);
              func_0x000107c6142c(uVar28);
            }
            if (uVar27 == 0) {
              uStack_a8 = 0;
              if (uStack_b0 != 0) goto LAB_101996ef4;
LAB_101996f90:
              uStack_b0 = 0;
              if (uStack_140 != 0) goto LAB_101996f14;
LAB_101996f9c:
              uStack_170 = 0;
              if (uStack_c8 != 0) goto LAB_101996f34;
LAB_101996fa8:
              uStack_178 = 0;
              if (uStack_128 != 0) goto LAB_101996f50;
LAB_101996fb0:
              uStack_180 = 0;
              if (uVar10 != 0) goto LAB_101996f6c;
LAB_101996fb8:
              uStack_188 = 0;
            }
            else {
              func_0x000107c5fadc(uStack_158,uVar27);
              func_0x000107c6142c(uVar27);
              uStack_a8 = uStack_158;
              if (uStack_b0 == 0) goto LAB_101996f90;
LAB_101996ef4:
              func_0x000107c5fadc(uStack_168,uStack_b0);
              func_0x000107c6142c(uStack_b0);
              uStack_b0 = uStack_168;
              if (uStack_140 == 0) goto LAB_101996f9c;
LAB_101996f14:
              func_0x000107c5fadc(uStack_170,uStack_140);
              func_0x000107c6142c(uStack_140);
              if (uStack_c8 == 0) goto LAB_101996fa8;
LAB_101996f34:
              func_0x000107c5fadc(uStack_178,uStack_c8);
              func_0x000107c6142c(uStack_c8);
              if (uStack_128 == 0) goto LAB_101996fb0;
LAB_101996f50:
              func_0x000107c5fadc(uStack_180,uStack_128);
              func_0x000107c6142c(uStack_128);
              if (uVar10 == 0) goto LAB_101996fb8;
LAB_101996f6c:
              func_0x000107c5fadc(uStack_188,uVar10);
              func_0x000107c6142c(uVar10);
            }
            puVar7 = PTR_PTR_1126b15c8;
            func_0x000107c610f8();
            func_0x000107c49278();
            func_0x000107c61170(uVar11);
            func_0x000107c61170(uVar12);
            func_0x000107c61170(uVar13);
            func_0x000107c61170(uVar14);
            func_0x000107c61170(uVar15);
            func_0x000107c61170(uVar16);
            func_0x000107c61170(uVar17);
            func_0x000107c61170(uVar18);
            func_0x000107c61170(uVar19);
            func_0x000107c61170(uVar24);
            func_0x000107c61170(uStack_148);
            func_0x000107c61170(uStack_90);
            func_0x000107c61170(uStack_98);
            func_0x000107c61170(uStack_a8);
            func_0x000107c61170(uStack_b0);
            func_0x000107c61170(uStack_170);
            func_0x000107c61170(uStack_178);
            func_0x000107c61170(uStack_180);
            func_0x000107c61170(uStack_188);
            func_0x000107c61174(puVar7);
            puVar22 = puVar5;
            func_0x000107c61558(puVar5);
            func_0x0001011bef6c(puVar7,uVar26,uVar23,puVar22);
            func_0x000107c6142c(uVar23);
            func_0x000107c61170(uVar8);
            func_0x000107c61170(puVar7);
            func_0x000107c61170(uVar9);
            uVar24 = uVar26;
            goto LAB_101996868;
          }
          func_0x000107c6142c(puVar5);
        }
        func_0x000107c61170(uVar24);
        func_0x000107c61174();
        puVar7 = puVar5;
        func_0x000107c61558();
        uVar28 = uVar26;
        uVar10 = uVar23;
        func_0x000100029284();
        uVar24 = (ulong)~(uint)uVar10 & 1;
        lVar2 = *(long *)(puVar5 + 0x10) + uVar24;
        if (SCARRY8(*(long *)(puVar5 + 0x10),uVar24)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x101997238);
          (*pcVar6)();
        }
        if (*(long *)(puVar5 + 0x18) < lVar2) {
          func_0x0001011bf22c(lVar2,puVar7);
          uVar28 = uVar26;
          uVar24 = uVar23;
          func_0x000100029284();
          if (((uint)uVar10 & 1) != ((uint)uVar24 & 1)) {
LAB_10199729c:
            func_0x000107c60624(PTR___sSSN_11034da80);
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1019972ac);
            (*pcVar6)();
          }
        }
        else {
          uVar24 = uVar10;
          if (((ulong)puVar7 & 1) == 0) {
            func_0x0001011bf0bc();
          }
        }
        if ((uVar10 & 1) == 0) {
          *(ulong *)(puVar5 + (uVar28 >> 6) * 8 + 0x40) =
               *(ulong *)(puVar5 + (uVar28 >> 6) * 8 + 0x40) | 1L << (uVar28 & 0x3f);
          puVar3 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar28 * 0x10);
          *puVar3 = uVar26;
          puVar3[1] = uVar23;
          *(ulong *)(*(long *)(puVar5 + 0x38) + uVar28 * 8) = uVar8;
          func_0x000107c61170(uVar8);
          if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x101997240);
            (*pcVar6)();
          }
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
        }
        else {
          uVar21 = *(undefined8 *)(*(long *)(puVar5 + 0x38) + uVar28 * 8);
          *(ulong *)(*(long *)(puVar5 + 0x38) + uVar28 * 8) = uVar8;
          func_0x000107c61170(uVar8);
          func_0x000107c6142c(uVar23);
          func_0x000107c61170(uVar21);
        }
      }
LAB_101996868:
      lVar29 = lVar29 + 1;
    } while (uVar1 != uVar25);
  }
  puVar7 = puVar5;
  func_0x000107c61434(puVar5);
  FUN_101995bd8();
  func_0x000107c61430(puVar5,2);
  return puVar7;
}



/* Entry: 1019972ac; end: 1019972f7;  */

void FUN_1019972ac(long param_1)

{
  long *plVar1;
  long unaff_x20;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1019972f8;
  plVar1[2] = param_1;
  plVar1[3] = unaff_x20;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101995ee8,0,0);
  return;
}



/* Entry: 1019972f8; end: 10199733f;  */

void FUN_1019972f8(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(*unaff_x22 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010199733c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Entry: 101997340; end: 101997377;  */

void FUN_101997340(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_101997378();
  *unaff_x20 = param_1;
  return;
}



/* Entry: 101997378; end: 1019974a7;  */

undefined * FUN_101997378(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019974a8);
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
    puVar3 = (undefined *)0x112de0b08;
    func_0x0001000285a8(0x112de0b08,&UNK_10d9a82e0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    uVar5 = 0x112de0b10;
    func_0x0001000285a8(0x112de0b10,&UNK_10d9a82e8);
    func_0x000107c6140c(puVar1,puVar4,uVar7,uVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x10 <= puVar1) {
      func_0x000107c610b8(puVar1,puVar4,uVar7 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1019974a8; end: 1019975c3;  */

undefined * FUN_1019974a8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1019975c4);
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
    puVar3 = (undefined *)0x112de09d8;
    func_0x0001000285a8(0x112de09d8,&UNK_10d9a82d0);
    func_0x000107c613fc();
    puVar4 = puVar3;
    func_0x000107c610a4();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x30) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    func_0x000107c6140c(puVar4,puVar1,uVar6,&UNK_110420f70);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x30 <= puVar4) {
      func_0x000107c610b8(puVar4,puVar1,uVar6 * 0x30);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  func_0x000107c61574(param_4);
  return puVar3;
}



/* Entry: 1019975c4; end: 10199771f;  */

void FUN_1019975c4(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112de07f0,&UNK_10d9a8130);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar5 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar5 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar5 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(lVar9 + 0x40);
    if (uVar5 == 0) goto LAB_1019976a0;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar10 << 6;
        uVar8 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar7 * 8) =
             *(undefined8 *)(*(long *)(lVar9 + 0x30) + uVar7 * 8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar7 * 8) = uVar8;
        func_0x000107c61174();
        if (uVar5 != 0) break;
LAB_1019976a0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x101997720);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1019976f8;
          uVar5 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_1019976f8:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 101997720; end: 10199786b;  */

void FUN_101997720(void)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long *unaff_x20;
  long lVar10;
  
  func_0x0001000285a8(0x112de07f8,&UNK_10d9a8010);
  lVar10 = *unaff_x20;
  lVar3 = lVar10;
  func_0x000107c6048c();
  if (*(long *)(lVar10 + 0x10) != 0) {
    lVar1 = lVar10 + 0x40;
    uVar4 = (1L << ((ulong)*(byte *)(lVar3 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar3 != lVar10 || lVar1 + uVar4 * 8 <= lVar3 + 0x40U) {
      func_0x000107c610b8(lVar3 + 0x40U,lVar1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(lVar3 + 0x10) = *(undefined8 *)(lVar10 + 0x10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if ((*(byte *)(lVar10 + 0x20) & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(lVar10 + 0x40);
    lVar7 = lVar5;
    if (uVar4 == 0) goto LAB_1019977f8;
    do {
      uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      while( true ) {
        uVar9 = *(undefined8 *)(*(long *)(lVar10 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar3 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar10 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar3 + 0x38) + uVar8 * 8) = uVar9;
        lVar7 = lVar5;
        if (uVar4 != 0) break;
LAB_1019977f8:
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10199786c);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_10199784c;
          uVar4 = *(ulong *)(lVar1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
    } while( true );
  }
LAB_10199784c:
  func_0x000107c61574(lVar10);
  *unaff_x20 = lVar3;
  return;
}



/* Entry: 10199786c; end: 101997e83;  */

void FUN_10199786c(long param_1,ulong param_2)

{
  long lVar1;
  bool bVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  undefined8 uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  undefined8 uVar16;
  
  lVar13 = *unaff_x20;
  lVar1 = *(long *)(lVar13 + 0x18);
  if (*(long *)(lVar13 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar12 = 0x112de07f0;
  func_0x0001000285a8(0x112de07f0,&UNK_10d9a8130);
  lVar4 = lVar13;
  func_0x000107c60490(lVar13,lVar1,param_2,uVar12);
  if (*(long *)(lVar13 + 0x10) == 0) {
LAB_101997a98:
    func_0x000107c61574(lVar13);
    *unaff_x20 = lVar4;
    return;
  }
  puVar14 = (ulong *)(lVar13 + 0x40);
  uVar9 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *puVar14;
  lVar1 = lVar4 + 0x40;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101997ac8);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar15) {
          if ((param_2 & 1) != 0) {
            uVar11 = 1L << ((ulong)*(byte *)(lVar13 + 0x20) & 0x3f);
            if ((*(byte *)(lVar13 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar11 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar13 + 0x10) = 0;
          }
          goto LAB_101997a98;
        }
        uVar11 = puVar14[lVar15];
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar15 = lVar7;
    }
    uVar6 = LZCOUNT(uVar6) | lVar15 << 6;
    uVar12 = *(undefined8 *)(*(long *)(lVar13 + 0x30) + uVar6 * 8);
    uVar16 = *(undefined8 *)(*(long *)(lVar13 + 0x38) + uVar6 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar12);
    }
    uVar5 = *(ulong *)(lVar4 + 0x28);
    func_0x000107c60114();
    uVar10 = -1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(lVar1 + uVar8 * 8) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x101997acc);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
        uVar5 = *(ulong *)(lVar1 + uVar8 * 8);
      } while (uVar5 == 0xffffffffffffffff);
      uVar5 = ~uVar5;
      uVar6 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar6 * 8) = uVar12;
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar6 * 8) = uVar16;
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Entry: 101997e84; end: 101997f7b;  */

void FUN_101997e84(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_101990ef4();
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101997f40);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_10199786c(lVar4);
    uVar2 = param_2;
    FUN_101990ef4();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000103e6d380(0);
      func_0x000107c60624();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x101997f14);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_1019975c4();
    lVar4 = *unaff_x20;
    goto joined_r0x000101997f54;
  }
  lVar4 = *unaff_x20;
joined_r0x000101997f54:
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar2 * 8) = param_1;
    return;
  }
  FUN_101990f54();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 101997f7c; end: 101998127;  */

void FUN_101997f7c(undefined8 param_1,byte param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined1 auStack_68 [72];
  
  func_0x000107c6068c(auStack_68);
  if (param_2 < 4) {
    pcVar1 = "INCOMING_FRIEND_REQUEST";
    uVar2 = 0xd00000000000001b;
    if (param_2 != 2) {
      pcVar1 = "CONTACT_SYNC_REMINDER";
      uVar2 = 0xd000000000000017;
    }
    uVar4 = 0xd00000000000001b;
    pcVar5 = "RECENTLY_JOINED_SUGGESTIONS";
    if (param_2 == 0) {
      uVar4 = 0xd00000000000001c;
      pcVar5 = "UNVIEWED_FRIEND_SUGGESTIONS";
    }
    if (param_2 < 2) {
      pcVar1 = pcVar5;
      uVar2 = uVar4;
    }
    uVar3 = (ulong)pcVar1 | 0x8000000000000000;
  }
  else {
    uVar3 = 0xeb0000000052454d;
    uVar2 = 0x49545f4c41434f4c;
    if (param_2 != 6) {
      uVar3 = 0xe700000000000000;
      uVar2 = 0x4e574f4e4b4e55;
    }
    pcVar1 = "PENDING_FRIEND_REQUEST";
    uVar4 = 0xd000000000000015;
    if (param_2 != 4) {
      pcVar1 = "before checker was resolved";
      uVar4 = 0xd000000000000016;
    }
    if (param_2 < 6) {
      uVar2 = uVar4;
      uVar3 = (ulong)pcVar1 | 0x8000000000000000;
    }
  }
  func_0x000107c5fb58(auStack_68,uVar2,uVar3);
  func_0x000107c6142c(uVar3);
  func_0x000107c606a8();
  return;
}



/* Entry: 101998128; end: 1019981d7;  */

undefined8 * FUN_101998128(undefined8 *param_1,undefined8 *param_2)

{
  code *pcVar1;
  long lVar2;
  
  *param_1 = *param_2;
  lVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = lVar2;
  pcVar1 = (code *)**(undefined8 **)(lVar2 + -8);
  func_0x000107c61174();
  (*pcVar1)(param_1 + 1,param_2 + 1,lVar2);
  return param_1;
}



/* Entry: 1019981d8; end: 10199822b;  */

undefined8 * FUN_1019981d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61170(uVar1);
  FUN_1019983fc(param_1 + 1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  param_1[5] = param_2[5];
  return param_1;
}



/* Entry: 10199822c; end: 1019982e3;  */

int FUN_10199822c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 1019982e4; end: 101998353;  */

undefined8 FUN_1019982e4(undefined8 param_1,undefined8 param_2)

{
  FUN_1019a3f64(param_2,param_1);
  return param_2;
}



/* Entry: 101998354; end: 101998393;  */

void FUN_101998354(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0b00 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8380;
  func_0x000107c61520(&UNK_10d9a8380,&UNK_110420740);
  puRam0000000112de0b00 = puVar1;
  return;
}



/* Entry: 101998394; end: 1019983d3;  */

void FUN_101998394(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 1019983d4; end: 1019983e3;  */

long FUN_1019983d4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x38);
  *(long *)(param_1 + 0x38) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  return param_1 + 0x20;
}



/* Entry: 1019983e4; end: 1019983fb;  */

void FUN_1019983e4(long param_1)

{
  FUN_1019983fc(param_1 + 0x20);
  return;
}



/* Entry: 1019983fc; end: 1019985a7;  */

void FUN_1019983fc(undefined8 *param_1)

{
  if ((*(byte *)(*(long *)(param_1[3] + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x000101998410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(param_1[3] + -8) + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*param_1);
  return;
}



/* Entry: 1019985a8; end: 1019985e7;  */

void FUN_1019985a8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112de0b18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10d9a8358;
  func_0x000107c61520(&UNK_10d9a8358,&UNK_110420740);
  puRam0000000112de0b18 = puVar1;
  return;
}



/* Entry: 1019985e8; end: 10199869b;  */

long FUN_1019985e8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  uVar1 = 0;
  func_0x0001005f60b4();
  func_0x000107c613fc();
  func_0x0001005f60d4();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
  func_0x000107c61174(param_1);
  func_0x000107c61174(param_2);
  func_0x000107c61174(param_3);
  FUN_10199869c();
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61170(param_3);
  return unaff_x20;
}



/* Entry: 10199869c; end: 10199889f;  */

/* WARNING: Possible PIC construction at 0x0001019987ac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000101998854: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019987b0) */
/* WARNING: Removing unreachable block (ram,0x00010199889c) */
/* WARNING: Removing unreachable block (ram,0x0001019987c4) */
/* WARNING: Removing unreachable block (ram,0x000101998858) */

void FUN_10199869c(void)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  
  plVar2 = *(long **)(unaff_x20 + 0x18);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (plVar2 == (long *)0x0) {
    return;
  }
  lVar3 = *(long *)(unaff_x20 + 0x20);
  func_0x000107c5c734();
  func_0x000107c61180();
  if (lVar3 != 0) {
    func_0x000107c5d3a8();
    func_0x000107c61180();
    if (plVar2 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10199889c);
      (*pcVar1)();
    }
    func_0x0001000285a8(0x112d5a8a0,&UNK_10d927f50);
    plVar4 = plVar2;
    func_0x0001000b637c();
    func_0x000107c61170(plVar2);
    puVar5 = &UNK_1104207c0;
    func_0x000107c613fc(&UNK_1104207c0,0x18,7);
    func_0x000107c61644(puVar5 + 0x10);
    plVar2 = (long *)0x101998d74;
    puVar6 = puVar5;
    (**(code **)(*plVar4 + 0x60))(0x101998d74);
    func_0x000107c61574(plVar4);
    func_0x000107c61574(puVar5);
    plVar4 = plVar2;
    func_0x000107c614f0(plVar2);
    (**(code **)(puVar6 + 0x18))(*(undefined8 *)(unaff_x20 + 0x28),plVar4,puVar6);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(plVar2);
  return;
}



/* Entry: 1019988a0; end: 101998d17;  */

void FUN_1019988a0(undefined8 param_1,long param_2,undefined4 param_3)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  long extraout_x8;
  ulong uVar11;
  long lVar12;
  undefined1 auStack_f0 [12];
  undefined4 uStack_e4;
  undefined1 auStack_e0 [32];
  long lStack_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  func_0x000107c5ed50();
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar12 + 0x40));
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    lVar5 = param_2;
    uStack_e4 = param_3;
    func_0x000107c600f4(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    func_0x000100e15a08();
    func_0x000107c601c0(auStack_98,lVar4,lVar5);
    puVar2 = PTR___sypN_11034f1a8;
    puVar10 = PTR___swiftEmptyArrayStorage_11034f1c8;
    while (lStack_80 != 0) {
      func_0x000100102924(auStack_98,auStack_b8);
      func_0x000100102924(auStack_b8,auStack_e0);
      uVar8 = 0;
      FUN_101994830(0);
      plVar9 = &lStack_c0;
      func_0x000107c6147c(plVar9,auStack_e0,puVar2 + 8,uVar8,6);
      lVar3 = lStack_c0;
      if ((((ulong)plVar9 & 1) != 0) && (lStack_c0 != 0)) {
        puVar7 = puVar10;
        func_0x000107c61550();
        if (((int)puVar7 == 0) ||
           (((long)puVar10 < 0 || (puVar7 = puVar10, ((ulong)puVar10 >> 0x3e & 1) != 0)))) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              puVar6 = puVar10;
            }
            func_0x000107c60480(puVar6);
          }
          puVar7 = (undefined *)0x0;
          func_0x000100f63128(0,puVar6 + 1,1,puVar10);
        }
        uVar11 = (ulong)puVar7 & 0xffffffffffffff8;
        uVar1 = *(ulong *)(uVar11 + 0x10);
        puVar10 = puVar7;
        if (*(ulong *)(uVar11 + 0x18) >> 1 <= uVar1) {
          puVar10 = (undefined *)(ulong)(1 < *(ulong *)(uVar11 + 0x18));
          func_0x000100f63128(puVar10,uVar1 + 1,1,puVar7);
          uVar11 = (ulong)puVar10 & 0xffffffffffffff8;
        }
        *(ulong *)(uVar11 + 0x10) = uVar1 + 1;
        *(long *)(uVar11 + uVar1 * 8 + 0x20) = lVar3;
      }
      func_0x000107c601c0(auStack_98,lVar4,lVar5);
    }
    (**(code **)(lVar12 + 8))(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    func_0x000101998ac0(puVar10,uStack_e4);
    func_0x000107c61574(param_2);
    func_0x000107c6142c(puVar10);
  }
  return;
}



/* Entry: 101998d18; end: 101998dab;  */

void FUN_101998d18(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101998dac; end: 101998dff;  */

long FUN_101998dac(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  
  func_0x000107c613fc();
  puVar1 = PTR__OBJC_CLASS___NSLock_1126bb1c0;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  FUN_101998e00(param_1,unaff_x20 + 0x10);
  return unaff_x20;
}



/* Entry: 101998e00; end: 101998e17;  */

undefined8 * FUN_101998e00(undefined8 *param_1,undefined8 *param_2)

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



/* Entry: 101998e18; end: 101998f03;  */

undefined8 FUN_101998e18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  func_0x000107c4b940(uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  puVar1 = &UNK_1104208d8;
  func_0x000107c613fc(&UNK_1104208d8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  func_0x000107c61580(uVar4,2);
  func_0x000107c6157c(param_2);
  uVar2 = 9;
  func_0x0001001ca524(9,2,0x34,4,0,0,&UNK_10d9a84d0,puVar1,PTR___sytN_11034f1b0 + 8);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(uVar4);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x40);
  *(undefined8 *)(unaff_x20 + 0x40) = uVar2;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar4);
  func_0x000107c5d278(uVar3);
  return uVar2;
}



/* Entry: 101998f04; end: 101999083;  */

void FUN_101998f04(undefined8 param_1,long param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(int **)(unaff_x22 + 0x10) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_4;
  if (param_2 != 0) {
    plVar2 = (long *)(ulong)*(uint *)(PTR___sScTss5NeverORs_rlE5valuexvgTu_11034fde0 + 4);
    func_0x000107c615b8();
    *(long **)(unaff_x22 + 0x20) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = 0x101998fa8;
                    /* WARNING: Could not recover jumptable at 0x00010bdb7f34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR___sScTss5NeverORs_rlE5valuexvg_11034fdd8)();
    return;
  }
  iVar1 = *param_3;
  plVar2 = (long *)(ulong)(uint)param_3[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = 0x101999048;
                    /* WARNING: Could not recover jumptable at 0x000101998fa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))();
  return;
}



/* Entry: 101999084; end: 10199909b;  */

void FUN_101999084(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_10199909c,0,0);
  return;
}



/* Entry: 10199909c; end: 10199911b;  */

void FUN_10199909c(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x10);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10199911c;
                    /* WARNING: Could not recover jumptable at 0x000101999118. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x18),uVar2,lVar3);
  return;
}



/* Entry: 10199911c; end: 10199917f;  */

void FUN_10199911c(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x101999d04,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010199917c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101999180; end: 1019991c3;  */

long FUN_101999180(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 1019991c4; end: 1019991ef; -[_TtC29FriendingBadgeServiceProvider31FriendingReminderPinMutatorImpl persistReminderUserIds:] */

void FUN_1019991c4(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [40];
  
  puVar1 = &UNK_1104208b0;
  puVar2 = &UNK_10d9a84c0;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  FUN_101999180(param_1 + 0x10,auStack_58);
  func_0x000107c613fc(&UNK_1104208b0,0x40,7);
  FUN_101998e00(auStack_58,puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  FUN_101998e18(&UNK_10d9a84c0,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1019991f0; end: 101999267;  */

void FUN_1019991f0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x38);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x18) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101999268;
                    /* WARNING: Could not recover jumptable at 0x000101999264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(uVar2,lVar3);
  return;
}



/* Entry: 101999268; end: 1019992fb;  */

void FUN_101999268(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x20) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x1019992cc,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019992c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 1019992fc; end: 10199938b; -[_TtC29FriendingBadgeServiceProvider31FriendingReminderPinMutatorImpl clearReminderPins] */

void FUN_1019992fc(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [40];
  
  FUN_101999180(param_1 + 0x10,auStack_58);
  puVar1 = &UNK_110420888;
  func_0x000107c613fc(&UNK_110420888,0x38,7);
  FUN_101998e00(auStack_58,puVar1 + 0x10);
  func_0x000107c6157c(param_1);
  puVar2 = &UNK_10d9a84b8;
  FUN_101998e18(&UNK_10d9a84b8,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 10199938c; end: 1019993ab;  */

void FUN_10199938c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019993ac,0,0);
  return;
}



/* Entry: 1019993ac; end: 10199942b;  */

void FUN_1019993ac(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x20);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x38) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10199942c;
                    /* WARNING: Could not recover jumptable at 0x000101999428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))
            (*(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),uVar2,lVar3);
  return;
}



/* Entry: 10199942c; end: 10199949b;  */

void FUN_10199942c(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  func_0x000107c615c0(*(undefined8 *)(lVar2 + 0x38));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x40) = param_1;
    pcVar1 = FUN_10199949c;
  }
  else {
    func_0x000107c614ac();
    pcVar1 = FUN_1019994dc;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(pcVar1,0,0);
  return;
}



/* Entry: 10199949c; end: 1019994db;  */

void FUN_10199949c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  (**(code **)(unaff_x22 + 0x28))(uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001019994d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 1019994dc; end: 10199951f;  */

void FUN_1019994dc(void)

{
  undefined *puVar1;
  long unaff_x22;
  
  puVar1 = PTR___swiftEmptyArrayStorage_11034f1c8;
  (**(code **)(unaff_x22 + 0x28))(PTR___swiftEmptyArrayStorage_11034f1c8);
  func_0x000107c6142c(puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010199951c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Entry: 101999520; end: 101999607; -[_TtC29FriendingBadgeServiceProvider31FriendingReminderPinMutatorImpl eligibleReminderUserIdsWithMaxImpressionCount:maxPinCount:completion:] */

void FUN_101999520(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 auStack_68 [40];
  
  func_0x000107c60bc4();
  puVar1 = &UNK_110420838;
  func_0x000107c613fc(&UNK_110420838,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  FUN_101999180(param_1 + 0x10,auStack_68);
  puVar2 = &UNK_110420860;
  func_0x000107c613fc(&UNK_110420860,0x58,7);
  FUN_101998e00(auStack_68,puVar2 + 0x10);
  *(undefined8 *)(puVar2 + 0x38) = param_3;
  *(undefined8 *)(puVar2 + 0x40) = param_4;
  *(code **)(puVar2 + 0x48) = FUN_101999aac;
  *(undefined **)(puVar2 + 0x50) = puVar1;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(puVar1);
  puVar3 = &UNK_10d9a84b0;
  FUN_101998e18(&UNK_10d9a84b0,puVar2);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101999608; end: 10199961f;  */

void FUN_101999608(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101999620,0,0);
  return;
}



/* Entry: 101999620; end: 10199969f;  */

void FUN_101999620(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x28);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1019996a0;
                    /* WARNING: Could not recover jumptable at 0x00010199969c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x18),uVar2,lVar3);
  return;
}



/* Entry: 1019996a0; end: 101999703;  */

void FUN_1019996a0(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(FUN_101999d00,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000101999700. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101999704; end: 1019997d7; -[_TtC29FriendingBadgeServiceProvider31FriendingReminderPinMutatorImpl incrementReminderPinImpressions:] */

/* WARNING: Possible PIC construction at 0x0001019997a4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001019997a8) */

void FUN_101999704(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [40];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_101999180(param_1 + 0x10,auStack_58);
    puVar1 = &UNK_110420810;
    func_0x000107c613fc(&UNK_110420810,0x40,7);
    FUN_101998e00(auStack_58,puVar1 + 0x10);
    *(long *)(puVar1 + 0x38) = param_3;
    func_0x000107c6157c(param_1);
    func_0x000107c61434(param_3);
    puVar2 = &UNK_10d9a84a8;
    FUN_101998e18(&UNK_10d9a84a8,puVar1);
    func_0x000107c61574(puVar1);
    func_0x000107c61574(puVar2);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 1019997d8; end: 1019997ef;  */

void FUN_1019997d8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019997f0,0,0);
  return;
}



/* Entry: 1019997f0; end: 10199986f;  */

void FUN_1019997f0(void)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  int *piVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(lVar4 + 0x18);
  lVar3 = *(long *)(lVar4 + 0x20);
  func_0x0001000a8868(lVar4,uVar2);
  piVar6 = *(int **)(lVar3 + 0x30);
  iVar1 = *piVar6;
  plVar5 = (long *)(ulong)(uint)piVar6[1];
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x20) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_101999870;
                    /* WARNING: Could not recover jumptable at 0x00010199986c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar6))(*(undefined8 *)(unaff_x22 + 0x18),uVar2,lVar3);
  return;
}



/* Entry: 101999870; end: 101999903;  */

void FUN_101999870(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x28) = unaff_x20;
  func_0x000107c615c0(*(undefined8 *)(lVar1 + 0x20));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__swift_task_switch_110350130)(0x1019998d4,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001019998d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Entry: 101999904; end: 101999917; -[_TtC29FriendingBadgeServiceProvider31FriendingReminderPinMutatorImpl retainReminderUserIds:] */

void FUN_101999904(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 auStack_58 [40];
  
  puVar1 = &UNK_1104207e8;
  puVar2 = &UNK_10d9a84a0;
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  FUN_101999180(param_1 + 0x10,auStack_58);
  func_0x000107c613fc(&UNK_1104207e8,0x40,7);
  FUN_101998e00(auStack_58,puVar1 + 0x10);
  *(undefined8 *)(puVar1 + 0x38) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  FUN_101998e18(&UNK_10d9a84a0,puVar1);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 101999918; end: 1019999cf;  */

void FUN_101999918(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [40];
  
  func_0x000107c5fc54(param_3,PTR___sSSN_11034da80);
  FUN_101999180(param_1 + 0x10,auStack_58);
  func_0x000107c613fc(param_4,0x40,7);
  FUN_101998e00(auStack_58,param_4 + 0x10);
  *(undefined8 *)(param_4 + 0x38) = param_3;
  func_0x000107c6157c(param_1);
  func_0x000107c61434(param_3);
  FUN_101998e18(param_5,param_4);
  func_0x000107c61574(param_4);
  func_0x000107c61574(param_5);
  func_0x000107c6142c(param_3);
  func_0x000107c61574(param_1);
  return;
}



/* Entry: 1019999d0; end: 101999a03;  */

void FUN_1019999d0(void)

{
  long unaff_x20;
  
  func_0x0001000834e4(unaff_x20 + 0x10);
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 101999a04; end: 101999a57;  */

void FUN_101999a04(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101999d08;
  plVar1[2] = unaff_x20 + 0x10;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_1019997f0,0,0);
  return;
}



/* Entry: 101999a58; end: 101999aab;  */

void FUN_101999a58(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x20 + 0x38);
  plVar1 = (long *)0x30;
  func_0x000107c615b8();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = 0x101999d0c;
  plVar1[2] = unaff_x20 + 0x10;
  plVar1[3] = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_task_switch_110350130)(FUN_101999620,0,0);
  return;
}



/* Entry: 101999aac; end: 101999aeb;  */

void FUN_101999aac(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  func_0x000107c5fc48(param_1,PTR___sSSN_11034da80);
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}


