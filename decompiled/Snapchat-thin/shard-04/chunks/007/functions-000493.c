/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 10384b40c; end: 10384b43f;  */

void FUN_10384b40c(undefined1 *param_1)

{
  *param_1 = 1;
  return;
}



/* Entry: 10384b440; end: 10384b543;  */

undefined8 FUN_10384b440(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar5 = *param_1;
  uVar4 = param_1[1];
  func_0x0001006c733c(param_3);
  pcVar1 = FUN_10384b544;
  func_0x0001000c0ebc(FUN_10384b544,0);
  func_0x000107c61574(param_3);
  puVar2 = &UNK_11069de50;
  func_0x000107c613fc(&UNK_11069de50,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar4;
  puVar3 = &UNK_11069de78;
  func_0x000107c613fc(&UNK_11069de78,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_10384b6c0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  func_0x000107c61434(uVar4);
  uVar5 = 0x112d35ff8;
  func_0x0001000285a8(0x112d35ff8,&UNK_10d900cd0);
  uVar4 = 0x10384b6fc;
  func_0x0001000bfde0(0x10384b6fc,puVar3,uVar5);
  func_0x000107c61574(pcVar1);
  func_0x000107c61574(puVar3);
  uVar5 = 1;
  func_0x00010061b458(1);
  func_0x000107c61574(uVar4);
  func_0x00010487ba50();
  func_0x000107c61574(uVar5);
  return uVar4;
}



/* Entry: 10384b544; end: 10384b54b;  */

undefined1 FUN_10384b544(undefined1 *param_1)

{
  return *param_1;
}



/* Entry: 10384b54c; end: 10384b5ff;  */

void FUN_10384b54c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  uVar2 = *param_1;
  uVar1 = param_1[1];
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      func_0x000107c6157c(param_2);
      func_0x000107c5fadc(uVar2,uVar1);
      func_0x000107c3d0a0(lStack_50);
      func_0x000107c615e8(lStack_50);
      func_0x000107c61170(uVar2);
      func_0x000107c61574(param_2);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384b600; end: 10384b62b;  */

void FUN_10384b600(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  
  bVar1 = (byte)*param_2;
  func_0x000107c3ebcc();
  *param_1 = bVar1 ^ 1;
  return;
}



/* Entry: 10384b62c; end: 10384b69f;  */

void FUN_10384b62c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Entry: 10384b6a0; end: 10384b6bf;  */

void FUN_10384b6a0(undefined1 *param_1)

{
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined1 *puStack_50;
  undefined1 auStack_40 [16];
  undefined1 *puStack_30;
  
  if ((*(byte *)(unaff_x20 + 0x10) & 1) != 0) {
    *param_1 = 1;
    return;
  }
  *param_1 = 2;
  puStack_50 = param_1;
  puStack_30 = param_1;
  func_0x0001008bafdc(0x10384b740,auStack_40,0x10384b750,auStack_60,FUN_10384b0b0,0,0x10384b0b4,0);
  return;
}



/* Entry: 10384b6c0; end: 10384b72f;  */

undefined1  [16] FUN_10384b6c0(undefined8 param_1,ulong param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    func_0x000107c61434(uVar1);
  }
  auVar3._8_8_ = uVar1;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Entry: 10384b730; end: 10384b76b;  */

void FUN_10384b730(long param_1)

{
  if (param_1 == 1) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)();
  return;
}



/* Entry: 10384b76c; end: 10384b7cb; -[ARBarLEBrowserIntegrationServices init] */

void FUN_10384b76c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ARBarIntegration.ARBarLEBrowserIntegrationServices",0x32,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10384b798);
  (*pcVar1)();
}



/* Entry: 10384b7cc; end: 10384b7db; -[ARBarLEBrowserIntegrationServices .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384b7cc(long param_1)

{
  long lVar1;
  
  lVar1 = *(long *)(((undefined8 *)(param_1 + _DAT_112fa2d40))[3] + -8);
  if ((*(byte *)(lVar1 + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001000834f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa2d40));
  return;
}



/* Entry: 10384b7dc; end: 10384b8d7;  */

void FUN_10384b7dc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined1 auStack_88 [40];
  
  uVar1 = 0x112f9f1c8;
  func_0x0001000285a8(0x112f9f1c8,&UNK_10dc14750);
  func_0x0001000bda74(param_2,uVar1);
  FUN_10384c884(param_4,auStack_88);
  uVar1 = 0;
  FUN_1038746d0();
  func_0x000107c610f8();
  func_0x000107c615f0(param_6);
  func_0x000107c6157c(param_3);
  func_0x000107c61174(param_5);
  func_0x000103872c28(param_2,param_3,auStack_88,param_5,param_6,param_7,param_8,param_9);
  param_1[3] = uVar1;
  param_1[4] = &PTR_DAT_11069fa20;
  *param_1 = param_2;
  return;
}



/* Entry: 10384b8d8; end: 10384b913;  */

