/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 103226df4; end: 103226e1b;  */

void FUN_103226df4(void)

{
  func_0x000100d3dd44();
  return;
}



/* Entry: 103226e1c; end: 103226e23;  */

undefined8 * FUN_103226e1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  func_0x000107c61434();
  return param_1;
}



/* Entry: 103226e24; end: 103226fb3;  */

void FUN_103226e24(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  puVar1 = &UNK_1106286d8;
  func_0x000107c613fc(&UNK_1106286d8,0x18,7);
  func_0x000107c61614(puVar1 + 0x10);
  puVar2 = &UNK_110628700;
  func_0x000107c613fc(&UNK_110628700,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  uVar3 = 0x112f4d758;
  func_0x0001000285a8(0x112f4d758,&UNK_10db9fae8);
  func_0x000107c613fc();
  func_0x0001000b64ac(FUN_103226fb4,puVar2,uVar3);
  return;
}



/* Entry: 103226fb4; end: 103226fbb;  */

void FUN_103226fb4(undefined8 param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined *puStack_78;
  undefined8 uStack_70;
  code *pcStack_68;
  undefined *puStack_60;
  code *pcStack_58;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0x18);
  func_0x000107c61428(lVar2 + 0x10,auStack_48,0,0);
  lVar2 = lVar2 + 0x10;
  func_0x000107c61618();
  if (lVar2 != 0) {
    pcStack_58 = FUN_103226fbc;
    puStack_78 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_70 = 0x42000000;
    pcStack_68 = FUN_103226fe0;
    puStack_60 = &UNK_110628718;
    ppuVar3 = &puStack_78;
    uStack_50 = param_1;
    func_0x000107c60bc4(ppuVar3);
    uVar1 = uStack_50;
    func_0x000107c6157c(param_1);
    func_0x000107c61574(uVar1);
    func_0x000107c52f78(lVar2);
    func_0x000107c60bd0(ppuVar3);
    func_0x000107c615e8(lVar2);
  }
  func_0x0001000b6d30(0);
  func_0x000107c613fc();
  func_0x0001000b6d50(0,0);
  return;
}



/* Entry: 103226fbc; end: 103226fdf;  */

void FUN_103226fbc(undefined8 param_1,undefined1 param_2)

{
  undefined1 uStack_11;
  
  uStack_11 = param_2;
  func_0x000100087f6c(&uStack_11);
  return;
}



/* Entry: 103226fe0; end: 103227027;  */

void FUN_103226fe0(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 103227028; end: 103227043;  */

void FUN_103227028(long param_1,long param_2)

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



/* Entry: 103227044; end: 1032271db;  */

undefined1  [16] FUN_103227044(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffee;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f131670);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131600);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x103227110);
  (*pcVar1)();
}



/* Entry: 1032271dc; end: 10322721f;  */

undefined1  [16] FUN_1032271dc(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x7463615f65726f6d;
  func_0x000107c5fadc(0x7463615f65726f6d,0xec000000736e6f69);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131600);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032274b0);
  (*pcVar1)();
}



/* Entry: 103227220; end: 1032273b7;  */

undefined1  [16] FUN_103227220(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f131630);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131600);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032272ec);
  (*pcVar1)();
}



/* Entry: 1032273b8; end: 1032273ff;  */

undefined1  [16] FUN_1032273b8(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = 0x5f79625f676e6f73;
  func_0x000107c5fadc(0x5f79625f676e6f73,0xee00747369747261);
  uVar3 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131600);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032274b0);
  (*pcVar1)();
}



/* Entry: 103227400; end: 1032274af;  */

undefined1  [16] FUN_103227400(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  func_0x000107c5fadc();
  uVar2 = 0xd000000000000025;
  func_0x000107c5fadc(0xd000000000000025,0x800000010f131600);
  uVar3 = 0;
  func_0x000107c5fe40(0);
  lVar4 = param_1;
  uVar6 = uVar2;
  func_0x0001000f6108(param_1,uVar2,uVar3);
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  func_0x000107c61170(uVar2);
  func_0x000107c61170(uVar3);
  if (lVar4 != 0) {
    lVar5 = lVar4;
    func_0x000107c5faec(lVar4);
    func_0x000107c61170(lVar4);
    auVar7._8_8_ = uVar6;
    auVar7._0_8_ = lVar5;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1032274b0);
  (*pcVar1)();
}



/* Entry: 1032274b0; end: 1032274bf;  */

void FUN_1032274b0(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 1032274c0; end: 1032274df;  */

void FUN_1032274c0(void)

{
  func_0x000107c61168(&PTR_PTR_112f4d7a0);
  return;
}



/* Entry: 1032274e0; end: 1032276af;  */

void FUN_1032274e0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  
  FUN_1032274c0();
  func_0x000107c614e8();
  puVar1 = PTR__OBJC_CLASS___NSBundle_1126aea78;
  func_0x000107c61168(PTR__OBJC_CLASS___NSBundle_1126aea78);
  func_0x000107c3ee00();
  func_0x000107c61180();
  uVar2 = 0xd000000000000012;
  func_0x000107c5fadc(0xd000000000000012,0x800000010f1316b0);
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
  puRam0000000113807140 = puVar3;
  return;
}



/* Entry: 1032276b0; end: 10322797b;  */

void FUN_1032276b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4d808,&UNK_10db9fb30);
  puVar1 = &UNK_1106287f8;
  func_0x000107c613fc(&UNK_1106287f8,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  *(undefined8 *)(puVar1 + 0x30) = param_5;
  *(undefined8 *)(puVar1 + 0x38) = param_6;
  *(undefined8 *)(puVar1 + 0x40) = param_7;
  *(undefined8 *)(puVar1 + 0x48) = param_8;
  *(undefined8 *)(puVar1 + 0x50) = param_9;
  *(undefined8 *)(puVar1 + 0x58) = param_10;
  *(undefined8 *)(puVar1 + 0x60) = param_11;
  *(undefined8 *)(puVar1 + 0x68) = param_12;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_14;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
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
  func_0x0001000823a8(FUN_10322797c,puVar1);
  return;
}



/* Entry: 10322797c; end: 103227997;  */

void FUN_10322797c(void)

{
  long unaff_x20;
  
  (*(code *)0x1032277fc)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103227998; end: 103227b3b;  */

void FUN_103227998(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15,undefined8 param_16)

{
  undefined *puVar1;
  code *pcVar2;
  code *pcVar3;
  
  func_0x0001000285a8(0x112f4d818,&UNK_10db9fbc8);
  puVar1 = &UNK_110628868;
  func_0x000107c613fc(&UNK_110628868,0x80,7);
  *(undefined8 *)(puVar1 + 0x10) = param_10;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_9;
  *(undefined8 *)(puVar1 + 0x30) = param_6;
  *(undefined8 *)(puVar1 + 0x38) = param_5;
  *(undefined8 *)(puVar1 + 0x40) = param_8;
  *(undefined8 *)(puVar1 + 0x48) = param_16;
  *(undefined8 *)(puVar1 + 0x50) = param_14;
  *(undefined8 *)(puVar1 + 0x58) = param_11;
  *(undefined8 *)(puVar1 + 0x60) = param_15;
  *(undefined8 *)(puVar1 + 0x68) = param_3;
  *(undefined8 *)(puVar1 + 0x70) = param_13;
  *(undefined8 *)(puVar1 + 0x78) = param_12;
  func_0x000107c6157c(param_10);
  func_0x000107c6157c(param_4);
  func_0x000107c6157c(param_7);
  func_0x000107c6157c(param_9);
  func_0x000107c6157c(param_6);
  func_0x000107c6157c(param_5);
  func_0x000107c6157c(param_8);
  func_0x000107c6157c(param_16);
  func_0x000107c6157c(param_14);
  func_0x000107c6157c(param_11);
  func_0x000107c6157c(param_15);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_13);
  func_0x000107c6157c(param_12);
  pcVar2 = FUN_103227c10;
  func_0x0001000823a8(FUN_103227c10,puVar1);
  func_0x000100082720("SCContextActionItemsRendererPlugInRegistryServiceProvider",0x39,2);
  pcVar3 = pcVar2;
  func_0x000103260814();
  func_0x000107c61574(pcVar2);
  func_0x000100082720("SCContextActionItemsRendererPlugInSaberServiceEntryPointProvider",0x40,2);
  *param_1 = pcVar3;
  return;
}



/* Entry: 103227b3c; end: 103227c0f;  */

