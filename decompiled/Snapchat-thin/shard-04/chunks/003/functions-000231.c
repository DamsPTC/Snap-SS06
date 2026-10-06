/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 1033769e8; end: 1033769eb;  */

void FUN_1033769e8(void)

{
  return;
}



/* Entry: 1033769ec; end: 103376aa3;  */

void FUN_1033769ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x20);
    func_0x000107c6157c(uVar1);
    func_0x000100087bd4(FUN_103376e7c,param_1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar1);
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x000107c6157c(uVar1);
    func_0x0001007d6d78(&uStack_a0);
    func_0x000107c61574(uVar1);
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 103376aa4; end: 103376aa7;  */

void FUN_103376aa4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10337683c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 103376aa8; end: 103376adb;  */

undefined8 FUN_103376aa8(undefined8 param_1)

{
  (*(code *)&DAT_104365e5c)();
  return param_1;
}



/* Entry: 103376adc; end: 103376b33;  */

void FUN_103376adc(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c6157c();
  return;
}



/* Entry: 103376b34; end: 103376b43;  */

void FUN_103376b34(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103376b44; end: 103376bd3;  */

void FUN_103376b44(long param_1,undefined8 param_2)

{
  long lVar1;
  long lStack_48;
  undefined8 uStack_40;
  
  func_0x0001000285a8(0x112f5e558,&UNK_10dbb8cc8);
  func_0x000100087bd4(&lStack_48,FUN_103376ea8);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    lStack_48 = param_1;
    uStack_40 = param_2;
    func_0x000107c6157c(lVar1);
    func_0x000100087f6c(&lStack_48);
    func_0x000107c61578(lVar1,2);
  }
  return;
}



/* Entry: 103376bd4; end: 103376ceb;  */

void FUN_103376bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &UNK_110646460;
  func_0x000107c613fc(&UNK_110646460,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_1106464c8;
  func_0x000107c613fc(&UNK_1106464c8,0x60,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  *(undefined8 *)(puVar2 + 0x28) = param_3;
  *(undefined8 *)(puVar2 + 0x30) = param_4;
  *(undefined8 *)(puVar2 + 0x38) = param_5;
  *(undefined8 *)(puVar2 + 0x40) = param_6;
  puVar2[0x48] = param_7;
  *(undefined8 *)(puVar2 + 0x50) = param_8;
  *(undefined8 *)(puVar2 + 0x58) = param_9;
  func_0x0001000285a8(0x112f5e550,&UNK_10dbb8cc0);
  func_0x000107c613fc();
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_9);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x0001000b64ac(FUN_103376ebc,puVar2);
  return;
}



/* Entry: 103376cec; end: 103376d73;  */

void FUN_103376cec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined1 param_8)

{
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  
  uStack_48 = (undefined1)param_6;
  uStack_47 = (undefined7)((ulong)param_6 >> 8);
  uStack_40 = (undefined1)param_7;
  uStack_3f = (undefined7)((ulong)param_7 >> 8);
  uStack_7f = CONCAT17(param_8,uStack_3f);
  uStack_87 = uStack_47;
  uStack_80 = uStack_40;
  uStack_b0 = param_1;
  uStack_a8 = param_2;
  uStack_a0 = param_3;
  uStack_98 = param_4;
  uStack_90 = param_5;
  uStack_88 = uStack_48;
  uStack_70 = param_1;
  uStack_68 = param_2;
  uStack_60 = param_3;
  uStack_58 = param_4;
  uStack_50 = param_5;
  uStack_38 = param_8;
  func_0x000107c61434(param_6);
  func_0x000107c61434(param_2);
  func_0x000107c61434(param_4);
  func_0x0001002a64a8(&uStack_b0);
  FUN_103376aa8(&uStack_70);
  return;
}



/* Entry: 103376d74; end: 103376df3;  */

void FUN_103376d74(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 103376df4; end: 103376e73;  */

undefined8 FUN_103376df4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0x112f5e618;
  func_0x0001000285a8(0x112f5e618,&UNK_10dbb8d48);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Entry: 103376e74; end: 103376e7b;  */

void FUN_103376e74(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    func_0x000107c6157c(uVar2);
    func_0x000100087bd4(FUN_103376e7c,lVar1,PTR___sytN_11034f1b0 + 8);
    func_0x000107c61574(uVar2);
    uVar2 = *(undefined8 *)(lVar1 + 0x10);
    uStack_60 = 0;
    uStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_70 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    func_0x000107c6157c(uVar2);
    func_0x0001007d6d78(&uStack_a0);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 103376e7c; end: 103376ea7;  */

void FUN_103376e7c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  func_0x000107c61574(uVar1);
  return;
}



/* Entry: 103376ea8; end: 103376ebb;  */

void FUN_103376ea8(void)

{
  FUN_103376adc();
  return;
}



/* Entry: 103376ebc; end: 103376ebf;  */

void FUN_103376ebc(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10337683c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Entry: 103376ec0; end: 103376f4b;  */

long FUN_103376ec0(void)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = &uStack_30;
  func_0x000107c613fc();
  uStack_28 = 1;
  uStack_30 = 0;
  func_0x0001000285a8(0x112f5db28,&UNK_10dbb8890);
  func_0x000107c613fc();
  func_0x00010042e6a0();
  *(undefined8 **)(unaff_x20 + 0x10) = puVar1;
  puVar2 = &UNK_10dbb8d50;
  func_0x0001000c10c0();
  func_0x000107c61180();
  *(undefined **)(unaff_x20 + 0x18) = puVar2;
  return unaff_x20;
}



/* Entry: 103376f4c; end: 103376fcf;  */

void FUN_103376f4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    func_0x000107c6157c(uVar1);
    func_0x000107c61574(param_1);
    uStack_58 = param_2;
    uStack_50 = param_3;
    func_0x0001007d6d78(&uStack_58);
    func_0x000107c61574(uVar1);
  }
  return;
}



/* Entry: 103376fd0; end: 103376ff3;  */

void FUN_103376fd0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(lVar2);
    uStack_58 = uVar1;
    uStack_50 = uVar3;
    func_0x0001007d6d78(&uStack_58);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 103376ff4; end: 10337701f;  */