void FUN_10384b8d8(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c40a84(lVar1,param_3,0,0x1e);
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10384b914; end: 10384ba23;  */

void FUN_10384b914(undefined8 *param_1,long param_2)

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



/* Entry: 10384ba24; end: 10384bb07;  */

void FUN_10384ba24(undefined8 *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  undefined1 uStack_41;
  
  lVar4 = *param_2;
  if (lVar4 == 0) {
    func_0x0001000285a8(0x112d5ba30,&UNK_10d929a50);
    uStack_41 = (code)0x0;
    pcVar3 = (code *)&uStack_41;
    func_0x000100854cb0();
  }
  else {
    func_0x0001000285a8(0x112ea3e48,&UNK_10daddbf0);
    func_0x000107c61174(lVar4);
    lVar1 = lVar4;
    func_0x000107c5d6fc();
    func_0x000107c61180();
    lVar2 = lVar1;
    func_0x0001000b637c();
    func_0x000107c61170(lVar1);
    pcVar3 = FUN_10384bb08;
    func_0x0001000bfde0(FUN_10384bb08,0,PTR___sSbN_11034dd40);
    func_0x000107c61574(lVar2);
    func_0x000107c61170(lVar4);
  }
  *param_1 = pcVar3;
  return;
}



/* Entry: 10384bb08; end: 10384bb2f;  */

void FUN_10384bb08(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  func_0x000107c4a564();
  *param_1 = uVar1;
  return;
}



/* Entry: 10384bb30; end: 10384bbe3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384bb30(long *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  
  func_0x0001000285a8(0x112fa2e28,&UNK_10dc16a80);
  func_0x000107c4b130();
  func_0x000107c61180();
  uVar1 = param_2;
  func_0x0001000bda74();
  func_0x000107c61170(param_2);
  uVar4 = *(undefined8 *)(param_3 + _DAT_1130813f0);
  lVar2 = 0;
  func_0x00010381b510();
  lVar3 = lVar2;
  func_0x000107c613fc();
  *(undefined8 *)(lVar3 + 0x10) = uVar1;
  *(undefined8 *)(lVar3 + 0x18) = uVar4;
  param_1[3] = lVar2;
  param_1[4] = (long)&PTR_DAT_11069a350;
  *param_1 = lVar3;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0430. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_11034f4d0)(uVar4);
  return;
}



/* Entry: 10384bbe4; end: 10384bc77;  */

void FUN_10384bbe4(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  func_0x0001000a8868(param_2,uVar2);
  (**(code **)(lVar1 + 0x128))(uVar2,lVar1);
  *param_1 = uVar2;
  return;
}



/* Entry: 10384bc78; end: 10384bedf;  */

void FUN_10384bc78(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  long lVar7;
  undefined *puStack_a8;
  undefined8 uStack_a0;
  undefined *puStack_98;
  undefined *puStack_90;
  code *pcStack_88;
  undefined *puStack_80;
  undefined1 auStack_78 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_78,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    FUN_10381d0b4();
    lVar7 = param_2;
    func_0x000107c613fc();
    ppuVar6 = &PTR_DAT_11069a508;
  }
  else {
    func_0x0001000285a8(0x112f421e0,&UNK_10db8f110);
    lVar7 = param_2;
    func_0x000107c3e060(param_2);
    func_0x000107c61180();
    lVar1 = lVar7;
    func_0x0001000bda74();
    func_0x000107c61170(lVar7);
    uVar4 = 0x112fa2e30;
    func_0x0001000285a8(0x112fa2e30,&UNK_10dc16a88);
    pcVar2 = FUN_10384bee0;
    func_0x0001000cb480(FUN_10384bee0,0,uVar4);
    func_0x000107c61574(lVar1);
    func_0x0001000285a8(0x112fa04d0,&UNK_10dc16a90);
    lVar7 = param_2;
    func_0x000107c3e088();
    func_0x000107c61180();
    lVar1 = lVar7;
    func_0x0001000b637c();
    func_0x000107c61170(lVar7);
    lVar3 = 0;
    func_0x00010381cb04();
    lVar7 = lVar3;
    func_0x000107c613fc();
    *(undefined8 *)(lVar7 + 0x18) = 0;
    uVar4 = 0;
    func_0x0001000c6560();
    func_0x000107c613fc();
    func_0x0001000c6580();
    *(undefined8 *)(lVar7 + 0x30) = 0;
    *(undefined8 *)(lVar7 + 0x38) = 0;
    puVar5 = PTR___swiftEmptySetSingleton_11034f1d8;
    *(long *)(lVar7 + 0x48) = lVar1;
    *(undefined **)(lVar7 + 0x50) = puVar5;
    *(undefined8 *)(lVar7 + 0x10) = param_3;
    *(undefined8 *)(lVar7 + 0x40) = 0;
    *(code **)(lVar7 + 0x20) = pcVar2;
    *(undefined8 *)(lVar7 + 0x28) = uVar4;
    puVar5 = &UNK_11069df68;
    func_0x000107c613fc(&UNK_11069df68,0x18,7);
    func_0x000107c61644(puVar5 + 0x10,lVar7);
    pcStack_88 = FUN_10384c8c8;
    puStack_a8 = PTR___NSConcreteStackBlock_11034bd00;
    uStack_a0 = 0x42000000;
    puStack_98 = &UNK_100b5ebe4;
    puStack_90 = &UNK_11069df80;
    ppuVar6 = &puStack_a8;
    puStack_80 = puVar5;
    func_0x000107c60bc4(ppuVar6);
    puVar5 = puStack_80;
    func_0x000107c6157c(param_3);
    func_0x000107c6157c(lVar1);
    func_0x000107c6157c(pcVar2);
    func_0x000107c61574(puVar5);
    func_0x000107c5dc64(param_4);
    func_0x000107c60bd0(ppuVar6);
    func_0x000107c61170(param_2);
    func_0x000107c61574(pcVar2);
    func_0x000107c61574(lVar1);
    ppuVar6 = &PTR_DAT_11069a3b0;
    param_2 = lVar3;
  }
  param_1[3] = param_2;
  param_1[4] = (long)ppuVar6;
  *param_1 = lVar7;
  return;
}



/* Entry: 10384bee0; end: 10384beeb;  */

void FUN_10384bee0(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0598. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRetain_11034f540)();
  return;
}



/* Entry: 10384beec; end: 10384bf7f;  */

void FUN_10384beec(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61618();
  if (param_2 == 0) {
    lVar2 = 0;
  }
  else {
    lVar1 = param_2;
    func_0x000107c3e060();
    func_0x000107c61180();
    func_0x000107c61170(param_2);
    lVar2 = lVar1;
    func_0x000107c5c734();
    func_0x000107c61180();
    func_0x000107c61170(lVar1);
  }
  *param_1 = lVar2;
  return;
}



/* Entry: 10384bf80; end: 10384bf97;  */

void FUN_10384bf80(undefined8 param_1,undefined8 param_2)

{
  FUN_10384c884(param_2,param_1);
  return;
}



/* Entry: 10384bf98; end: 10384bff3;  */

void FUN_10384bf98(long *param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  func_0x00010381cda4();
  lVar2 = lVar1;
  func_0x000107c613fc();
  *(undefined8 *)(lVar2 + 0x10) = param_2;
  *(undefined8 *)(lVar2 + 0x18) = 1;
  param_1[3] = lVar1;
  param_1[4] = (long)&PTR_DAT_11069a468;
  *param_1 = lVar2;
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retain_11034d2d8)(param_2);
  return;
}



/* Entry: 10384bff4; end: 10384c04f;  */

void FUN_10384bff4(void)

{
  long unaff_x20;
  
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c615e8(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384c050; end: 10384c0f7;  */

long FUN_10384c050(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  func_0x000107c6157c(lVar1);
  return lVar1 + 0x10;
}



/* Entry: 10384c0f8; end: 10384c227;  */

undefined8 * FUN_10384c0f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  uVar3 = param_2[6];
  param_1[6] = uVar3;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar1;
  lVar2 = param_2[0xd];
  uVar1 = param_2[9];
  uVar6 = param_2[10];
  uVar4 = param_2[0xb];
  param_1[10] = uVar6;
  param_1[0xb] = uVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  func_0x000107c61434();
  func_0x000107c6157c(uVar5);
  func_0x000107c6157c(uVar3);
  func_0x000107c6157c(uVar1);
  func_0x000107c6157c(uVar6);
  func_0x000107c6157c(uVar4);
  if (lVar2 == 1) {
    lVar2 = param_2[0xd];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = lVar2;
  }
  else {
    uVar1 = param_2[0xe];
    param_1[0xd] = lVar2;
    param_1[0xe] = uVar1;
    func_0x000107c6157c(lVar2);
    func_0x000107c6157c(uVar1);
  }
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  lVar2 = param_2[0x13];
  if (lVar2 == 0) {
    uVar1 = param_2[0x10];
    uVar6 = param_2[0x13];
    uVar5 = param_2[0x12];
    param_1[0x11] = param_2[0x11];
    param_1[0x10] = uVar1;
    param_1[0x13] = uVar6;
    param_1[0x12] = uVar5;
    param_1[0x14] = param_2[0x14];
  }
  else {
    uVar1 = param_2[0x14];
    param_1[0x13] = lVar2;
    param_1[0x14] = uVar1;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1 + 0x10,param_2 + 0x10);
  }
  return param_1;
}



/* Entry: 10384c228; end: 10384c403;  */