void FUN_103227b3c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103227998(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103227c10; end: 103227c1b;  */

void FUN_103227c10(void)

{
  long unaff_x20;
  
  FUN_103227c5c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103227c1c; end: 103227c5b;  */

void FUN_103227c1c(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
             *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
             *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
             *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103227c5c; end: 103227ddb;  */

/* WARNING: Possible PIC construction at 0x000103227d54: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103227d64: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103227d74: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103227d84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103227d94: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103227da4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x000103227db4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x000103227da8) */
/* WARNING: Removing unreachable block (ram,0x000103227d98) */
/* WARNING: Removing unreachable block (ram,0x000103227d88) */
/* WARNING: Removing unreachable block (ram,0x000103227d78) */
/* WARNING: Removing unreachable block (ram,0x000103227d68) */
/* WARNING: Removing unreachable block (ram,0x000103227d58) */
/* WARNING: Removing unreachable block (ram,0x000103227db8) */

void FUN_103227c5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,undefined8 param_15)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  puVar1 = &UNK_110628890;
  func_0x000107c613fc(&UNK_110628890,0x80,7);
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
  *(undefined8 *)(puVar1 + 0x70) = param_14;
  *(undefined8 *)(puVar1 + 0x78) = param_15;
  uVar2 = 0x112f4d820;
  func_0x0001000285a8(0x112f4d820,&UNK_10db9fbe0);
  func_0x000107c613fc();
  pcVar3 = FUN_103227fa4;
  func_0x0001000841fc(FUN_103227fa4,puVar1,uVar2);
  func_0x000100084214("SCContextActionItemsRendererPlugInRegistryServiceProvider",0x39,2);
  *param_1 = pcVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(param_2);
  return;
}



/* Entry: 103227ddc; end: 103227fa3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103227ddc(char *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  byte *param_5,char *param_6,char *param_7,char *param_8,char *param_9,
                  char *param_10,char *param_11,char *param_12,char *param_13,char *param_14,
                  undefined8 *param_15,undefined8 param_16,long param_17,undefined8 param_18,
                  undefined8 param_19,undefined8 param_20,undefined8 param_21,undefined8 param_22,
                  undefined8 param_23,undefined8 param_24,undefined8 param_25,undefined8 param_26,
                  undefined8 param_27)

{
  uint uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  undefined8 *puVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  char *pcVar15;
  char *pcVar16;
  undefined *puVar17;
  undefined8 uVar19;
  char *pcVar20;
  char *pcVar21;
  char *unaff_x20;
  char *unaff_x21;
  char *unaff_x22;
  uint unaff_w24;
  char *unaff_x25;
  undefined8 unaff_x26;
  long unaff_x27;
  long unaff_x28;
  long unaff_x30;
  undefined8 in_register_00005008;
  undefined8 in_register_00005028;
  undefined8 in_register_00005048;
  undefined8 unaff_d8;
  undefined1 auStack_70 [16];
  undefined8 uVar18;
  
  puVar3 = &stack0xffffffffffffffe0;
  puVar12 = &stack0xffffffffffffffe0;
  pcVar15 = (char *)(ulong)(byte)(&UNK_10db9fbd0)[*param_5];
  puVar13 = &stack0xffffffffffffffe0;
  puVar4 = &stack0xffffffffffffffe0;
  puVar5 = &stack0xffffffffffffffe0;
  puVar6 = &stack0xffffffffffffffe0;
  puVar7 = &stack0xffffffffffffffe0;
  puVar8 = &stack0xffffffffffffffe0;
  puVar9 = &stack0xffffffffffffffe0;
  puVar10 = &stack0xffffffffffffffe0;
  puVar11 = (undefined8 *)&stack0xffffffffffffffe0;
  pcVar16 = pcVar15;
  pcVar20 = param_6;
  pcVar21 = param_14;
  switch(*param_5) {
  default:
    FUN_10323a15c(param_6,param_7);
    pcVar16 = "ArAdTryOnActionBarRendererPluginProvider";
    pcVar20 = (char *)0x28;
    break;
  case 1:
    FUN_103234104(param_6,param_8,param_9,param_10,param_11,param_12,param_13,param_14);
    pcVar15 = "Chat_Context_Postsave";
    unaff_x20 = param_6;
  case 0x1f:
    pcVar16 = pcVar15 + 0x920;
    pcVar20 = (char *)0x24;
  case 0x40:
  case 0x67:
  case 0xc0:
  case 0xe0:
    param_6 = unaff_x20;
    break;
  case 2:
    pcVar15 = param_6;
    param_6 = param_8;
    param_7 = param_9;
    param_8 = param_10;
  case 0x98:
    param_9 = param_11;
    param_10 = param_12;
  case 0xa0:
    param_11 = param_13;
    param_12 = param_14;
  case 0x14:
    FUN_1032340c8(pcVar15,param_6,param_7,param_8,param_9,param_10,param_11,param_12);
    pcVar16 = "ComposerVerticalActionsRendererPluginProvider";
    pcVar20 = (char *)0x2d;
    param_6 = pcVar15;
    break;
  case 3:
    FUN_1032308ec(param_6,param_9,param_10,param_14);
    pcVar16 = "ContextVerticalActionsRendererPluginProvider";
    pcVar20 = (char *)0x2c;
    break;
  case 4:
    FUN_10323d708();
    pcVar15 = "MemoriesActionBarRendererPluginProvider";
    unaff_x20 = param_6;
  case 0x90:
    pcVar20 = (char *)0x27;
    pcVar16 = pcVar15;
  case 0xa4:
    param_6 = unaff_x20;
    break;
  case 5:
  case 0x46:
  case 0x6d:
  case 0xc6:
  case 0xe6:
    pcVar15 = param_6;
  case 0x31:
  case 0x32:
  case 0xb1:
  case 0xb2:
    FUN_103240450(pcVar15,param_15,param_16,param_17,param_18);
    pcVar16 = "OperaTopLevelCardsRendererPluginProvider";
    pcVar20 = (char *)0x28;
    param_6 = pcVar15;
    break;
  case 6:
    FUN_103243548();
    pcVar15 = param_14;
  case 0xf6:
    unaff_x20 = pcVar15;
  case 0x51:
  case 0x78:
  case 0x7e:
    pcVar15 = "PromotedCTAActionItemRendererPluginProvider";
  case 0x49:
  case 0x70:
  case 0xc9:
  case 0xe9:
    pcVar20 = (char *)0x2b;
    pcVar16 = pcVar15;
  case 0x30:
  case 0xb0:
    param_6 = unaff_x20;
    break;
  case 7:
    func_0x0001032460e8();
    pcVar16 = "RepostedStoryActionItemRendererPluginProvider";
    pcVar20 = (char *)0x2d;
    param_6 = pcVar15;
    break;
  case 8:
    pcVar15 = param_6;
  case 0x39:
  case 0x60:
  case 0xb9:
    FUN_103227fec(pcVar15,param_19,param_10,param_9);
    pcVar16 = "UnifiedActionBarRendererPluginProvider";
    pcVar20 = (char *)0x26;
    param_6 = pcVar15;
    break;
  case 9:
    pcVar15 = param_14;
  case 0x24:
    func_0x00010324616c();
    pcVar16 = "WatchSpotlightActionItemRendererPluginProvider";
    pcVar20 = (char *)0x2e;
    param_6 = pcVar15;
    break;
  case 0x11:
  case 0x21:
  case 0xa1:
    goto code_r0x0001032281f0;
  case 0x12:
  case 0x22:
  case 0xa2:
    goto code_r0x00010322818c;
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    func_0x000107c5b180();
  case 0x18:
    unaff_x25 = pcVar15;
    param_14 = param_1;
    if (unaff_w24 == 0) {
      uVar14 = 0;
    }
    else {
      func_0x000100083b20(&param_17);
      lVar2 = param_17;
      unaff_x26 = *(undefined8 *)(param_17 + _DAT_113043d30);
      func_0x000107c6157c(unaff_x26);
      func_0x000107c61170(lVar2);
      pcVar21 = (char *)&param_16;
code_r0x00010322818c:
      func_0x0001000d224c(pcVar21);
      func_0x000107c61574(unaff_x26);
      uVar19 = param_16;
      uVar18 = param_16;
      func_0x000107c426d0();
      uVar14 = (uint)uVar18;
      func_0x000107c615e8(uVar19);
    }
    unaff_d8 = *(undefined8 *)(unaff_x21 + _DAT_113077968);
    uVar1 = 0;
    if (unaff_x28 != 0) {
      uVar1 = uVar14 | unaff_w24 ^ 1;
    }
    unaff_x30 = (ulong)uVar1 << 0x20;
    pcVar15 = *(char **)(unaff_x21 + unaff_x27);
code_r0x0001032281f0:
    func_0x000107c4ab80();
    func_0x000100083b20(&param_17);
    lVar2 = param_17;
    uVar19 = *(undefined8 *)(param_17 + _DAT_1130190c8);
    func_0x000107c61174();
    func_0x000107c61170(lVar2);
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(uVar19);
    func_0x000107c5def0();
    FUN_10322ee44(&param_17,unaff_d8,0x3fcccccccccccccd,0,(uint)((ulong)unaff_x30 >> 0x20) & 1,
                  pcVar15,0x403e000000000000,0x404e000000000000,0,
                  (uint)(unaff_x25 < (char *)0x5) & 0x1aU >> (ulong)((uint)unaff_x25 & 0x1f),
                  unaff_x25 == (char *)0x2);
    param_15[3] = &UNK_110628f30;
    param_15[4] = &PTR_DAT_112f4dab8;
    puVar17 = &UNK_1106289a8;
    func_0x000107c613fc(&UNK_1106289a8,0x68,7);
    *param_15 = puVar17;
    func_0x000107c615e8(param_14);
    func_0x000107c61170();
    *(undefined8 *)(puVar17 + 0x38) = param_22;
    *(undefined8 *)(puVar17 + 0x30) = param_21;
    *(undefined8 *)(puVar17 + 0x48) = param_24;
    *(undefined8 *)(puVar17 + 0x40) = param_23;
    *(undefined8 *)(puVar17 + 0x58) = param_26;
    *(undefined8 *)(puVar17 + 0x50) = param_25;
    *(undefined8 *)(puVar17 + 0x60) = param_27;
    *(undefined8 *)(puVar17 + 0x18) = param_18;
    *(long *)(puVar17 + 0x10) = param_17;
    *(undefined8 *)(puVar17 + 0x28) = param_20;
    *(undefined8 *)(puVar17 + 0x20) = param_19;
    return;
  case 0x35:
  case 0x38:
  case 0x42:
  case 0x69:
  case 0xb5:
  case 0xb8:
  case 0xc2:
  case 0xe2:
  case 0xf8:
    return;
  case 0x41:
  case 0x68:
  case 0xc1:
  case 0xe1:
    puVar3 = auStack_70;
  case 0x3f:
  case 0x4c:
  case 0x56:
  case 0x66:
  case 0x73:
  case 0x83:
  case 0xbf:
  case 0xcc:
  case 0xec:
    *(undefined1 **)(puVar3 + 0x40) = &stack0xfffffffffffffff0;
    *(long *)(puVar3 + 0x48) = unaff_x30;
    puVar4 = puVar3;
  case 0x36:
  case 0x3e:
  case 0x4a:
  case 0x4d:
  case 0x4f:
  case 0x57:
  case 0x65:
  case 0x71:
  case 0x74:
  case 0x76:
  case 0x84:
  case 0xb6:
  case 0xbe:
  case 0xca:
  case 0xcd:
  case 0xcf:
  case 0xea:
  case 0xed:
  case 0xef:
    puVar5 = puVar4;
  case 0x3c:
  case 99:
  case 0xbc:
    puVar6 = puVar5;
  case 0x7b:
    puVar7 = puVar6;
  case 0x3b:
  case 0x3d:
  case 0x43:
  case 0x55:
  case 0x62:
  case 100:
  case 0x6a:
  case 0x7c:
  case 0x82:
  case 0xbb:
  case 0xbd:
  case 0xc3:
  case 0xe3:
  case 0xf9:
    in_register_00005008 = *(undefined8 *)(unaff_x20 + 0x50);
    param_2 = *(undefined8 *)(unaff_x20 + 0x48);
    in_register_00005028 = *(undefined8 *)(unaff_x20 + 0x60);
    param_3 = *(undefined8 *)(unaff_x20 + 0x58);
    puVar8 = puVar7;
  case 0x79:
    in_register_00005048 = *(undefined8 *)(unaff_x20 + 0x70);
    param_4 = *(undefined8 *)(unaff_x20 + 0x68);
    param_13 = *(char **)(unaff_x20 + 0x78);
    puVar9 = puVar8;
  case 0x10:
  case 0x34:
  case 0x3a:
  case 0x45:
  case 0x4b:
  case 0x61:
  case 0x6c:
  case 0x72:
  case 0x7d:
  case 0xb4:
  case 0xba:
  case 0xc5:
  case 0xcb:
  case 0xe5:
  case 0xeb:
  case 0xfb:
    *(char **)(puVar9 + 0x30) = param_13;
    puVar10 = puVar9;
  case 0x33:
  case 0x44:
  case 0x53:
  case 0x6b:
  case 0x80:
  case 0xb3:
  case 0xc4:
  case 0xe4:
  case 0xfa:
    *(undefined8 *)(puVar10 + 0x18) = in_register_00005028;
    *(undefined8 *)(puVar10 + 0x10) = param_3;
    *(undefined8 *)(puVar10 + 0x28) = in_register_00005048;
    *(undefined8 *)(puVar10 + 0x20) = param_4;
    puVar11 = (undefined8 *)puVar10;
  case 0xf7:
    puVar11[1] = in_register_00005008;
    *puVar11 = param_2;
    FUN_103227ddc();
    return;
  case 0x47:
  case 0x6e:
  case 199:
  case 0xe7:
    goto code_r0x000103227f9c;
  case 0x48:
  case 0x4e:
  case 0x50:
  case 0x52:
  case 0x58:
  case 0x6f:
  case 0x75:
  case 0x77:
  case 0x7f:
  case 0x85:
  case 200:
  case 0xce:
  case 0xd0:
  case 0xe8:
  case 0xee:
  case 0xf0:
    return;
  case 0x7a:
    puVar12 = &stack0xffffffffffffffa0;
  case 0x54:
  case 0x81:
    *(char **)(puVar12 + 0x10) = unaff_x22;
    *(char **)(puVar12 + 0x18) = unaff_x21;
    *(char **)(puVar12 + 0x20) = unaff_x20;
    *(char **)(puVar12 + 0x28) = param_1;
    puVar13 = puVar12;
  case 0x37:
  case 0xb7:
    *(undefined1 **)(puVar13 + 0x30) = &stack0xfffffffffffffff0;
    *(long *)(puVar13 + 0x38) = unaff_x30;
    param_1 = param_8;
    unaff_x20 = param_7;
    unaff_x21 = param_6;
    unaff_x22 = pcVar15;
  case 0x20:
    func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
    puVar17 = &UNK_110628960;
    func_0x000107c613fc(&UNK_110628960,0x30,7);
    *(char **)(puVar17 + 0x10) = unaff_x22;
    *(char **)(puVar17 + 0x18) = unaff_x21;
    *(char **)(puVar17 + 0x20) = unaff_x20;
    *(char **)(puVar17 + 0x28) = param_1;
    func_0x000107c6157c(unaff_x22);
    func_0x000107c6157c(unaff_x21);
    func_0x000107c6157c(unaff_x20);
    func_0x000107c6157c(param_1);
    func_0x0001000823a8(FUN_103228090,puVar17);
    return;
  }
  func_0x000100082720(pcVar16,pcVar20,2);
  *(char **)param_1 = param_6;
code_r0x000103227f9c:
  return;
}



/* Entry: 103227fa4; end: 103227feb;  */

void FUN_103227fa4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_103227ddc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60),*(undefined8 *)(unaff_x20 + 0x68),
                *(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 103227fec; end: 10322808f;  */

void FUN_103227fec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  func_0x0001000285a8(0x112f4d828,&UNK_10db9fbf0);
  puVar1 = &UNK_110628960;
  func_0x000107c613fc(&UNK_110628960,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  *(undefined8 *)(puVar1 + 0x28) = param_4;
  func_0x000107c6157c(param_1);
  func_0x000107c6157c(param_2);
  func_0x000107c6157c(param_3);
  func_0x000107c6157c(param_4);
  func_0x0001000823a8(FUN_103228090,puVar1);
  return;
}



/* Entry: 103228090; end: 103228357;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103228090(undefined8 *param_1)

{
  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uStack_d8;
  ulong uStack_d0;
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
  
  func_0x000100083b20(&uStack_d0);
  uVar3 = uStack_d0;
  lVar2 = _DAT_1130778f0;
  uVar5 = (uint)*(undefined8 *)(uStack_d0 + _DAT_1130778f0);
  func_0x000108437a30();
  lVar13 = *(long *)(uVar3 + _DAT_113077928);
  func_0x000100083b20(&uStack_d0);
  uVar7 = uStack_d0;
  uVar11 = uStack_d0;
  func_0x000107c4cdb8();
  func_0x000107c61180();
  func_0x000107c61170(uVar7);
  uVar7 = uVar11;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar11);
  if (uVar7 == 0) {
    uVar11 = 0;
  }
  else {
    uVar11 = uVar7;
    func_0x000107c5b180();
  }
  if (uVar5 == 0) {
    uVar6 = 0;
  }
  else {
    func_0x000100083b20(&uStack_d0);
    uVar4 = uStack_d0;
    uVar12 = *(undefined8 *)(uStack_d0 + _DAT_113043d30);
    func_0x000107c6157c(uVar12);
    func_0x000107c61170(uVar4);
    func_0x0001000d224c(&uStack_d8);
    func_0x000107c61574(uVar12);
    uVar12 = uStack_d8;
    func_0x000107c426d0();
    uVar6 = (uint)uVar12;
    func_0x000107c615e8(uStack_d8);
  }
  uVar12 = *(undefined8 *)(uVar3 + _DAT_113077968);
  uVar1 = 0;
  if (lVar13 != 0) {
    uVar1 = uVar6 | uVar5 ^ 1;
  }
  uVar8 = *(undefined8 *)(uVar3 + lVar2);
  func_0x000107c4ab80();
  func_0x000100083b20(&uStack_d0);
  uVar4 = uStack_d0;
  uVar9 = *(undefined8 *)(uStack_d0 + _DAT_1130190c8);
  func_0x000107c61174();
  func_0x000107c61170(uVar4);
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  func_0x000107c5def0();
  FUN_10322ee44(&uStack_d0,uVar12,0x3fcccccccccccccd,0,uVar1 & 1,uVar8,0x403e000000000000,
                0x404e000000000000,0,(uint)(uVar11 < 5) & 0x1aU >> (ulong)((uint)uVar11 & 0x1f),
                uVar11 == 2,uVar11 - 1 < 4);
  param_1[3] = &UNK_110628f30;
  param_1[4] = &PTR_DAT_112f4dab8;
  puVar10 = &UNK_1106289a8;
  func_0x000107c613fc(&UNK_1106289a8,0x68,7);
  *param_1 = puVar10;
  func_0x000107c615e8(uVar7);
  func_0x000107c61170(uVar3);
  *(undefined8 *)(puVar10 + 0x38) = uStack_a8;
  *(undefined8 *)(puVar10 + 0x30) = uStack_b0;
  *(undefined8 *)(puVar10 + 0x48) = uStack_98;
  *(undefined8 *)(puVar10 + 0x40) = uStack_a0;
  *(undefined8 *)(puVar10 + 0x58) = uStack_88;
  *(undefined8 *)(puVar10 + 0x50) = uStack_90;
  *(undefined8 *)(puVar10 + 0x60) = uStack_80;
  *(undefined8 *)(puVar10 + 0x18) = uStack_c8;
  *(ulong *)(puVar10 + 0x10) = uStack_d0;
  *(undefined8 *)(puVar10 + 0x28) = uStack_b8;
  *(undefined8 *)(puVar10 + 0x20) = uStack_c0;
  return;
}



/* Entry: 103228358; end: 1032284df;  */

undefined1  [16] FUN_103228358(void)

{
  return ZEXT816(0x110628988);
}



/* Entry: 1032284e0; end: 103228587;  */

void FUN_1032284e0(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_103228574;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_103228574:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 103228588; end: 10322861f; -[_TtC33SCContextUnifiedActionBarRenderer17ActionBarRenderer touchExtension] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_103228588(long param_1)

{
  undefined8 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined8 *)(param_1 + _DAT_112f4eef0);
  func_0x000107c61428(puVar1,auStack_38,0,0);
  return *puVar1;
}



/* Entry: 103228620; end: 103228717; -[_TtC33SCContextUnifiedActionBarRenderer17ActionBarRenderer setTouchExtension:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103228620(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined1 auStack_58 [24];
  
  puVar1 = (undefined8 *)(param_5 + _DAT_112f4eef0);
  func_0x000107c61428(puVar1,auStack_58,1,0);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  puVar1[2] = param_3;
  puVar1[3] = param_4;
  func_0x000107c61174(param_5);
  FUN_103228718();
  func_0x000107c61170(param_5);
  return;
}



/* Entry: 103228718; end: 10322885f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103228718(void)

{
  double *pdVar1;
  long unaff_x20;
  ulong *puVar2;
  ushort uVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  puVar2 = *(ulong **)(unaff_x20 + _DAT_112f4d8a0);
  pdVar1 = (double *)(unaff_x20 + _DAT_112f4eef0);
  func_0x000107c61428(pdVar1,auStack_48,0,0);
  (**(code **)((*(ulong *)PTR__swift_isaMask_11034f488 & *puVar2) + 0x60))
            (SUB82(*pdVar1,0),pdVar1[1],pdVar1[2],pdVar1[3]);
  dVar5 = pdVar1[1];
  dVar4 = *pdVar1;
  dVar7 = pdVar1[3];
  dVar6 = pdVar1[2];
  uVar3 = NEON_uminv(CONCAT26(-(ushort)(dVar7 == *(double *)
                                                  (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18
                                                  )),
                              CONCAT24(-(ushort)(dVar6 == *(double *)
                                                           (
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10)
                                                ),
                                       CONCAT22(-(ushort)(dVar5 == *(double *)
                                                                    (
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8)),
                                                -(ushort)(dVar4 == *(double *)
                                                                                                                                        
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8)))),2);
  if ((uVar3 & 1) == 0) {
    pdVar1 = (double *)(*(long *)(unaff_x20 + _DAT_112f4d8d8) + _DAT_112f4eda0);
    func_0x000107c61428(pdVar1,auStack_60,1,0);
    pdVar1[1] = dVar5;
    *pdVar1 = dVar4;
    pdVar1[3] = dVar7;
    pdVar1[2] = dVar6;
  }
  return;
}



/* Entry: 103228860; end: 10322889f;  */

void FUN_103228860(long *param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  (**(code **)(lVar1 + 0x28))(lVar1,0);
  if ((param_2 & 1) == 0) {
    FUN_103228718();
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbe294. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__free_11034c310)(lVar1);
  return;
}



/* Entry: 1032288a0; end: 1032289bb;  */

void FUN_1032288a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_a8 [56];
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  
  uStack_68 = param_2[1];
  uStack_70 = *param_2;
  uStack_58 = param_2[3];
  uStack_60 = param_2[2];
  uStack_48 = param_2[5];
  uStack_50 = param_2[4];
  uStack_40 = param_2[6];
  uVar3 = param_2[7];
  uVar1 = param_2[8];
  uVar2 = param_2[9];
  FUN_10322b6dc(&uStack_70,auStack_a8,0x112f4da70,&UNK_10dba0dd0);
  func_0x000107c61434(uVar1);
  func_0x000107c61174(uVar2);
  FUN_10324f890(uVar3,uVar1,uVar2,&uStack_70);
  *param_1 = uVar3;
  return;
}