void FUN_103376ff4(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103377020; end: 103377027;  */

void FUN_103377020(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 103377028; end: 1033770eb;  */

/* WARNING: Possible PIC construction at 0x0001033770cc: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x0001033770d0) */

void FUN_103377028(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_110646500;
  func_0x000107c613fc(&UNK_110646500,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110646580;
  func_0x000107c613fc(&UNK_110646580,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  func_0x000107c6157c(puVar1);
  func_0x000103376fdc(param_1,param_2);
  func_0x00010090569c(0x1033771d8,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1033770ec; end: 10337719b;  */

/* WARNING: Possible PIC construction at 0x000103377180: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103377184) */

void FUN_1033770ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c614f0(uVar3);
  puVar1 = &UNK_110646500;
  func_0x000107c613fc(&UNK_110646500,0x18,7);
  func_0x000107c61644(puVar1 + 0x10);
  puVar2 = &UNK_110646558;
  func_0x000107c613fc(&UNK_110646558,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = 1;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  func_0x000107c6157c(puVar1);
  func_0x00010090569c(FUN_1033771d4,puVar2,uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10337719c; end: 1033771d3;  */

void FUN_10337719c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  if (1 < *(long *)(unaff_x20 + 0x20) - 1U) {
    func_0x000107c6142c();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc00b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocObject_11034f298)();
  return;
}



/* Entry: 1033771d4; end: 1033771db;  */

void FUN_1033771d4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61648();
  if (lVar2 != 0) {
    uVar4 = *(undefined8 *)(lVar2 + 0x10);
    func_0x000107c6157c(uVar4);
    func_0x000107c61574(lVar2);
    uStack_58 = uVar1;
    uStack_50 = uVar3;
    func_0x0001007d6d78(&uStack_58);
    func_0x000107c61574(uVar4);
  }
  return;
}



/* Entry: 1033771dc; end: 1033772d7;  */

void FUN_1033771dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = PTR__OBJC_CLASS___UIColor_1126aea70;
  func_0x000107c61168();
  puVar2 = puVar1;
  func_0x000107c5af88();
  func_0x000107c61180();
  puVar3 = puVar1;
  func_0x000107c5af88(puVar1,param_2,0x62);
  func_0x000107c61180();
  func_0x000107c3fa94();
  func_0x000107c61180();
  puRam0000000112f5e788 = puVar2;
  puRam0000000112f5e790 = puVar3;
  uRam0000000112f5e7a0 = 0;
  uRam0000000112f5e7a8 = 0;
  uRam0000000112f5e798 = 0;
  uRam0000000112f5e7b0 = 1;
  uRam0000000112f5e7c0 = 0x3fc3333333333333;
  uRam0000000112f5e7b8 = 0x3fd29aca6b29aca7;
  uRam0000000112f5e7d0 = 0;
  uRam0000000112f5e7d8 = 0;
  puRam0000000112f5e7c8 = puVar1;
  return;
}



/* Entry: 1033772d8; end: 10337774f;  */

undefined ** FUN_1033772d8(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar8 = param_1;
  func_0x000103377278();
  if ((*(long *)(uVar8 + 0x10) != 0) && (uVar3 = param_1, FUN_103377eb4(), (param_2 & 1) != 0)) {
    ppuVar10 = *(undefined ***)(*(long *)(uVar8 + 0x38) + uVar3 * 8);
    func_0x000107c61174(ppuVar10);
    goto LAB_1033776fc;
  }
  func_0x000107c6142c(uVar8);
  uVar1 = (uint)param_1 & 0xff;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    if ((param_1 & 0xff) == 0) {
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      func_0x000107c450a4(0x4059000000000000,0x4059000000000000);
      func_0x000107c61180();
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      func_0x000107c450a4(0x4059000000000000,0x4059000000000000);
      func_0x000107c61180();
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c61174(uVar11);
    }
LAB_10337763c:
    uVar14 = 0;
    uVar13 = 0;
    uVar16 = 0x401e000000000000;
    uVar15 = 1;
    uVar9 = 0x3fc3333333333333;
    uVar17 = 0x3fd29aca6b29aca7;
  }
  else {
    if (uVar1 == 2) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c61174(uVar11);
      puVar12 = (undefined *)0x0;
      goto LAB_10337763c;
    }
    if (uVar1 == 3) {
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar14 = 0;
      puVar12 = (undefined *)0x0;
      uVar13 = 0;
      uVar11 = 0;
      uVar16 = 0x401e000000000000;
      uVar15 = 1;
      uVar9 = 0x3fc3333333333333;
      uVar17 = 0x3fd29aca6b29aca7;
    }
    else {
      if (lRam0000000112f5e780 != -1) {
        func_0x000107c61568(0x112f5e780,0x1033771dc);
      }
      uVar11 = uRam0000000112f5e7d8;
      uVar16 = uRam0000000112f5e7d0;
      puVar4 = puRam0000000112f5e7c8;
      uVar9 = uRam0000000112f5e7c0;
      uVar17 = uRam0000000112f5e7b8;
      uVar13 = uRam0000000112f5e7a8;
      puVar12 = puRam0000000112f5e7a0;
      puVar6 = puRam0000000112f5e798;
      uVar14 = uRam0000000112f5e790;
      puVar5 = puRam0000000112f5e788;
      uStack_a8 = uRam0000000112f5e7c0;
      uStack_b0 = uRam0000000112f5e7b8;
      uStack_98 = uRam0000000112f5e7d0;
      puStack_a0 = puRam0000000112f5e7c8;
      puStack_c8 = puRam0000000112f5e7a0;
      puStack_d0 = puRam0000000112f5e798;
      uStack_b8 = uRam0000000112f5e7b0;
      uVar2 = uStack_b8;
      uStack_c0 = uRam0000000112f5e7a8;
      uStack_d8 = uRam0000000112f5e790;
      puStack_e0 = puRam0000000112f5e788;
      uStack_90 = uRam0000000112f5e7d8;
      uStack_b8._0_1_ = (undefined1)uRam0000000112f5e7b0;
      uVar15 = (undefined1)uStack_b8;
      uStack_b8 = uVar2;
      func_0x000103377f0c(&puStack_e0,&puStack_138);
    }
  }
  uStack_b8 = CONCAT71(uStack_10f,uVar15);
  ppuVar10 = &puStack_e0;
  puStack_138 = puVar5;
  uStack_130 = uVar14;
  puStack_128 = puVar6;
  puStack_120 = puVar12;
  uStack_118 = uVar13;
  uStack_110 = uVar15;
  uStack_108 = uVar17;
  uStack_100 = uVar9;
  puStack_f8 = puVar4;
  uStack_f0 = uVar16;
  uStack_e8 = uVar11;
  puStack_e0 = puVar5;
  uStack_d8 = uVar14;
  puStack_d0 = puVar6;
  puStack_c8 = puVar12;
  uStack_c0 = uVar13;
  uStack_b0 = uVar17;
  uStack_a8 = uVar9;
  puStack_a0 = puVar4;
  uStack_98 = uVar16;
  uStack_90 = uVar11;
  FUN_103377750();
  if (ppuVar10 == (undefined **)0x0) {
    func_0x000103377f40(&puStack_138);
    return (undefined **)0x0;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar7 = ppuVar10;
  func_0x000107c61174(ppuVar10);
  func_0x000107c61174();
  func_0x000107c61434(uVar11);
  FUN_103377904(ppuVar10,param_1);
  func_0x000103377f40(&puStack_138);
  func_0x000107c61170(ppuVar7);
  uVar8 = *(ulong *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
LAB_1033776fc:
  func_0x000107c6142c(uVar8);
  return ppuVar10;
}



/* Entry: 103377750; end: 103377903;  */

undefined * FUN_103377750(undefined8 *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [88];
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  uVar8 = *unaff_x20;
  puVar2 = PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08;
  func_0x000107c610f8(PTR__OBJC_CLASS___UIGraphicsImageRenderer_1126afe08);
  func_0x000107c486f8(0x4059000000000000,0x4059000000000000);
  puVar3 = &UNK_1106465e0;
  func_0x000107c613fc(&UNK_1106465e0,0x90,7);
  *(undefined8 *)(puVar3 + 0x18) = 0x4049000000000000;
  *(undefined8 *)(puVar3 + 0x10) = 0x4059000000000000;
  uVar7 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar3 + 0x50) = param_1[5];
  *(undefined8 *)(puVar3 + 0x48) = uVar7;
  *(undefined8 *)(puVar3 + 0x60) = uVar10;
  *(undefined8 *)(puVar3 + 0x58) = uVar9;
  uVar7 = param_1[8];
  *(undefined8 *)(puVar3 + 0x70) = param_1[9];
  *(undefined8 *)(puVar3 + 0x68) = uVar7;
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar3 + 0x30) = param_1[1];
  *(undefined8 *)(puVar3 + 0x28) = uVar7;
  *(undefined8 *)(puVar3 + 0x20) = 0x4049000000000000;
  uVar7 = param_1[10];
  *(undefined8 *)(puVar3 + 0x40) = uVar10;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  *(undefined8 *)(puVar3 + 0x78) = uVar7;
  *(undefined8 **)(puVar3 + 0x80) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x88) = uVar8;
  puVar4 = &UNK_110646608;
  func_0x000107c613fc(&UNK_110646608,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_103378674;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_60 = FUN_103378688;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100f9148c;
  puStack_68 = &UNK_110646620;
  ppuVar5 = &puStack_80;
  puStack_58 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar6 = puStack_58;
  FUN_103377f0c(param_1,auStack_d8);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = puVar2;
  func_0x000107c45138(puVar2);
  func_0x000107c61180();
  func_0x000107c61170(puVar2);
  func_0x000107c60bd0(ppuVar5);
  puVar2 = puVar4;
  func_0x000107c61544(puVar4,"",0x75,0xd3,0x1f,1);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar2 & 1) == 0) {
    return puVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103377904);
  (*pcVar1)();
}



/* Entry: 103377904; end: 1033779bf;  */

void FUN_103377904(long param_1,ulong param_2)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  
  if (param_1 == 0) {
    uVar3 = param_2;
    FUN_103377eb4();
    if ((uVar3 & 1) != 0) {
      iVar1 = (int)*unaff_x20;
      func_0x000107c61558();
      lVar2 = *unaff_x20;
      if (iVar1 == 0) {
        FUN_103378104();
      }
      func_0x000107c61170(*(undefined8 *)(*(long *)(lVar2 + 0x38) + param_2 * 8));
      func_0x0001033784e4(param_2,lVar2);
      *unaff_x20 = lVar2;
    }
  }
  else {
    lVar2 = *unaff_x20;
    func_0x000107c61558(lVar2);
    lVar4 = *unaff_x20;
    FUN_103377fd4(param_1,param_2,lVar2);
    *unaff_x20 = lVar4;
  }
  return;
}