undefined8 * FUN_10384c228(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c61434();
  func_0x000107c6142c(uVar2);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c6157c();
  func_0x000107c61574(uVar2);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c6157c();
  func_0x000107c61574(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar3 = param_1[9];
  uVar2 = param_2[9];
  uVar6 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar6;
  func_0x000107c6157c(uVar2);
  func_0x000107c61574(uVar3);
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c6157c();
  func_0x000107c61574(uVar2);
  uVar2 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c6157c();
  func_0x000107c61574(uVar2);
  plVar4 = param_1 + 0xd;
  lVar5 = *plVar4;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  lVar1 = param_2[0xd];
  if (lVar5 == 1) {
    if (lVar1 != 1) {
      param_1[0xd] = lVar1;
      uVar2 = param_2[0xe];
      param_1[0xe] = uVar2;
      func_0x000107c6157c();
      func_0x000107c6157c(uVar2);
      goto LAB_10384c388;
    }
  }
  else {
    if (lVar1 != 1) {
      param_1[0xd] = lVar1;
      func_0x000107c6157c();
      func_0x000107c61574(lVar5);
      uVar2 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      func_0x000107c6157c();
      func_0x000107c61574(uVar2);
      goto LAB_10384c388;
    }
    FUN_10384c404(plVar4);
  }
  lVar1 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  *plVar4 = lVar1;
LAB_10384c388:
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  lVar1 = param_2[0x13];
  if (param_1[0x13] == 0) {
    if (lVar1 != 0) {
      param_1[0x13] = lVar1;
      param_1[0x14] = param_2[0x14];
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x10,param_2 + 0x10);
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      func_0x000100083374(param_1 + 0x10,param_2 + 0x10);
      return param_1;
    }
    func_0x0001000834e4(param_1 + 0x10);
  }
  uVar3 = param_2[0x11];
  uVar2 = param_2[0x10];
  uVar7 = param_2[0x13];
  uVar6 = param_2[0x12];
  param_1[0x14] = param_2[0x14];
  param_1[0x11] = uVar3;
  param_1[0x10] = uVar2;
  param_1[0x13] = uVar7;
  param_1[0x12] = uVar6;
  return param_1;
}



/* Entry: 10384c404; end: 10384c437;  */

undefined8 FUN_10384c404(undefined8 param_1)

{
  FUN_103877600();
  return param_1;
}



/* Entry: 10384c438; end: 10384c55b;  */

undefined8 * FUN_10384c438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  func_0x000107c6142c(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  func_0x000107c61574(uVar1);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  uVar1 = param_1[9];
  uVar3 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = uVar3;
  func_0x000107c61574(uVar1);
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  func_0x000107c61574(uVar1);
  uVar1 = param_1[0xb];
  param_1[0xb] = param_2[0xb];
  func_0x000107c61574(uVar1);
  plVar2 = param_1 + 0xd;
  *(undefined1 *)(param_1 + 0xc) = *(undefined1 *)(param_2 + 0xc);
  if (*plVar2 != 1) {
    if (param_2[0xd] != 1) {
      param_1[0xd] = param_2[0xd];
      func_0x000107c61574();
      uVar1 = param_1[0xe];
      param_1[0xe] = param_2[0xe];
      func_0x000107c61574(uVar1);
      goto LAB_10384c520;
    }
    FUN_10384c404(plVar2);
  }
  lVar4 = param_2[0xd];
  param_1[0xe] = param_2[0xe];
  *plVar2 = lVar4;
LAB_10384c520:
  *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)(param_2 + 0xf);
  if (param_1[0x13] != 0) {
    func_0x0001000834e4(param_1 + 0x10);
  }
  uVar1 = param_2[0x10];
  uVar5 = param_2[0x13];
  uVar3 = param_2[0x12];
  param_1[0x11] = param_2[0x11];
  param_1[0x10] = uVar1;
  param_1[0x13] = uVar5;
  param_1[0x12] = uVar3;
  param_1[0x14] = param_2[0x14];
  return param_1;
}



/* Entry: 10384c55c; end: 10384c61b;  */

int FUN_10384c55c(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x2a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Entry: 10384c61c; end: 10384c65b;  */

void FUN_10384c61c(long *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c3ee2c(lVar1,param_3,&PTR____CFConstantStringClassReference_110f77718);
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10384c65c; end: 10384c71b;  */

void FUN_10384c65c(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c3ee2c(lVar1,param_3,&PTR____CFConstantStringClassReference_110f77718);
    func_0x000107c61180();
    if (lVar1 != 0) {
      puVar3 = PTR_PTR_1126b0820;
      func_0x000107c61168();
      func_0x000107c4b184();
      func_0x000107c61180();
      puVar2 = puVar3;
      func_0x000107c5e650();
      func_0x000107c61180();
      func_0x000107c61170(puVar3);
      puVar3 = puVar2;
      func_0x000107c3ecc8();
      func_0x000107c61180();
      func_0x000107c61170(puVar2);
      func_0x000107c61170(lVar1);
      goto LAB_10384c708;
    }
  }
  puVar3 = (undefined *)0x0;
LAB_10384c708:
  *param_1 = puVar3;
  return;
}



/* Entry: 10384c71c; end: 10384c883;  */

/* WARNING: Removing unreachable block (ram,0x00010384c850) */

long FUN_10384c71c(long param_1)

{
  long lVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  
  func_0x000107c4cfbc();
  func_0x000107c61180();
  lVar1 = param_1;
  func_0x000107c5c734();
  func_0x000107c61180();
  func_0x000107c61170(param_1);
  if (lVar1 != 0) {
    ppuVar2 = &PTR____CFConstantStringClassReference_110f31178;
    func_0x000107c61174();
    puVar3 = PTR_PTR_1126b6868;
    func_0x000107c610f8();
    func_0x000107c47914();
    if (puVar3 != (undefined *)0x0) {
      puVar4 = puVar3;
      func_0x00010109db94();
      func_0x000107c613fc();
      *(undefined8 *)(puVar4 + 0x18) = 3;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined **)(puVar4 + 0x20) = puVar3;
      uVar5 = 0;
      func_0x00010109d9b8(0);
      func_0x000107c61174(puVar3);
      puVar6 = puVar4;
      func_0x000107c5fc48(puVar4,uVar5);
      func_0x000107c61574(puVar4);
      lVar7 = lVar1;
      func_0x000107c4cfd0(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(puVar6);
      lVar8 = lVar7;
      func_0x000107c5c734(lVar7);
      func_0x000107c61180();
      func_0x000107c61170(lVar7);
      func_0x000107c615e8(lVar1);
      func_0x000107c61170(puVar3);
      func_0x000107c61170(ppuVar2);
      return lVar8;
    }
    func_0x000107c615e8(lVar1);
    func_0x000107c61170(ppuVar2);
  }
  return 0;
}



/* Entry: 10384c884; end: 10384c8c7;  */

long FUN_10384c884(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x18);
  *(long *)(param_2 + 0x18) = lVar1;
  *(undefined8 *)(param_2 + 0x20) = *(undefined8 *)(param_1 + 0x20);
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_2,param_1);
  return param_2;
}



/* Entry: 10384c8c8; end: 10384c8eb;  */