/* Entry: 1032289bc; end: 103228a4f; -[_TtC33SCContextUnifiedActionBarRenderer17ActionBarRenderer hitTest:withEvent:] */

void FUN_1032289bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  undefined8 uStack_40;
  undefined8 uStack_38;
  
  puVar2 = &uStack_40;
  uVar1 = param_3;
  func_0x000107c614f0();
  uStack_40 = param_3;
  uStack_38 = uVar1;
  func_0x000107c61154(param_1,param_2,&uStack_40,PTR_s_hitTest_withEvent__1125d6850,param_5);
  func_0x000107c61180();
  if (puVar2 != (undefined8 *)0x0) {
    puVar3 = (undefined1 *)puVar2;
    func_0x000107c614f0();
    func_0x000107c61440();
    if (puVar3 == (undefined1 *)0x0) {
      func_0x000107c61170(puVar2);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 103228a50; end: 103228e0b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_103228a50(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  long unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  pcVar9 = (char *)&uStack_110;
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    uStack_5f = 0;
    uStack_60 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_10322b6dc(param_1 + 0x48,&uStack_90,0x112f4da60,&UNK_10db9feb0);
  }
  FUN_10322b6dc(&uStack_90,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_b8 == 0) {
    func_0x00010322b654(&uStack_90,0x112f4da60,&UNK_10db9feb0);
    pcVar9 = (char *)0x0;
    if (cVar1 != '\0') goto LAB_103228b1c;
LAB_103228b5c:
    FUN_10322b6dc(param_1 + 8,&uStack_90,0x112f4da60,&UNK_10db9feb0);
    FUN_10322b6dc(param_1 + 0x88,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    lStack_f8 = lStack_b8;
    uStack_100 = uStack_c0;
    uStack_f0 = uStack_b0;
    uStack_df = uStack_9f;
    FUN_103228e0c();
    FUN_10322b438(&uStack_110);
    func_0x00010322b654(&uStack_90,0x112f4da60,&UNK_10db9feb0);
    if (cVar1 == '\0') goto LAB_103228b5c;
LAB_103228b1c:
    uStack_5f = 0;
    uStack_60 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_9f = 0;
    uStack_a0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  pcVar2 = param_1 + 0x108;
  FUN_103229138(pcVar2,&uStack_90,&uStack_d0);
  func_0x00010322b654(&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  func_0x00010322b654(&uStack_90,0x112f4da60,&UNK_10db9feb0);
  FUN_10322b6dc(param_1 + 200,&uStack_90,0x112f4da60,&UNK_10db9feb0);
  if (lStack_78 != 0) {
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    lStack_b8 = lStack_78;
    uStack_c0 = uStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_9f = uStack_5f;
    uStack_a7 = uStack_67;
    uStack_a0 = uStack_60;
    puVar3 = &uStack_d0;
    FUN_1032296a4(puVar3,param_1 + 0x148,pcVar9,pcVar2);
    FUN_10322b438(&uStack_d0);
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c61170(puVar3);
      lVar4 = *(long *)(unaff_x20 + _DAT_112f4d8f8);
      if (lVar4 != 0) {
        func_0x000107c61174();
        func_0x000107c550d8();
        func_0x000107c61170(lVar4);
      }
      func_0x000107c61170(pcVar9);
      pcVar7 = pcVar2;
      goto LAB_103228dec;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112f4d8f8) != 0) {
    func_0x000107c550d8();
  }
  if (pcVar9 == (char *)0x0) {
    if (pcVar2 == (char *)0x0) {
      return;
    }
    pcVar9 = pcVar2;
    func_0x000107c4acb0(pcVar2);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c4acb0(uVar8);
    func_0x000107c61180();
    pcVar7 = pcVar9;
    func_0x000107c40294(pcVar9);
    func_0x000107c61180();
    func_0x000107c61170(pcVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c521e8(pcVar7);
  }
  else {
    if (pcVar2 != (char *)0x0) {
      pcVar5 = pcVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      pcVar6 = pcVar2;
      func_0x000107c4acb0(pcVar2);
      func_0x000107c61180();
      pcVar7 = pcVar5;
      func_0x000107c402a8(0x4024000000000000,pcVar5);
      func_0x000107c61180();
      func_0x000107c61170(pcVar5);
      func_0x000107c61170(pcVar6);
      func_0x000107c521e8(pcVar7);
      func_0x000107c61170(pcVar9);
      func_0x000107c61170(pcVar2);
      goto LAB_103228dec;
    }
    pcVar2 = pcVar9;
    func_0x000107c5ce8c(pcVar9);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c5ce8c(uVar8);
    func_0x000107c61180();
    pcVar7 = pcVar2;
    func_0x000107c402a4(pcVar2);
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c521e8(pcVar7);
    pcVar2 = pcVar9;
  }
  func_0x000107c61170(pcVar2);
LAB_103228dec:
  func_0x000107c61170(pcVar7);
  return;
}



/* Entry: 103228e0c; end: 103229137;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

long FUN_103228e0c(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_90 [8];
  
  lVar3 = unaff_x20;
  func_0x000107c614f0();
  uVar7 = *(undefined8 *)(param_1 + 0x18);
  lVar8 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar7);
  lVar4 = 0;
  func_0x000107c614b8(0,lVar8,uVar7,&UNK_10e804840,&UNK_10e804858);
  lVar10 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_90 + -extraout_x8;
  (**(code **)(lVar8 + 0x28))(puVar9,uVar7,lVar8);
  func_0x000107c614b4(lVar8,uVar7,lVar4,&UNK_10e804840,&UNK_10e804850);
  lVar5 = lVar8;
  func_0x00010322b060();
  puVar6 = puVar9;
  FUN_10322b46c(puVar9,lVar4,&UNK_11076af50,lVar8,lVar5);
  (**(code **)(lVar10 + 8))(puVar9,lVar4);
  if (((ulong)puVar6 & 1) != 0) {
    *(undefined1 *)(unaff_x20 + _DAT_112f4d930) = 1;
    lVar8 = unaff_x20 + _DAT_112f4d8c8;
    lVar5 = lVar8;
    func_0x000107c61618();
    if (lVar5 != 0) {
      lVar10 = *(long *)(lVar8 + 8);
      lVar8 = lVar5;
      func_0x000107c614f0();
      uVar7 = *(undefined8 *)(param_1 + 0x18);
      uVar2 = *(undefined8 *)(param_1 + 0x20);
      lVar4 = param_1;
      func_0x0001000a8868(param_1,uVar7);
      pcVar11 = *(code **)(lVar10 + 0x10);
      func_0x000107c61174();
      (*pcVar11)(&stack0xffffffffffffff78,lVar4,uVar7,uVar2,lVar8,lVar10);
      func_0x000107c615e8(lVar5);
      func_0x0001000834e4(&stack0xffffffffffffff78);
    }
  }
  FUN_10324b878(param_1,lVar3,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c5381c(0x443b8000);
  lVar8 = param_1;
  func_0x000107c4acb0(param_1);
  func_0x000107c61180();
  uVar7 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
  func_0x000107c4acb0(uVar7);
  func_0x000107c61180();
  lVar5 = lVar8;
  func_0x000107c40280(lVar8);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000107c61170(uVar7);
  func_0x000107c521e8(lVar5);
  func_0x000107c61170(lVar5);
  lVar8 = param_1;
  func_0x000107c5e308(param_1);
  func_0x000107c61180();
  lVar5 = lVar8;
  func_0x000107c402a0(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(lVar8);
  func_0x000107c521e8(lVar5);
  func_0x000107c61170(lVar5);
  if ((*(byte *)(unaff_x20 + _DAT_112f4d8e8) & 0x18) == 0) {
    lVar8 = param_1;
    func_0x000107c5e308(param_1);
    func_0x000107c61180();
    lVar5 = lVar8;
    func_0x000107c402b0(0x405b800000000000);
    func_0x000107c61180();
    func_0x000107c61170(lVar8);
    func_0x000107c521e8(lVar5);
    func_0x000107c61170(lVar5);
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112f4d900);
  lVar8 = *plVar1;
  *plVar1 = param_1;
  plVar1[1] = lVar3;
  func_0x000107c61174(param_1);
  func_0x000107c61170(lVar8);
  return param_1;
}



/* Entry: 103229138; end: 1032296a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 * FUN_103229138(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_cf;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  long lStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_87;
  
  lVar2 = unaff_x20;
  func_0x000107c614f0();
  FUN_10322b6dc(param_1,&uStack_b8,0x112f4da60,&UNK_10db9feb0);
  if (lStack_a0 == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  else {
    uStack_f8 = uStack_b0;
    uStack_100 = uStack_b8;
    lStack_e8 = lStack_a0;
    uStack_f0 = uStack_a8;
    uStack_e0 = uStack_98;
    uStack_cf = uStack_87;
    puVar11 = &uStack_100;
    lVar10 = lVar2;
    FUN_10324b878(puVar11,lVar2,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
    FUN_10322b438(&uStack_100);
    puVar3 = puVar11;
    func_0x000107c5ce8c(puVar11);
    func_0x000107c61180();
    uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c5ce8c(uVar4);
    func_0x000107c61180();
    puVar5 = puVar3;
    func_0x000107c40280(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar4);
    func_0x000107c521e8(puVar5);
    func_0x000107c61170(puVar5);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4d910);
    lVar12 = *plVar1;
    *plVar1 = (long)puVar11;
    plVar1[1] = lVar10;
    puVar3 = puVar11;
    func_0x000107c61174();
    func_0x000107c61174();
    func_0x000107c61170(lVar12);
    if (*(long *)(unaff_x20 + _DAT_112f4d8f0) != 0) {
      uVar4 = 0;
      func_0x000103254b00(0);
      puVar5 = puVar3;
      func_0x000107c61480(puVar3,uVar4);
      if (puVar5 != (undefined8 *)0x0) {
        func_0x0001032511f4(1);
      }
    }
    func_0x000107c61170(puVar3);
  }
  FUN_10322b6dc(param_2,&uStack_b8,0x112f4da60,&UNK_10db9feb0);
  puVar3 = puVar11;
  if (lStack_a0 == 0) goto LAB_1032294e8;
  uStack_f8 = uStack_b0;
  uStack_100 = uStack_b8;
  lStack_e8 = lStack_a0;
  uStack_f0 = uStack_a8;
  uStack_e0 = uStack_98;
  uStack_cf = uStack_87;
  puVar3 = &uStack_100;
  lVar10 = lVar2;
  FUN_10324b878(puVar3,lVar2,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  FUN_10322b438(&uStack_100);
  puVar5 = puVar3;
  func_0x000107c5381c(0x443b8000);
  func_0x0001008478a8();
  func_0x000107c613fc();
  puVar5[3] = 5;
  puVar5[2] = 2;
  puVar6 = puVar3;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar7 = puVar6;
  func_0x000107c402a0(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  puVar5[4] = puVar7;
  puVar6 = puVar3;
  func_0x000107c5ce8c();
  func_0x000107c61180();
  if (puVar11 == (undefined8 *)0x0) {
LAB_1032293ec:
    puVar7 = *(undefined8 **)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c5ce8c(puVar7);
    func_0x000107c61180();
    if (puVar11 != (undefined8 *)0x0) goto LAB_103229408;
    uVar4 = 0;
  }
  else {
    puVar7 = puVar11;
    func_0x000107c4acb0();
    func_0x000107c61180();
    if (puVar7 == (undefined8 *)0x0) goto LAB_1032293ec;
LAB_103229408:
    uVar4 = 0xc024000000000000;
  }
  puVar8 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168(PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar9 = puVar6;
  func_0x000107c40284(uVar4);
  func_0x000107c61180();
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar7);
  puVar5[5] = puVar9;
  uVar4 = 0;
  FUN_10322b540(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar6 = puVar5;
  func_0x000107c5fc48(puVar5,uVar4);
  func_0x000107c61574(puVar5);
  func_0x000107c3d048(puVar8);
  func_0x000107c61170(puVar6);
  func_0x000107c61170(puVar11);
  plVar1 = (long *)(unaff_x20 + _DAT_112f4d918);
  lVar12 = *plVar1;
  *plVar1 = (long)puVar3;
  plVar1[1] = lVar10;
  func_0x000107c61174(puVar3);
  func_0x000107c61170(lVar12);
LAB_1032294e8:
  FUN_10322b6dc(param_3,&uStack_b8,0x112f4da60,&UNK_10db9feb0);
  puVar11 = puVar3;
  if (lStack_a0 != 0) {
    uStack_f8 = uStack_b0;
    uStack_100 = uStack_b8;
    lStack_e8 = lStack_a0;
    uStack_f0 = uStack_a8;
    uStack_e0 = uStack_98;
    uStack_cf = uStack_87;
    puVar11 = &uStack_100;
    FUN_10324b878(puVar11,lVar2,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
    FUN_10322b438(&uStack_100);
    func_0x000107c5381c(0x443b8000,puVar11);
    if (puVar3 == (undefined8 *)0x0) {
      puVar3 = puVar11;
      func_0x000107c5ce8c(puVar11);
      func_0x000107c61180();
      uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
      func_0x000107c5ce8c(uVar4);
      func_0x000107c61180();
      puVar5 = puVar3;
      func_0x000107c40284(0,puVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar4);
      func_0x000107c521e8(puVar5);
    }
    else {
      puVar6 = puVar11;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      puVar7 = puVar3;
      func_0x000107c4acb0(puVar3);
      func_0x000107c61180();
      puVar5 = puVar6;
      func_0x000107c40284(0xc024000000000000,puVar6);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      func_0x000107c61170(puVar7);
      func_0x000107c521e8(puVar5);
      func_0x000107c61170(puVar3);
    }
    func_0x000107c61170(puVar5);
    plVar1 = (long *)(unaff_x20 + _DAT_112f4d920);
    lVar10 = *plVar1;
    *plVar1 = (long)puVar11;
    plVar1[1] = lVar2;
    func_0x000107c61174(puVar11);
    func_0x000107c61170(lVar10);
  }
  return puVar11;
}



/* Entry: 1032296a4; end: 10322a0d7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1032296a4(undefined *param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  uint uVar16;
  ulong uVar17;
  long lVar18;
  long lStack_110;
  undefined *puStack_108;
  long lStack_100;
  undefined *puStack_f8;
  undefined1 auStack_f0 [24];
  long lStack_d8;
  
  lVar2 = unaff_x20;
  lStack_110 = param_4;
  func_0x000107c614f0();
  puVar3 = param_1;
  lVar9 = lVar2;
  FUN_10324b878(param_1,lVar2,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d908);
  uVar12 = *puVar1;
  *puVar1 = puVar3;
  puVar1[1] = lVar9;
  puStack_108 = puVar3;
  func_0x000107c61174();
  func_0x000107c61170(uVar12);
  lVar9 = _DAT_112f4d910;
  puVar5 = puVar3;
  puStack_f8 = puVar3;
  if (*(long *)(unaff_x20 + _DAT_112f4d910) != 0) {
    uVar12 = 0;
    func_0x000103254b00(0);
    puVar4 = puVar3;
    func_0x000107c61480(puVar3,uVar12);
    if (puVar4 != (undefined *)0x0) {
      func_0x000107c61174(puVar3);
      func_0x0001032511f4(1);
      puVar5 = puStack_f8;
      func_0x000107c61170(puVar3);
    }
  }
  FUN_10322b6dc(param_2,auStack_f0,0x112f4da60,&UNK_10db9feb0);
  lStack_100 = param_3;
  if (lStack_d8 == 0) {
    func_0x00010322b654(auStack_f0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uVar12 = 0;
    FUN_103256bf4(0);
    puVar3 = puVar5;
    func_0x000107c61480(puVar5,uVar12);
    if (puVar3 != (undefined *)0x0) {
      func_0x000107c61174(puVar5);
      puVar6 = &stack0xffffffffffffff50;
      FUN_10324b878(puVar6,lVar2,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
      puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d928);
      uVar12 = *puVar1;
      *puVar1 = puVar6;
      puVar1[1] = lVar2;
      func_0x000107c61174();
      func_0x000107c61170(uVar12);
      FUN_1032561d0(puVar6);
      func_0x000107c61170(puVar5);
    }
    FUN_10322b438(&stack0xffffffffffffff50);
  }
  if ((*(ushort *)(unaff_x20 + _DAT_112f4d8e0) & 0x180) == 0) {
    lVar2 = unaff_x20 + _DAT_112f4d8c8;
    lVar7 = lVar2;
    func_0x000107c61618();
    if (lVar7 != 0) {
      lVar13 = *(long *)(lVar2 + 8);
      lVar2 = lVar7;
      func_0x000107c614f0();
      uVar12 = *(undefined8 *)(param_1 + 0x18);
      uVar14 = *(undefined8 *)(param_1 + 0x20);
      puVar5 = param_1;
      func_0x0001000a8868(param_1,uVar12);
      pcVar15 = *(code **)(lVar13 + 0x10);
      func_0x000107c61174();
      (*pcVar15)(&stack0xffffffffffffff50,puVar5,uVar12,uVar14,lVar2,lVar13);
      func_0x000107c615e8(lVar7);
      func_0x0001000834e4(&stack0xffffffffffffff50);
    }
  }
  uVar12 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  func_0x0001000a8868(param_1,uVar12);
  lVar13 = 0;
  func_0x000107c614b8(0,lVar2,uVar12,&UNK_10e804840,&UNK_10e804858);
  lVar18 = *(long *)(lVar13 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar17 = (long)&lStack_110 - extraout_x8;
  (**(code **)(lVar2 + 0x28))(uVar17,uVar12,lVar2);
  func_0x000107c614b4(lVar2,uVar12,lVar13,&UNK_10e804840,&UNK_10e804850);
  lVar7 = lVar2;
  func_0x00010322b060();
  uVar8 = uVar17;
  FUN_10322b46c(uVar17,lVar13,&UNK_11076af50,lVar2,lVar7);
  (**(code **)(lVar18 + 8))(uVar17,lVar13);
  puVar5 = puStack_f8;
  uVar17 = *(ulong *)(unaff_x20 + _DAT_112f4d8e8);
  lVar9 = *(long *)(unaff_x20 + lVar9);
  if (lVar9 == 0) {
    if ((uVar17 & 0x19) == 0 && (uVar8 & 1) == 0) {
      func_0x000107c5381c(0x443b8000,puStack_f8);
      puVar3 = puVar5;
      func_0x000107c3f75c(puVar5);
      func_0x000107c61180();
      uVar14 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
      uVar12 = uVar14;
      func_0x000107c3f75c(uVar14);
      func_0x000107c61180();
      puVar4 = puVar3;
      func_0x000107c40280(puVar3);
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      func_0x000107c61170(uVar12);
      puVar3 = puVar4;
      func_0x000107c517b8(0x437a0000,puVar4);
      func_0x000107c61180();
      func_0x000107c61170(puVar4);
      func_0x000107c521e8(puVar3);
      if (lStack_100 == 0) {
        puVar4 = puVar5;
        func_0x000107c4acb0(puVar5);
        func_0x000107c61180();
        uVar12 = uVar14;
        func_0x000107c4acb0(uVar14);
        func_0x000107c61180();
        puVar11 = puVar4;
        func_0x000107c40294(puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(uVar12);
        func_0x000107c521e8(puVar11);
      }
      else {
        lVar9 = lStack_100;
        func_0x000107c61174();
        puVar4 = puVar5;
        func_0x000107c4acb0(puVar5);
        func_0x000107c61180();
        lVar2 = lVar9;
        func_0x000107c5ce8c(lVar9);
        func_0x000107c61180();
        puVar11 = puVar4;
        func_0x000107c40298(0x4024000000000000,puVar4);
        func_0x000107c61180();
        func_0x000107c61170(puVar4);
        func_0x000107c61170(lVar2);
        func_0x000107c521e8(puVar11);
        func_0x000107c61170(lVar9);
      }
      func_0x000107c61170(puVar11);
      if (lStack_110 == 0) {
        func_0x000107c5ce8c(puVar5);
        func_0x000107c61180();
        func_0x000107c5ce8c(uVar14);
        func_0x000107c61180();
        puVar4 = puVar5;
        func_0x000107c402a4(puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(uVar14);
        func_0x000107c521e8(puVar4);
      }
      else {
        lVar9 = lStack_110;
        func_0x000107c61174();
        func_0x000107c5ce8c(puVar5);
        func_0x000107c61180();
        lVar2 = lVar9;
        func_0x000107c4acb0(lVar9);
        func_0x000107c61180();
        puVar4 = puVar5;
        func_0x000107c402a8(0xc024000000000000,puVar5);
        func_0x000107c61180();
        func_0x000107c61170(puVar5);
        func_0x000107c61170(lVar2);
        func_0x000107c521e8(puVar4);
        func_0x000107c61170(lVar9);
      }
      func_0x000107c61170(puVar4);
      goto LAB_10322a0ac;
    }
  }
  else {
    func_0x000107c61174();
    puVar5 = puStack_f8;
    puVar3 = puStack_f8;
    func_0x000107c5e308(puStack_f8);
    func_0x000107c61180();
    lVar2 = lVar9;
    func_0x000107c5e308(lVar9);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40280(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c521e8(puVar4);
    func_0x000107c61170(lVar9);
    func_0x000107c61170(puVar4);
  }
  lVar9 = lStack_100;
  uVar16 = (uint)uVar17;
  if (lStack_100 == 0) {
    puVar3 = puVar5;
    func_0x000107c4acb0(puVar5);
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c4acb0(uVar12);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40280(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c521e8(puVar4);
  }
  else {
    if ((uVar16 >> 4 & 1) == 0) {
      func_0x000107c61174(lStack_100);
    }
    else {
      puVar3 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
      func_0x000107c61168();
      puVar4 = puVar3;
      func_0x0001008478a8();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      func_0x000107c61174(lVar9);
      puVar11 = puVar5;
      func_0x000107c5e308();
      func_0x000107c61180();
      func_0x000107c5e308(lVar9);
      func_0x000107c61180();
      puVar10 = puVar11;
      func_0x000107c40280();
      func_0x000107c61180();
      func_0x000107c61170(puVar11);
      func_0x000107c61170(lVar9);
      lVar9 = lStack_100;
      *(undefined **)(puVar4 + 0x20) = puVar10;
      uVar12 = 0;
      FUN_10322b540(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
      puVar11 = puVar4;
      func_0x000107c5fc48(puVar4,uVar12);
      func_0x000107c61574(puVar4);
      func_0x000107c3d048(puVar3);
      func_0x000107c61170(puVar11);
    }
    puVar3 = puVar5;
    func_0x000107c4acb0(puVar5);
    func_0x000107c61180();
    lVar2 = lVar9;
    func_0x000107c5ce8c(lVar9);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40284(0x4024000000000000,puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c521e8(puVar4);
    func_0x000107c61170(lVar9);
  }
  func_0x000107c61170(puVar4);
  if (lStack_110 == 0) {
    puVar3 = puVar5;
    func_0x000107c5ce8c(puVar5);
    func_0x000107c61180();
    uVar12 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c5ce8c(uVar12);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40280(puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(uVar12);
    func_0x000107c521e8(puVar4);
  }
  else {
    lVar9 = lStack_110;
    func_0x000107c61174();
    puVar3 = puVar5;
    func_0x000107c5ce8c(puVar5);
    func_0x000107c61180();
    lVar2 = lVar9;
    func_0x000107c4acb0(lVar9);
    func_0x000107c61180();
    puVar4 = puVar3;
    func_0x000107c40284(0xc024000000000000,puVar3);
    func_0x000107c61180();
    func_0x000107c61170(puVar3);
    func_0x000107c61170(lVar2);
    func_0x000107c521e8(puVar4);
    func_0x000107c61170(lVar9);
  }
  func_0x000107c61170(puVar4);
  if ((uVar16 >> 3 & 1) == 0) {
    return puStack_108;
  }
  puVar4 = PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50;
  func_0x000107c61168();
  puVar11 = puVar4;
  func_0x0001008478a8();
  func_0x000107c613fc();
  *(undefined8 *)(puVar11 + 0x18) = 5;
  *(undefined8 *)(puVar11 + 0x10) = 2;
  puVar3 = puVar5;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar10 = puVar3;
  func_0x000107c40290(0x404e000000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar3);
  *(undefined **)(puVar11 + 0x20) = puVar10;
  func_0x000107c5e308();
  func_0x000107c61180();
  puVar3 = puVar5;
  func_0x000107c402b0(0x405b800000000000);
  func_0x000107c61180();
  func_0x000107c61170(puVar5);
  *(undefined **)(puVar11 + 0x28) = puVar3;
  uVar12 = 0;
  FUN_10322b540(0,0x112d360b8,&PTR__OBJC_CLASS___NSLayoutConstraint_1126aea50);
  puVar3 = puVar11;
  func_0x000107c5fc48(puVar11,uVar12);
  func_0x000107c61574(puVar11);
  func_0x000107c3d048(puVar4);
LAB_10322a0ac:
  func_0x000107c61170(puVar3);
  return puStack_108;
}



/* Entry: 10322a0d8; end: 10322a27f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322a0d8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x20;
  ulong uVar7;
  ulong uVar8;
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d900);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d908);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d910);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d918);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d920);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar3);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d928);
  uVar3 = *puVar1;
  *puVar1 = 0;
  puVar1[1] = 0;
  func_0x000107c61170(uVar3);
  uVar4 = *(ulong *)(unaff_x20 + _DAT_112f4d8a0);
  func_0x000107c5c3b0();
  func_0x000107c61180();
  uVar3 = 0;
  FUN_10322b540(0,0x112d360b0,&PTR__OBJC_CLASS___UIView_1126aec20);
  uVar5 = uVar4;
  func_0x000107c5fc54(uVar4,uVar3);
  func_0x000107c61170(uVar4);
  if (uVar5 >> 0x3e == 0) {
    uVar4 = *(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar4 = uVar5 & 0xffffffffffffff8;
    if (0x7fffffffffffffff < uVar5) {
      uVar4 = uVar5;
    }
    func_0x000107c60480();
  }
  if (uVar4 != 0) {
    uVar7 = 0;
    do {
      if ((uVar5 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar5 & 0xffffffffffffff8) + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10322a24c);
          (*pcVar2)();
        }
        uVar6 = *(ulong *)(uVar5 + uVar7 * 8 + 0x20);
        func_0x000107c61174(uVar6);
      }
      else {
        uVar6 = uVar7;
        func_0x000100f040d0(uVar7,uVar5);
      }
      if (SCARRY8(uVar7,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10322a248);
        (*pcVar2)();
      }
      uVar8 = uVar7 + 1;
      func_0x000107c4ff34();
      func_0x000107c61170(uVar6);
      uVar7 = uVar7 + 1;
    } while (uVar8 != uVar4);
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar5);
  return;
}



/* Entry: 10322a280; end: 10322a36b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322a280(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f4d8c8;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174();
    (*pcVar4)(&stack0xffffffffffffff78,param_1,param_2,param_3,param_4,param_5,param_6,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x0001000834e4(&stack0xffffffffffffff78);
  }
  return;
}



/* Entry: 10322a36c; end: 10322a55f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322a36c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long unaff_x20;
  long lVar7;
  long lStack_c8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  FUN_10322b6dc(param_2 + 200,&stack0xffffffffffffff20,0x112f4da60,&UNK_10db9feb0);
  if (lStack_c8 == 0) {
    func_0x00010322b654(&stack0xffffffffffffff20,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    FUN_1031ddb84(&stack0xffffffffffffff20,&uStack_a0);
    FUN_10322b438(&stack0xffffffffffffff20);
    FUN_1031ddc20(&uStack_a0,auStack_78);
    uVar2 = uStack_58;
    uVar1 = uStack_60;
    puVar3 = auStack_78;
    func_0x0001000a8868(puVar3,uStack_60);
    FUN_10322b6dc(param_1 + 200,&stack0xffffffffffffff20,0x112f4da60,&UNK_10db9feb0);
    if (lStack_c8 == 0) {
      func_0x00010322b654(&stack0xffffffffffffff20,0x112f4da60,&UNK_10db9feb0);
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_80 = 0;
    }
    else {
      FUN_1031ddb84(&stack0xffffffffffffff20,&uStack_a0);
      FUN_10322b438(&stack0xffffffffffffff20);
    }
    func_0x00010440e7a4(puVar3,&uStack_a0,uVar1,uVar2);
    func_0x00010322b654(&uStack_a0,0x112f4b310,&UNK_10db9fef0);
    if ((((ulong)puVar3 & 1) != 0) && ((*(byte *)(unaff_x20 + _DAT_112f4d930) & 1) == 0)) {
      lVar5 = unaff_x20 + _DAT_112f4d8c8;
      lVar4 = lVar5;
      func_0x000107c61618();
      if (lVar4 != 0) {
        lVar7 = *(long *)(lVar5 + 8);
        lVar5 = lVar4;
        func_0x000107c614f0();
        puVar3 = auStack_78;
        func_0x0001000a8868(puVar3,uStack_60);
        pcVar6 = *(code **)(lVar7 + 0x10);
        func_0x000107c61174();
        (*pcVar6)(&stack0xffffffffffffff20,puVar3,uStack_60,uStack_58,lVar5,lVar7);
        func_0x000107c615e8(lVar4);
        func_0x0001000834e4(&stack0xffffffffffffff20);
      }
    }
    func_0x0001000834e4(auStack_78);
  }
  return;
}



/* Entry: 10322a560; end: 10322a843;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322a560(char *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  lVar4 = unaff_x20;
  func_0x000107c614f0();
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d900);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4d900))[1];
  cVar3 = *param_1;
  if (cVar3 == '\x01') {
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  else {
    FUN_10322b6dc(param_1 + 0x48,&uStack_a0,0x112f4da60,&UNK_10db9feb0);
  }
  uVar5 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,&uStack_a0,lVar4,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c61170(uVar5);
  func_0x00010322b654(&uStack_a0,0x112f4da60,&UNK_10db9feb0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d908);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4d908))[1];
  uVar5 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,param_1 + 200,lVar4,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c61170(uVar5);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d910);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4d910))[1];
  uVar5 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,param_1 + 0x108,lVar4,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c61170(uVar5);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d918);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4d918))[1];
  if (cVar3 == '\0') {
    FUN_10322b6dc(param_1 + 8,&uStack_a0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  uVar5 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,&uStack_a0,lVar4,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c61170(uVar5);
  func_0x00010322b654(&uStack_a0,0x112f4da60,&UNK_10db9feb0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d920);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4d920))[1];
  if (cVar3 == '\0') {
    FUN_10322b6dc(param_1 + 0x88,&uStack_a0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_6f = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_78 = 0;
    uStack_77 = 0;
    uStack_80 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
  }
  uVar5 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,&uStack_a0,lVar4,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c61170(uVar5);
  func_0x00010322b654(&uStack_a0,0x112f4da60,&UNK_10db9feb0);
  uVar1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d928);
  uVar2 = ((undefined8 *)(unaff_x20 + _DAT_112f4d928))[1];
  uVar5 = uVar1;
  func_0x000107c61174(uVar1);
  FUN_10324d63c(uVar1,uVar2,param_1 + 0x148,lVar4,&PTR_DAT_112f4d988,&PTR_DAT_11062c210);
  func_0x000107c61170(uVar5);
  return;
}



/* Entry: 10322a844; end: 10322a86f; -[_TtC33SCContextUnifiedActionBarRenderer17ActionBarRenderer initWithTouchExtension:] */

void FUN_10322a844(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextUnifiedActionBarRenderer.ActionBarRenderer",0x33,
                      "init(touchExtension:)",0x15,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10322a870);
  (*pcVar1)();
}



/* Entry: 10322a870; end: 10322a9d3; -[_TtC33SCContextUnifiedActionBarRenderer17ActionBarRenderer init] */

void FUN_10322a870(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("SCContextUnifiedActionBarRenderer.ActionBarRenderer",0x33,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10322a89c);
  (*pcVar1)();
}



/* Entry: 10322a9d4; end: 10322aae3; -[_TtC33SCContextUnifiedActionBarRenderer17ActionBarRenderer .cxx_destruct] */

/* WARNING: Possible PIC construction at 0x00010322a9f0: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010322aa50: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010322aa78: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010322aa98: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010322aab8: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010322aa9c) */
/* WARNING: Removing unreachable block (ram,0x00010322aa7c) */
/* WARNING: Removing unreachable block (ram,0x00010322aa54) */
/* WARNING: Removing unreachable block (ram,0x00010322a9f4) */
/* WARNING: Removing unreachable block (ram,0x00010322aabc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322a9d4(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112f4d8a0));
  return;
}



/* Entry: 10322aae4; end: 10322ab0f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322aae4(undefined8 *param_1)

{
  long unaff_x20;
  
  *param_1 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8b0);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)();
  return;
}



/* Entry: 10322ab10; end: 10322ab3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322ab10(void)

{
  long unaff_x20;
  
  func_0x000107c61618(unaff_x20 + _DAT_112f4d8c8);
  return;
}



/* Entry: 10322ab40; end: 10322ab4f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322ab40(void)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(*(undefined8 *)(unaff_x20 + _DAT_112f4d8a0));
  return;
}



/* Entry: 10322ab50; end: 10322ab97;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10322ab50(void)

{
  unkuint9 *pVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auStack_38 [24];
  
  pVar1 = (unkuint9 *)(unaff_x20 + _DAT_112f4d8c0);
  func_0x000107c61428(pVar1,auStack_38,0,0);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = *pVar1;
  return auVar2;
}



/* Entry: 10322ab98; end: 10322abef;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322ab98(undefined8 param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d8c0);
  func_0x000107c61428(puVar1,auStack_48,1,0);
  *puVar1 = param_1;
  *(undefined1 *)(puVar1 + 1) = param_2;
  return;
}



/* Entry: 10322abf0; end: 10322ac2f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10322abf0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4d8c0;
  func_0x000107c61428(unaff_x20 + _DAT_112f4d8c0,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = FUN_10322ac30;
  return auVar2;
}



/* Entry: 10322ac30; end: 10322ac33;  */

void FUN_10322ac30(void)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0190. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_endAccess_11034f310)();
  return;
}



/* Entry: 10322ac34; end: 10322acf3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322ac34(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112f4d8b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4d8b8,auStack_48,0,0);
  FUN_10322b6dc(unaff_x20 + lVar1,param_1,0x112f4da68,&UNK_10db9fec0);
  return;
}



/* Entry: 10322acf4; end: 10322ad33;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_10322acf4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _DAT_112f4d8b8;
  func_0x000107c61428(unaff_x20 + _DAT_112f4d8b8,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = 0x10322b734;
  return auVar2;
}



/* Entry: 10322ad34; end: 10322add7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322ad34(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_80 [48];
  
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8e0);
  puVar1 = (undefined8 *)(unaff_x20 + _DAT_112f4d8f0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar5 = puVar1[2];
  func_0x000107c61434();
  func_0x00010322b580(param_3,auStack_80);
  func_0x00010322b5bc(uVar2,uVar3,uVar5);
  FUN_10322d25c(param_1,param_2,uVar4,param_3,uVar2,uVar3,uVar5);
  return;
}



/* Entry: 10322add8; end: 10322ade7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322add8(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  long lVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  long unaff_x20;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_df;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined1 uStack_a8;
  undefined7 uStack_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long lStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 uStack_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  pcVar9 = (char *)&uStack_110;
  cVar1 = *param_1;
  if (cVar1 == '\x01') {
    uStack_5f = 0;
    uStack_60 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
  }
  else {
    FUN_10322b6dc(param_1 + 0x48,&uStack_90,0x112f4da60,&UNK_10db9feb0);
  }
  FUN_10322b6dc(&uStack_90,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  if (lStack_b8 == 0) {
    func_0x00010322b654(&uStack_90,0x112f4da60,&UNK_10db9feb0);
    pcVar9 = (char *)0x0;
    if (cVar1 != '\0') goto LAB_103228b1c;
LAB_103228b5c:
    FUN_10322b6dc(param_1 + 8,&uStack_90,0x112f4da60,&UNK_10db9feb0);
    FUN_10322b6dc(param_1 + 0x88,&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  }
  else {
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    lStack_f8 = lStack_b8;
    uStack_100 = uStack_c0;
    uStack_f0 = uStack_b0;
    uStack_df = uStack_9f;
    FUN_103228e0c();
    FUN_10322b438(&uStack_110);
    func_0x00010322b654(&uStack_90,0x112f4da60,&UNK_10db9feb0);
    if (cVar1 == '\0') goto LAB_103228b5c;
LAB_103228b1c:
    uStack_5f = 0;
    uStack_60 = 0;
    lStack_78 = 0;
    uStack_80 = 0;
    uStack_68 = 0;
    uStack_67 = 0;
    uStack_70 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_9f = 0;
    uStack_a0 = 0;
    lStack_b8 = 0;
    uStack_c0 = 0;
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_b0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
  }
  pcVar2 = param_1 + 0x108;
  FUN_103229138(pcVar2,&uStack_90,&uStack_d0);
  func_0x00010322b654(&uStack_d0,0x112f4da60,&UNK_10db9feb0);
  func_0x00010322b654(&uStack_90,0x112f4da60,&UNK_10db9feb0);
  FUN_10322b6dc(param_1 + 200,&uStack_90,0x112f4da60,&UNK_10db9feb0);
  if (lStack_78 != 0) {
    uStack_c8 = uStack_88;
    uStack_d0 = uStack_90;
    lStack_b8 = lStack_78;
    uStack_c0 = uStack_80;
    uStack_a8 = uStack_68;
    uStack_b0 = uStack_70;
    uStack_9f = uStack_5f;
    uStack_a7 = uStack_67;
    uStack_a0 = uStack_60;
    puVar3 = &uStack_d0;
    FUN_1032296a4(puVar3,param_1 + 0x148,pcVar9,pcVar2);
    FUN_10322b438(&uStack_d0);
    if (puVar3 != (undefined8 *)0x0) {
      func_0x000107c61170(puVar3);
      lVar4 = *(long *)(unaff_x20 + _DAT_112f4d8f8);
      if (lVar4 != 0) {
        func_0x000107c61174();
        func_0x000107c550d8();
        func_0x000107c61170(lVar4);
      }
      func_0x000107c61170(pcVar9);
      pcVar7 = pcVar2;
      goto LAB_103228dec;
    }
  }
  if (*(long *)(unaff_x20 + _DAT_112f4d8f8) != 0) {
    func_0x000107c550d8();
  }
  if (pcVar9 == (char *)0x0) {
    if (pcVar2 == (char *)0x0) {
      return;
    }
    pcVar9 = pcVar2;
    func_0x000107c4acb0(pcVar2);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c4acb0(uVar8);
    func_0x000107c61180();
    pcVar7 = pcVar9;
    func_0x000107c40294(pcVar9);
    func_0x000107c61180();
    func_0x000107c61170(pcVar9);
    func_0x000107c61170(uVar8);
    func_0x000107c521e8(pcVar7);
  }
  else {
    if (pcVar2 != (char *)0x0) {
      pcVar5 = pcVar9;
      func_0x000107c5ce8c();
      func_0x000107c61180();
      pcVar6 = pcVar2;
      func_0x000107c4acb0(pcVar2);
      func_0x000107c61180();
      pcVar7 = pcVar5;
      func_0x000107c402a8(0x4024000000000000,pcVar5);
      func_0x000107c61180();
      func_0x000107c61170(pcVar5);
      func_0x000107c61170(pcVar6);
      func_0x000107c521e8(pcVar7);
      func_0x000107c61170(pcVar9);
      func_0x000107c61170(pcVar2);
      goto LAB_103228dec;
    }
    pcVar2 = pcVar9;
    func_0x000107c5ce8c(pcVar9);
    func_0x000107c61180();
    uVar8 = *(undefined8 *)(unaff_x20 + _DAT_112f4d8a0);
    func_0x000107c5ce8c(uVar8);
    func_0x000107c61180();
    pcVar7 = pcVar2;
    func_0x000107c402a4(pcVar2);
    func_0x000107c61180();
    func_0x000107c61170(pcVar2);
    func_0x000107c61170(uVar8);
    func_0x000107c521e8(pcVar7);
    pcVar2 = pcVar9;
  }
  func_0x000107c61170(pcVar2);
LAB_103228dec:
  func_0x000107c61170(pcVar7);
  return;
}



/* Entry: 10322ade8; end: 10322ae2b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_10322ade8(undefined8 param_1,double param_2,double param_3,double param_4,long param_5,
             undefined8 param_6,ulong param_7)

{
  bool bVar1;
  undefined1 uVar2;
  undefined **ppuVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  ulong *puVar11;
  undefined *puVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  undefined8 unaff_x20;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  code *pcVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong uVar23;
  undefined2 uVar24;
  ushort uVar25;
  undefined2 uVar26;
  undefined2 uVar27;
  undefined2 uVar28;
  undefined1 auVar29 [16];
  undefined *puStack_830;
  ulong uStack_828;
  long lStack_820;
  code *pcStack_818;
  long lStack_810;
  undefined **ppuStack_808;
  ulong uStack_800;
  undefined8 uStack_7f8;
  undefined1 auStack_7e8 [24];
  undefined8 uStack_7d0;
  ulong uStack_7c8;
  undefined1 auStack_7c0 [24];
  undefined1 auStack_7a8 [208];
  ulong uStack_6d8;
  undefined1 auStack_6d0 [208];
  ulong uStack_600;
  undefined1 auStack_5f8 [208];
  ulong uStack_528;
  undefined1 auStack_520 [24];
  ulong uStack_508;
  undefined8 uStack_500;
  undefined8 uStack_4f8;
  undefined8 uStack_4f0;
  double dStack_4e8;
  undefined8 uStack_4e0;
  undefined8 uStack_4d8;
  undefined8 uStack_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 uStack_4b0;
  double dStack_4a8;
  undefined8 uStack_4a0;
  double dStack_498;
  undefined8 uStack_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 uStack_467;
  undefined1 auStack_448 [24];
  undefined8 uStack_430;
  ulong uStack_428;
  undefined *puStack_378;
  undefined1 auStack_370 [24];
  undefined8 uStack_358;
  ulong uStack_350;
  ulong uStack_2a0;
  undefined *puStack_298;
  ulong uStack_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  double dStack_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  double dStack_230;
  undefined8 uStack_228;
  double dStack_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1ef;
  ulong uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  double dStack_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  double dStack_180;
  undefined8 uStack_178;
  double dStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_13f;
  ulong uStack_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  double dStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  double dStack_d0;
  undefined8 uStack_c8;
  double dStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_8f;
  
  uVar28 = (undefined2)((ulong)param_1 >> 0x30);
  uVar27 = (undefined2)((ulong)param_1 >> 0x20);
  uVar26 = (undefined2)((ulong)param_1 >> 0x10);
  uVar24 = (undefined2)param_1;
  func_0x000107c614f0();
  ppuStack_808 = &PTR_DAT_11062c210;
  uVar8 = *(undefined8 *)(param_5 + 0x18);
  lVar6 = *(long *)(param_5 + 0x20);
  uStack_800 = param_7;
  uStack_7f8 = unaff_x20;
  func_0x0001000a8868(param_5,uVar8);
  lVar5 = 0;
  func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
  lVar19 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar23 = (long)&puStack_830 - extraout_x8;
  (**(code **)(lVar6 + 0x28))(uVar23,uVar8,lVar6);
  func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
  lVar7 = lVar6;
  func_0x00010322b060();
  uVar17 = uVar23;
  FUN_10322b46c(uVar23,lVar5,&UNK_11076af50,lVar6,lVar7);
  lStack_810 = param_5;
  if ((uVar17 & 1) == 0) {
    (**(code **)(lVar19 + 8))(uVar23,lVar5);
LAB_10324ba3c:
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    lVar5 = 0;
    func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
    lVar19 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar21 = uVar23 - extraout_x8_00;
    (**(code **)(lVar6 + 0x28))(uVar21,uVar8,lVar6);
    func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
    lVar7 = lVar6;
    func_0x00010322b260();
    uVar17 = uVar21;
    FUN_10322b46c(uVar21,lVar5,&UNK_11076b850,lVar6,lVar7);
    if ((uVar17 & 1) == 0) {
      (**(code **)(lVar19 + 8))(uVar21,lVar5);
    }
    else {
      uVar8 = *(undefined8 *)(param_5 + 0x18);
      lVar6 = *(long *)(param_5 + 0x20);
      func_0x0001000a8868(param_5,uVar8);
      (**(code **)(lVar6 + 0x30))(auStack_5f8,uVar8,lVar6);
      FUN_103202330(uStack_528);
      func_0x00010322ed34(auStack_5f8);
      uVar17 = uStack_528;
      func_0x0001044109f4(uStack_528,3);
      func_0x00010321d6b8(uStack_528);
      (**(code **)(lVar19 + 8))(uVar21,lVar5);
      if ((uVar17 & 1) != 0) goto LAB_10324bb68;
    }
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    lVar5 = 0;
    func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
    lVar19 = *(long *)(lVar5 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar21 = uVar23 - extraout_x8_01;
    (**(code **)(lVar6 + 0x28))(uVar21,uVar8,lVar6);
    func_0x000107c614b4(lVar6,uVar8,lVar5,&UNK_10e804840,&UNK_10e804850);
    lVar7 = lVar6;
    func_0x00010322b1a0();
    uVar17 = uVar21;
    FUN_10322b46c(uVar21,lVar5,&UNK_11076afd0,lVar6,lVar7);
    (**(code **)(lVar19 + 8))(uVar21,lVar5);
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    if ((uVar17 & 1) == 0) {
      puVar10 = (undefined1 *)0x0;
      func_0x000107c614b8(0,lVar6,uVar8,&UNK_10e804840,&UNK_10e804858);
      lVar5 = *(long *)(puVar10 + -8);
      (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0)
      ;
      uVar23 = uVar23 - extraout_x8_02;
      (**(code **)(lVar6 + 0x28))(uVar23,uVar8,lVar6);
      func_0x000107c614b4(lVar6,uVar8,puVar10,&UNK_10e804840,&UNK_10e804850);
      lVar7 = lVar6;
      FUN_1032013d4();
      uVar17 = uVar23;
      FUN_10322b46c(uVar23,puVar10,&UNK_11076bad0,lVar6,lVar7);
      (**(code **)(lVar5 + 8))(uVar23);
      if ((uVar17 & 1) != 0) {
        uVar8 = *(undefined8 *)(param_5 + 0x18);
        lVar6 = *(long *)(param_5 + 0x20);
        func_0x0001000a8868(param_5,uVar8);
        (**(code **)(lVar6 + 0x30))(auStack_520,uVar8,lVar6);
        uStack_218 = uStack_490;
        dStack_220 = dStack_498;
        uStack_208 = uStack_480;
        uStack_210 = uStack_488;
        uStack_200 = uStack_478;
        uStack_1ef = uStack_467;
        uStack_248 = uStack_4c0;
        uStack_250 = uStack_4c8;
        uStack_238 = uStack_4b0;
        uStack_240 = uStack_4b8;
        uStack_228 = uStack_4a0;
        dStack_230 = dStack_4a8;
        uStack_288 = uStack_500;
        uStack_290 = uStack_508;
        uStack_278 = uStack_4f0;
        uStack_280 = uStack_4f8;
        uStack_268 = uStack_4e0;
        dStack_270 = dStack_4e8;
        uStack_258 = uStack_4d0;
        uStack_260 = uStack_4d8;
        puVar10 = auStack_370;
        FUN_10324e138(&uStack_290,puVar10,0x112f4d5c8,&UNK_10db9f700);
        func_0x00010322ed34(auStack_520);
        uStack_168 = uStack_218;
        dStack_170 = dStack_220;
        uStack_158 = uStack_208;
        uStack_160 = uStack_210;
        uStack_150 = uStack_200;
        uStack_13f = uStack_1ef;
        uStack_198 = uStack_248;
        uStack_1a0 = uStack_250;
        uStack_188 = uStack_238;
        uStack_190 = uStack_240;
        uStack_178 = uStack_228;
        dStack_180 = dStack_230;
        uStack_1d8 = uStack_288;
        uStack_1e0 = uStack_290;
        uStack_1c8 = uStack_278;
        uStack_1d0 = uStack_280;
        uStack_1b8 = uStack_268;
        dStack_1c0 = dStack_270;
        uStack_1a8 = uStack_258;
        uStack_1b0 = uStack_260;
        iVar4 = (int)&uStack_1e0;
        FUN_103233944();
        if (iVar4 != 1) {
          uStack_b8 = uStack_168;
          dStack_c0 = dStack_170;
          uStack_a8 = uStack_158;
          uStack_b0 = uStack_160;
          uStack_a0 = uStack_150;
          uStack_8f = uStack_13f;
          uStack_e8 = uStack_198;
          uStack_f0 = uStack_1a0;
          uStack_d8 = uStack_188;
          uStack_e0 = uStack_190;
          uStack_c8 = uStack_178;
          dStack_d0 = dStack_180;
          uStack_128 = uStack_1d8;
          uStack_130 = uStack_1e0;
          uStack_118 = uStack_1c8;
          uStack_120 = uStack_1d0;
          uVar24 = (undefined2)uStack_1b0;
          uVar26 = (undefined2)((ulong)uStack_1b0 >> 0x10);
          uVar27 = (undefined2)((ulong)uStack_1b0 >> 0x20);
          uVar28 = (undefined2)((ulong)uStack_1b0 >> 0x30);
          uStack_108 = uStack_1b8;
          dStack_110 = dStack_1c0;
          uStack_f8 = uStack_1a8;
          uStack_100 = uStack_1b0;
          iVar4 = (int)&uStack_130;
          param_2 = dStack_1c0;
          param_3 = dStack_170;
          param_4 = dStack_180;
          FUN_103238538();
          puVar11 = &uStack_130;
          func_0x000100d3e680();
          if (iVar4 == 2) {
            uVar17 = *puVar11;
            puVar10 = (undefined1 *)0x0;
            FUN_1032584ac();
            func_0x000107c610f8();
            func_0x000107c453e4();
            if (uVar17 >> 0x3e == 0) {
              uStack_828 = *(ulong *)((uVar17 & 0xffffffffffffff8) + 0x10);
            }
            else {
              uVar23 = uVar17 & 0xffffffffffffff8;
              if (0x7fffffffffffffff < uVar17) {
                uVar23 = uVar17;
              }
              func_0x000107c60480();
              uStack_828 = uVar23;
            }
            uVar17 = uStack_800;
            func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
            uVar8 = *(undefined8 *)(param_5 + 0x18);
            lVar6 = *(long *)(param_5 + 0x20);
            func_0x0001000a8868(param_5,uVar8);
            (**(code **)(lVar6 + 0x30))(auStack_448,uVar8,lVar6);
            puStack_298 = puStack_378;
            FUN_1032436a4(&puStack_298,auStack_370);
            func_0x00010322ed34(auStack_448);
            puVar12 = puStack_298;
            if (puStack_298 < (undefined *)0xb) {
              FUN_10322b8e8(&puStack_298);
              puVar12 = PTR___swiftEmptyArrayStorage_11034f1c8;
            }
            uVar23 = uStack_828;
            if ((long)uStack_828 < 0) {
                    /* WARNING: Does not return */
              pcVar20 = (code *)SoftwareBreakpoint(1,0x10324c6e0);
              (*pcVar20)();
            }
            if (uStack_828 == 0) {
              func_0x000107c6142c();
              ppuVar22 = &PTR_DAT_11062c160;
              uVar8 = uStack_7f8;
            }
            else {
              uStack_800 = *(ulong *)(puVar12 + 0x10);
              pcStack_818 = *(code **)(uVar17 + 0x38);
              lStack_820 = _DAT_112f4eec0;
              puStack_830 = puVar12;
              func_0x000107c61428(puVar10 + _DAT_112f4eec0,auStack_7c0,0,0);
              uVar21 = 0;
              do {
                if (uVar21 < uStack_800) {
                  if (*(ulong *)(puStack_830 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
                    pcVar20 = (code *)SoftwareBreakpoint(1,0x10324c6c4);
                    (*pcVar20)();
                  }
                  uVar18 = *(ulong *)(puStack_830 + uVar21 * 8 + 0x20);
                  FUN_103202330(uVar18);
                }
                else {
                  uVar8 = *(undefined8 *)(param_5 + 0x18);
                  lVar6 = *(long *)(param_5 + 0x20);
                  func_0x0001000a8868(param_5,uVar8);
                  uVar23 = uStack_828;
                  (**(code **)(lVar6 + 0x30))(auStack_370,uVar8,lVar6);
                  uVar18 = uStack_2a0;
                  FUN_103202330(uStack_2a0);
                  func_0x00010322ed34(auStack_370);
                }
                uVar21 = uVar21 + 1;
                uVar13 = uVar18;
                FUN_10324e47c(uVar18);
                func_0x00010321d6b8(uVar18);
                uVar8 = uStack_7f8;
                uVar9 = 0;
                func_0x000107c614b8(0,uVar17,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
                uVar18 = uVar17;
                uStack_7d0 = uVar9;
                func_0x000107c614b4(uVar17,uVar8,uVar9,&UNK_10e75223c,&UNK_10e75224c);
                puVar15 = auStack_7e8;
                uStack_7c8 = uVar18;
                func_0x0001000c5db4(puVar15);
                (*pcStack_818)(puVar15,uVar8,uVar17);
                func_0x000103254b00(0);
                func_0x000107c610f8();
                param_2 = 0.0;
                param_3 = 0.0;
                param_4 = 0.0;
                uVar8 = 3;
                FUN_1032516ac(0,3,uVar13,0,auStack_7e8,0,0);
                func_0x000107c5a050();
                uVar24 = 0;
                FUN_103253cf0(0,1);
                uVar26 = 0x437a;
                uVar27 = 0;
                uVar28 = 0;
                func_0x000103253e20(1);
                func_0x000107c3d5b4(*(undefined8 *)(puVar10 + lStack_820));
                func_0x000107c61170(uVar8);
              } while (uVar23 != uVar21);
              func_0x000107c6142c(puStack_830);
              ppuVar22 = &PTR_DAT_11062c160;
              uVar8 = uStack_7f8;
            }
            goto LAB_10324c464;
          }
          puVar10 = (undefined1 *)0x112f4d5c8;
          func_0x00010324e180(&uStack_290,0x112f4d5c8,&UNK_10db9f700);
        }
      }
      FUN_10324e4e0();
      if (puVar10 == (undefined1 *)0x0) {
        uVar8 = *(undefined8 *)(param_5 + 0x30);
        FUN_10324e47c(uVar8);
      }
      else {
        func_0x000107c6142c(puVar10);
        uVar8 = 4;
      }
      uVar17 = uStack_800;
      puVar10 = *(undefined1 **)(param_5 + 0x18);
      uVar9 = *(undefined8 *)(param_5 + 0x20);
      lVar6 = param_5;
      func_0x0001000a8868(param_5,puVar10);
      FUN_10324e314(puVar10,uVar9,lVar6);
      uVar9 = uStack_7f8;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      pcVar20 = *(code **)(uVar17 + 0x38);
      uVar14 = 0;
      func_0x000107c614b8(0,uVar17,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar23 = uVar17;
      uStack_358 = uVar14;
      func_0x000107c614b4(uVar17,uVar9,uVar14,&UNK_10e75223c,&UNK_10e75224c);
      puVar15 = auStack_370;
      uStack_350 = uVar23;
      func_0x0001000c5db4(puVar15);
      (*pcVar20)(puVar15,uVar9,uVar17);
      func_0x000103254b00(0);
      func_0x000107c610f8();
      uVar24 = 0;
      uVar26 = 0;
      uVar27 = 0;
      uVar28 = 0;
      param_2 = 0.0;
      param_3 = 0.0;
      param_4 = 0.0;
      FUN_1032516ac(puVar10,uVar8,uVar2,auStack_370,0,0);
      uVar23 = *(ulong *)(param_5 + 0x30);
      func_0x0001044109f4(uVar23,3);
      if ((uVar23 & 1) != 0) {
        func_0x000107c59c74(*(undefined8 *)(puVar10 + _DAT_112f4ecc0));
      }
      ppuVar22 = &PTR_DAT_11062bac0;
      uVar8 = uStack_7f8;
    }
    else {
      (**(code **)(lVar6 + 0x30))(auStack_370,uVar8,lVar6);
      FUN_103202330(uStack_2a0);
      func_0x00010322ed34(auStack_370);
      uVar23 = uStack_2a0;
      func_0x0001044109f4(uStack_2a0,1);
      func_0x00010321d6b8(uStack_2a0);
      puVar10 = *(undefined1 **)(param_5 + 0x18);
      uVar8 = *(undefined8 *)(param_5 + 0x20);
      lVar6 = param_5;
      func_0x0001000a8868(param_5,puVar10);
      FUN_10324e314(puVar10,uVar8,lVar6);
      uVar17 = uStack_800;
      uVar2 = *(undefined1 *)(param_5 + 0x29);
      uVar8 = 0;
      func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
      uVar21 = uVar17;
      func_0x000107c614b4(uVar17,uStack_7f8,uVar8,&UNK_10e75223c,&UNK_10e75224c);
      bVar1 = (uVar23 & 1) == 0;
      uStack_430 = uVar8;
      uStack_428 = uVar21;
      if (bVar1) {
        pcVar20 = *(code **)(uVar17 + 0x38);
        puVar15 = auStack_448;
        func_0x0001000c5db4(puVar15);
        (*pcVar20)(puVar15,uStack_7f8,uVar17);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      else {
        pcVar20 = *(code **)(uVar17 + 0x38);
        puVar15 = auStack_448;
        func_0x0001000c5db4(puVar15);
        (*pcVar20)(puVar15,uStack_7f8,uVar17);
        func_0x000103254b00(0);
        func_0x000107c610f8();
      }
      param_4 = 0.0;
      param_3 = 0.0;
      param_2 = 0.0;
      uVar28 = 0;
      uVar27 = 0;
      uVar26 = 0;
      uVar24 = 0;
      FUN_1032516ac(puVar10,!bVar1,uVar2,auStack_448,0,0);
      ppuVar22 = &PTR_DAT_11062bac0;
      uVar8 = uStack_7f8;
    }
  }
  else {
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    (**(code **)(lVar6 + 0x30))(auStack_7a8,uVar8,lVar6);
    FUN_103202330(uStack_6d8);
    func_0x00010322ed34(auStack_7a8);
    uVar17 = uStack_6d8;
    func_0x0001044109f4(uStack_6d8,1);
    func_0x00010321d6b8(uStack_6d8);
    (**(code **)(lVar19 + 8))(uVar23,lVar5);
    if ((uVar17 & 1) != 0) goto LAB_10324ba3c;
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    lVar6 = *(long *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    (**(code **)(lVar6 + 0x30))(auStack_6d0,uVar8,lVar6);
    FUN_103202330(uStack_600);
    func_0x00010322ed34(auStack_6d0);
    uVar17 = uStack_600;
    func_0x0001044109f4(uStack_600,0);
    func_0x00010321d6b8(uStack_600);
    if ((uVar17 & 1) != 0) goto LAB_10324ba3c;
LAB_10324bb68:
    uVar17 = uStack_800;
    pcVar20 = *(code **)(uStack_800 + 0x38);
    uVar8 = 0;
    func_0x000107c614b8(0,uStack_800,uStack_7f8,&UNK_10e75223c,&UNK_10e75226c);
    uVar23 = uVar17;
    uStack_358 = uVar8;
    func_0x000107c614b4(uVar17,uStack_7f8,uVar8,&UNK_10e75223c,&UNK_10e75224c);
    puVar10 = auStack_370;
    uStack_350 = uVar23;
    func_0x0001000c5db4(puVar10);
    (*pcVar20)(puVar10,uStack_7f8,uVar17);
    uVar8 = *(undefined8 *)(param_5 + 0x18);
    uVar9 = *(undefined8 *)(param_5 + 0x20);
    func_0x0001000a8868(param_5,uVar8);
    FUN_10324e314(uVar8,uVar9,param_5);
    uVar9 = 0;
    FUN_103256bf4(0);
    func_0x000107c610f8();
    puVar10 = auStack_370;
    FUN_1032559a8(puVar10,uVar8,uVar9);
    ppuVar22 = &PTR_DAT_11062bf78;
    uVar8 = uStack_7f8;
  }
LAB_10324c464:
  ppuVar3 = ppuStack_808;
  pcVar20 = (code *)ppuStack_808[1];
  (*pcVar20)(uVar8,ppuStack_808);
  uVar25 = NEON_uminv(CONCAT26(-(ushort)(param_4 ==
                                        *(double *)
                                         (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x18)),
                               CONCAT24(-(ushort)(param_3 ==
                                                 *(double *)
                                                  (PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 0x10
                                                  )),
                                        CONCAT22(-(ushort)(param_2 ==
                                                          *(double *)
                                                           (
                                                  PTR__NSDirectionalEdgeInsetsZero_1103457d8 + 8)),
                                                 -(ushort)((double)CONCAT26(uVar28,CONCAT24(uVar27,
                                                  CONCAT22(uVar26,uVar24))) ==
                                                  *(double *)
                                                   PTR__NSDirectionalEdgeInsetsZero_1103457d8)))),2)
  ;
  if ((uVar25 & 1) == 0) {
    puVar15 = puVar10;
    func_0x000107c614f0(puVar10);
    (*pcVar20)(uVar8,ppuVar3);
    (**(code **)(ppuVar22[1] + 0x10))(puVar15);
  }
  uVar9 = uVar8;
  uVar23 = uVar17;
  (**(code **)(uVar17 + 0x40))(uVar8);
  if (((uint)uVar23 & 0xff) != 1) {
    func_0x000107c614f0(puVar10);
    (*(code *)ppuVar22[7])((short)uVar9);
  }
  (**(code **)(uVar17 + 0xb8))(puVar10,ppuVar22,lStack_810,uVar8,uVar17);
  func_0x000107c5a050(puVar10);
  pcVar20 = *(code **)(uVar17 + 0x50);
  uVar9 = uVar8;
  (*pcVar20)(uVar8,uVar17);
  func_0x000107c3d89c();
  func_0x000107c61170(uVar9);
  puVar15 = puVar10;
  func_0x000107c5cbe4(puVar10);
  func_0x000107c61180();
  uVar9 = uVar8;
  (*pcVar20)(uVar8,uVar17);
  uVar14 = uVar9;
  func_0x000107c5cbe4();
  func_0x000107c61180();
  func_0x000107c61170(uVar9);
  puVar16 = puVar15;
  func_0x000107c40280(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar14);
  func_0x000107c521e8(puVar16);
  func_0x000107c61170(puVar16);
  puVar15 = puVar10;
  func_0x000107c3ec1c(puVar10);
  func_0x000107c61180();
  (*pcVar20)(uVar8,uVar17);
  uVar9 = uVar8;
  func_0x000107c3ec1c();
  func_0x000107c61180();
  func_0x000107c61170(uVar8);
  puVar16 = puVar15;
  func_0x000107c40280(puVar15);
  func_0x000107c61180();
  func_0x000107c61170(puVar15);
  func_0x000107c61170(uVar9);
  func_0x000107c521e8(puVar16);
  func_0x000107c61170(puVar16);
  auVar29._8_8_ = ppuVar22;
  auVar29._0_8_ = puVar10;
  return auVar29;
}