/* Entry: 1033779c0; end: 103377e43;  */

/* WARNING: Possible PIC construction at 0x000103377a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103377d3c) */
/* WARNING: Removing unreachable block (ram,0x000103377d2c) */
/* WARNING: Removing unreachable block (ram,0x000103377d00) */
/* WARNING: Removing unreachable block (ram,0x000103377cd8) */
/* WARNING: Removing unreachable block (ram,0x000103377e14) */
/* WARNING: Removing unreachable block (ram,0x000103377ae4) */
/* WARNING: Removing unreachable block (ram,0x000103377a84) */
/* WARNING: Removing unreachable block (ram,0x000103377b04) */
/* WARNING: Removing unreachable block (ram,0x000103377b28) */
/* WARNING: Removing unreachable block (ram,0x000103377b2c) */
/* WARNING: Removing unreachable block (ram,0x000103377b30) */
/* WARNING: Removing unreachable block (ram,0x000103377b34) */
/* WARNING: Removing unreachable block (ram,0x000103377b0c) */
/* WARNING: Removing unreachable block (ram,0x000103377aa4) */
/* WARNING: Removing unreachable block (ram,0x000103377b74) */
/* WARNING: Removing unreachable block (ram,0x000103377b98) */
/* WARNING: Removing unreachable block (ram,0x000103377b9c) */
/* WARNING: Removing unreachable block (ram,0x000103377ba0) */
/* WARNING: Removing unreachable block (ram,0x000103377ba4) */
/* WARNING: Removing unreachable block (ram,0x000103377c5c) */
/* WARNING: Removing unreachable block (ram,0x000103377d78) */
/* WARNING: Removing unreachable block (ram,0x000103377e18) */
/* WARNING: Removing unreachable block (ram,0x000103377c64) */
/* WARNING: Removing unreachable block (ram,0x000103377bc0) */
/* WARNING: Removing unreachable block (ram,0x000103377bcc) */
/* WARNING: Removing unreachable block (ram,0x000103377bd0) */
/* WARNING: Removing unreachable block (ram,0x000103377bd4) */
/* WARNING: Removing unreachable block (ram,0x000103377c4c) */
/* WARNING: Removing unreachable block (ram,0x000103377bd8) */
/* WARNING: Removing unreachable block (ram,0x000103377c10) */
/* WARNING: Removing unreachable block (ram,0x000103377c14) */
/* WARNING: Removing unreachable block (ram,0x000103377d80) */
/* WARNING: Removing unreachable block (ram,0x000103377c18) */
/* WARNING: Removing unreachable block (ram,0x000103377db0) */
/* WARNING: Removing unreachable block (ram,0x000103377df8) */