void FUN_10384c8c8(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if (param_2 != 0) {
    return;
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c5c734();
    func_0x000107c61180();
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    *(undefined8 *)(lVar1 + 0x18) = param_1;
    func_0x000107c61574(lVar1);
    func_0x000107c615e8(uVar2);
  }
  func_0x000107c61428(unaff_x20 + 0x10,auStack_60,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10381bdf8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384c8ec; end: 10384c9af;  */

void FUN_10384c8ec(void)

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
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Entry: 10384c9b0; end: 10384cb17;  */

void FUN_10384c9b0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long *plVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  code *pcVar7;
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 uStack_50;
  long lStack_48;
  
  func_0x0001000d224c(auStack_68);
  func_0x0001000a8868(auStack_68,uStack_50);
  uVar1 = uStack_50;
  (**(code **)(lStack_48 + 8))(uStack_50,lStack_48);
  pcVar2 = FUN_10384cb18;
  func_0x0001000bfde0(FUN_10384cb18,0,PTR___sSSN_11034da80);
  func_0x000107c61574(uVar1);
  func_0x0001000834e4(auStack_68);
  plVar3 = (long *)PTR___sSSSQsWP_11034da98;
  func_0x0001000c2068();
  func_0x000107c61574(pcVar2);
  plVar4 = plVar3;
  func_0x0001006c733c();
  puVar5 = &UNK_11069dfc8;
  func_0x000107c613fc(&UNK_11069dfc8,0x18,7);
  func_0x000107c61644(puVar5 + 0x10);
  puVar6 = &UNK_11069dff0;
  func_0x000107c613fc(&UNK_11069dff0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_10384ccc8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  pcVar2 = FUN_10384ccd0;
  puVar5 = puVar6;
  (**(code **)(*plVar4 + 0x60))(FUN_10384ccd0);
  func_0x000107c61574(plVar4);
  func_0x000107c61574(puVar6);
  pcVar7 = pcVar2;
  func_0x000107c614f0(pcVar2);
  (**(code **)(puVar5 + 0x18))(*(undefined8 *)(unaff_x20 + 0x28),pcVar7,puVar5);
  func_0x000107c61574(plVar3);
  func_0x000107c615e8(pcVar2);
  return;
}



/* Entry: 10384cb18; end: 10384cb23;  */

void FUN_10384cb18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00010bdc0034. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRetain_11034f268)();
  return;
}



/* Entry: 10384cb24; end: 10384cc6b;  */

void FUN_10384cb24(long param_1,ulong param_2,ulong param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong *puVar7;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar3 = param_2;
    puVar7 = (ulong *)(param_1 + 0x20);
    do {
      uVar4 = *puVar7;
      uVar1 = uVar4;
      func_0x000107c615f0();
      func_0x000107c44fdc();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if (uVar2 == param_2 && uVar3 == param_3) {
        func_0x000107c6142c(uVar3);
LAB_10384cbdc:
        func_0x000107c61428(param_4 + 0x10,auStack_78,0,0);
        param_4 = param_4 + 0x10;
        func_0x000107c61648();
        if (param_4 != 0) {
          uVar5 = *(undefined8 *)(param_4 + 0x10);
          func_0x000107c6157c(uVar5);
          func_0x000107c61574(param_4);
          func_0x0001000d224c(&lStack_80);
          func_0x000107c61574(uVar5);
          if (lStack_80 != 0) {
            func_0x000107c3d05c(lStack_80);
            func_0x000107c615e8(lStack_80);
          }
        }
        func_0x000107c615e8(uVar4);
        return;
      }
      uVar1 = uVar3;
      func_0x000107c605b8(uVar2,uVar3,param_2,param_3,0);
      func_0x000107c6142c(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_10384cbdc;
      func_0x000107c615e8(uVar4);
      lVar6 = lVar6 + -1;
      uVar3 = uVar1;
      puVar7 = puVar7 + 2;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 10384cc6c; end: 10384ccc7;  */

void FUN_10384cc6c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384ccc8; end: 10384cccf;  */

void FUN_10384ccc8(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  ulong *puVar7;
  long lStack_80;
  undefined1 auStack_78 [24];
  
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    uVar3 = param_2;
    puVar7 = (ulong *)(param_1 + 0x20);
    do {
      uVar4 = *puVar7;
      uVar1 = uVar4;
      func_0x000107c615f0();
      func_0x000107c44fdc();
      func_0x000107c61180();
      uVar2 = uVar1;
      func_0x000107c5faec();
      func_0x000107c61170(uVar1);
      if (uVar2 == param_2 && uVar3 == param_3) {
        func_0x000107c6142c(uVar3);
LAB_10384cbdc:
        func_0x000107c61428(unaff_x20 + 0x10,auStack_78,0,0);
        lVar6 = unaff_x20 + 0x10;
        func_0x000107c61648();
        if (lVar6 != 0) {
          uVar5 = *(undefined8 *)(lVar6 + 0x10);
          func_0x000107c6157c(uVar5);
          func_0x000107c61574(lVar6);
          func_0x0001000d224c(&lStack_80);
          func_0x000107c61574(uVar5);
          if (lStack_80 != 0) {
            func_0x000107c3d05c(lStack_80);
            func_0x000107c615e8(lStack_80);
          }
        }
        func_0x000107c615e8(uVar4);
        return;
      }
      uVar1 = uVar3;
      func_0x000107c605b8(uVar2,uVar3,param_2,param_3,0);
      func_0x000107c6142c(uVar3);
      if ((uVar2 & 1) != 0) goto LAB_10384cbdc;
      func_0x000107c615e8(uVar4);
      lVar6 = lVar6 + -1;
      uVar3 = uVar1;
      puVar7 = puVar7 + 2;
    } while (lVar6 != 0);
  }
  return;
}



/* Entry: 10384ccd0; end: 10384cd1b;  */

void FUN_10384ccd0(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],param_1[2]);
  return;
}



/* Entry: 10384cd1c; end: 10384cd77;  */

void FUN_10384cd1c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2,param_3,param_4,param_5);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10384cd78; end: 10384cd7b;  */

void FUN_10384cd78(void)

{
  return;
}



/* Entry: 10384cd7c; end: 10384cd9b;  */