/* Entry: 10322ae2c; end: 10322aee3;  */

/* WARNING: Possible PIC construction at 0x00010324c894: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324c8fc: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324cb18: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ccb4: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce84: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce08: Changing call to branch */
/* WARNING: Possible PIC construction at 0x00010324ce6c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010324ce0c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce88) */
/* WARNING: Removing unreachable block (ram,0x00010324ccb8) */
/* WARNING: Removing unreachable block (ram,0x00010324cb1c) */
/* WARNING: Removing unreachable block (ram,0x00010324c900) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9a0) */
/* WARNING: Removing unreachable block (ram,0x00010324c9d4) */
/* WARNING: Removing unreachable block (ram,0x00010324cb24) */
/* WARNING: Removing unreachable block (ram,0x00010324cc28) */
/* WARNING: Removing unreachable block (ram,0x00010324ce8c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce90) */
/* WARNING: Removing unreachable block (ram,0x00010324cb3c) */
/* WARNING: Removing unreachable block (ram,0x00010324cc30) */
/* WARNING: Removing unreachable block (ram,0x00010324cc04) */
/* WARNING: Removing unreachable block (ram,0x00010324cc34) */
/* WARNING: Removing unreachable block (ram,0x00010324ccdc) */
/* WARNING: Removing unreachable block (ram,0x00010324ce1c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce24) */
/* WARNING: Removing unreachable block (ram,0x00010324ccec) */
/* WARNING: Removing unreachable block (ram,0x00010324cda8) */
/* WARNING: Removing unreachable block (ram,0x00010324cd98) */
/* WARNING: Removing unreachable block (ram,0x00010324cdf8) */
/* WARNING: Removing unreachable block (ram,0x00010324cc4c) */
/* WARNING: Removing unreachable block (ram,0x00010324ce80) */
/* WARNING: Removing unreachable block (ram,0x00010324cca8) */
/* WARNING: Removing unreachable block (ram,0x00010324ca98) */
/* WARNING: Removing unreachable block (ram,0x00010324c898) */
/* WARNING: Removing unreachable block (ram,0x00010324ce70) */
/* WARNING: Removing unreachable block (ram,0x00010324ce84) */