void FUN_1033779c0(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = 0;
  func_0x000107c5f064();
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  uVar2 = *param_2;
  func_0x000107c3ab24(0x3fe0000000000000,uVar2);
  func_0x000107c61180();
  func_0x000107c60910(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103377e44; end: 103377e8f;  */

void FUN_103377e44(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c6142c(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103377e90; end: 103377eb3;  */

undefined ** FUN_103377e90(ulong param_1,ulong param_2)

{
  uint uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined **ppuVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined *puStack_138;
  undefined8 uStack_130;
  undefined *puStack_128;
  undefined *puStack_120;
  undefined8 uStack_118;
  undefined1 uStack_110;
  undefined7 uStack_10f;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *puStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined *puStack_e0;
  undefined8 uStack_d8;
  undefined *puStack_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined *puStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  
  uVar8 = param_1;
  func_0x000103377278();
  if ((*(long *)(uVar8 + 0x10) != 0) && (uVar3 = param_1, FUN_103377eb4(), (param_2 & 1) != 0)) {
    ppuVar10 = *(undefined ***)(*(long *)(uVar8 + 0x38) + uVar3 * 8);
    func_0x000107c61174(ppuVar10);
    goto LAB_1033776fc;
  }
  func_0x000107c6142c(uVar8);
  uVar1 = (uint)param_1 & 0xff;
  puVar4 = PTR__OBJC_CLASS___UIColor_1126aea70;
  if (uVar1 == 1 || (param_1 & 0xff) == 0) {
    if ((param_1 & 0xff) == 0) {
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      func_0x000107c450a4(0x4059000000000000,0x4059000000000000);
      func_0x000107c61180();
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar11 = 0;
    }
    else {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      puVar12 = PTR_PTR_1126b0c40;
      func_0x000107c61168();
      func_0x000107c450a4(0x4059000000000000,0x4059000000000000);
      func_0x000107c61180();
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c61174(uVar11);
    }
LAB_10337763c:
    uVar14 = 0;
    uVar13 = 0;
    uVar16 = 0x401e000000000000;
    uVar15 = 1;
    uVar9 = 0x3fc3333333333333;
    uVar17 = 0x3fd29aca6b29aca7;
  }
  else {
    if (uVar1 == 2) {
      uVar11 = *(undefined8 *)(unaff_x20 + 0x28);
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c3fa94();
      func_0x000107c61180();
      func_0x000107c61174(uVar11);
      puVar12 = (undefined *)0x0;
      goto LAB_10337763c;
    }
    if (uVar1 == 3) {
      func_0x000107c61168();
      puVar5 = puVar4;
      func_0x000107c3fa94();
      func_0x000107c61180();
      puVar12 = puVar4;
      func_0x000107c3ea80();
      func_0x000107c61180();
      puVar6 = puVar12;
      func_0x000107c3fdd0(0x3fc999999999999a);
      func_0x000107c61180();
      func_0x000107c61170(puVar12);
      func_0x000107c5af88();
      func_0x000107c61180();
      uVar14 = 0;
      puVar12 = (undefined *)0x0;
      uVar13 = 0;
      uVar11 = 0;
      uVar16 = 0x401e000000000000;
      uVar15 = 1;
      uVar9 = 0x3fc3333333333333;
      uVar17 = 0x3fd29aca6b29aca7;
    }
    else {
      if (lRam0000000112f5e780 != -1) {
        func_0x000107c61568(0x112f5e780,0x1033771dc);
      }
      uVar11 = uRam0000000112f5e7d8;
      uVar16 = uRam0000000112f5e7d0;
      puVar4 = puRam0000000112f5e7c8;
      uVar9 = uRam0000000112f5e7c0;
      uVar17 = uRam0000000112f5e7b8;
      uVar13 = uRam0000000112f5e7a8;
      puVar12 = puRam0000000112f5e7a0;
      puVar6 = puRam0000000112f5e798;
      uVar14 = uRam0000000112f5e790;
      puVar5 = puRam0000000112f5e788;
      uStack_a8 = uRam0000000112f5e7c0;
      uStack_b0 = uRam0000000112f5e7b8;
      uStack_98 = uRam0000000112f5e7d0;
      puStack_a0 = puRam0000000112f5e7c8;
      puStack_c8 = puRam0000000112f5e7a0;
      puStack_d0 = puRam0000000112f5e798;
      uStack_b8 = uRam0000000112f5e7b0;
      uVar2 = uStack_b8;
      uStack_c0 = uRam0000000112f5e7a8;
      uStack_d8 = uRam0000000112f5e790;
      puStack_e0 = puRam0000000112f5e788;
      uStack_90 = uRam0000000112f5e7d8;
      uStack_b8._0_1_ = (undefined1)uRam0000000112f5e7b0;
      uVar15 = (undefined1)uStack_b8;
      uStack_b8 = uVar2;
      func_0x000103377f0c(&puStack_e0,&puStack_138);
    }
  }
  uStack_b8 = CONCAT71(uStack_10f,uVar15);
  ppuVar10 = &puStack_e0;
  puStack_138 = puVar5;
  uStack_130 = uVar14;
  puStack_128 = puVar6;
  puStack_120 = puVar12;
  uStack_118 = uVar13;
  uStack_110 = uVar15;
  uStack_108 = uVar17;
  uStack_100 = uVar9;
  puStack_f8 = puVar4;
  uStack_f0 = uVar16;
  uStack_e8 = uVar11;
  puStack_e0 = puVar5;
  uStack_d8 = uVar14;
  puStack_d0 = puVar6;
  puStack_c8 = puVar12;
  uStack_c0 = uVar13;
  uStack_b0 = uVar17;
  uStack_a8 = uVar9;
  puStack_a0 = puVar4;
  uStack_98 = uVar16;
  uStack_90 = uVar11;
  FUN_103377750();
  if (ppuVar10 == (undefined **)0x0) {
    func_0x000103377f40(&puStack_138);
    return (undefined **)0x0;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
  ppuVar7 = ppuVar10;
  func_0x000107c61174(ppuVar10);
  func_0x000107c61174();
  func_0x000107c61434(uVar11);
  FUN_103377904(ppuVar10,param_1);
  func_0x000103377f40(&puStack_138);
  func_0x000107c61170(ppuVar7);
  uVar8 = *(ulong *)(unaff_x20 + 0x30);
  *(undefined8 *)(unaff_x20 + 0x30) = uVar11;
LAB_1033776fc:
  func_0x000107c6142c(uVar8);
  return ppuVar10;
}



/* Entry: 103377eb4; end: 103377f0b;  */

void FUN_103377eb4(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  func_0x000107c6068c(auStack_78,*(undefined8 *)(unaff_x20 + 0x28));
  uVar1 = (ulong)param_1;
  func_0x000107c60690();
  func_0x000107c606a8();
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(byte *)(*(long *)(unaff_x20 + 0x30) + uVar1) == param_1) {
      return;
    }
    uVar1 = uVar1 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103377f0c; end: 103377f6b;  */

undefined8 FUN_103377f0c(undefined8 param_1,undefined8 param_2)

{
  FUN_103378844(param_2,param_1,&UNK_1106466b0);
  return param_2;
}



/* Entry: 103377f6c; end: 103377fd3;  */

void FUN_103377f6c(char param_1,ulong param_2)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    return;
  }
  do {
    if (*(char *)(*(long *)(unaff_x20 + 0x30) + param_2) == param_1) {
      return;
    }
    param_2 = param_2 + 1 & ~uVar1;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  return;
}



/* Entry: 103377fd4; end: 103378103;  */

void FUN_103377fd4(undefined8 param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_103377eb4();
  lVar4 = *(long *)(lVar8 + 0x10);
  uVar7 = (ulong)~(uint)uVar3 & 1;
  lVar5 = lVar4 + uVar7;
  if (SCARRY8(lVar4,uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103378098);
    (*pcVar1)();
  }
  if (*(long *)(lVar8 + 0x18) < lVar5) {
    param_3 = param_3 & 1;
    FUN_103378260(lVar5);
    uVar2 = param_2;
    FUN_103377eb4();
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      func_0x000107c60624(&UNK_11075ec70);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x103378064);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_103378104();
    lVar5 = *unaff_x20;
    goto joined_r0x0001033780ac;
  }
  lVar5 = *unaff_x20;
joined_r0x0001033780ac:
  if ((uVar3 & 1) != 0) {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8);
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_release_11034d2d0)(uVar6);
    return;
  }
  lVar4 = lVar5 + (uVar2 >> 6) * 8;
  *(ulong *)(lVar4 + 0x40) = *(ulong *)(lVar4 + 0x40) | 1L << (uVar2 & 0x3f);
  *(char *)(*(long *)(lVar5 + 0x30) + uVar2) = (char)param_2;
  *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar2 * 8) = param_1;
  if (SCARRY8(*(long *)(lVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x103378104);
    (*pcVar1)();
  }
  *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
  return;
}



/* Entry: 103378104; end: 10337825f;  */

void FUN_103378104(void)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  
  func_0x0001000285a8(0x112f5e7e0,&UNK_10dbb8e20);
  lVar9 = *unaff_x20;
  lVar4 = lVar9;
  func_0x000107c6048c();
  if (*(long *)(lVar9 + 0x10) != 0) {
    lVar1 = lVar9 + 0x40;
    uVar6 = (1L << ((ulong)*(byte *)(lVar4 + 0x20) & 0x3f)) + 0x3fU >> 6;
    if (lVar4 != lVar9 || lVar1 + uVar6 * 8 <= lVar4 + 0x40U) {
      func_0x000107c610b8(lVar4 + 0x40U,lVar1,uVar6 << 3);
    }
    lVar10 = 0;
    *(undefined8 *)(lVar4 + 0x10) = *(undefined8 *)(lVar9 + 0x10);
    uVar7 = 1L << ((ulong)*(byte *)(lVar9 + 0x20) & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if ((*(byte *)(lVar9 + 0x20) & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(lVar9 + 0x40);
    if (uVar6 == 0) goto LAB_1033781e0;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar10 << 6;
        uVar5 = *(undefined8 *)(*(long *)(lVar9 + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(lVar4 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(lVar9 + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(lVar4 + 0x38) + uVar8 * 8) = uVar5;
        func_0x000107c61174();
        if (uVar6 != 0) break;
LAB_1033781e0:
        do {
          lVar2 = lVar10 + 1;
          if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x103378260);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_103378238;
          uVar6 = *(ulong *)(lVar1 + lVar2 * 8);
          lVar10 = lVar10 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar10 = lVar2;
      }
    } while( true );
  }
LAB_103378238:
  func_0x000107c61574(lVar9);
  *unaff_x20 = lVar4;
  return;
}



/* Entry: 103378260; end: 103378673;  */

void FUN_103378260(long param_1,ulong param_2)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  long lVar12;
  ulong uVar13;
  ulong *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined1 auStack_a8 [72];
  
  lVar12 = *unaff_x20;
  lVar1 = *(long *)(lVar12 + 0x18);
  if (*(long *)(lVar12 + 0x18) <= param_1) {
    lVar1 = param_1;
  }
  uVar15 = 0x112f5e7e0;
  func_0x0001000285a8(0x112f5e7e0,&UNK_10dbb8e20);
  lVar5 = lVar12;
  func_0x000107c60490(lVar12,lVar1,param_2,uVar15);
  if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1033784b0:
    func_0x000107c61574(lVar12);
    *unaff_x20 = lVar5;
    return;
  }
  puVar14 = (ulong *)(lVar12 + 0x40);
  uVar10 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar13 = uVar13 & *puVar14;
  lVar1 = lVar5 + 0x40;
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar16 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1033784e0);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar16) {
          if ((param_2 & 1) != 0) {
            uVar13 = 1L << ((ulong)*(byte *)(lVar12 + 0x20) & 0x3f);
            if ((*(byte *)(lVar12 + 0x20) & 0x3f) < 6) {
              *puVar14 = -1L << (uVar13 & 0x3f);
            }
            else {
              func_0x000107c60ee4(puVar14,uVar13 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(lVar12 + 0x10) = 0;
          }
          goto LAB_1033784b0;
        }
        uVar13 = puVar14[lVar16];
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar16 = lVar7;
    }
    uVar8 = LZCOUNT(uVar6) | lVar16 << 6;
    bVar2 = *(byte *)(*(long *)(lVar12 + 0x30) + uVar8);
    uVar6 = (ulong)bVar2;
    uVar15 = *(undefined8 *)(*(long *)(lVar12 + 0x38) + uVar8 * 8);
    if ((param_2 & 1) == 0) {
      func_0x000107c61174(uVar15);
    }
    func_0x000107c6068c(auStack_a8,*(undefined8 *)(lVar5 + 0x28));
    func_0x000107c60690();
    func_0x000107c606a8();
    uVar11 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
    uVar6 = uVar6 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar6 >> 6;
    uVar8 = -1L << (uVar6 & 0x3f) & (*(ulong *)(lVar1 + uVar9 * 8) ^ 0xffffffffffffffff);
    if (uVar8 == 0) {
      bVar3 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar8 = uVar9 + 1;
        if ((uVar8 == uVar6) && (bVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1033784e4);
          (*pcVar4)();
        }
        uVar9 = 0;
        if (uVar8 != uVar6) {
          uVar9 = uVar8;
        }
        bVar3 = (bool)(uVar8 == uVar6 | bVar3);
        uVar8 = *(ulong *)(lVar1 + uVar9 * 8);
      } while (uVar8 == 0xffffffffffffffff);
      uVar8 = ~uVar8;
      uVar6 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar9 << 6;
    }
    else {
      uVar8 = (uVar8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar8 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | uVar6 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar8) = 1L << (uVar6 & 0x3f) | *(ulong *)(lVar1 + uVar8);
    *(byte *)(*(long *)(lVar5 + 0x30) + uVar6) = bVar2;
    *(undefined8 *)(*(long *)(lVar5 + 0x38) + uVar6 * 8) = uVar15;
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    lVar7 = lVar16;
  } while( true );
}