void FUN_10384cd7c(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Entry: 10384cd9c; end: 10384cdd7;  */

void FUN_10384cd9c(long param_1,undefined8 param_2)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10384cdd8; end: 10384ce33;  */

void FUN_10384cdd8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    FUN_10384ce34(uVar1);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384ce34; end: 10384d2db;  */

void FUN_10384ce34(undefined8 param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
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
  undefined *puVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined *puVar17;
  undefined *puStack_a0;
  undefined8 uStack_98;
  code *pcStack_90;
  undefined *puStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  
  puVar17 = PTR___NSConcreteStackBlock_11034bd00;
  pcStack_80 = FUN_10384d65c;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10384d660;
  puStack_88 = &UNK_11069e120;
  ppuVar2 = &puStack_a0;
  func_0x000107c60bc4();
  func_0x000107c61574(puStack_78);
  puVar13 = &UNK_11069e018;
  puVar3 = puVar13;
  func_0x000107c613fc(&UNK_11069e018,0x18,7);
  func_0x000107c61644(puVar3 + 0x10);
  puVar4 = &UNK_11069e158;
  func_0x000107c613fc(&UNK_11069e158,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10384db78;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  pcStack_80 = FUN_10384db80;
  puStack_a0 = puVar17;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10384d660;
  puStack_88 = &UNK_11069e170;
  ppuVar5 = &puStack_a0;
  puStack_78 = puVar4;
  func_0x000107c60bc4(ppuVar5);
  puVar7 = puStack_78;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar7);
  puVar6 = puVar13;
  func_0x000107c613fc(&UNK_11069e018,0x18,7);
  func_0x000107c61644(puVar6 + 0x10);
  puVar7 = &UNK_11069e1a8;
  func_0x000107c613fc(&UNK_11069e1a8,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10384dba0;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_80 = (code *)0x10384dbf4;
  puStack_a0 = puVar17;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10384d660;
  puStack_88 = &UNK_11069e1c0;
  ppuVar8 = &puStack_a0;
  puStack_78 = puVar7;
  func_0x000107c60bc4();
  puVar10 = puStack_78;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar10);
  puVar9 = puVar13;
  func_0x000107c613fc(&UNK_11069e018,0x18,7);
  func_0x000107c61644(puVar9 + 0x10);
  puVar10 = &UNK_11069e1f8;
  func_0x000107c613fc(&UNK_11069e1f8,0x20,7);
  *(undefined8 *)(puVar10 + 0x10) = 0x10384dba8;
  *(undefined **)(puVar10 + 0x18) = puVar9;
  pcStack_80 = (code *)0x10384dbb8;
  puStack_a0 = puVar17;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10384cd1c;
  puStack_88 = &UNK_11069e210;
  ppuVar11 = &puStack_a0;
  puStack_78 = puVar10;
  func_0x000107c60bc4(ppuVar11);
  puVar14 = puStack_78;
  func_0x000107c6157c(puVar10);
  func_0x000107c61574(puVar14);
  pcStack_80 = FUN_10384cd78;
  puStack_78 = (undefined *)0x0;
  puStack_a0 = puVar17;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10384cd9c;
  puStack_88 = &UNK_11069e238;
  ppuVar12 = &puStack_a0;
  func_0x000107c60bc4(ppuVar12);
  func_0x000107c61574(puStack_78);
  func_0x000107c613fc(&UNK_11069e018,0x18,7);
  func_0x000107c61644(puVar13 + 0x10);
  puVar14 = &UNK_11069e270;
  func_0x000107c613fc(&UNK_11069e270,0x20,7);
  *(undefined8 *)(puVar14 + 0x10) = 0x10384dbb0;
  *(undefined **)(puVar14 + 0x18) = puVar13;
  pcStack_80 = (code *)0x10384dbf8;
  puStack_a0 = puVar17;
  uStack_98 = 0x42000000;
  pcStack_90 = FUN_10384cd9c;
  puStack_88 = &UNK_11069e288;
  ppuVar15 = &puStack_a0;
  puStack_78 = puVar14;
  func_0x000107c60bc4();
  puVar17 = puStack_78;
  func_0x000107c6157c(puVar14);
  func_0x000107c61574(puVar17);
  func_0x000107c4c7c4(param_1);
  func_0x000107c60bd0(ppuVar15);
  func_0x000107c60bd0(ppuVar12);
  func_0x000107c60bd0(ppuVar11);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c60bd0(ppuVar2);
  uVar16 = 0;
  func_0x000107c61544(0,"",0x5c,0x57,0x2a,1);
  func_0x000107c61574(puVar3);
  if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10384d2c8);
    (*pcVar1)();
  }
  puVar17 = puVar4;
  func_0x000107c61544(puVar4,"",0x5c,0x58,0x21,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar17 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10384d2cc);
    (*pcVar1)();
  }
  puVar4 = puVar7;
  func_0x000107c61544(puVar7,"",0x5c,0x5a,0x20,1);
  func_0x000107c61574(puVar9);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10384d2d0);
    (*pcVar1)();
  }
  puVar4 = puVar10;
  func_0x000107c61544(puVar10,"",0x5c,0x5c,0x1f,1);
  func_0x000107c61574(puVar10);
  if (((ulong)puVar4 & 1) == 0) {
    uVar16 = 0;
    func_0x000107c61544(0,"",0x5c,99,0x1f,1);
    func_0x000107c61574(puVar13);
    if ((uVar16 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10384d2d8);
      (*pcVar1)();
    }
    puVar13 = puVar14;
    func_0x000107c61544(puVar14,"",0x5c,100,0x1e,1);
    func_0x000107c61574(puVar14);
    if (((ulong)puVar13 & 1) == 0) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10384d2dc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10384d2d4);
  (*pcVar1)();
}



/* Entry: 10384d2dc; end: 10384d4ef;  */

void FUN_10384d2dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  undefined8 uVar9;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  undefined8 uStack_70;
  undefined *puStack_68;
  
  ppuVar5 = &puStack_90;
  ppuVar8 = &puStack_90;
  uVar9 = *param_2;
  *param_1 = 0;
  puVar3 = &UNK_11069e040;
  func_0x000107c613fc(&UNK_11069e040,0x18,7);
  *(undefined8 **)(puVar3 + 0x10) = param_1;
  puVar4 = &UNK_11069e068;
  func_0x000107c613fc(&UNK_11069e068,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_10384dac4;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  puVar1 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_70 = 0x10384daf0;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10384cd1c;
  puStack_78 = &UNK_11069e080;
  puStack_68 = puVar4;
  func_0x000107c60bc4(&puStack_90);
  puVar6 = puStack_68;
  func_0x000107c6157c(puVar4);
  func_0x000107c61574(puVar6);
  puVar6 = &UNK_11069e0b8;
  func_0x000107c613fc(&UNK_11069e0b8,0x18,7);
  *(undefined8 **)(puVar6 + 0x10) = param_1;
  puVar7 = &UNK_11069e0e0;
  func_0x000107c613fc(&UNK_11069e0e0,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_10384db2c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  uStack_70 = 0x10384db58;
  puStack_90 = puVar1;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_10384cd9c;
  puStack_78 = &UNK_11069e0f8;
  puStack_68 = puVar7;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(puVar7);
  func_0x000107c61574(puVar1);
  func_0x000107c4c7c4(uVar9);
  func_0x000107c60bd0(ppuVar8);
  func_0x000107c60bd0(ppuVar5);
  func_0x000107c61574(puVar3);
  puVar3 = puVar4;
  func_0x000107c61544(puVar4,"",0x5c,0x3a,0x29,1);
  func_0x000107c61574(puVar6);
  func_0x000107c61574(puVar4);
  if (((ulong)puVar3 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10384d4ec);
    (*pcVar2)();
  }
  puVar3 = puVar7;
  func_0x000107c61544(puVar7,"",0x5c,0x3e,0x28,1);
  func_0x000107c61574(puVar7);
  if (((ulong)puVar3 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10384d4f0);
  (*pcVar2)();
}



/* Entry: 10384d4f0; end: 10384d513;  */

bool FUN_10384d4f0(ulong *param_1)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  func_0x000107c3e08c(uVar1);
  return (uVar1 & 0xfffffffffffffffe) == 2;
}



/* Entry: 10384d514; end: 10384d5c3;  */

undefined8 FUN_10384d514(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
  func_0x000107c40fc0(uVar3);
  func_0x000107c61180();
  uVar1 = uVar3;
  func_0x0001000b637c();
  func_0x000107c61170(uVar3);
  uVar2 = 0;
  func_0x0001007b706c(0);
  uVar3 = 0x10384d598;
  func_0x0001000d5158(0x10384d598,0,uVar2);
  func_0x000107c61574(uVar1);
  return uVar3;
}



/* Entry: 10384d5c4; end: 10384d65b;  */

void FUN_10384d5c4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000a8868(param_2 + 0x20,*(undefined8 *)(param_2 + 0x38));
    uVar1 = 0;
    func_0x0001007dbb4c(0);
    (*(code *)(undefined *)0x103848268)(uVar2,uVar1,&PTR_DAT_11069db28);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384d65c; end: 10384d65f;  */

void FUN_10384d65c(void)

{
  return;
}



/* Entry: 10384d660; end: 10384d6a3;  */

void FUN_10384d660(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  func_0x000107c615f0(param_2);
  (*pcVar1)(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(param_2);
  return;
}



/* Entry: 10384d6a4; end: 10384d747;  */

void FUN_10384d6a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_58,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x0001000a8868(param_3 + 0x20,*(undefined8 *)(param_3 + 0x38));
    uVar1 = 0;
    func_0x0001007dbb4c(0);
    (*(code *)(undefined *)0x103848140)(param_1,param_2,uVar1,&PTR_DAT_11069db28);
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10384d748; end: 10384d7a7;  */

void FUN_10384d748(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_38,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    func_0x000107c3e08c(param_1);
    FUN_10384d7a8();
    func_0x000107c61574(param_3);
  }
  return;
}



/* Entry: 10384d7a8; end: 10384d863;  */

void FUN_10384d7a8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uStack_38;
  
  func_0x0001000d224c(&uStack_38);
  uVar2 = uStack_38;
  if (uStack_38 == 0) {
    return;
  }
  uVar1 = uStack_38;
  func_0x000107c4a3e0();
  if (((uVar1 & 1) == 0) && (func_0x0001000d224c(&uStack_38), uStack_38 != 0)) {
    if (param_1 == 0) {
      uVar3 = 1;
    }
    else if (param_1 == 1) {
      uVar3 = 2;
    }
    else {
      if (param_1 == 2) {
        func_0x000107c3f674(uStack_38,param_2,4);
        func_0x000107c615e8(uVar2);
        uVar2 = uStack_38;
        goto LAB_10384d84c;
      }
      uVar3 = 0;
    }
    func_0x000107c3f674(uStack_38,param_2,uVar3);
    func_0x000107c615e8(uStack_38);
  }
LAB_10384d84c:
  func_0x000107c615e8(uVar2);
  return;
}