void FUN_10322ae2c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long extraout_x8;
  undefined8 unaff_x20;
  long lVar5;
  undefined1 auStack_4c0 [8];
  undefined **ppuStack_4b8;
  long lStack_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_488;
  undefined1 auStack_480 [24];
  undefined8 uStack_468;
  long lStack_460;
  
  func_0x000107c614f0();
  uVar1 = 0;
  FUN_1032584ac(0);
  lVar2 = param_1;
  func_0x000107c61480(param_1,uVar1);
  if (lVar2 == 0) {
    ppuStack_4b8 = &PTR_DAT_11062c210;
    uStack_4a8 = param_2;
    uStack_4a0 = param_5;
    uStack_488 = param_3;
    FUN_1031ddb84(param_3,auStack_480);
    lVar2 = param_1;
    func_0x000107c614f0();
    lStack_4b0 = lVar2;
    func_0x0001000a8868(auStack_480,uStack_468);
    lVar3 = 0;
    func_0x000107c614b8(0,lStack_460,uStack_468,&UNK_10e804840,&UNK_10e804858);
    lVar5 = *(long *)(lVar3 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lStack_460 + 0x28))(auStack_4c0 + -extraout_x8,uStack_468,lStack_460);
    func_0x000107c614b4(lStack_460,uStack_468,lVar3,&UNK_10e804840,&UNK_10e804850);
    lVar2 = lVar3;
    lVar4 = lStack_460;
    (**(code **)(lStack_460 + 0x18))(lVar3,lStack_460);
    func_0x000107c5fadc();
    func_0x000107c6142c(lVar4);
    (**(code **)(lVar5 + 8))(auStack_4c0 + -extraout_x8,lVar3);
    func_0x000107c520f4(param_1);
  }
  else {
    func_0x000107c61174(param_1);
    func_0x00010324ceb8(lVar2,param_3,unaff_x20,param_5,&PTR_DAT_11062c210);
    lVar2 = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(lVar2);
  return;
}