/* Entry: 103378674; end: 103378687;  */

/* WARNING: Possible PIC construction at 0x000103377a80: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377ae0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377b00: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377e10: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377cd4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377cfc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377d28: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377d38: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103377b70: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103377d3c) */
/* WARNING: Removing unreachable block (ram,0x000103377d2c) */
/* WARNING: Removing unreachable block (ram,0x000103377d00) */
/* WARNING: Removing unreachable block (ram,0x000103377cd8) */
/* WARNING: Removing unreachable block (ram,0x000103377e14) */
/* WARNING: Removing unreachable block (ram,0x000103377ae4) */
/* WARNING: Removing unreachable block (ram,0x000103377a84) */
/* WARNING: Removing unreachable block (ram,0x000103377b04) */
/* WARNING: Removing unreachable block (ram,0x000103377b28) */
/* WARNING: Removing unreachable block (ram,0x000103377b2c) */
/* WARNING: Removing unreachable block (ram,0x000103377b30) */
/* WARNING: Removing unreachable block (ram,0x000103377b34) */
/* WARNING: Removing unreachable block (ram,0x000103377b0c) */
/* WARNING: Removing unreachable block (ram,0x000103377aa4) */
/* WARNING: Removing unreachable block (ram,0x000103377b74) */
/* WARNING: Removing unreachable block (ram,0x000103377b98) */
/* WARNING: Removing unreachable block (ram,0x000103377b9c) */
/* WARNING: Removing unreachable block (ram,0x000103377ba0) */
/* WARNING: Removing unreachable block (ram,0x000103377ba4) */
/* WARNING: Removing unreachable block (ram,0x000103377c5c) */
/* WARNING: Removing unreachable block (ram,0x000103377d78) */
/* WARNING: Removing unreachable block (ram,0x000103377e18) */
/* WARNING: Removing unreachable block (ram,0x000103377c64) */
/* WARNING: Removing unreachable block (ram,0x000103377bc0) */
/* WARNING: Removing unreachable block (ram,0x000103377bcc) */
/* WARNING: Removing unreachable block (ram,0x000103377bd0) */
/* WARNING: Removing unreachable block (ram,0x000103377bd4) */
/* WARNING: Removing unreachable block (ram,0x000103377c4c) */
/* WARNING: Removing unreachable block (ram,0x000103377bd8) */
/* WARNING: Removing unreachable block (ram,0x000103377c10) */
/* WARNING: Removing unreachable block (ram,0x000103377c14) */
/* WARNING: Removing unreachable block (ram,0x000103377d80) */
/* WARNING: Removing unreachable block (ram,0x000103377c18) */
/* WARNING: Removing unreachable block (ram,0x000103377db0) */
/* WARNING: Removing unreachable block (ram,0x000103377df8) */

void FUN_103378674(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  func_0x000107c5f064(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20),0,(undefined8 *)(unaff_x20 + 0x28),
                      *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88));
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  func_0x000107c3ab28(param_1);
  func_0x000107c61180();
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  func_0x000107c3ab24(0x3fe0000000000000,uVar2);
  func_0x000107c61180();
  func_0x000107c60910(param_1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar2);
  return;
}



/* Entry: 103378688; end: 1033786a7;  */

void FUN_103378688(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 1033786a8; end: 1033786c3;  */

void FUN_1033786a8(long param_1,long param_2)

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



/* Entry: 1033786c4; end: 1033787cf;  */

undefined * FUN_1033786c4(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  puVar7 = *(undefined **)(param_1 + 0x10);
  if (puVar7 == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_11034f1d0;
  }
  uVar4 = 0;
  func_0x0001000285a8(0x112f5e7e0);
  puVar2 = puVar7;
  func_0x000107c60498();
  uVar8 = (ulong)*(byte *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar8;
  FUN_103377eb4();
  if ((uVar4 & 1) == 0) {
    puVar5 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar6 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar6 + 0x40) = *(ulong *)(puVar2 + uVar6 + 0x40) | 1L << (uVar3 & 0x3f);
      *(char *)(*(long *)(puVar2 + 0x30) + uVar3) = (char)uVar8;
      *(undefined8 *)(*(long *)(puVar2 + 0x38) + uVar3 * 8) = uVar9;
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1033787d0);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      puVar7 = puVar7 + -1;
      if (puVar7 == (undefined *)0x0) {
        func_0x000107c61174();
        return puVar2;
      }
      uVar8 = (ulong)*(byte *)(puVar5 + -1);
      uVar9 = *puVar5;
      func_0x000107c61174();
      uVar3 = uVar8;
      FUN_103377eb4();
      puVar5 = puVar5 + 2;
    } while ((uVar4 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033787a0);
  (*pcVar1)();
}



/* Entry: 1033787d0; end: 103378843;  */

long FUN_1033787d0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 103378844; end: 1033788d7;  */

undefined8 * FUN_103378844(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  param_1[2] = uVar1;
  param_1[3] = uVar3;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar5 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  uVar5 = param_2[8];
  uVar4 = param_2[9];
  param_1[8] = uVar5;
  param_1[9] = uVar4;
  uVar4 = param_2[10];
  param_1[10] = uVar4;
  func_0x000107c61174();
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar1);
  func_0x000107c61174(uVar3);
  func_0x000107c61174(uVar5);
  func_0x000107c61174(uVar4);
  return param_1;
}



/* Entry: 1033788d8; end: 1033789bb;  */