/* Entry: 10384d864; end: 10384d92b;  */

void FUN_10384d864(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined1 auStack_68 [24];
  
  func_0x000107c61428(param_5 + 0x10,auStack_68,0,0);
  param_5 = param_5 + 0x10;
  func_0x000107c61648();
  if (param_5 != 0) {
    func_0x000107c3e08c(param_1);
    FUN_10384d9d0();
    func_0x0001000a8868(param_5 + 0x20,*(undefined8 *)(param_5 + 0x38));
    uVar1 = 0;
    func_0x0001007dbb4c(0);
    FUN_103848008(param_1,param_3,param_4,param_2,uVar1,&PTR_DAT_11069db28);
    func_0x000107c61574(param_5);
  }
  return;
}



/* Entry: 10384d92c; end: 10384d9cf;  */

void FUN_10384d92c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000a8868(param_2 + 0x20,*(undefined8 *)(param_2 + 0x38));
    uVar1 = 0;
    func_0x0001007dbb4c(0);
    FUN_103848008(param_1,0,0,0,uVar1,&PTR_DAT_11069db28);
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384d9d0; end: 10384da67;  */

void FUN_10384d9d0(long param_1,undefined8 param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uStack_38;
  
  if ((param_1 == 3) && (func_0x0001000d224c(&uStack_38), uVar2 = uStack_38, uStack_38 != 0)) {
    uVar1 = uStack_38;
    func_0x000107c4a3e0();
    if ((uVar1 & 1) != 0) {
      func_0x000107c5073c(uVar2);
      func_0x0001000d224c(&uStack_38);
      if (uStack_38 != 0) {
        func_0x000107c3f664(uStack_38,param_2,3,4);
        func_0x000107c615e8(uVar2);
        uVar2 = uStack_38;
      }
    }
    func_0x000107c615e8(uVar2);
  }
  return;
}



/* Entry: 10384da68; end: 10384dab3;  */

void FUN_10384da68(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x0001000834e4(unaff_x20 + 0x20);
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x48));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x50));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384dab4; end: 10384dac3;  */

void FUN_10384dab4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    FUN_10384ce34(uVar2);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384dac4; end: 10384db0f;  */

void FUN_10384dac4(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10384db10; end: 10384db2b;  */

void FUN_10384db10(long param_1,long param_2)

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



/* Entry: 10384db2c; end: 10384db77;  */

void FUN_10384db2c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = **(undefined8 **)(unaff_x20 + 0x10);
  **(undefined8 **)(unaff_x20 + 0x10) = param_1;
  func_0x000107c615f0();
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(uVar1);
  return;
}



/* Entry: 10384db78; end: 10384db7f;  */

