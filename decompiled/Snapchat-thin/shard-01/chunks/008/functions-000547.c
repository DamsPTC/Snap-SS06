/* Ghidra 12.1.4 generated pseudocode. Approximate types and function boundaries.
   Not the original source; not a compilable reconstruction. */


/* Entry: 101529410; end: 101529437;  */

void FUN_101529410(long param_1,long param_2)

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



/* Entry: 101529438; end: 101529487;  */

void FUN_101529438(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_10152a348();
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x000107c6157c();
  FUN_10152a124();
  func_0x000107c61574(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 101529488; end: 10152948f;  */

void FUN_101529488(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_10152a348();
  func_0x000107c610f8();
  func_0x000107c6157c();
  FUN_10152a124();
  func_0x000107c61574();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 101529490; end: 1015294cf;  */

undefined8 FUN_101529490(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  FUN_10152a124(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 1015294d0; end: 1015295ff;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015294d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112db0a28);
  func_0x000107c5fadc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c6065c();
  func_0x000107c61170(puVar1);
  puVar1 = &UNK_1103d9e80;
  func_0x000107c613fc(&UNK_1103d9e80,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  pcStack_70 = FUN_10152a268;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101529600;
  puStack_78 = &UNK_1103d9e98;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c49808(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101529600; end: 10152963b;  */

void FUN_101529600(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10152963c; end: 101529657; -[_TtC14ValdiCOFStores13ValdiCOFStore getIntAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_10152963c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103da148;
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  func_0x000107c613fc(&UNK_1103da148,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_2);
  FUN_1015294d0(param_1,param_4,param_3,0x10152a404,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101529658; end: 101529787;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101529658(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined *puStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  
  ppuVar2 = &puStack_90;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112db0a28);
  func_0x000107c5fadc();
  puVar1 = PTR__OBJC_CLASS___NSNumber_1126ae570;
  func_0x000107c610f8(PTR__OBJC_CLASS___NSNumber_1126ae570);
  func_0x000107c466c0(param_1);
  func_0x000107c5fe3c();
  func_0x000107c61170(puVar1);
  puVar1 = &UNK_1103d9ed0;
  func_0x000107c613fc(&UNK_1103d9ed0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  pcStack_70 = FUN_10152a2a8;
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101529788;
  puStack_78 = &UNK_1103d9ee8;
  puStack_68 = puVar1;
  func_0x000107c60bc4(&puStack_90);
  puVar1 = puStack_68;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c4c0cc(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 101529788; end: 1015297c3;  */

void FUN_101529788(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 1015297c4; end: 1015297df; -[_TtC14ValdiCOFStores13ValdiCOFStore getLongAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_1015297c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103da120;
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  func_0x000107c613fc(&UNK_1103da120,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_2);
  FUN_101529658(param_1,param_4,param_3,0x10152a400,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 1015297e0; end: 1015298e3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015297e0(double param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112db0a28);
  func_0x000107c5fadc();
  puVar1 = &UNK_1103d9f20;
  func_0x000107c613fc(&UNK_1103d9f20,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  uStack_60 = 0x10152a2cc;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_1015298e4;
  puStack_68 = &UNK_1103d9f38;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c436e0((float)param_1,uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_2);
  return;
}



/* Entry: 1015298e4; end: 10152991f;  */

void FUN_1015298e4(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  func_0x000107c6157c(uVar2);
  (*pcVar1)(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101529920; end: 10152993b; -[_TtC14ValdiCOFStores13ValdiCOFStore getFloatAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_101529920(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  puVar1 = &UNK_1103da0f8;
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  func_0x000107c613fc(&UNK_1103da0f8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_2);
  FUN_1015297e0(param_1,param_4,param_3,0x10152a3cc,puVar1);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 10152993c; end: 1015299fb;  */

void FUN_10152993c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,code *param_8)

{
  func_0x000107c60bc4();
  func_0x000107c5faec(param_4);
  func_0x000107c613fc(param_6,0x18,7);
  *(undefined8 *)(param_6 + 0x10) = param_5;
  func_0x000107c61174(param_2);
  (*param_8)(param_1,param_4,param_3,param_7,param_6);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(param_6);
  return;
}



/* Entry: 1015299fc; end: 101529afb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1015299fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  undefined *puStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112db0a28);
  func_0x000107c5fadc();
  puVar1 = &UNK_1103d9f70;
  func_0x000107c613fc(&UNK_1103d9f70,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_4;
  *(undefined8 *)(puVar1 + 0x18) = param_5;
  uStack_60 = 0x10152a2f0;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  puStack_70 = &UNK_100288f10;
  puStack_68 = &UNK_1103d9f88;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_5);
  func_0x000107c61574(puVar1);
  func_0x000107c3ebd0(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  return;
}



/* Entry: 101529afc; end: 101529ba7; -[_TtC14ValdiCOFStores13ValdiCOFStore getBoolAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_101529afc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  puVar1 = &UNK_1103da0d0;
  func_0x000107c613fc(&UNK_1103da0d0,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_1015299fc(param_3,param_2,param_4,FUN_10152a3b8,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101529ba8; end: 101529cc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_101529ba8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined **ppuVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar2 = &puStack_80;
  uVar3 = *(undefined8 *)(unaff_x20 + _DAT_112db0a28);
  func_0x000107c5fadc();
  func_0x000107c5fadc(param_3,param_4);
  puVar1 = &UNK_1103d9fc0;
  func_0x000107c613fc(&UNK_1103d9fc0,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  uStack_60 = 0x10152a310;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_100c75f50;
  puStack_68 = &UNK_1103d9fd8;
  puStack_58 = puVar1;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(param_6);
  func_0x000107c61574(puVar1);
  func_0x000107c5c1d8(uVar3);
  func_0x000107c60bd0(ppuVar2);
  func_0x000107c61170(param_1);
  func_0x000107c61170(param_3);
  return;
}



/* Entry: 101529cc4; end: 101529ee7; -[_TtC14ValdiCOFStores13ValdiCOFStore getStringAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_101529cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar2 = param_2;
  func_0x000107c5faec(param_4);
  puVar1 = &UNK_1103da0a8;
  func_0x000107c613fc(&UNK_1103da0a8,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  func_0x000107c61174(param_1);
  FUN_101529ba8(param_3,param_2,param_4,uVar2,0x10152a374,puVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(puVar1);
  return;
}



/* Entry: 101529ee8; end: 101529f57;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_101529ee8(ulong param_1,code *param_2)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  
  pcVar1 = param_2;
  func_0x000107c5dc0c();
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101529f58);
    (*pcVar1)();
  }
  uVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  (*param_2)(uVar2,pcVar1);
  uVar3 = (uint)((ulong)pcVar1 >> 0x3e);
  if (uVar3 == 1) {
    uVar2 = (ulong)pcVar1 & 0x3fffffffffffffff;
  }
  else if (uVar3 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 101529f58; end: 101529fa3;  */

void FUN_101529f58(long param_1,undefined8 param_2)

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



/* Entry: 101529fa4; end: 10152a08b; -[_TtC14ValdiCOFStores13ValdiCOFStore getByteArrayAsyncForWithConfigKey:defaultValue:completion:] */

void FUN_101529fa4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  func_0x000107c60bc4();
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  uVar3 = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar1);
  puVar2 = &UNK_1103da080;
  func_0x000107c613fc(&UNK_1103da080,0x18,7);
  *(undefined8 *)(puVar2 + 0x10) = param_5;
  func_0x000101529d94(param_3,param_2,param_4,uVar3,FUN_10152a368,puVar2);
  func_0x000107c61574(puVar2);
  func_0x00010006c090(param_4,uVar3);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(param_2);
  return;
}



/* Entry: 10152a08c; end: 10152a0eb; -[_TtC14ValdiCOFStores13ValdiCOFStore init] */

void FUN_10152a08c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ValdiCOFStore",0x1c,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152a0b8);
  (*pcVar1)();
}



/* Entry: 10152a0ec; end: 10152a123; -[_TtC14ValdiCOFStores13ValdiCOFStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152a0ec(long param_1)

{
  func_0x000107c615e8(*(undefined8 *)(param_1 + _DAT_112db0a28));
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(*(undefined8 *)(param_1 + _DAT_112db0a30));
  return;
}



/* Entry: 10152a124; end: 10152a267;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152a124(void)

{
  long lVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long extraout_x8;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined8 uStack_58;
  
  func_0x000107c614f0();
  lVar1 = 0;
  func_0x000107c5f804();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_11034bd40)(*(undefined8 *)(lVar4 + 0x40));
  func_0x000100083b20(&uStack_58);
  *(undefined8 *)(unaff_x20 + _DAT_112db0a28) = uStack_58;
  (**(code **)(lVar4 + 0x68))
            (auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
             *(undefined4 *)PTR___s8Dispatch0A3QoSV0B6SClassO7defaultyA2EmFWC_11034f7f0,lVar1);
  puVar2 = PTR_PTR_1126ae790;
  func_0x000107c610f8();
  uVar3 = 0xd000000000000022;
  func_0x000107c5fadc(0xd000000000000022,0x800000010efb0300);
  func_0x000107c5f800();
  func_0x000107c470d0();
  func_0x000107c61170(uVar3);
  (**(code **)(lVar4 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar1);
  *(undefined **)(unaff_x20 + _DAT_112db0a30) = puVar2;
  func_0x000107c61154(&stack0xffffffffffffff98,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10152a268; end: 10152a28b;  */

void FUN_10152a268(int param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))((double)param_1);
  return;
}



/* Entry: 10152a28c; end: 10152a2a7;  */

void FUN_10152a28c(long param_1,long param_2)

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



/* Entry: 10152a2a8; end: 10152a32f;  */

void FUN_10152a2a8(long param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))((double)param_1);
  return;
}



/* Entry: 10152a330; end: 10152a347;  */

/* WARNING: Possible PIC construction at 0x00010006c0b4: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010006c0b8) */

void FUN_10152a330(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  pcVar3 = pcVar1;
  func_0x000107c5dc0c(param_1,pcVar1,*(undefined8 *)(unaff_x20 + 0x18));
  func_0x000107c61180();
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x101529f58);
    (*pcVar1)();
  }
  uVar2 = param_1;
  func_0x000107c5ee30();
  func_0x000107c61170(param_1);
  (*pcVar1)(uVar2,pcVar3);
  uVar4 = (uint)((ulong)pcVar3 >> 0x3e);
  if (uVar4 == 1) {
    uVar2 = (ulong)pcVar3 & 0x3fffffffffffffff;
  }
  else if (uVar4 != 2) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010bdc0418. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_release_11034f4c0)(uVar2);
  return;
}



/* Entry: 10152a348; end: 10152a367;  */

void FUN_10152a348(void)

{
  func_0x000107c61168(&PTR_PTR_1127dfcd8);
  return;
}



/* Entry: 10152a368; end: 10152a37f;  */

void FUN_10152a368(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (*(code *)PTR___s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF_110350a60)();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10152a380; end: 10152a3b7;  */

void FUN_10152a380(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  (*param_3)();
  (**(code **)(lVar1 + 0x10))(lVar1,param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10152a3b8; end: 10152a407;  */

void FUN_10152a3b8(uint param_1)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x00010152a3c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(unaff_x20 + 0x10) + 0x10))(*(long *)(unaff_x20 + 0x10),param_1 & 1);
  return;
}



/* Entry: 10152a408; end: 10152a477;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152a408(long *param_1,long param_2)

{
  long lVar1;
  long *plVar2;
  long lStack_48;
  long lStack_40;
  undefined8 uStack_38;
  
  FUN_10152ab90();
  lVar1 = param_2;
  func_0x000107c610f8();
  func_0x000100083b20(&uStack_38);
  *(undefined8 *)(lVar1 + _DAT_112db0a68) = uStack_38;
  plVar2 = &lStack_48;
  lStack_48 = lVar1;
  lStack_40 = param_2;
  func_0x000107c61154(plVar2,PTR_s_init_1125d9248);
  *param_1 = (long)plVar2;
  return;
}



/* Entry: 10152a478; end: 10152a47f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152a478(long *param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [16];
  undefined8 uStack_38;
  
  FUN_10152ab90();
  func_0x000107c610f8();
  func_0x000100083b20(&uStack_38);
  *(undefined8 *)(unaff_x20 + _DAT_112db0a68) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  *param_1 = (long)puVar1;
  return;
}



/* Entry: 10152a480; end: 10152a5b7;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_10152a480(undefined8 param_1)

{
  undefined1 *puVar1;
  long unaff_x20;
  undefined1 auStack_48 [8];
  undefined8 uStack_38;
  
  func_0x000107c610f8();
  func_0x000100083b20(&uStack_38);
  *(undefined8 *)(unaff_x20 + _DAT_112db0a68) = uStack_38;
  puVar1 = auStack_48;
  func_0x000107c61154(puVar1,PTR_s_init_1125d9248);
  func_0x000107c61574(param_1);
  return puVar1;
}



/* Entry: 10152a5b8; end: 10152a67f; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore getIntWithConfigKey:defaultValue:opts:] */

double FUN_10152a5b8(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_2);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x00010152a4f8(param_4,param_3,param_5);
  if (param_4 == 0) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(param_3);
  }
  else {
    lVar2 = param_4;
    func_0x000107c49804();
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(param_3);
    param_1 = (double)(int)lVar2;
  }
  return param_1;
}



/* Entry: 10152a680; end: 10152a747; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore getLongWithConfigKey:defaultValue:opts:] */

double FUN_10152a680(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_2);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x00010152a4f8(param_4,param_3,param_5);
  if (param_4 == 0) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(param_3);
  }
  else {
    lVar2 = param_4;
    func_0x000107c4c0c8();
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(param_3);
    param_1 = (double)lVar2;
  }
  return param_1;
}



/* Entry: 10152a748; end: 10152a80f; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore getFloatWithConfigKey:defaultValue:opts:] */

double FUN_10152a748(double param_1,undefined8 param_2,undefined8 param_3,long param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  float fVar2;
  double dVar3;
  
  dVar3 = param_1;
  func_0x000107c5faec();
  fVar2 = SUB84(dVar3,0);
  func_0x000107c61174(param_2);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x00010152a4f8(param_4,param_3,param_5);
  if (param_4 == 0) {
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(param_3);
  }
  else {
    func_0x000107c436dc();
    func_0x000107c61170(param_4);
    func_0x000107c61170(uVar1);
    func_0x000107c61170(param_2);
    func_0x000107c6142c(param_3);
    param_1 = (double)fVar2;
  }
  return param_1;
}



/* Entry: 10152a810; end: 10152a8af; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore getBoolWithConfigKey:defaultValue:opts:] */

long FUN_10152a810(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  func_0x000107c5faec();
  func_0x000107c61174(param_1);
  uVar1 = param_5;
  func_0x000107c61174(param_5);
  func_0x00010152a4f8(param_3,param_2,param_5);
  if (param_3 != 0) {
    param_4 = param_3;
    func_0x000107c3ebcc();
    func_0x000107c61170(param_3);
  }
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  return param_4;
}



/* Entry: 10152a8b0; end: 10152a9cb; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore getStringWithConfigKey:defaultValue:opts:] */

void FUN_10152a8b0(undefined8 param_1,undefined8 param_2,long param_3,long param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  func_0x000107c5faec();
  uVar4 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_5;
  func_0x000107c61174(param_5);
  uVar5 = param_2;
  func_0x00010152a4f8(param_3,param_2,param_5);
  if (param_3 == 0) {
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
  }
  else {
    lVar3 = param_3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10152a9cc);
      (*pcVar1)();
    }
    param_4 = lVar3;
    func_0x000107c5faec();
    func_0x000107c61170(param_3);
    func_0x000107c61170(lVar3);
    func_0x000107c6142c(uVar4);
    func_0x000107c61170(uVar2);
    func_0x000107c61170(param_1);
    func_0x000107c6142c(param_2);
    uVar4 = uVar5;
  }
  func_0x000107c5fadc(param_4,uVar4);
  func_0x000107c6142c(uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10152a9cc; end: 10152aa67;  */

void FUN_10152a9cc(long param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  func_0x00010152a4f8();
  if (param_1 != 0) {
    lVar2 = param_1;
    func_0x000107c3dd54();
    func_0x000107c61180();
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10152aa68);
      (*pcVar1)();
    }
    lVar3 = lVar2;
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c61170(lVar2);
    if (lVar3 == 0) {
      func_0x000107c61170(param_1);
    }
    else {
      func_0x000107c5ee30(lVar3);
      func_0x000107c61170(lVar3);
      func_0x000107c61170(param_1);
    }
  }
  return;
}



/* Entry: 10152aa68; end: 10152ab0f; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore getProtoBytesWithConfigKey:opts:] */

void FUN_10152aa68(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  uVar2 = param_2;
  FUN_10152a9cc(param_3,param_2,param_4);
  func_0x000107c61170(uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  uVar1 = param_3;
  func_0x000107c5ee20(param_3,uVar2);
  func_0x00010006c090(param_3,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar1);
  return;
}



/* Entry: 10152ab10; end: 10152ab6f; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore init] */

void FUN_10152ab10(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ValdiCOFSyncStore",0x20,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152ab3c);
  (*pcVar1)();
}



/* Entry: 10152ab70; end: 10152ab7f;  */

undefined1  [16] FUN_10152ab70(void)

{
  return ZEXT816(0x1103da170);
}



/* Entry: 10152ab80; end: 10152ab8f; -[_TtC14ValdiCOFStores17ValdiCOFSyncStore .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ab80(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0a68));
  return;
}



/* Entry: 10152ab90; end: 10152abaf;  */

void FUN_10152ab90(void)

{
  func_0x000107c61168(&PTR_PTR_1127dfda0);
  return;
}



/* Entry: 10152abb0; end: 10152abbf; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureNumberHandler value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10152abb0(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112db0ac0);
}



/* Entry: 10152abc0; end: 10152abcf; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureNumberHandler setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152abc0(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112db0ac0) = param_1;
  return;
}



/* Entry: 10152abd0; end: 10152abe7; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureNumberHandler expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152abd0(long param_1)

{
  if (*(long *)(param_1 + _DAT_112db0ac8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112db0ac8),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 10152abe8; end: 10152ac13; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureNumberHandler init] */

void FUN_10152abe8(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ManualExposureNumberHandler",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152ac14);
  (*pcVar1)();
}



/* Entry: 10152ac14; end: 10152ac23; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureNumberHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ac14(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0ac8));
  return;
}



/* Entry: 10152ac24; end: 10152ac33; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureLongHandler value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ac24(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdbf410. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_retainAutoreleaseReturnValue_11034d2e8)
            (*(undefined8 *)(param_1 + _DAT_112db0af8));
  return;
}



/* Entry: 10152ac34; end: 10152ac67; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureLongHandler setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ac34(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112db0af8);
  *(undefined8 *)(param_1 + _DAT_112db0af8) = param_3;
  func_0x000107c61174(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10152ac68; end: 10152ac7f; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureLongHandler expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ac68(long param_1)

{
  if (*(long *)(param_1 + _DAT_112db0b00) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112db0b00),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 10152ac80; end: 10152acab; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureLongHandler init] */

void FUN_10152ac80(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ManualExposureLongHandler",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152acac);
  (*pcVar1)();
}



/* Entry: 10152acac; end: 10152ace3; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureLongHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152acac(long param_1)

{
  func_0x000107c61170(*(undefined8 *)(param_1 + _DAT_112db0af8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0b00));
  return;
}



/* Entry: 10152ace4; end: 10152acf3; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF26ManualExposureFloatHandler value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_10152ace4(long param_1)

{
  return *(undefined8 *)(param_1 + _DAT_112db0b30);
}



/* Entry: 10152acf4; end: 10152ad03; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF26ManualExposureFloatHandler setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152acf4(undefined8 param_1,long param_2)

{
  *(undefined8 *)(param_2 + _DAT_112db0b30) = param_1;
  return;
}



/* Entry: 10152ad04; end: 10152ad1b; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF26ManualExposureFloatHandler expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ad04(long param_1)

{
  if (*(long *)(param_1 + _DAT_112db0b38) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112db0b38),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 10152ad1c; end: 10152ad47; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF26ManualExposureFloatHandler init] */

void FUN_10152ad1c(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ManualExposureFloatHandler",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152ad48);
  (*pcVar1)();
}



/* Entry: 10152ad48; end: 10152ad57; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF26ManualExposureFloatHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ad48(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0b38));
  return;
}



/* Entry: 10152ad58; end: 10152ad67; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureBoolHandler value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_10152ad58(long param_1)

{
  return *(undefined1 *)(param_1 + _DAT_112db0ab0);
}



/* Entry: 10152ad68; end: 10152ad77; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureBoolHandler setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ad68(long param_1,undefined8 param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + _DAT_112db0ab0) = param_3;
  return;
}



/* Entry: 10152ad78; end: 10152ad8f; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureBoolHandler expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ad78(long param_1)

{
  if (*(long *)(param_1 + _DAT_112db0ab8) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112db0ab8),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 10152ad90; end: 10152adbb; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureBoolHandler init] */

void FUN_10152ad90(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ManualExposureBoolHandler",0x28,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152adbc);
  (*pcVar1)();
}



/* Entry: 10152adbc; end: 10152adcb; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF25ManualExposureBoolHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152adbc(long param_1)

{
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0ab8));
  return;
}



/* Entry: 10152adcc; end: 10152ae17; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureStringHandler value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152adcc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_1 + _DAT_112db0b90);
  uVar1 = ((undefined8 *)(param_1 + _DAT_112db0b90))[1];
  func_0x000107c61434(uVar1);
  func_0x000107c5fadc(uVar2,uVar1);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar2);
  return;
}



/* Entry: 10152ae18; end: 10152ae53; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureStringHandler setValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ae18(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec();
  puVar1 = (undefined8 *)(param_1 + _DAT_112db0b90);
  uVar2 = puVar1[1];
  *puVar1 = param_3;
  puVar1[1] = param_2;
                    /* WARNING: Could not recover jumptable at 0x00010bdc001c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_bridgeObjectRelease_11034f258)(uVar2);
  return;
}



/* Entry: 10152ae54; end: 10152af3b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ae54(long param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long unaff_x20;
  
  lVar5 = param_2;
  func_0x000107c614f0();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c615f0();
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c5c1d4();
    func_0x000107c61180();
    func_0x000107c61170(lVar3);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10152af3c);
      (*pcVar2)();
    }
    param_2 = lVar4;
    func_0x000107c5faec();
    func_0x000107c6142c(param_3);
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar4);
    param_3 = lVar5;
  }
  plVar1 = (long *)(unaff_x20 + _DAT_112db0b90);
  *plVar1 = param_2;
  plVar1[1] = param_3;
  *(long *)(unaff_x20 + _DAT_112db0b98) = param_1;
  func_0x000107c61154(&stack0xffffffffffffffa0,PTR_s_init_1125d9248);
  return;
}



/* Entry: 10152af3c; end: 10152af53; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureStringHandler expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152af3c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112db0b98) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112db0b98),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 10152af54; end: 10152af7f; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureStringHandler init] */

void FUN_10152af54(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ManualExposureStringHandler",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152af80);
  (*pcVar1)();
}



/* Entry: 10152af80; end: 10152afbb; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF27ManualExposureStringHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152af80(long param_1)

{
  func_0x000107c6142c(*(undefined8 *)(param_1 + _DAT_112db0b90 + 8));
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0b98));
  return;
}



/* Entry: 10152afbc; end: 10152b017; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF31ManualExposureProtoBytesHandler value] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152afbc(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_1 + _DAT_112db0bc8);
  uVar2 = ((undefined8 *)(param_1 + _DAT_112db0bc8))[1];
  func_0x00010006c00c(uVar1,uVar2);
  uVar3 = uVar1;
  func_0x000107c5ee20(uVar1,uVar2);
  func_0x00010006c090(uVar1,uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(uVar3);
  return;
}



/* Entry: 10152b018; end: 10152b08b; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF31ManualExposureProtoBytesHandler setValue:] */

/* WARNING: Possible PIC construction at 0x00010152b05c: Changing call to branch */
/* WARNING: Removing unreachable block (ram,0x00010152b060) */

void FUN_10152b018(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = param_3;
  func_0x000107c61174(param_3);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10152b08c; end: 10152b0a3; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF31ManualExposureProtoBytesHandler expose] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152b08c(long param_1)

{
  if (*(long *)(param_1 + _DAT_112db0bd0) != 0) {
                    /* WARNING: Could not recover jumptable at 0x00010bf9d490. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)PTR__objc_msgSend_11034d288)
              (*(long *)(param_1 + _DAT_112db0bd0),PTR_s_expose_1125c4ec8);
    return;
  }
  return;
}



/* Entry: 10152b0a4; end: 10152b0cf; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF31ManualExposureProtoBytesHandler init] */

void FUN_10152b0a4(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ManualExposureProtoBytesHandler",0x2e,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152b0d0);
  (*pcVar1)();
}



/* Entry: 10152b0d0; end: 10152b10b; -[_TtC14ValdiCOFStoresP33_D559BCCBC9A23E64951181FC1B964BDF31ManualExposureProtoBytesHandler .cxx_destruct] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152b0d0(long param_1)

{
  func_0x00010006c090(*(undefined8 *)(param_1 + _DAT_112db0bc8),
                      ((undefined8 *)(param_1 + _DAT_112db0bc8))[1]);
                    /* WARNING: Could not recover jumptable at 0x00010bdc0580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_unknownObjectRelease_11034f530)(*(undefined8 *)(param_1 + _DAT_112db0bd0));
  return;
}



/* Entry: 10152b10c; end: 10152b15b;  */

void FUN_10152b10c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_10152c474();
  func_0x000107c610f8();
  uVar1 = param_2;
  func_0x000107c6157c();
  func_0x00010152c200();
  func_0x000107c61574(param_2);
  *param_1 = uVar1;
  return;
}



/* Entry: 10152b15c; end: 10152b163;  */

void FUN_10152b15c(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  FUN_10152c474();
  func_0x000107c610f8();
  func_0x000107c6157c();
  func_0x00010152c200();
  func_0x000107c61574();
  *param_1 = unaff_x20;
  return;
}



/* Entry: 10152b164; end: 10152b1a3;  */

undefined8 FUN_10152b164(undefined8 param_1)

{
  undefined8 uVar1;
  
  func_0x000107c610f8();
  uVar1 = param_1;
  func_0x00010152c200(param_1);
  func_0x000107c61574(param_1);
  return uVar1;
}



/* Entry: 10152b1a4; end: 10152b26f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152b1a4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_60;
  long lStack_58;
  
  plVar5 = &lStack_60;
  lVar1 = 0;
  FUN_10152c3c4();
  lVar2 = lVar1;
  func_0x000107c610f8();
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c615f0();
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c49804();
    func_0x000107c61170(lVar3);
    param_1 = (double)(int)lVar4;
  }
  *(double *)(lVar2 + _DAT_112db0ac0) = param_1;
  *(long *)(lVar2 + _DAT_112db0ac8) = param_2;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c43b74(param_3);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 10152b270; end: 10152b28b; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getIntegerManualExposureValueHandlerAsyncWithKey:defaultValue:] */

void FUN_10152b270(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10152b56c(param_1,param_4,param_3,&UNK_1103da190,FUN_10152c344,&UNK_1103da1a8);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10152b28c; end: 10152b4eb;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10152b28c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_1103da1e0;
  func_0x000107c613fc(&UNK_1103da1e0,0x20,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db0aa0);
  func_0x000107c61174(puVar2);
  func_0x000107c61174(param_3);
  func_0x000107c5fadc(param_1,param_2);
  uStack_60 = 0x10152c36c;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101528388;
  puStack_68 = &UNK_1103da1f8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152b4ec; end: 10152b56b; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getLongManualExposureValueHandlerAsyncWithKey:defaultValue:] */

void FUN_10152b4ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  FUN_10152b28c(param_3,param_2,param_4);
  func_0x000107c61170(param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10152b56c; end: 10152b6a3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10152b56c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined *puStack_90;
  undefined8 uStack_88;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  
  ppuVar3 = &puStack_90;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  func_0x000107c613fc(param_4,0x20,7);
  *(undefined **)(param_4 + 0x10) = puVar2;
  *(undefined8 *)(param_4 + 0x18) = param_1;
  uVar4 = *(undefined8 *)(unaff_x20 + _DAT_112db0aa0);
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(param_2,param_3);
  puStack_90 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_88 = 0x42000000;
  pcStack_80 = FUN_101528388;
  uStack_78 = param_6;
  uStack_70 = param_5;
  lStack_68 = param_4;
  func_0x000107c60bc4(&puStack_90);
  lVar1 = lStack_68;
  func_0x000107c6157c(param_4);
  func_0x000107c61574(lVar1);
  func_0x000107c4c26c(uVar4);
  func_0x000107c60bd0(ppuVar3);
  func_0x000107c61574(param_4);
  func_0x000107c61170(param_2);
  return puVar2;
}



/* Entry: 10152b6a4; end: 10152b76f;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152b6a4(double param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  float fVar5;
  double dVar6;
  long lStack_60;
  long lStack_58;
  
  plVar4 = &lStack_60;
  lVar1 = 0;
  dVar6 = param_1;
  func_0x00010152c404();
  fVar5 = SUB84(dVar6,0);
  lVar2 = lVar1;
  func_0x000107c610f8();
  if (param_2 != 0) {
    lVar3 = param_2;
    func_0x000107c615f0(param_2);
    func_0x000107c5dc0c();
    func_0x000107c61180();
    func_0x000107c436dc();
    func_0x000107c61170(lVar3);
    param_1 = (double)fVar5;
  }
  *(double *)(lVar2 + _DAT_112db0b30) = param_1;
  *(long *)(lVar2 + _DAT_112db0b38) = param_2;
  lStack_60 = lVar2;
  lStack_58 = lVar1;
  func_0x000107c61154(&lStack_60,PTR_s_init_1125d9248);
  func_0x000107c43b74(param_3);
  func_0x000107c61170(plVar4);
  return;
}



/* Entry: 10152b770; end: 10152b78b; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getFloatManualExposureValueHandlerAsyncWithKey:defaultValue:] */

void FUN_10152b770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10152b56c(param_1,param_4,param_3,&UNK_1103da230,0x10152c374,&UNK_1103da248);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10152b78c; end: 10152b81f;  */

void FUN_10152b78c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_2);
  FUN_10152b56c(param_1,param_4,param_3,param_5,param_6,param_7);
  func_0x000107c61170(param_2);
  func_0x000107c6142c(param_3);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_4);
  return;
}