undefined8 * FUN_1033788d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61174();
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 1033789bc; end: 103378a4f;  */

undefined8 * FUN_1033789bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c61170(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  func_0x000107c61170(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar1 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar1;
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  func_0x000107c61170(uVar1);
  param_1[9] = param_2[9];
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61170(uVar1);
  return param_1;
}



/* Entry: 103378a50; end: 103378b27;  */

int FUN_103378a50(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xb] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 103378b28; end: 103378b33; -[SCLensFullScreenUXServiceCarouselEntryPoint cameraFeatureScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b28(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5e7e8;
  func_0x000107c61428(param_1 + _DAT_112f5e7e8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103378b34; end: 103378b3f; -[SCLensFullScreenUXServiceCarouselEntryPoint setCameraFeatureScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b34(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5e7e8;
  func_0x000107c61428(param_1 + _DAT_112f5e7e8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378b40; end: 103378b4b; -[SCLensFullScreenUXServiceCarouselEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b40(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5e7f0;
  func_0x000107c61428(param_1 + _DAT_112f5e7f0,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103378b4c; end: 103378b57; -[SCLensFullScreenUXServiceCarouselEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5e7f0;
  func_0x000107c61428(param_1 + _DAT_112f5e7f0,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378b58; end: 103378b63; -[SCLensFullScreenUXServiceCarouselEntryPoint cameraUIScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b58(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5e7f8;
  func_0x000107c61428(param_1 + _DAT_112f5e7f8,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103378b64; end: 103378b6f; -[SCLensFullScreenUXServiceCarouselEntryPoint setCameraUIScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b64(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5e7f8;
  func_0x000107c61428(param_1 + _DAT_112f5e7f8,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378b70; end: 103378b7b; -[SCLensFullScreenUXServiceCarouselEntryPoint lensFullScreenUXServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b70(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5e800;
  func_0x000107c61428(param_1 + _DAT_112f5e800,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103378b7c; end: 103378b87; -[SCLensFullScreenUXServiceCarouselEntryPoint setLensFullScreenUXServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b7c(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5e800;
  func_0x000107c61428(param_1 + _DAT_112f5e800,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378b88; end: 103378b93; -[SCLensFullScreenUXServiceCarouselEntryPoint lensFullScreenServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b88(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5e808;
  func_0x000107c61428(param_1 + _DAT_112f5e808,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103378b94; end: 103378b9f; -[SCLensFullScreenUXServiceCarouselEntryPoint setLensFullScreenServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378b94(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5e808;
  func_0x000107c61428(param_1 + _DAT_112f5e808,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378ba0; end: 103378bab; -[SCLensFullScreenUXServiceCarouselEntryPoint webLensesServices] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378ba0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112f5e810;
  func_0x000107c61428(param_1 + _DAT_112f5e810,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103378bac; end: 103378bef;  */

void FUN_103378bac(long param_1,undefined8 param_2,long *param_3)

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



/* Entry: 103378bf0; end: 103378bfb; -[SCLensFullScreenUXServiceCarouselEntryPoint setWebLensesServices:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378bf0(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f5e810;
  func_0x000107c61428(param_1 + _DAT_112f5e810,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378bfc; end: 103378c4f;  */

void FUN_103378bfc(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_4;
  func_0x000107c61428(param_1 + lVar1,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 103378c50; end: 103378e03;  */

/* WARNING: Possible PIC construction at 0x000103378dcc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103378ddc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103378dac: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103378dbc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103378d9c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103378dc0) */
/* WARNING: Removing unreachable block (ram,0x000103378db0) */
/* WARNING: Removing unreachable block (ram,0x000103378de0) */
/* WARNING: Removing unreachable block (ram,0x000103378dd0) */
/* WARNING: Removing unreachable block (ram,0x000103378da0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378c50(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long unaff_x20;
  
  lVar1 = unaff_x20;
  func_0x000107c3f0d0();
  func_0x000107c61180();
  if (lVar1 == 0) {
    return;
  }
  lVar2 = unaff_x20;
  func_0x000107c40080();
  func_0x000107c61180();
  if (lVar2 != 0) {
    lVar3 = unaff_x20;
    func_0x000107c3f284();
    func_0x000107c61180();
    if (lVar3 == 0) {
      func_0x000107c61170(lVar1);
      lVar1 = lVar2;
    }
    else {
      lVar4 = unaff_x20;
      func_0x000107c4b190();
      func_0x000107c61180();
      if (lVar4 == 0) {
        func_0x000107c61170(lVar1);
        lVar1 = lVar2;
      }
      else {
        lVar5 = unaff_x20;
        func_0x000107c4b18c();
        func_0x000107c61180();
        if (lVar5 != 0) {
          lVar6 = unaff_x20;
          func_0x000107c5e208();
          func_0x000107c61180();
          if (lVar6 != 0) {
            uVar7 = 0;
            FUN_103375d48(0);
            func_0x000107c613fc();
            FUN_10337598c(lVar1,lVar2,lVar3,lVar4,lVar5,lVar6,uVar7);
            uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f5e818);
            *(long *)(unaff_x20 + _DAT_112f5e818) = lVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)PTR__swift_release_11034f4c0)(uVar7);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar1);
  return;
}



/* Entry: 103378e04; end: 103378e2b; -[SCLensFullScreenUXServiceCarouselEntryPoint begin] */

void FUN_103378e04(undefined8 param_1)

{
  func_0x000107c61174();
  FUN_103378c50();
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 103378e2c; end: 103379233; -[SCLensFullScreenUXServiceCarouselEntryPoint end] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103378e2c(long param_1)

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
  puVar5 = *(undefined1 **)(param_1 + _DAT_112f5e818);
  if (puVar5 == (undefined1 *)0x0) {
    func_0x000107c61174(param_1);
  }
  else {
    lVar2 = param_1;
    func_0x000107c61174(param_1);
    puVar3 = puVar5;
    func_0x000107c6157c();
    FUN_103375c68();
    func_0x000107c61574(puVar5);
    if (puVar3 != (undefined1 *)0x0) goto LAB_103378ec0;
  }
  lStack_50 = param_1;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_end_1125c29d0);
  func_0x000107c61180();
  lVar2 = param_1;
  puVar3 = (undefined1 *)plVar4;
LAB_103378ec0:
  func_0x000107c61170(lVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(puVar3);
  return;
}



/* Entry: 103379234; end: 1033792df; -[SCLensFullScreenUXServiceCarouselEntryPoint setValue:forIvarName:] */

void FUN_103379234(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  func_0x000103378ee0(auStack_50,uVar1,param_2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000100183ab8(auStack_50);
  return;
}



/* Entry: 1033792e0; end: 1033793a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033792e0(void)

{
  long unaff_x20;
  
  func_0x000107c614f0();
  func_0x000107c61614(unaff_x20 + _DAT_112f5e7e8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5e7f0,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5e7f8,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5e800,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5e808,0);
  func_0x000107c61614(unaff_x20 + _DAT_112f5e810,0);
  *(undefined8 *)(unaff_x20 + _DAT_112f5e818) = 0;
  func_0x000107c61154(&stack0xffffffffffffffd0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 1033793a4; end: 1033793c3; -[SCLensFullScreenUXServiceCarouselEntryPoint init] */

void FUN_1033793a4(void)

{
  FUN_1033792e0();
  return;
}



/* Entry: 1033793c4; end: 1033793f7;  */

void FUN_1033793c4(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 1033793f8; end: 10337947f; -[SCLensFullScreenUXServiceCarouselEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033793f8(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112f5e7e8);
  func_0x000107c61610(param_1 + _DAT_112f5e7f0);
  func_0x000107c61610(param_1 + _DAT_112f5e7f8);
  func_0x000107c61610(param_1 + _DAT_112f5e800);
  func_0x000107c61610(param_1 + _DAT_112f5e808);
  func_0x000107c61610(param_1 + _DAT_112f5e810);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5e818));
  return;
}



/* Entry: 103379480; end: 10337949f;  */

void FUN_103379480(void)

{
  func_0x000107c61168(&PTR_PTR_1128d20f0);
  return;
}



/* Entry: 1033794a0; end: 10337950b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033794a0(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  func_0x000100083b20(&uStack_38);
  FUN_103379894();
  lVar1 = param_2;
  func_0x000107c610f8();
  *(undefined8 *)(lVar1 + _DAT_112f5e850) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10337950c; end: 103379577;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10337950c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_30 [8];
  
  func_0x000107c610f8();
  *(undefined8 *)(unaff_x20 + _DAT_112f5e850) = param_1;
  func_0x000107c61154(auStack_30,PTR_s_init_1125d9248);
  return;
}



/* Entry: 103379578; end: 1033795d7; -[_TtC37MapSearchScopedFactoryServiceProvider25SCMapSearchScopedServices init] */

void FUN_103379578(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("MapSearchScopedFactoryServiceProvider.SCMapSearchScopedServices",0x3f,
                      "init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1033795a4);
  (*pcVar1)();
}



/* Entry: 1033795d8; end: 1033795e7; -[_TtC37MapSearchScopedFactoryServiceProvider25SCMapSearchScopedServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033795d8(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112f5e850));
  return;
}



/* Entry: 1033795e8; end: 103379653;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1033795e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &UNK_110646940;
  func_0x000107c613fc(&UNK_110646940,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  func_0x000107c6157c(param_2);
  func_0x000103dc513c(FUN_10337992c,puVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 103379654; end: 1033796ef;  */

void FUN_103379654(undefined8 *param_1)

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
  *(undefined ***)(lStack_48 + 0x18) = &PTR_DAT_110646850;
  uVar1 = auStack_60[0];
  func_0x000107c61174();
  func_0x000107c61574(lStack_48);
  func_0x000107c615e8(uVar2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110646850;
  return;
}



/* Entry: 1033796f0; end: 103379727;  */

void FUN_1033796f0(long *param_1)

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



/* Entry: 103379728; end: 10337972f;  */

undefined8 FUN_103379728(void)

{
  return 0x1b;
}



/* Entry: 103379730; end: 103379863;  */

void FUN_103379730(undefined8 *param_1)

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
  puVar1 = &UNK_110646968;
  func_0x000107c613fc(&UNK_110646968,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar2;
  uVar2 = 0;
  func_0x00010058fa44(0);
  func_0x000107c613fc();
  pcVar3 = FUN_103379904;
  func_0x00010058fa64(FUN_103379904,puVar1,uVar2);
  *param_1 = pcVar3;
  param_1[1] = &PTR_DAT_110782078;
  return;
}



/* Entry: 103379864; end: 103379893;  */

undefined ** FUN_103379864(void)

{
  return &PTR_DAT_113066d48;
}



/* Entry: 103379894; end: 1033798b3;  */

void FUN_103379894(void)

{
  func_0x000107c61168(&PTR_PTR_1128d21d8);
  return;
}



/* Entry: 1033798b4; end: 103379903;  */

undefined1  [16] FUN_1033798b4(void)

{
  return ZEXT816(0x1106468a0);
}



/* Entry: 103379904; end: 10337992b;  */

void FUN_103379904(void)

{
  func_0x00010058fc80(0,0);
  return;
}



/* Entry: 10337992c; end: 10337993f;  */

void FUN_10337992c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 103379940; end: 103379ca7;  */

void FUN_103379940(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5e8c8,&UNK_10dbb90e0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10337abbc();
  func_0x000100082720("SCSearchBaseScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10337ac48();
  func_0x000100082720("SCSearchBaseScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1033796f0;
  func_0x0001000823a8(FUN_1033796f0,0);
  func_0x000100082720("SCMapSearchScopedServicesCleanupRelayServiceProvider",0x34,2);
  puVar5 = puVar2;
  FUN_10337aa70();
  func_0x000100082720("MapSearchScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112f5e8d0,&UNK_10dbb90f0);
  puVar6 = &UNK_1106469c8;
  func_0x000107c613fc(&UNK_1106469c8,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = param_3;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103379cb0;
  func_0x0001000823a8(0x103379cb0,puVar6);
  func_0x000100082720("SCMapSearchEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112f5e8d8,&UNK_10dbb90f8);
  puVar6 = &UNK_1106469f0;
  func_0x000107c613fc(&UNK_1106469f0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x103379cbc;
  func_0x0001000823a8(0x103379cbc,puVar6);
  func_0x000100082720("SCMapSearchScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f5e858,&UNK_10dbb8eb0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103379cc8;
  func_0x0001000823a8(0x103379cc8,uVar7);
  func_0x000100082720("SCMapSearchScopeInitializationServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f5e848,&UNK_10dbb8ea0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103379cd0;
  func_0x0001000823a8(0x103379cd0,uVar8);
  func_0x000100082720("SCMapSearchScopedServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110646a18;
  func_0x000107c613fc(&UNK_110646a18,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x103379cd8;
  func_0x0001000823a8(0x103379cd8,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMapSearchScopeEntryPointProvider",0x22,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103379ca8; end: 103379cdf;  */

void FUN_103379ca8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 unaff_x20;
  undefined8 uStack_68;
  
  uVar10 = *param_2;
  func_0x0001000285a8(0x112f5e8c8,&UNK_10dbb90e0);
  puVar1 = &uStack_68;
  uStack_68 = uVar10;
  func_0x0001000838ec();
  puVar2 = puVar1;
  FUN_10337abbc();
  func_0x000100082720("SCSearchBaseScopeExposerSubjectServiceProvider",0x2e,2);
  puVar3 = puVar2;
  FUN_10337ac48();
  func_0x000100082720("SCSearchBaseScopeExposerObservableServiceProvider",0x31,2);
  func_0x0001000285a8(0x112d9d248,&UNK_10d93da60);
  pcVar4 = FUN_1033796f0;
  func_0x0001000823a8(FUN_1033796f0,0);
  func_0x000100082720("SCMapSearchScopedServicesCleanupRelayServiceProvider",0x34,2);
  puVar5 = puVar2;
  FUN_10337aa70();
  func_0x000100082720("MapSearchScopeGraphBridgeServicesServiceProvider",0x30,2);
  func_0x0001000285a8(0x112f5e8d0,&UNK_10dbb90f0);
  puVar6 = &UNK_1106469c8;
  func_0x000107c613fc(&UNK_1106469c8,0x28,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 *)(puVar6 + 0x18) = unaff_x20;
  *(undefined8 **)(puVar6 + 0x20) = puVar3;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c();
  func_0x000107c6157c(puVar3);
  uVar10 = 0x103379cb0;
  func_0x0001000823a8(0x103379cb0,puVar6);
  func_0x000100082720("SCMapSearchEntryPointWrapperServiceProvider",0x2b,2);
  func_0x0001000285a8(0x112f5e8d8,&UNK_10dbb90f8);
  puVar6 = &UNK_1106469f0;
  func_0x000107c613fc(&UNK_1106469f0,0x30,7);
  *(undefined8 **)(puVar6 + 0x10) = puVar1;
  *(undefined8 **)(puVar6 + 0x18) = puVar5;
  *(undefined8 *)(puVar6 + 0x20) = uVar10;
  *(code **)(puVar6 + 0x28) = pcVar4;
  func_0x000107c6157c(puVar1);
  func_0x000107c6157c(puVar5);
  func_0x000107c6157c(uVar10);
  func_0x000107c6157c(pcVar4);
  uVar7 = 0x103379cbc;
  func_0x0001000823a8(0x103379cbc,puVar6);
  func_0x000100082720("SCMapSearchScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  func_0x0001000285a8(0x112f5e858,&UNK_10dbb8eb0);
  func_0x000107c6157c(uVar7);
  uVar8 = 0x103379cc8;
  func_0x0001000823a8(0x103379cc8,uVar7);
  func_0x000100082720("SCMapSearchScopeInitializationServiceProvider",0x2d,2);
  func_0x0001000285a8(0x112f5e848,&UNK_10dbb8ea0);
  func_0x000107c6157c(uVar8);
  uVar9 = 0x103379cd0;
  func_0x0001000823a8(0x103379cd0,uVar8);
  func_0x000100082720("SCMapSearchScopedServicesServiceProvider",0x28,2);
  func_0x0001000285a8(0x112daa5d8,&UNK_10d952e70);
  puVar6 = &UNK_110646a18;
  func_0x000107c613fc(&UNK_110646a18,0x20,7);
  *(undefined8 *)(puVar6 + 0x10) = uVar9;
  *(code **)(puVar6 + 0x18) = pcVar4;
  func_0x000107c6157c(pcVar4);
  uVar9 = 0x103379cd8;
  func_0x0001000823a8(0x103379cd8,puVar6);
  func_0x000107c61574(puVar1);
  func_0x000107c61574(puVar2);
  func_0x000107c61574(puVar3);
  func_0x000107c61574(pcVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c61574(uVar10);
  func_0x000107c61574(uVar7);
  func_0x000107c61574(uVar8);
  func_0x000100082720("SCMapSearchScopeEntryPointProvider",0x22,2);
  *param_1 = uVar9;
  return;
}



/* Entry: 103379ce0; end: 103379d8f;  */

void FUN_103379ce0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  func_0x000100083b20(&uStack_48);
  func_0x000100083b20(&uStack_50);
  func_0x000100083b20(&uStack_58);
  FUN_10337a128();
  func_0x000107c613fc();
  uVar1 = uStack_48;
  FUN_103379f24(uStack_48,uStack_50,uStack_58);
  func_0x000107c61170(uStack_48);
  func_0x000107c61170(uStack_50);
  func_0x000107c61574(uStack_58);
  *param_1 = uVar1;
  return;
}



/* Entry: 103379d90; end: 103379dff;  */

undefined8 FUN_103379d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  func_0x000107c613fc();
  uVar1 = param_1;
  FUN_103379f24(param_1,param_2,param_3);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_2);
  func_0x000107c61574(param_3);
  return uVar1;
}



/* Entry: 103379e00; end: 103379e33;  */

void FUN_103379e00(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 103379e34; end: 103379e3b;  */

undefined8 FUN_103379e34(void)

{
  return 0x1b;
}



/* Entry: 103379e3c; end: 103379ebf;  */

void FUN_103379e3c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  func_0x0001005d86a0(0);
  func_0x000107c613fc();
  func_0x000107c61580(param_2,3);
  uVar1 = 0;
  func_0x0001005d8744(0,0x10337a168,param_2,FUN_10337a16c,param_2,FUN_10337a194,param_2);
  *param_1 = uVar1;
  param_1[1] = &PTR_DAT_110711948;
  return;
}



/* Entry: 103379ec0; end: 103379f0f;  */

undefined8 FUN_103379ec0(void)

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



/* Entry: 103379f10; end: 103379f23;  */

void FUN_103379f10(long param_1,undefined8 param_2,undefined8 param_3)

{
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined ***)(param_1 + 0x20) = &PTR_DAT_110646a30;
  return;
}



/* Entry: 103379f24; end: 10337a10b;  */

void FUN_103379f24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  func_0x0001000285a8(0x112f5e9b8,&UNK_10dbb9210);
  func_0x000107c610f8();
  func_0x000107c61174(param_2);
  func_0x000107c6157c(param_3);
  func_0x00010017da58();
  puVar1 = PTR_PTR_1126a73e0;
  func_0x000107c610f8();
  func_0x000107c4907c();
  func_0x000107c61170(param_3);
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  puVar1 = PTR_PTR_1126ad190;
  func_0x000107c610f8();
  func_0x000107c453e4();
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  func_0x000107c61174();
  func_0x000107c61174(param_1);
  uVar2 = 0x637261655370616d;
  func_0x000107c5fadc(0x637261655370616d,0xee0065706f635368);
  func_0x000107c5a49c(puVar1);
  func_0x000107c61170(puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  func_0x000107c61174(param_2);
  func_0x000107c61174(uVar2);
  uVar3 = 0xd000000000000017;
  func_0x000107c5fadc(0xd000000000000017,0x800000010f143b30);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(param_2);
  func_0x000107c61170(uVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  func_0x000107c61174(uVar2);
  func_0x000107c61174(uVar3);
  uVar4 = 0xd000000000000016;
  func_0x000107c5fadc(0xd000000000000016,0x800000010f143b50);
  func_0x000107c5a49c(uVar2);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  func_0x000107c61170(uVar4);
  func_0x000107c3e740(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Entry: 10337a10c; end: 10337a127;  */

undefined ** FUN_10337a10c(void)

{
  return &PTR_DAT_113066d48;
}



/* Entry: 10337a128; end: 10337a147;  */

void FUN_10337a128(void)

{
  func_0x000107c61168(&PTR_PTR_112f5e948);
  return;
}



/* Entry: 10337a148; end: 10337a16b;  */

undefined1  [16] FUN_10337a148(void)

{
  return ZEXT816(0x110646a70);
}



/* Entry: 10337a16c; end: 10337a193;  */

void FUN_10337a16c(void)

{
  undefined8 uStack_18;
  
  func_0x000100083b20(&uStack_18);
  func_0x000107c61574(uStack_18);
  return;
}



/* Entry: 10337a194; end: 10337a19b;  */

undefined8 FUN_10337a194(void)

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



/* Entry: 10337a19c; end: 10337a1d7;  */

void FUN_10337a19c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10337a1d8();
  func_0x0001000a7f38("SCMapSearchScopeInitializationPluginRegistryServiceProvider",0x3b,2);
  *param_1 = param_2;
  return;
}



/* Entry: 10337a1d8; end: 10337a3c3;  */

void FUN_10337a1d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined **ppuVar4;
  undefined8 uVar5;
  
  puVar1 = &UNK_11074d898;
  ppuVar4 = &PTR_DAT_113066d48;
  uVar5 = param_3;
  func_0x0001000a3aa4();
  puVar2 = &UNK_110646ac0;
  func_0x000107c613fc(&UNK_110646ac0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  uVar3 = 0x112f5e9c0;
  func_0x0001000285a8(0x112f5e9c0,&UNK_10dbb9218);
  func_0x0001000a6ee8(&UNK_110646d10,"MapSearchScopeGraphBridgeScopeInitializationPluginKey",0x35,2,
                      FUN_10337a3c4,puVar2,uVar3,&UNK_110646d10,&PTR_DAT_112f5ea58);
  func_0x000107c61574(puVar2);
  func_0x000107c6157c(param_3);
  func_0x0001000a6ee8(&UNK_110646a70,"SCMapSearchEntryPointWrapperScopeInitializationPluginKey",0x38
                      ,2,FUN_10337a478,param_3,uVar3,&UNK_110646a70,&PTR_DAT_112f5e8e0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_110646ae8;
  func_0x000107c613fc(&UNK_110646ae8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_4);
  func_0x0001000a6ee8(&UNK_1106468e0,"SCMapSearchScopedServicesScopeInitializationPluginKey",0x35,2,
                      FUN_10337a528,puVar2,uVar3,&UNK_1106468e0,&PTR_DAT_112f5e860);
  func_0x000107c61574(puVar2);
  uVar3 = 0x112f5e9c8;
  func_0x0001000285a8(0x112f5e9c8,&UNK_10dbb9220);
  func_0x000107c613fc();
  func_0x0001000a7f1c(puVar1,ppuVar4,uVar5,uVar3);
  return;
}