void FUN_10384db78(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_58,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001000a8868(lVar1 + 0x20,*(undefined8 *)(lVar1 + 0x38));
    uVar2 = 0;
    func_0x0001007dbb4c(0);
    (*(code *)(undefined *)0x103848140)(param_1,param_2,uVar2,&PTR_DAT_11069db28);
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384db80; end: 10384db9f;  */

void FUN_10384db80(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Entry: 10384dba0; end: 10384dbfb;  */

void FUN_10384dba0(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c3e08c(param_1);
    FUN_10384d7a8();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384dbfc; end: 10384de4f;  */

void FUN_10384dbfc(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  code *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  long unaff_x20;
  long *plStack_68;
  
  func_0x0001000d224c(&plStack_68);
  plVar1 = plStack_68;
  if (plStack_68 != (long *)0x0) {
    func_0x0001000285a8(0x112ee3e30,&UNK_10db0f1a0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
    func_0x000100775284(uVar2,0,1);
    uVar3 = 0x112d3b7d8;
    func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
    pcVar4 = FUN_10384de50;
    func_0x000100775358(FUN_10384de50,0,uVar3);
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    plVar5 = plVar1;
    func_0x000107c4cf50(plVar1);
    func_0x000107c61180();
    plVar6 = plVar5;
    func_0x0001000b637c();
    func_0x000107c61170(plVar5);
    plVar5 = plVar6;
    func_0x0001006c733c(plVar6);
    puVar10 = &UNK_11069e2c0;
    puVar7 = puVar10;
    func_0x000107c613fc(&UNK_11069e2c0,0x18,7);
    func_0x000107c61644(puVar7 + 0x10);
    puVar8 = &UNK_11069e2e8;
    func_0x000107c613fc(&UNK_11069e2e8,0x20,7);
    *(code **)(puVar8 + 0x10) = FUN_10384e408;
    *(undefined **)(puVar8 + 0x18) = puVar7;
    uVar3 = 0x112d36838;
    func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
    pcVar9 = FUN_10384e410;
    func_0x000100775358(FUN_10384e410,puVar8,uVar3);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar8);
    func_0x0001000d224c(&plStack_68);
    plVar5 = plStack_68;
    func_0x000100471e0c(plStack_68,1);
    func_0x000107c61574(pcVar9);
    func_0x000107c615e8(plStack_68);
    func_0x000107c613fc(&UNK_11069e2c0,0x18,7);
    func_0x000107c61644(puVar10 + 0x10);
    pcVar9 = FUN_10384e438;
    puVar8 = puVar10;
    (**(code **)(*plVar5 + 0x60))(FUN_10384e438);
    func_0x000107c61574(plVar5);
    func_0x000107c61574(puVar10);
    pcVar11 = pcVar9;
    func_0x000107c614f0(pcVar9);
    (**(code **)(puVar8 + 0x10))(*(undefined8 *)(unaff_x20 + 0x40),pcVar11,puVar8);
    func_0x000107c615e8(plVar1);
    func_0x000107c61574(uVar2);
    func_0x000107c61574(pcVar4);
    func_0x000107c61574(plVar6);
    func_0x000107c615e8(pcVar9);
  }
  return;
}



/* Entry: 10384de50; end: 10384df7b;  */

void FUN_10384de50(long *param_1)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_38;
  
  if ((char)param_1[1] == '\x01') {
    iVar1 = 2;
    lStack_38 = *param_1;
    func_0x000100029b9c(2,0x12,0,0);
    if (iVar1 != 0) {
      uVar4 = 0x112d393f0;
      func_0x0001000285a8(0x112d393f0,&UNK_10d903bb0);
      func_0x000107c61658(&lStack_38,uVar4,PTR___ss5ErrorWS_11034ee10);
    }
  }
  else {
    func_0x0001000d224c(&lStack_38);
    if (lStack_38 != 0) {
      func_0x0001000285a8(0x112d3b7d0,&UNK_10d904cc0);
      lVar2 = lStack_38;
      func_0x000107c51c8c(lStack_38);
      func_0x000107c61180();
      lVar3 = lVar2;
      func_0x0001000b637c();
      func_0x000107c61170(lVar2);
      uVar4 = 0x112d3b7d8;
      func_0x0001000285a8(0x112d3b7d8,&UNK_10d920690);
      func_0x0001000bfde0(FUN_10384df7c,0,uVar4);
      func_0x000107c615e8(lStack_38);
      func_0x000107c61574(lVar3);
      return;
    }
  }
  func_0x0001000285a8(0x112d59888,&UNK_10d923170);
  func_0x000104886440();
  return;
}



/* Entry: 10384df7c; end: 10384dfab;  */

void FUN_10384df7c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  func_0x000107c4dfe8();
  func_0x000107c61180();
  *param_1 = uVar1;
  return;
}



/* Entry: 10384dfac; end: 10384e08b;  */

void FUN_10384dfac(ulong param_1,int param_2,long param_3)

{
  ulong uVar1;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,0,0);
  param_3 = param_3 + 0x10;
  func_0x000107c61648();
  if (param_3 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(param_3);
    }
    else {
      func_0x000107c61174();
      uVar1 = param_1;
      func_0x000107c49c88();
      if (((uVar1 & 1) == 0) && (func_0x000107c3ebcc(), param_2 != 0)) {
        FUN_10384e08c(param_1);
        func_0x000107c61574(param_3);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61574(param_3);
      func_0x000107c61170(param_1);
    }
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_50 = 0;
  func_0x000100854cb0(&uStack_50);
  return;
}



/* Entry: 10384e08c; end: 10384e237;  */

void FUN_10384e08c(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lStack_48;
  
  func_0x0001000d224c(&lStack_48);
  lVar1 = lStack_48;
  if (lStack_48 != 0) {
    func_0x0001000d224c(&lStack_48);
    if (lStack_48 != 0) {
      func_0x0001000285a8(0x112d4f920,&UNK_10d92c9e0);
      func_0x000107c4045c(param_1);
      func_0x000107c61180();
      lVar2 = lVar1;
      func_0x000107c4b1c0(lVar1);
      func_0x000107c61180();
      func_0x000107c61170(param_1);
      lVar3 = lVar2;
      func_0x000100759c94(lVar2,0);
      func_0x000107c61170(lVar2);
      func_0x000107c615f0(lStack_48);
      uVar4 = 0x112d36838;
      func_0x0001000285a8(0x112d36838,&UNK_10d915fb0);
      lVar2 = lStack_48;
      func_0x000100775264(lStack_48,1,FUN_10384e2c0,0,uVar4);
      func_0x000107c61574(lVar3);
      func_0x000107c615e8(lStack_48);
      func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
      lVar3 = lVar2;
      func_0x000100775284(lVar2,0,1);
      func_0x0001000bfde0(0x10384e308,0,uVar4);
      func_0x000107c615e8(lVar1);
      func_0x000107c615e8(lStack_48);
      func_0x000107c61574(lVar2);
      func_0x000107c61574(lVar3);
      return;
    }
    func_0x000107c615e8(lVar1);
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  lStack_48 = 0;
  func_0x000100854cb0(&lStack_48);
  return;
}



/* Entry: 10384e238; end: 10384e2bf;  */

void FUN_10384e238(undefined8 param_1,long param_2)

{
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      func_0x000107c55d80(lStack_50);
      func_0x000107c615e8(lStack_50);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384e2c0; end: 10384e39b;  */

void FUN_10384e2c0(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  if (lVar1 != 0) {
    func_0x000107c40db8(0x3ff3333333333333);
    func_0x000107c61180();
  }
  *param_1 = lVar1;
  return;
}



/* Entry: 10384e39c; end: 10384e407;  */

void FUN_10384e39c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x38));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Entry: 10384e408; end: 10384e40f;  */

void FUN_10384e408(ulong param_1,int param_2)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  undefined8 uStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    if (param_1 == 0) {
      func_0x000107c61574(lVar1);
    }
    else {
      func_0x000107c61174();
      uVar2 = param_1;
      func_0x000107c49c88();
      if (((uVar2 & 1) == 0) && (func_0x000107c3ebcc(), param_2 != 0)) {
        FUN_10384e08c(param_1);
        func_0x000107c61574(lVar1);
        func_0x000107c61170(param_1);
        return;
      }
      func_0x000107c61574(lVar1);
      func_0x000107c61170(param_1);
    }
  }
  func_0x0001000285a8(0x112d755d0,&UNK_10d936160);
  uStack_50 = 0;
  func_0x000100854cb0(&uStack_50);
  return;
}



/* Entry: 10384e410; end: 10384e437;  */