/* Entry: 10322aee4; end: 10322af3f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322aee4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  if ((*(char *)(param_1 + 0x28) != '\x01') ||
     ((*(byte *)(unaff_x20 + _DAT_112f4d8e8) >> 2 & 1) == 0)) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    func_0x0001000a8868(param_1,uVar1);
    FUN_10324e314(uVar1,uVar2,param_1);
  }
  return;
}



/* Entry: 10322af40; end: 10322af43;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10322af40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  code *pcVar4;
  
  func_0x000107c614f0();
  lVar2 = unaff_x20 + _DAT_112f4d8c8;
  lVar1 = lVar2;
  func_0x000107c61618();
  if (lVar1 != 0) {
    lVar3 = *(long *)(lVar2 + 8);
    lVar2 = lVar1;
    func_0x000107c614f0();
    pcVar4 = *(code **)(lVar3 + 8);
    func_0x000107c61174();
    (*pcVar4)(&stack0xffffffffffffff78,param_1,param_2,param_3,param_4,param_5,param_6,lVar2,lVar3);
    func_0x000107c615e8(lVar1);
    func_0x0001000834e4(&stack0xffffffffffffff78);
  }
  return;
}



/* Entry: 10322af44; end: 10322af8b;  */

void FUN_10322af44(void)

{
  FUN_10324d7c8();
  return;
}