/* Entry: 10152b820; end: 10152b957;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_10152b820(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_1103da280;
  func_0x000107c613fc(&UNK_1103da280,0x19,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  puVar3[0x18] = param_3;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db0aa0);
  func_0x000107c61174(puVar2);
  func_0x000107c5fadc(param_1,param_2);
  uStack_60 = 0x10152c380;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101528388;
  puStack_68 = &UNK_1103da298;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152b958; end: 10152ba27;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152b958(long param_1,undefined8 param_2,byte param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar1 = 0;
  FUN_10152c38c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  if (param_1 != 0) {
    lVar3 = param_1;
    func_0x000107c615f4(param_1,2);
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3ebcc();
    param_3 = (byte)lVar4;
    func_0x000107c615e8(param_1);
    func_0x000107c61170(lVar3);
  }
  *(byte *)(lVar2 + _DAT_112db0ab0) = param_3 & 1;
  *(long *)(lVar2 + _DAT_112db0ab8) = param_1;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c43b74(param_2);
  func_0x000107c61170(plVar5);
  return;
}



/* Entry: 10152ba28; end: 10152ba93; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getBoolManualExposureValueHandlerAsyncWithKey:defaultValue:] */

void FUN_10152ba28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x000107c5faec(param_3);
  func_0x000107c61174(param_1);
  FUN_10152b820(param_3,param_2,param_4);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10152ba94; end: 10152bb7f; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getBoolManualExposureValueHandlerSyncWithKey:defaultValue:] */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_10152ba94(long param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lStack_50;
  long lStack_48;
  
  plVar5 = &lStack_50;
  lVar6 = *(long *)(param_1 + _DAT_112db0aa0);
  func_0x000107c61174();
  func_0x000107c4c270();
  func_0x000107c61180();
  lVar1 = 0;
  FUN_10152c38c();
  lVar2 = lVar1;
  func_0x000107c610f8();
  if (lVar6 != 0) {
    lVar3 = lVar6;
    func_0x000107c615f0();
    func_0x000107c5dc0c();
    func_0x000107c61180();
    lVar4 = lVar3;
    func_0x000107c3ebcc();
    param_4 = (undefined1)lVar4;
    func_0x000107c615e8(lVar6);
    func_0x000107c61170(lVar3);
  }
  *(undefined1 *)(lVar2 + _DAT_112db0ab0) = param_4;
  *(long *)(lVar2 + _DAT_112db0ab8) = lVar6;
  lStack_50 = lVar2;
  lStack_48 = lVar1;
  func_0x000107c61154(&lStack_50,PTR_s_init_1125d9248);
  func_0x000107c61170(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(plVar5);
  return;
}



/* Entry: 10152bb80; end: 10152bcc3;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10152bb80(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  code *pcStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_1103da2d0;
  func_0x000107c613fc(&UNK_1103da2d0,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db0aa0);
  func_0x000107c61174(puVar2);
  func_0x000107c61434(param_4);
  func_0x000107c5fadc(param_1,param_2);
  pcStack_60 = FUN_10152c3ac;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101528388;
  puStack_68 = &UNK_1103da2e8;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152bcc4; end: 10152bd43;  */

void FUN_10152bcc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  func_0x00010152c424(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x000107c61434(param_4);
  FUN_10152ae54(param_1,param_3,param_4);
  func_0x000107c43b74(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(param_1);
  return;
}



/* Entry: 10152bd44; end: 10152bdd3; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getStringManualExposureValueHandlerAsyncWithKey:defaultValue:] */

void FUN_10152bd44(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_2;
  func_0x000107c5faec(param_4);
  func_0x000107c61174(param_1);
  FUN_10152bb80(param_3,param_2,param_4,uVar1);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
  func_0x000107c6142c(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10152bdd4; end: 10152bf1b;  */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined *
FUN_10152bdd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined *puStack_80;
  undefined8 uStack_78;
  code *pcStack_70;
  undefined *puStack_68;
  undefined8 uStack_60;
  undefined *puStack_58;
  
  ppuVar4 = &puStack_80;
  puVar2 = PTR_PTR_1126b1588;
  func_0x000107c610f8();
  func_0x000107c453e4();
  puVar3 = &UNK_1103da320;
  func_0x000107c613fc(&UNK_1103da320,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(undefined8 *)(puVar3 + 0x18) = param_3;
  *(undefined8 *)(puVar3 + 0x20) = param_4;
  uVar5 = *(undefined8 *)(unaff_x20 + _DAT_112db0aa0);
  func_0x000107c61174(puVar2);
  func_0x00010006c00c(param_3,param_4);
  func_0x000107c5fadc(param_1,param_2);
  uStack_60 = 0x10152c3b8;
  puStack_80 = PTR___NSConcreteStackBlock_11034bd00;
  uStack_78 = 0x42000000;
  pcStack_70 = FUN_101528388;
  puStack_68 = &UNK_1103da338;
  puStack_58 = puVar3;
  func_0x000107c60bc4(&puStack_80);
  puVar1 = puStack_58;
  func_0x000107c6157c(puVar3);
  func_0x000107c61574(puVar1);
  func_0x000107c4c26c(uVar5);
  func_0x000107c60bd0(ppuVar4);
  func_0x000107c61574(puVar3);
  func_0x000107c61170(param_1);
  return puVar2;
}



/* Entry: 10152bf1c; end: 10152bfaf;  */

void FUN_10152bf1c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  func_0x00010152c444(0);
  func_0x000107c610f8();
  func_0x000107c615f0(param_1);
  func_0x00010006c00c(param_3,param_4);
  uVar1 = param_1;
  FUN_10152c0f4(param_1,param_3,param_4);
  func_0x00010006c090(param_3,param_4);
  func_0x000107c615e8(param_1);
  func_0x000107c43b74(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf3ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_release_11034d2d0)(uVar1);
  return;
}



/* Entry: 10152bfb0; end: 10152c057; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore getProtoBinaryManualExposureValueHandlerAsyncWithKey:defaultValue:] */

void FUN_10152bfb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  func_0x000107c5faec(param_3);
  uVar1 = param_4;
  uVar2 = param_2;
  func_0x000107c61174(param_4);
  func_0x000107c61174(param_1);
  func_0x000107c5ee30(param_4);
  func_0x000107c61170(uVar1);
  FUN_10152bdd4(param_3,param_2,param_4,uVar2);
  func_0x00010006c090(param_4,uVar2);
  func_0x000107c61170(param_1);
  func_0x000107c6142c(param_2);
                    /* WARNING: Could not recover jumptable at 0x00010bdbf290. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__objc_autoreleaseReturnValue_11034d1e0)(param_3);
  return;
}



/* Entry: 10152c058; end: 10152c083; -[_TtC14ValdiCOFStores27ValdiManualExposureCOFStore init] */

void FUN_10152c058(void)

{
  code *pcVar1;
  
  func_0x000107c60eb0("ValdiCOFStores.ValdiManualExposureCOFStore",0x2a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10152c084);
  (*pcVar1)();
}



/* Entry: 10152c084; end: 10152c087;  */

void FUN_10152c084(void)

{
  func_0x000107c614f0();
  func_0x000107c61154(&stack0xffffffffffffffe0,PTR_s_dealloc_112525b20);
  return;
}