void FUN_10384e410(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Entry: 10384e438; end: 10384e43f;  */

void FUN_10384e438(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_50;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x0001000d224c(&lStack_50);
    if (lStack_50 != 0) {
      func_0x000107c55d80(lStack_50);
      func_0x000107c615e8(lStack_50);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384e440; end: 10384e583;  */

void FUN_10384e440(void)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined *puVar7;
  long unaff_x20;
  long *plStack_58;
  
  func_0x0001000d224c(&plStack_58);
  plVar1 = plStack_58;
  if (plStack_58 != (long *)0x0) {
    func_0x0001000285a8(0x112d53860,&UNK_10d92b600);
    plVar2 = plVar1;
    func_0x000107c4cf50(plVar1);
    func_0x000107c61180();
    plVar3 = plVar2;
    func_0x0001000b637c();
    func_0x000107c61170(plVar2);
    func_0x0001000d224c(&plStack_58);
    plVar2 = plStack_58;
    func_0x000100471e0c(plStack_58,0);
    func_0x000107c615e8(plStack_58);
    puVar4 = &UNK_11069e310;
    func_0x000107c613fc(&UNK_11069e310,0x18,7);
    func_0x000107c61644(puVar4 + 0x10);
    pcVar5 = FUN_10384e7c4;
    puVar7 = puVar4;
    (**(code **)(*plVar2 + 0x60))(FUN_10384e7c4);
    func_0x000107c61574(plVar2);
    func_0x000107c61574(puVar4);
    pcVar6 = pcVar5;
    func_0x000107c614f0(pcVar5);
    (**(code **)(puVar7 + 0x10))(*(undefined8 *)(unaff_x20 + 0x30),pcVar6,puVar7);
    func_0x000107c615e8(plVar1);
    func_0x000107c61574(plVar3);
    func_0x000107c615e8(pcVar5);
  }
  return;
}



/* Entry: 10384e584; end: 10384e5df;  */

void FUN_10384e584(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined1 auStack_48 [24];
  
  func_0x000107c61428(param_3 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_3 + 0x10) = param_1;
  func_0x000107c615f0(param_1);
  func_0x000107c615e8(uVar1);
  return;
}



/* Entry: 10384e5e0; end: 10384e63f;  */

void FUN_10384e5e0(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 auStack_38 [24];
  
  uVar1 = *param_1;
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000107c3ebcc(uVar1);
    FUN_10384e640();
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384e640; end: 10384e75f;  */

void FUN_10384e640(uint param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined *puStack_70;
  undefined8 uStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  undefined8 uStack_50;
  undefined *puStack_48;
  
  ppuVar3 = &puStack_70;
  func_0x000107c550d8(*(undefined8 *)(unaff_x20 + 0x18),param_2,param_1 & 1);
  puVar2 = &UNK_11069e338;
  func_0x000107c613fc(&UNK_11069e338,0x18,7);
  plVar6 = (long *)(puVar2 + 0x10);
  *plVar6 = 0;
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  uStack_50 = 0x10384e7cc;
  puStack_70 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_68 = 0x42000000;
  pcStack_60 = FUN_10381e8e4;
  puStack_58 = &UNK_11069e350;
  puStack_48 = puVar2;
  func_0x000107c60bc4(&puStack_70);
  puVar1 = puStack_48;
  func_0x000107c6157c(puVar2);
  func_0x000107c61574(puVar1);
  func_0x000107c5dc64(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61428(plVar6,&puStack_70,0,0);
  lVar5 = *plVar6;
  func_0x000107c615f0(lVar5);
  func_0x000107c61574(puVar2);
  if (lVar5 != 0) {
    func_0x000107c52634(lVar5);
    func_0x000107c615e8(lVar5);
  }
  return;
}



/* Entry: 10384e760; end: 10384e7c3;  */

void FUN_10384e760(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61170(*(undefined8 *)(unaff_x20 + 0x20));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x28));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x30));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384e7c4; end: 10384e817;  */

void FUN_10384e7c4(undefined8 *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  uVar2 = *param_1;
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000107c3ebcc(uVar2);
    FUN_10384e640();
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384e818; end: 10384e86b;  */

void FUN_10384e818(long param_1)

{
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_1 + 0x10,auStack_38,0,0);
  param_1 = param_1 + 0x10;
  func_0x000107c61648();
  if (param_1 != 0) {
    FUN_10384a904();
    func_0x000107c61574(param_1);
  }
  return;
}



/* Entry: 10384e86c; end: 10384e8af;  */

void FUN_10384e86c(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384e8b0; end: 10384e923;  */

void FUN_10384e8b0(undefined8 param_1,long param_2)

{
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(param_2 + 0x10,auStack_38,0,0);
  param_2 = param_2 + 0x10;
  func_0x000107c61648();
  if (param_2 != 0) {
    func_0x000104875e28(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000107c504e8(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
    func_0x000107c61574(param_2);
  }
  return;
}



/* Entry: 10384e924; end: 10384e957;  */

void FUN_10384e924(void)

{
  long unaff_x20;
  
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x10));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61574(*(undefined8 *)(unaff_x20 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x00010bdc00ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_deallocClassInstance_11034f290)();
  return;
}



/* Entry: 10384e958; end: 10384e95f;  */

void FUN_10384e958(void)

{
  long lVar1;
  long unaff_x20;
  long lStack_40;
  undefined1 auStack_38 [24];
  
  func_0x000107c61428(unaff_x20 + 0x10,auStack_38,0,0);
  lVar1 = unaff_x20 + 0x10;
  func_0x000107c61648();
  if (lVar1 != 0) {
    func_0x000104875e28(&lStack_40);
    if (lStack_40 != 0) {
      func_0x000107c504e8(lStack_40);
      func_0x000107c615e8(lStack_40);
    }
    func_0x000107c61574(lVar1);
  }
  return;
}



/* Entry: 10384e960; end: 10384eaff;  */

undefined1  [16] FUN_10384e960(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  lVar2 = -0x2fffffffffffffeb;
  func_0x000107c5fadc(0xd000000000000015,0x800000010f16f230);
  uVar3 = 0xd000000000000010;
  func_0x000107c5fadc(0xd000000000000010,0x800000010f16f250);
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
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10384ea30);
  (*pcVar1)();
}



/* Entry: 10384eb00; end: 10384eb17;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384eb00(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long lStack_38;
  
  func_0x0001000d224c(&lStack_38,*(undefined8 *)(unaff_x20 + 0x10));
  if (lStack_38 != 0) {
    lVar1 = lStack_38;
    func_0x000107c4c18c();
    func_0x000107c61180();
    func_0x000107c615e8(lStack_38);
    lStack_38 = lVar1;
    func_0x000100471e0c(lVar1,0);
    func_0x000107c615e8(lVar1);
  }
  *param_1 = lStack_38;
  return;
}



/* Entry: 10384eb18; end: 10384eb5b; -[SCARBarActivationEntryPoint end] */

void FUN_10384eb18(undefined8 param_1)

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



/* Entry: 10384eb5c; end: 10384eb8f;  */

void FUN_10384eb5c(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}



/* Entry: 10384eb90; end: 10384ec77; -[SCARBarActivationEntryPoint .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384eb90(long param_1)

{
  func_0x000107c61610(param_1 + _DAT_112fa33d0);
  func_0x000107c61610(param_1 + _DAT_112fa33d8);
  func_0x000107c61610(param_1 + _DAT_112fa33e0);
  func_0x000107c61610(param_1 + _DAT_112fa33e8);
  func_0x000107c61610(param_1 + _DAT_112fa33f0);
  func_0x000107c61610(param_1 + _DAT_112fa33f8);
  func_0x000107c61610(param_1 + _DAT_112fa3400);
  func_0x000107c61610(param_1 + _DAT_112fa3408);
  func_0x000107c61610(param_1 + _DAT_112fa3410);
  func_0x000107c61610(param_1 + _DAT_112fa3418);
  func_0x000107c61610(param_1 + _DAT_112fa3420);
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112fa3428));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(*(undefined8 *)(param_1 + _DAT_112fa3430));
  return;
}



/* Entry: 10384ec78; end: 10384ec97;  */

void FUN_10384ec78(void)

{
  func_0x000107c61168(&PTR_PTR_1128f2fb8);
  return;
}



/* Entry: 10384ec98; end: 10384eca3; -[SCARBarPublicFeaturesIntegrationEntryPoint conditionalBeginIn] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384ec98(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3460;
  func_0x000107c61428(param_1 + _DAT_112fa3460,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10384eca4; end: 10384ecaf; -[SCARBarPublicFeaturesIntegrationEntryPoint setConditionalBeginIn:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384eca4(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3460;
  func_0x000107c61428(param_1 + _DAT_112fa3460,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}



/* Entry: 10384ecb0; end: 10384ecbb; -[SCARBarPublicFeaturesIntegrationEntryPoint mainCameraScope] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384ecb0(long param_1)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = _DAT_112fa3468;
  func_0x000107c61428(param_1 + _DAT_112fa3468,auStack_38,0,0);
  func_0x000107c61618(param_1 + lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)();
  return;
}



/* Entry: 10384ecbc; end: 10384ecc7; -[SCARBarPublicFeaturesIntegrationEntryPoint setMainCameraScope:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10384ecbc(long param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = _DAT_112fa3468;
  func_0x000107c61428(param_1 + _DAT_112fa3468,auStack_48,1,0);
  func_0x000107c61604(param_1 + lVar1,param_3);
  return;
}