/* Entry: 10322af8c; end: 10322af9f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10322af8c(void)

{
  long *unaff_x20;
  
  return *(undefined1 *)(*unaff_x20 + _DAT_112f4d938);
}



/* Entry: 10322afa0; end: 10322b2ff;  */

void FUN_10322afa0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d838 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_10dcfa85c;
  func_0x000107c61520(&DAT_10dcfa85c,&UNK_11076acd0);
  puRam0000000112f4d838 = puVar1;
  return;
}



/* Entry: 10322b300; end: 10322b313;  */

undefined1  [16] FUN_10322b300(void)

{
  return ZEXT816(0x110628a78);
}



/* Entry: 10322b314; end: 10322b353;  */

void FUN_10322b314(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d968 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fd00;
  func_0x000107c61520(&UNK_10db9fd00,&UNK_110628a78);
  puRam0000000112f4d968 = puVar1;
  return;
}



/* Entry: 10322b354; end: 10322b357;  */

void FUN_10322b354(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fcd0;
  func_0x000107c61520(&UNK_10db9fcd0,&UNK_110628a78);
  puRam0000000112f4d970 = puVar1;
  return;
}



/* Entry: 10322b358; end: 10322b397;  */

void FUN_10322b358(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d970 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fcd0;
  func_0x000107c61520(&UNK_10db9fcd0,&UNK_110628a78);
  puRam0000000112f4d970 = puVar1;
  return;
}



/* Entry: 10322b398; end: 10322b39b;  */

void FUN_10322b398(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fdf0;
  func_0x000107c61520(&UNK_10db9fdf0,&UNK_110628a78);
  puRam0000000112f4d978 = puVar1;
  return;
}



/* Entry: 10322b39c; end: 10322b3db;  */

void FUN_10322b39c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d978 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fdf0;
  func_0x000107c61520(&UNK_10db9fdf0,&UNK_110628a78);
  puRam0000000112f4d978 = puVar1;
  return;
}



/* Entry: 10322b3dc; end: 10322b3df;  */

void FUN_10322b3dc(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fd28;
  func_0x000107c61520(&UNK_10db9fd28,&UNK_110628a78);
  puRam0000000112f4d980 = puVar1;
  return;
}



/* Entry: 10322b3e0; end: 10322b41f;  */

void FUN_10322b3e0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4d980 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9fd28;
  func_0x000107c61520(&UNK_10db9fd28,&UNK_110628a78);
  puRam0000000112f4d980 = puVar1;
  return;
}



/* Entry: 10322b420; end: 10322b437;  */

undefined ** FUN_10322b420(void)

{
  return &PTR_DAT_11062b7d8;
}



/* Entry: 10322b438; end: 10322b46b;  */

undefined8 FUN_10322b438(undefined8 param_1)

{
  (*(code *)(undefined *)0x10324e854)();
  return param_1;
}



/* Entry: 10322b46c; end: 10322b53f;  */

void FUN_10322b46c(undefined8 param_1,long param_2,long param_3)

{
  undefined1 *puVar1;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40),param_1,param_1);
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(*(long *)(param_2 + -8) + 0x40));
  lVar3 = (long)puVar2 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(extraout_x12 + 0x10))(lVar3);
  puVar1 = puVar2;
  func_0x000107c6147c(puVar2,lVar3,param_2,param_3,6);
  if ((int)puVar1 != 0) {
    (**(code **)(lVar4 + 8))(puVar2,param_3);
  }
  return;
}



/* Entry: 10322b540; end: 10322b5f3;  */

void FUN_10322b540(undefined8 param_1,long *param_2,long *param_3)

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



/* Entry: 10322b5f4; end: 10322b603;  */

void FUN_10322b5f4(ulong param_1)

{
  if (param_1 == 0xb) {
    return;
  }
  if (param_1 < 0xb) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10322b604; end: 10322b6cb;  */

undefined8 FUN_10322b604(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0x112f4da68;
  func_0x0001000285a8(0x112f4da68,&UNK_10db9fec0);
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_2,param_1,lVar1);
  return param_2;
}



/* Entry: 10322b6cc; end: 10322b6db;  */

void FUN_10322b6cc(ulong param_1)

{
  if (param_1 == 0xb) {
    return;
  }
  if (param_1 < 0xb) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)();
  return;
}



/* Entry: 10322b6dc; end: 10322b723;  */

undefined8 FUN_10322b6dc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  func_0x0001000285a8(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(param_2,param_1,param_3);
  return param_2;
}



/* Entry: 10322b724; end: 10322b73b;  */

void FUN_10322b724(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Entry: 10322b73c; end: 10322b77f;  */

/* WARNING: Possible PIC construction at 0x00010322b750: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010322b754) */
/* WARNING: Removing unreachable block (ram,0x00010322b774) */
/* WARNING: Removing unreachable block (ram,0x00010322b768) */

void FUN_10322b73c(undefined8 *param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(*param_1);
  return;
}



/* Entry: 10322b780; end: 10322b8e7;  */

undefined8 * FUN_10322b780(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  if (uVar2 < 0xb) {
    param_1[2] = uVar2;
  }
  else if (uVar2 == 0xb) {
    param_1[2] = 0xb;
  }
  else {
    param_1[2] = uVar2;
    func_0x000107c61434(uVar2);
  }
  return param_1;
}



/* Entry: 10322b8e8; end: 10322b91b;  */

undefined8 FUN_10322b8e8(undefined8 param_1)

{
  (*(code *)&DAT_104410c60)();
  return param_1;
}



/* Entry: 10322b91c; end: 10322b9d3;  */

undefined8 * FUN_10322b91c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong *puVar2;
  ulong uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  func_0x000107c6142c(uVar1);
  puVar2 = param_1 + 2;
  uVar3 = param_2[2];
  if (*puVar2 != 0xb) {
    if (uVar3 == 0xb) {
      FUN_10322b8e8(puVar2);
      *puVar2 = 0xb;
      return param_1;
    }
    if (10 < *puVar2) {
      if (10 < uVar3) {
        *puVar2 = uVar3;
        func_0x000107c6142c();
        return param_1;
      }
      FUN_10322bdc4(puVar2,0x112f4da78,&UNK_10db9fed0);
    }
  }
  *puVar2 = uVar3;
  return param_1;
}



/* Entry: 10322b9d4; end: 10322ba6b;  */

int FUN_10322b9d4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10322ba6c; end: 10322bbc7;  */

bool FUN_10322ba6c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined1 auStack_b0 [8];
  long lStack_a8;
  undefined1 *puStack_a0;
  undefined8 uStack_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  undefined8 uStack_68;
  
  lStack_90 = param_2 + 0x20;
  lVar6 = *(long *)(param_2 + 0x10) + 1;
  lStack_a8 = param_1;
  do {
    lVar6 = lVar6 + -1;
    if (lVar6 == 0) break;
    lVar5 = lStack_90;
    lStack_90 = lStack_90 + 0x28;
    FUN_10322bbc8(lVar5,auStack_88);
    uVar2 = uStack_70;
    uStack_98 = uStack_68;
    puVar3 = auStack_88;
    func_0x0001000a8868(puVar3,uStack_70);
    uVar1 = *(undefined8 *)(lStack_a8 + 0x18);
    lVar5 = *(long *)(lStack_a8 + 0x20);
    puStack_a0 = puVar3;
    func_0x0001000a8868(lStack_a8,uVar1);
    lVar4 = 0;
    func_0x000107c614b8(0,lVar5,uVar1,&UNK_10e804840,&UNK_10e804858);
    lVar7 = *(long *)(lVar4 + -8);
    (*(code *)PTR____chkstk_darwin_11034bd40)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar5 + 0x28))(auStack_b0 + -extraout_x8,uVar1,lVar5);
    func_0x000107c614b4(lVar5,uVar1,lVar4,&UNK_10e804840,&UNK_10e804850);
    puVar3 = puStack_a0;
    FUN_10322b46c(puStack_a0,uVar2,lVar4,uStack_98,lVar5);
    (**(code **)(lVar7 + 8))(auStack_b0 + -extraout_x8,lVar4);
    func_0x0001000834e4(auStack_88);
  } while (((ulong)puVar3 & 1) == 0);
  return lVar6 != 0;
}



/* Entry: 10322bbc8; end: 10322bc0b;  */

long FUN_10322bbc8(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10322bc0c; end: 10322bdc3;  */

uint FUN_10322bc0c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long lVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  undefined1 auStack_d0 [4];
  uint uStack_cc;
  undefined1 *puStack_c8;
  undefined8 uStack_c0;
  long lStack_b8;
  undefined1 auStack_b0 [24];
  long lStack_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 uStack_70;
  long lStack_68;
  
  func_0x0001031e2fb0(param_1,auStack_b0);
  if (lStack_98 == 0) {
    FUN_10322bdc4(auStack_b0,0x112f4b310,&UNK_10db9fef0);
    uStack_cc = 0;
  }
  else {
    FUN_1031ddc20(auStack_b0,auStack_88);
    if (*(long *)(param_2 + 0x10) == 0) {
      func_0x0001000834e4(auStack_88);
      uStack_cc = 1;
    }
    else {
      lVar7 = *(long *)(param_2 + 0x10) + 1;
      lVar2 = param_2 + 0x20;
      do {
        lVar7 = lVar7 + -1;
        uStack_cc = (uint)(lVar7 != 0);
        if (lVar7 == 0) break;
        lStack_b8 = lVar2 + 0x28;
        FUN_10322bbc8(lVar2,auStack_b0);
        lVar2 = lStack_98;
        uStack_c0 = uStack_90;
        puVar3 = auStack_b0;
        func_0x0001000a8868(puVar3,lStack_98);
        lVar5 = lStack_68;
        uVar1 = uStack_70;
        puStack_c8 = puVar3;
        func_0x0001000a8868(auStack_88,uStack_70);
        lVar4 = 0;
        func_0x000107c614b8(0,lVar5,uVar1,&UNK_10e804840,&UNK_10e804858);
        lVar6 = *(long *)(lVar4 + -8);
        (*(code *)PTR____chkstk_darwin_11034bd40)
                  (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar5 + 0x28))(auStack_d0 + -extraout_x8,uVar1,lVar5);
        func_0x000107c614b4(lVar5,uVar1,lVar4,&UNK_10e804840,&UNK_10e804850);
        puVar3 = puStack_c8;
        FUN_10322b46c(puStack_c8,lVar2,lVar4,uStack_c0,lVar5);
        (**(code **)(lVar6 + 8))(auStack_d0 + -extraout_x8,lVar4);
        func_0x0001000834e4(auStack_b0);
        lVar2 = lStack_b8;
      } while (((ulong)puVar3 & 1) == 0);
      func_0x0001000834e4(auStack_88);
    }
  }
  return uStack_cc;
}



/* Entry: 10322bdc4; end: 10322be03;  */

undefined8 FUN_10322bdc4(undefined8 param_1,long param_2,undefined8 param_3)

{
  func_0x0001000285a8(param_2,param_3);
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  return param_1;
}



/* Entry: 10322be04; end: 10322bfc3;  */

undefined8 * FUN_10322be04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  ulong uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar2 = param_2[2];
  func_0x000107c61434();
  func_0x000107c61434(uVar1);
  if (uVar2 < 0xb) {
    param_1[2] = uVar2;
  }
  else if (uVar2 == 0xb) {
    param_1[2] = 0xb;
  }
  else {
    param_1[2] = uVar2;
    func_0x000107c61434(uVar2);
  }
  return param_1;
}



/* Entry: 10322bfc4; end: 10322c06b;  */

void FUN_10322bfc4(ulong *param_1,long param_2)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  undefined1 auVar25 [16];
  undefined8 uVar41;
  undefined8 uVar42;
  undefined8 uVar43;
  undefined8 uVar44;
  
  uVar2 = *(ulong *)(param_2 + 0x10);
  if (uVar2 == 0) {
    uVar7 = 0;
  }
  else {
    if (uVar2 < 4) {
      uVar4 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7ffffffffffffffc;
      puVar6 = (undefined8 *)(param_2 + 0x30);
      bVar8 = 0;
      bVar9 = 0;
      bVar10 = 0;
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar28 = 0;
      bVar29 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      uVar7 = uVar4;
      do {
        uVar42 = puVar6[-1];
        uVar41 = puVar6[-2];
        uVar44 = puVar6[1];
        uVar43 = *puVar6;
        bVar8 = (byte)uVar41 | bVar8;
        bVar9 = (byte)((ulong)uVar41 >> 8) | bVar9;
        bVar10 = (byte)((ulong)uVar41 >> 0x10) | bVar10;
        bVar11 = (byte)((ulong)uVar41 >> 0x18) | bVar11;
        bVar12 = (byte)((ulong)uVar41 >> 0x20) | bVar12;
        bVar13 = (byte)((ulong)uVar41 >> 0x28) | bVar13;
        bVar14 = (byte)((ulong)uVar41 >> 0x30) | bVar14;
        bVar15 = (byte)((ulong)uVar41 >> 0x38) | bVar15;
        bVar16 = (byte)uVar42 | bVar16;
        bVar17 = (byte)((ulong)uVar42 >> 8) | bVar17;
        bVar18 = (byte)((ulong)uVar42 >> 0x10) | bVar18;
        bVar19 = (byte)((ulong)uVar42 >> 0x18) | bVar19;
        bVar20 = (byte)((ulong)uVar42 >> 0x20) | bVar20;
        bVar21 = (byte)((ulong)uVar42 >> 0x28) | bVar21;
        bVar22 = (byte)((ulong)uVar42 >> 0x30) | bVar22;
        bVar23 = (byte)((ulong)uVar42 >> 0x38) | bVar23;
        bVar24 = (byte)uVar43 | bVar24;
        bVar26 = (byte)((ulong)uVar43 >> 8) | bVar26;
        bVar27 = (byte)((ulong)uVar43 >> 0x10) | bVar27;
        bVar28 = (byte)((ulong)uVar43 >> 0x18) | bVar28;
        bVar29 = (byte)((ulong)uVar43 >> 0x20) | bVar29;
        bVar30 = (byte)((ulong)uVar43 >> 0x28) | bVar30;
        bVar31 = (byte)((ulong)uVar43 >> 0x30) | bVar31;
        bVar32 = (byte)((ulong)uVar43 >> 0x38) | bVar32;
        bVar33 = (byte)uVar44 | bVar33;
        bVar34 = (byte)((ulong)uVar44 >> 8) | bVar34;
        bVar35 = (byte)((ulong)uVar44 >> 0x10) | bVar35;
        bVar36 = (byte)((ulong)uVar44 >> 0x18) | bVar36;
        bVar37 = (byte)((ulong)uVar44 >> 0x20) | bVar37;
        bVar38 = (byte)((ulong)uVar44 >> 0x28) | bVar38;
        bVar39 = (byte)((ulong)uVar44 >> 0x30) | bVar39;
        bVar40 = (byte)((ulong)uVar44 >> 0x38) | bVar40;
        puVar6 = puVar6 + 4;
        uVar7 = uVar7 - 4;
      } while (uVar7 != 0);
      bVar24 = bVar24 | bVar8;
      bVar26 = bVar26 | bVar9;
      bVar27 = bVar27 | bVar10;
      bVar28 = bVar28 | bVar11;
      bVar29 = bVar29 | bVar12;
      bVar30 = bVar30 | bVar13;
      bVar31 = bVar31 | bVar14;
      bVar32 = bVar32 | bVar15;
      auVar25[1] = bVar26;
      auVar25[0] = bVar24;
      auVar25[2] = bVar27;
      auVar25[3] = bVar28;
      auVar25[4] = bVar29;
      auVar25[5] = bVar30;
      auVar25[6] = bVar31;
      auVar25[7] = bVar32;
      auVar25[8] = bVar33 | bVar16;
      auVar25[9] = bVar34 | bVar17;
      auVar25[10] = bVar35 | bVar18;
      auVar25[0xb] = bVar36 | bVar19;
      auVar25[0xc] = bVar37 | bVar20;
      auVar25[0xd] = bVar38 | bVar21;
      auVar25[0xe] = bVar39 | bVar22;
      auVar25[0xf] = bVar40 | bVar23;
      auVar1[1] = bVar26;
      auVar1[0] = bVar24;
      auVar1[2] = bVar27;
      auVar1[3] = bVar28;
      auVar1[4] = bVar29;
      auVar1[5] = bVar30;
      auVar1[6] = bVar31;
      auVar1[7] = bVar32;
      auVar1[8] = bVar33 | bVar16;
      auVar1[9] = bVar34 | bVar17;
      auVar1[10] = bVar35 | bVar18;
      auVar1[0xb] = bVar36 | bVar19;
      auVar1[0xc] = bVar37 | bVar20;
      auVar1[0xd] = bVar38 | bVar21;
      auVar1[0xe] = bVar39 | bVar22;
      auVar1[0xf] = bVar40 | bVar23;
      auVar25 = NEON_ext(auVar25,auVar1,8,1);
      uVar7 = CONCAT17(bVar32 | auVar25[7],
                       CONCAT16(bVar31 | auVar25[6],
                                CONCAT15(bVar30 | auVar25[5],
                                         CONCAT14(bVar29 | auVar25[4],
                                                  CONCAT13(bVar28 | auVar25[3],
                                                           CONCAT12(bVar27 | auVar25[2],
                                                                    CONCAT11(bVar26 | auVar25[1],
                                                                             bVar24 | auVar25[0]))))
                                        )));
      if (uVar2 == uVar4) goto LAB_10322c058;
    }
    lVar3 = uVar2 - uVar4;
    puVar5 = (ulong *)(param_2 + uVar4 * 8 + 0x20);
    do {
      uVar7 = *puVar5 | uVar7;
      lVar3 = lVar3 + -1;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
LAB_10322c058:
  func_0x000107c6142c();
  *param_1 = uVar7;
  return;
}



/* Entry: 10322c06c; end: 10322c06f;  */

void FUN_10322c06c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ff40;
  func_0x000107c61520(&UNK_10db9ff40,&UNK_110628c98);
  puRam0000000112f4da80 = puVar1;
  return;
}



/* Entry: 10322c070; end: 10322c0af;  */

void FUN_10322c070(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da80 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ff40;
  func_0x000107c61520(&UNK_10db9ff40,&UNK_110628c98);
  puRam0000000112f4da80 = puVar1;
  return;
}



/* Entry: 10322c0b0; end: 10322c0b3;  */

void FUN_10322c0b0(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ff10;
  func_0x000107c61520(&UNK_10db9ff10,&UNK_110628c98);
  puRam0000000112f4da88 = puVar1;
  return;
}



/* Entry: 10322c0b4; end: 10322c0f3;  */

void FUN_10322c0b4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da88 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ff10;
  func_0x000107c61520(&UNK_10db9ff10,&UNK_110628c98);
  puRam0000000112f4da88 = puVar1;
  return;
}



/* Entry: 10322c0f4; end: 10322c0f7;  */

void FUN_10322c0f4(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba0030;
  func_0x000107c61520(&UNK_10dba0030,&UNK_110628c98);
  puRam0000000112f4da90 = puVar1;
  return;
}



/* Entry: 10322c0f8; end: 10322c137;  */

void FUN_10322c0f8(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10dba0030;
  func_0x000107c61520(&UNK_10dba0030,&UNK_110628c98);
  puRam0000000112f4da90 = puVar1;
  return;
}



/* Entry: 10322c138; end: 10322c13b;  */

void FUN_10322c138(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ff68;
  func_0x000107c61520(&UNK_10db9ff68,&UNK_110628c98);
  puRam0000000112f4da98 = puVar1;
  return;
}



/* Entry: 10322c13c; end: 10322c17b;  */

void FUN_10322c13c(void)

{
  undefined *puVar1;
  
  if (puRam0000000112f4da98 != (undefined *)0x0) {
    return;
  }
  puVar1 = &UNK_10db9ff68;
  func_0x000107c61520(&UNK_10db9ff68,&UNK_110628c98);
  puRam0000000112f4da98 = puVar1;
  return;
}



/* Entry: 10322c17c; end: 10322c183;  */

bool FUN_10322c17c(ulong *param_1)

{
  ulong *unaff_x20;
  
  return (*param_1 & (*unaff_x20 ^ 0xffffffffffffffff)) == 0;
}


